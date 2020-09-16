#include "stm32f767xx_spi.h"

// Initialization
void SPI_Init(SPI_Handle_t* pin_handler){
    uint32_t tmp_reg1 = 0;
    uint32_t tmp_reg2 = 0;
    // enable SPI
    tmp_reg1 |= (1<< 6);
    // configure the mode
    tmp_reg1 |= (pin_handler->config.device_mode << 2);                                      // set bit MSTR master selection
    // bus mode (bidi)
    if (pin_handler->config.bus_config == SPI_Bus_Half_duplex ){
        tmp_reg1 |= (1<<15);
    } else if (pin_handler->config.bus_config == SPI_Bus_Simplex){
        tmp_reg1 |= (1<<10);                                     // configure only for receive only mode.
    }
    // data size set
    tmp_reg2 |= ((pin_handler->config.ds | 0xf) << 8);          // limit ds to only 16 bit
    // clock phase
    tmp_reg1 |= pin_handler->config.cpha;
    // Clock polarity
    tmp_reg1 |= (pin_handler->config.cpol <<1 );
    // slave select by software or hw
    tmp_reg1 |= (pin_handler->config.ssm << 9);
    // set baud rate
    tmp_reg1 |= (pin_handler->config.speed << 3);
    pin_handler->handle->CR1 = tmp_reg1;
    pin_handler->handle->CR2 = tmp_reg2;
}

void SPI_DeInit(SPI_Interfaces interface){
    switch(interface){
        case RCC_SPI1:
            RCC->APB2RSTR |= (1<<12);
            RCC->APB2RSTR &= ~(1<<12);
            break;
        case RCC_SPI2:
            RCC->APB1RSTR |= (1<<14);
            RCC->APB1RSTR &= ~(1<<14);
            break;
        case RCC_SPI3:
            RCC->APB1RSTR |= (1<<15);
            RCC->APB1RSTR &= ~(1<<15);
            break;
        case RCC_SPI4:
            RCC->APB2RSTR |= (1<<14);
            RCC->APB2RSTR &= ~(1<<14);
            break;
        case RCC_SPI5:
            RCC->APB2RSTR |= (1<<20);
            RCC->APB2RSTR &= ~(1<<20);
            break;
        case RCC_SPI6:
            RCC->APB2RSTR |= (1<<21);
            RCC->APB2RSTR &= ~(1<<21);
            break;
    }
}

// clock control
void RCC_SPI_ClkCtrl(SPI_Interfaces interface, uint8_t state){
    if (state){
        switch(interface){
            case RCC_SPI1:
                RCC->APB2ENR |= (1<<12);
                break;
            case RCC_SPI2:
                RCC->APB1ENR |= (1<<14);
                break;
            case RCC_SPI3:
                RCC->APB1ENR |= (1<<15);
                break;
            case RCC_SPI4:
                RCC->APB2ENR |= (1<<14);
                break;
            case RCC_SPI5:
                RCC->APB2ENR |= (1<<20);
                break;
            case RCC_SPI6:
                RCC->APB2ENR |= (1<<21);
                break;
        }
    } else{
        switch(interface){
            case RCC_SPI1:
                RCC->APB2ENR &= ~(1<<12);
                break;
            case RCC_SPI2:
                RCC->APB1ENR &= ~(1<<14);
                break;
            case RCC_SPI3:
                RCC->APB1ENR &= ~(1<<15);
                break;
            case RCC_SPI4:
                RCC->APB2ENR &= ~(1<<14);
                break;
            case RCC_SPI5:
                RCC->APB2ENR &= ~(1<<20);
                break;
            case RCC_SPI6:
                RCC->APB2ENR &= ~(1<<21);
                break;
        }
    }
}

// Data send and recieve
void SPI_SendData(SPI_I2S_RegDef_t* reg, uint8_t* tx_buf, uint32_t size){
    // chek the buf if empty exit
    uint8_t ds = (reg->CR2>>8) & 0xf;                       // get ds value
    while(size){
        // wait till txe is set
        while(!(reg->SR & (1<<1)));
        // depending on ds flag send data send data
        // TODO : implement incase of odd number of bits
        if (ds == 8){
            reg->DR = *tx_buf;
        } else if (ds == 16){
            reg->DR = *(uint16_t *)tx_buf;
            tx_buf++;
            size--;
        }
        tx_buf++;
        size--;

    }
}
void SPI_ReceiveData(SPI_I2S_RegDef_t reg, uint8_t* rx_buf, uint32_t size);

// Interupt handling
void SPI_irq_config(uint8_t irq_num, uint8_t state);            // SET or RESET state
void SPI_IRQ_set_priority(uint8_t irq_num, uint32_t priority);
void SPI_IRQ_Handling(SPI_Handle_t* handle);

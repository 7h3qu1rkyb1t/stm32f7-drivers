#include "stm32f767xx_SPI.h"

// Initialization
void SPI_Init(SPI_Handle_t* pin_handler){
    uint32_t tmp_reg1 = 0;
    uint32_t tmp_reg2 = 0;
    // configure the mode
    if (pin_handler->config.device_mode ){
        tmp_reg1 |= _SPI_CR1_MSTR;
        tmp_reg2 |= _SPI_CR2_SSOE;
    }
    if (pin_handler->config.ssm){
        tmp_reg1 |= _SPI_CR1_SSM;                                       // software slave management bit set
    }
    // bus mode (bidi)
    if (pin_handler->config.bus_config == SPI_Bus_Half_duplex ){
        tmp_reg1 |= _SPI_CR1_BIDIMODE;
    } else if (pin_handler->config.bus_config == SPI_Bus_Simplex){
        tmp_reg1 |= _SPI_CR1_RXONLY;                                     // configure only for receive only mode.
    }
    // data size set
    tmp_reg2 |= (((pin_handler->config.ds-1) & 0xf) << 8);          // limit ds to only 16 bit
    // frxth level set
    if (pin_handler->config.ds <=8 ){
        tmp_reg2 |= (1<<12);
    }
    // clock phase
    tmp_reg1 |= pin_handler->config.cpha;
    // Clock polarity
    tmp_reg1 |= (pin_handler->config.cpol <<1 );
    // slave select by software or hw
    tmp_reg1 |= (pin_handler->config.ssm << 9);
    // set baud rate
    tmp_reg1 |= (pin_handler->config.speed << 3);
    // enable NSSP 
    tmp_reg2 |= (1<<3);

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

void SPI_Config(SPI_Handle_t handler, uint32_t flags){
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
                RCC->APB2ENR |= (1<<13);
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
                RCC->APB2ENR &= ~(1<<13);
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
void SPI_SendData(SPI_RegDef_t* reg, uint8_t* tx_buf, uint32_t size){
    // chek the buf if empty exit
    SPI_Control(SPI4, SET);
    while(size>1){
        // wait till txe is set
        while(!(reg->SR & _SPI_SR_TXE));
        reg->DR = *(uint16_t *)tx_buf;
        tx_buf+=2;
        size-=2;
    }
    // if there is still last byte to send
    if (size){
        while(!(reg->SR & (1<<1)));
        *(uint8_t *)&reg->DR = *(uint8_t *)tx_buf;
    }

    while( SPI_Status(SPI4, SPI_Status_BSY) );
    SPI_Control(SPI4, RESET);
}
void SPI_ReceiveData(SPI_RegDef_t* reg, uint8_t* rx_buf, uint32_t size){
    // chek the buf if empty exit
    SPI_Control(SPI4, SET);
    while(size>0){
        // wait till txe is set
        if (reg->CR1 & _SPI_CR1_MSTR){
            while(!(reg->SR & _SPI_SR_TXE));
            reg->DR = 0xf0f0;
        }
        while(!(reg->SR & _SPI_SR_RXNE));
        *(uint16_t *)rx_buf = reg->DR;
        rx_buf+=2;
        size-=2;
    }
    while( SPI_Status(SPI4, SPI_Status_BSY) );
    SPI_Control(SPI4, RESET);
}


// Interupt handling
void SPI_irq_config(uint8_t irq_num, uint8_t state);            // SET or RESET state
void SPI_IRQ_set_priority(uint8_t irq_num, uint32_t priority);
void SPI_IRQ_Handling(SPI_Handle_t* handle);

// Enable or Disable S
void SPI_Control(SPI_RegDef_t* reg_handle, uint8_t state){
    if (state){
        reg_handle->CR1 |= (1<<6);
    } else{
        reg_handle->CR1 &= ~(1<<6);
    }
}

uint32_t SPI_Status(SPI_RegDef_t* reg_handle, SPI_Status_Flags item){
    if (item < SPI_Status_FRLVL){
        return (reg_handle->SR & (1 << item)) >> item;
    }else{
        if (item == SPI_Status_FRLVL){
            return (reg_handle->SR & (0b11 << 9)) >> 9;
        } else if (item == SPI_Status_FTLVL){
            return (reg_handle->SR & (0b11 << 11)) >> 11;
        }
    }
    return 0;
}

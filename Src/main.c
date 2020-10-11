#include "stm32f767xx.h" 
#include "lib.h"
#include "string.h" 
#include "stm32f767xx_GPIO.h"
#include "stm32f767xx_SPI.h"
#include "stm32f767xx_EXTI.h"

void delay(){
	for(int i = 0; i<300000; i++){
		__asm__("nop");
	}
}

uint8_t buffer[256];
CBuff spi_recieve_buf = { buffer, 0,0, 256 };
/* 
 * PB4 MISO AF6
 * PB5 MOSI AF6
 * PB3 SCK AF6
 * PA4 NSS  AF6
 */

void gpio_init(){
    GPIO_Handle_t spi_sck, spi_mosi, spi_miso, spi_nss, led;
    led.PinConfig.GPIO_PinMode = GPIO_OUTPUT;
    led.PinConfig.GPIO_PinNumber = 7;
    led.PinConfig.GPIO_OPType = GPIO_PUSHPULL;
    led.GPIOx = GPIOB;
    spi_sck.GPIOx   = GPIOE;
    spi_miso.GPIOx  = GPIOE;
    spi_mosi.GPIOx  = GPIOE;
    spi_nss.GPIOx   = GPIOE;
    spi_sck.PinConfig.GPIO_PinMode = GPIO_ALTERNATE_FUNCTION;
    spi_miso.PinConfig.GPIO_PinMode = GPIO_ALTERNATE_FUNCTION;
    spi_mosi.PinConfig.GPIO_PinMode = GPIO_ALTERNATE_FUNCTION;
    spi_nss.PinConfig.GPIO_PinMode = GPIO_ALTERNATE_FUNCTION;

    spi_sck.PinConfig.GPIO_PinAltMode   = AF5;
    spi_miso.PinConfig.GPIO_PinAltMode  = AF5;
    spi_mosi.PinConfig.GPIO_PinAltMode  = AF5;
    spi_nss.PinConfig.GPIO_PinAltMode   = AF5;

    spi_sck.PinConfig.GPIO_PinNumber    = 2;
    spi_miso.PinConfig.GPIO_PinNumber   = 5;
    spi_mosi.PinConfig.GPIO_PinNumber   = 6;
    spi_nss.PinConfig.GPIO_PinNumber    = 4;

    spi_sck.PinConfig.GPIO_OPType = GPIO_PUSHPULL;
    spi_miso.PinConfig.GPIO_OPType = GPIO_PUSHPULL;
    spi_mosi.PinConfig.GPIO_OPType = GPIO_PUSHPULL;
    spi_nss.PinConfig.GPIO_OPType = GPIO_PUSHPULL;

    RCC_GPIO_ClkCtrl(RCC_GPIOE, SET);
    RCC_GPIO_ClkCtrl(RCC_GPIOB, SET);
    GPIO_Init(&led);
    GPIO_Init(&spi_sck);
    GPIO_Init(&spi_mosi);
    GPIO_Init(&spi_miso);
    GPIO_Init(&spi_nss);

}

void spi_init(){
    RCC_SPI_ClkCtrl(RCC_SPI4, SET);
    SPI_Handle_t handler;
    handler.handle = SPI4;
    handler.config.bus_config = SPI_Bus_Full_duplex;
    handler.config.device_mode = SPI_Mode_Slave;
    // use fpclk/16 for better experience
    handler.config.speed = SPI_pclk_div_by_4;
    handler.config.cpha = SPI_CPHA_First;
    handler.config.cpol = SPI_CPOL_LOW;
    handler.config.ds = 8;
    handler.config.ssm = SPI_SSM_RESET;
    SPI_Init(&handler);
    Set_SPI4_CR2(_SPI_CR2_RXNEIE);
    IRQ_Configure(84, SET, 0);
}

int main(void)
{
    gpio_init();

    spi_init();
    Set_SPI4_CR1(_SPI_CR1_SPE);
    char send_buffer[30] = "master is always master"  ;
    uint32_t size = strlen(send_buffer);

	while(1){
        /* SPI_SendData(SPI4, (uint8_t *)send_buffer, size); */
        /* delay(); */
        __asm__("nop");
	}
}

void SPI4_IRQHandler(void){
    Set_GPIOB_ODR(_GPIOB_ODR_ODR7);
    while (Get_SPI4_SR(_SPI_SR_FRLVL))
        buf_write_unit(&spi_recieve_buf, (uint8_t)SPI4->DR);
    Clr_GPIOB_ODR(_GPIOB_ODR_ODR7);
}

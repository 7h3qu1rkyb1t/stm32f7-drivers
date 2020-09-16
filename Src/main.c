#include "stm32f767xx.h"
#include "stm32f767xx_gpio.h"
void delay(){
	for(int i = 0; i<300000; i++){
		__asm__("nop");
	}
}
int main(void)
{
	GPIO_Handle_t led;
	led.GPIOx = GPIOB;
	led.PinConfig.GPIO_PinNumber = 7;
	led.PinConfig.GPIO_PinMode = GPIO_OUTPUT;
	led.PinConfig.GPIO_PinSpeed = GPIO_LOW_SPEED;
	led.PinConfig.GPIO_PUPDControl = GPIO_NO_PUPD;
	led.PinConfig.GPIO_OPType = GPIO_PUSHPULL ;
	RCC_GPIO_ClkCtrl(RCC_GPIOB,SET);
	GPIO_Init(&led);

    GPIO_Handle_t btn_in;
    btn_in.GPIOx = GPIOC;
    btn_in.PinConfig.GPIO_PinNumber = 13;
    btn_in.PinConfig.GPIO_PinMode = GPIO_INPUT;
    btn_in.PinConfig.GPIO_PinSpeed = GPIO_LOW_SPEED;
    btn_in.PinConfig.GPIO_PUPDControl = GPIO_NO_PUPD;
    btn_in.PinConfig.GPIO_OPType = GPIO_PUSHPULL;
    RCC_GPIO_ClkCtrl(RCC_GPIOC, SET);
    GPIO_Init(&btn_in);

    Exti_Config_R btn ; 
    btn.exti_num = 13;
    btn.mode = EXTI_MODE_RISING;
    btn.port = PORT_C;
    exti_init(&btn);
    IRQ_Configure(40, SET, 0);

	while(1){
        __asm__("nop");
	}
}

void EXTI15_10_IRQHandler(void){
    GPIO_TogglePin(GPIOB, 7);
    delay();
    GPIO_IRQ_Handler(13);
}

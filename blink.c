#include "stm32f767xx.h"
#include "stm32f767xx_gpio.h"
void delay(){
	for(int i = 0; i<1000000; i++){
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
	led.PinConfig.GPIO_OPType = GPIO_OPENDRAIN ;
	RCC_GPIO_ClkCtrl(RCC_GPIOB,SET);
	GPIO_Init(&led);

	while(1){
		GPIO_TogglePin(led.GPIOx, led.PinConfig.GPIO_PinNumber);
		delay();
	}
}

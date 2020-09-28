#include "stm32f767xx_gpio.h"


/*****************************************************************************
 * @fn          - GPIO initializer
 *
 * @brief       - initializes GPIO based on configuration struct
 *
 * @param[0]    - GPIO_Handle_t struct of respective port
 *
 * @return      - none
 *
 * @note        - none 
 *
 */
void GPIO_Init(GPIO_Handle_t* PinHandler){
    /* configure mode */
    PinHandler->GPIOx->MODER |= PinHandler->PinConfig.GPIO_PinMode << (2* PinHandler->PinConfig.GPIO_PinNumber);

    /* configure speed */
    PinHandler->GPIOx->OSPEEDR |= PinHandler->PinConfig.GPIO_PinSpeed <<(2* PinHandler->PinConfig.GPIO_PinNumber);

    /* configure pupd settings */
    PinHandler->GPIOx->PUPDR = PinHandler->PinConfig.GPIO_PUPDControl <<(2*PinHandler->PinConfig.GPIO_PinNumber);

    /* configure output type */
    PinHandler->GPIOx->OTYPER |= PinHandler->PinConfig.GPIO_OPType <<( PinHandler->PinConfig.GPIO_PinNumber);

    /* alternate function config */
    if(PinHandler->PinConfig.GPIO_PinMode == GPIO_ALTERNATE_FUNCTION){
        uint8_t AF_reg, pin_reg;
        AF_reg = PinHandler->PinConfig.GPIO_PinNumber / 8;
        pin_reg = PinHandler->PinConfig.GPIO_PinNumber %8;
        PinHandler->GPIOx->AFRH[AF_reg] |= PinHandler->PinConfig.GPIO_PinAltMode << ( pin_reg * 4 );
    }
}

/*****************************************************************************
 * @fn          - GPIO Deinitializer
 *
 * @brief       - deinitializes GPIO Port
 *
 * @param[0]    - GPIO_RegDef_t pointer to this struct 
 *
 * @return      - none 
 *
 * @note        - none 
 *
 */
void RCC_GPIO_DeInit(GPIO_PORTS PORT){
        switch (PORT){
        case RCC_GPIOA :
            RCC->AHB1RSTR |= (1 << 0);
			RCC->AHB1RSTR &= ~(1 << 0);
            break;
        case RCC_GPIOB :
            RCC->AHB1RSTR |= (1 << 1);
			RCC->AHB1RSTR &= ~(1 << 1);
            break;
        case RCC_GPIOC :
            RCC->AHB1RSTR |= (1 << 2);
			RCC->AHB1RSTR &= ~(1 << 2);
            break;
        case RCC_GPIOD :
            RCC->AHB1RSTR |= (1 << 3);
			RCC->AHB1RSTR &= ~(1 << 3);
            break;
        case RCC_GPIOE :
            RCC->AHB1RSTR |= (1 << 4);
			RCC->AHB1RSTR &= ~(1 << 4);
            break;
        case RCC_GPIOF :
            RCC->AHB1RSTR |= (1 << 5);
			RCC->AHB1RSTR &= ~(1 << 5);
            break;
        case RCC_GPIOG :
            RCC->AHB1RSTR |= (1 << 6);
			RCC->AHB1RSTR &= ~(1 << 6);
            break;
        case RCC_GPIOH :
            RCC->AHB1RSTR |= (1 << 7);
			RCC->AHB1RSTR &= ~(1 << 7);
            break;
        case RCC_GPIOI :
            RCC->AHB1RSTR |= (1 << 8);
			RCC->AHB1RSTR &= ~(1 << 8);
            break;
        case RCC_GPIOJ :
            RCC->AHB1RSTR |= (1 << 9);
			RCC->AHB1RSTR &= ~(1 << 9);
            break;
        case RCC_GPIOK :
            RCC->AHB1RSTR |= (1 << 10);
			RCC->AHB1RSTR &= ~(1 << 10);
            break;
}
}

/*****************************************************************************
 * @fn          - RCC_GPIO Clock controller
 *
 * @brief       - sets or resets RCC_GPIO port clock
 *
 * @param[0]    - RCC_GPIO Port base addr 
 *
 * @param[1]    - state ( SET | RESET )
 *
 * @return      -
 *
 * @note        -
 *
 */
void RCC_GPIO_ClkCtrl(GPIO_PORTS PORT, uint8_t state){
    if (state){
        switch (PORT){
        case RCC_GPIOA :
            RCC->AHB1ENR |= (1 << 0);
            break;
        case RCC_GPIOB :
            RCC->AHB1ENR |= (1 << 1);
            break;
        case RCC_GPIOC :
            RCC->AHB1ENR |= (1 << 2);
            break;
        case RCC_GPIOD :
            RCC->AHB1ENR |= (1 << 3);
            break;
        case RCC_GPIOE :
            RCC->AHB1ENR |= (1 << 4);
            break;
        case RCC_GPIOF :
            RCC->AHB1ENR |= (1 << 5);
            break;
        case RCC_GPIOG :
            RCC->AHB1ENR |= (1 << 6);
            break;
        case RCC_GPIOH :
            RCC->AHB1ENR |= (1 << 7);
            break;
        case RCC_GPIOI :
            RCC->AHB1ENR |= (1 << 8);
            break;
        case RCC_GPIOJ :
            RCC->AHB1ENR |= (1 << 9);
            break;
        case RCC_GPIOK :
            RCC->AHB1ENR |= (1 << 10);
            break;
        }
    }else{
        switch(PORT){
        case RCC_GPIOA :
            RCC->AHB1ENR &= ~(1 << 0);
            break;
        case RCC_GPIOB:
            RCC->AHB1ENR &= ~(1 << 1);
            break;
        case RCC_GPIOC :
            RCC->AHB1ENR &= ~(1 << 2);
            break;
        case RCC_GPIOD :
            RCC->AHB1ENR &= ~(1 << 3);
            break;
        case RCC_GPIOE :
            RCC->AHB1ENR &= ~(1 << 4);
            break;
        case RCC_GPIOF :
            RCC->AHB1ENR &= ~(1 << 5);
            break;
        case RCC_GPIOG :
            RCC->AHB1ENR &= ~(1 << 6);
            break;
        case RCC_GPIOH :
            RCC->AHB1ENR &= ~(1 << 7);
            break;
        case RCC_GPIOI :
            RCC->AHB1ENR &= ~(1 << 8);
            break;
        case RCC_GPIOJ :
            RCC->AHB1ENR &= ~(1 << 9);
            break;
        case RCC_GPIOK :
            RCC->AHB1ENR &= ~(1 << 10);
            break;
        }
    }   
}

/*****************************************************************************
 * @fn          - GPIO Port read
 *
 * @brief       - Reads from a specific port 
 *
 * @param[0]    - GPIO register base addr
 *
 * @return      - 16bit integer value
 *
 * @note        -
 *
 */
uint16_t GPIO_ReadFromPort(GPIO_RegDef_t* GPIOx){
    return (uint16_t)GPIOx->IDR;
}

/*****************************************************************************
 * @fn          -  Read from pin
 *
 * @brief       - Reads a specific pin of perticular por
 *
 * @param[0]    - GPIO port register base addr
 *
 * @param[1]    - pin number
 *
 * @return      - bool value 1 on set, 0 on reset
 *
 * @note        -
 *
 */
uint8_t GPIO_ReadFromPin(GPIO_RegDef_t* GPIOx, uint8_t pin){
    return (uint8_t)(GPIOx->IDR >> pin ) & 0x1;
}


/*****************************************************************************
 * @fn          - Write to port
 *
 * @brief       - writes word to the port 
 *
 * @param[0]    - GPIO port base addr
 *
 * @param[1]    - 16 bit value j
 *
 * @return      -
 *
 * @note        -
 *
 */
void GPIO_WriteToPort(GPIO_RegDef_t* GPIOx, uint16_t val){
    GPIOx->ODR = val;
}

/*****************************************************************************
 * @fn          - write to pin
 *
 * @brief       - Sets or Resets a  GPIO pin
 *
 * @param[0]    - GPIO Port Base addr
 *
 * @param[1]    - GPIO pin number
 *
 * @param[2]    - state (SET | RESET )
 *
 * @return      -
 *
 * @note        -
 *
 */
void GPIO_WriteToPin(GPIO_RegDef_t* GPIOx, uint8_t pin, uint8_t state){
    if (state){
        GPIOx->ODR |= 0x1 << pin;
    } else {
        GPIOx->ODR &= ~(1<<pin);
    }
}

/*****************************************************************************
 * @fn          - Toggle Pin
 *
 * @brief       - Toggles Pin State
 *
 * @param[0]    - GPIO Port Base addr
 *
 * @param[1]    -  pin number
 *
 * @return      -
 *
 * @note        -
 *
 */
void GPIO_TogglePin(GPIO_RegDef_t* GPIOx, uint8_t pin){
    GPIOx->ODR ^= (1<<pin);
}


/*****************************************************************************
 * @fn          - GPIO Interrupt config
 *
 * @brief       - sets up exti interrupts
 *
 * @param[0]    - Interrupt number based on datasheet
 *
 * @param[1]    - priority 
 *
 * @param[2]    - state (SET | RESET )
 *
 * @return      -
 *
 * @note        -
 *
 */
void GPIO_IRQ_Handler(uint8_t PinNum){
    EXTI->EXTI_PR |= (1<<PinNum);
}


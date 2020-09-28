#pragma once
#include "stm32f767xx.h"

typedef enum {
	GPIO_INPUT,
	GPIO_OUTPUT,
	GPIO_ALTERNATE_FUNCTION,
	GPIO_ANALOG
} GPIO_PORT_MODES;

typedef enum {
	GPIO_PUSHPULL,
	GPIO_OPENDRAIN
} GPIO_OUTPUT_TYPE;

typedef enum {
	GPIO_LOW_SPEED,
	GPIO_MEDIUM_SPEED,
	GPIO_HIGH_SPEED,
	GPIO_VERY_HIGH_SPEED
} GPIO_OP_SPEED;

typedef enum {
	GPIO_NO_PUPD,
	GPIO_PULL_UP,
	GPIO_PULL_DOWN
} GPIO_PUPDR;

typedef enum {
    RCC_GPIOA,
    RCC_GPIOB,
    RCC_GPIOC,
    RCC_GPIOD,
    RCC_GPIOE,
    RCC_GPIOF,
    RCC_GPIOG,
    RCC_GPIOH,
    RCC_GPIOI,
    RCC_GPIOJ,
    RCC_GPIOK
} GPIO_PORTS;

typedef enum {
    AF0,
    AF1,
    AF2,
    AF3,
    AF4,
    AF5,
    AF6,
    AF7,
    AF8,
    AF9,
    AF10,
    AF11,
    AF12,
    AF13,
    AF14,
    AF15
} GPIO_Alt_mode;


typedef struct {
    uint8_t GPIO_PinNumber;
    GPIO_PORT_MODES GPIO_PinMode;
    GPIO_OUTPUT_TYPE GPIO_OPType;
    GPIO_OP_SPEED GPIO_PinSpeed;
    GPIO_PUPDR GPIO_PUPDControl;
    GPIO_Alt_mode GPIO_PinAltMode;
} GPIO_PinConfig_t;

typedef struct {
    GPIO_RegDef_t* GPIOx;
    GPIO_PinConfig_t PinConfig;
} GPIO_Handle_t;


// GPIO API's

// Initialization
void GPIO_Init(GPIO_Handle_t* PinHandler);
void GPIO_DeInit(GPIO_PORTS);

// clock control

void RCC_GPIO_ClkCtrl(GPIO_PORTS, uint8_t State);

// Reading and writing

uint16_t GPIO_ReadFromPort(GPIO_RegDef_t* GPIOx);
uint8_t GPIO_ReadFromPin(GPIO_RegDef_t* GPIOx, uint8_t pin);

void GPIO_WriteToPort(GPIO_RegDef_t* GPIOx, uint16_t val);
void GPIO_WriteToPin(GPIO_RegDef_t* GPIOx, uint8_t pin, uint8_t state);

void GPIO_TogglePin(GPIO_RegDef_t* GPIOx, uint8_t pin);

// Interrupt handling

void GPIO_IRQ_Config(uint8_t IRQ_num, uint8_t priority, uint8_t state );
void GPIO_IRQ_Handler(uint8_t PinNum);

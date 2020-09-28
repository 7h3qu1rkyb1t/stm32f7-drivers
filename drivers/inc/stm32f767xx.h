#pragma once
#include<stdint.h>

typedef enum {
    false,
    true
} bool;

typedef enum {
    EXTI_MODE_RISING,
    EXTI_MODE_FALLING,
    EXTI_MODE_BOTH
}Exti_Trigger_Modes;

typedef enum {
    EXTI_PORT_A,
    EXTI_PORT_B,
    EXTI_PORT_C,
    EXTI_PORT_D,
    EXTI_PORT_E,
    EXTI_PORT_F,
    EXTI_PORT_G,
    EXTI_PORT_H,
    EXTI_PORT_I,
    EXTI_PORT_J,
    EXTI_PORT_K,
    EXTI_NO_PORT                        // incase of using it for interrupts otherthan GPIOs
} Exti_ports;

#define SET                     1
#define RESET                   0

// Base address

#define FLASH_BASEADDR          0x08000000U
#define RAM_BASEADDR            0x20000000U
#define SRAM1_OFFSET            0x00020000U
#define SRAM2_OFFSET            0x0007C000U
#define SRAM                    (RAM_BASEADDR + SRAM1_OFFSET)

// BUS interface base addresses

#define AHB1_BASEADDR           0x40020000U
#define AHB2_BASEADDR           0x50000000U
#define AHB3_BASEADDR           0xA0000000U
#define APB2_BASEADDR           0x40010000U
#define APB1_BASEADDR           0x40000000U
#define CORTEX_M_PERIPH_BASEADDR            0xE000E100U

// AHB1 peripherals

#define GPIOA_BASEADDR          (AHB1_BASEADDR + 0x0000)                // General purpose registers
#define GPIOB_BASEADDR          (AHB1_BASEADDR + 0x0400)
#define GPIOC_BASEADDR          (AHB1_BASEADDR + 0x0800)
#define GPIOD_BASEADDR          (AHB1_BASEADDR + 0x0C00)
#define GPIOE_BASEADDR          (AHB1_BASEADDR + 0x1000)
#define GPIOF_BASEADDR          (AHB1_BASEADDR + 0x1400)
#define GPIOG_BASEADDR          (AHB1_BASEADDR + 0x1800)
#define GPIOH_BASEADDR          (AHB1_BASEADDR + 0x1C00)
#define GPIOI_BASEADDR          (AHB1_BASEADDR + 0x2000)
#define GPIOJ_BASEADDR          (AHB1_BASEADDR + 0x2400)
#define GPIOK_BASEADDR          (AHB1_BASEADDR + 0x2800)
#define CRC_BASEADDR            (AHB1_BASEADDR + 0x3000)                // cyclic redundancy check registers
#define RCC_BASEADDR            (AHB1_BASEADDR + 0x3800)                // Reset and clock control registers
#define FLASH_ITFC_BASEADDR     (AHB1_BASEADDR + 0x3C00)                // flash interface register
#define BKPSRAM_BASEADDR        (AHB1_BASEADDR + 0x4000)                // TODO: get the meaning of BKPSRAM
#define DMA1_BASEADDR           (AHB1_BASEADDR + 0x6000)                // direct memory access controller register
#define DMA2_BASEADDR           (AHB1_BASEADDR + 0x6400)
#define ETH_MAC_BASEADDR        (AHB1_BASEADDR + 0x8000)                // ethernet mac address configuration register
#define DMA2D_BASEADDR          (AHB1_BASEADDR + 0xB000)                // chrom-ART Accelerator controller register
#define OTG_HS_BASEADDR         (AHB1_BASEADDR + 0x40000)               // USB on-the-go high-speed(HS) registers

// AHB2 peripherals
#define OTG_FS_BASEADDR         (AHB2_BASEADDR + 0x0000)                // USB on-the-go full-speed registers
#define DCMI_BASEADDR           (AHB2_BASEADDR + 0x50000)               // Digital camera interface
#define JPEG_BASEADDR           (AHB2_BASEADDR + 0x51000)               // jpeg codec registers
#define CPYP_BASEADDR           (AHB2_BASEADDR + 0x60000)               // Cryptographic processor
#define HASH_BASEADDR           (AHB2_BASEADDR + 0x60400)               // Hash processor
#define RNG_BASEADDR            (AHB2_BASEADDR + 0x60800)               //  True random number generator

// APB1 peripherals

#define TIM2_BASEADDR           (APB1_BASEADDR + 0x0000)                // timers
#define TIM3_BASEADDR           (APB1_BASEADDR + 0x0400)
#define TIM4_BASEADDR           (APB1_BASEADDR + 0x0800)
#define TIM5_BASEADDR           (APB1_BASEADDR + 0x0C00)
#define TIM6_BASEADDR           (APB1_BASEADDR + 0x1000)
#define TIM7_BASEADDR           (APB1_BASEADDR + 0x1400)
#define TIM12_BASEADDR          (APB1_BASEADDR + 0x1800)
#define TIM13_BASEADDR          (APB1_BASEADDR + 0x1C00)
#define TIM14_BASEADDR          (APB1_BASEADDR + 0x2000)
#define LPTIM1_BASEADDR         (APB1_BASEADDR + 0x2400)

#define RTC_BASEADDR            (APB1_BASEADDR + 0x2800)            // real time clock registers
#define WWDG_BASEADDR           (APB1_BASEADDR + 0x2C00)            // system window watchdog timers
#define IWDG_BASEADDR           (APB1_BASEADDR + 0x3000)            // independent watchdog timer
#define CAN3_BASEADDR           (APB1_BASEADDR + 0x3400)            // control area network register
#define SPI2_BASEADDR           (APB1_BASEADDR + 0x3800)            // serial pheriperal interface, It also includes I2S inter ic sound registers
#define SPI3_BASEADDR           (APB1_BASEADDR + 0x3C00)
#define SPDIFRX_BASEADDR        (APB1_BASEADDR + 0x4000)            // SPDIF reciever interface
#define USART2_BASEADDR         (APB1_BASEADDR + 0x4400)            // universal synchronous asynchronous reciever transmitter registers
#define USART3_BASEADDR         (APB1_BASEADDR + 0x4800)
#define UART4_BASEADDR          (APB1_BASEADDR + 0x4C00)
#define UART5_BASEADDR          (APB1_BASEADDR + 0x5000)
#define I2C1_BASEADDR           (APB1_BASEADDR + 0x5400)            // inter integrated-circuit registers
#define I2C2_BASEADDR           (APB1_BASEADDR + 0x5800)
#define I2C3_BASEADDR           (APB1_BASEADDR + 0x5C00)
#define I2C4_BASEADDR           (APB1_BASEADDR + 0x6000)
#define CAN1_BASEADDR           (APB1_BASEADDR + 0x6400)
#define CAN2_BASEADDR           (APB1_BASEADDR + 0x6800)
#define HDMI_CEC_BASEADDR       (APB1_BASEADDR + 0x6C00)            // HDMI-CEC controller registers
#define PWR_BASEADDR            (APB1_BASEADDR + 0x7000)            // power controller register
#define DAC_BASEADDR            (APB1_BASEADDR + 0x7400)            // digital to analog converter register
#define UART7_BASEADDR          (APB1_BASEADDR + 0x7800)
#define UART8_BASEADDR          (APB1_BASEADDR + 0x7C00)


// APB2 peripherals

#define TIM1_BASEADDR           (APB2_BASEADDR + 0x0000)
#define TIM8_BASEADDR           (APB2_BASEADDR + 0x0400)
#define USART1_BASEADDR         (APB2_BASEADDR + 0x1000)
#define USART6_BASEADDR         (APB2_BASEADDR + 0x1400)
#define SDMMC2_BASEADDR         (APB2_BASEADDR + 0x1C00)            // SD/SDIO/MMC card host interface registers
#define ADC_BASEADDR            (APB2_BASEADDR + 0x2000)            // Analog to digital converter registers, contains for all 3 ADC
#define SDMMC1_BASEADDR         (APB2_BASEADDR + 0x2C00)            // SD/SDIO/MMC card host interface registers
#define SPI1_BASEADDR           (APB2_BASEADDR + 0x3000)
#define SPI4_BASEADDR           (APB2_BASEADDR + 0x3400)
#define SYSCFG_BASEADDR         (APB2_BASEADDR + 0x3800)            // system configuration registers
#define EXTI_BASEADDR           (APB2_BASEADDR + 0x3C00)            // externel interrupt configuration registers
#define TIM9_BASEADDR           (APB2_BASEADDR + 0x4000)
#define TIM10_BASEADDR          (APB2_BASEADDR + 0x4400)
#define TIM11_BASEADDR          (APB2_BASEADDR + 0x4800)
#define SPI5_BASEADDR           (APB2_BASEADDR + 0x5000)
#define SPI6_BASEADDR           (APB2_BASEADDR + 0x5400)
#define SAI1_BASEADDR           (APB2_BASEADDR + 0x5800)            // serial audio interface registers
#define SAI2_BASEADDR           (APB2_BASEADDR + 0x5C00)
#define LTDC_BASEADDR           (APB2_BASEADDR + 0x6800)            // LCD-TFT display control register
#define DSI_HOST_BASEADDR       (APB2_BASEADDR + 0x6C00)            // display serial interface host register
#define DFSDM1_BASEADDR         (APB2_BASEADDR + 0x7400)            // digital filter for sigma delta modulator registers
#define MDIOS_BASEADDR          (APB2_BASEADDR + 0x7800)            // management data input/output registers


/******************************** structures **********************************/

// GPIO register structure
typedef struct {
    volatile uint32_t MODER;                                        // gpio port mode register
    volatile uint32_t OTYPER;                                       // gpio output type register
    volatile uint32_t OSPEEDR;                                      // gpio output speed register
    volatile uint32_t PUPDR;                                        // gpio port pull-up/pull-down register
    volatile uint32_t IDR;                                          // gpio input data register
    volatile uint32_t ODR;                                          // gpio output data register
    volatile uint32_t BSRR;                                         // gpio port bit set/reset register
    volatile uint32_t LCKR;                                         // gpio port configuration lock register
    volatile uint32_t AFRH[2];                                      // alternate function register array; contain GPIO_AFRL (low) and GPIO_AFRH (high)
} GPIO_RegDef_t;

// RCC register structure
typedef struct {
    volatile uint32_t CR;                   // RCC clock control register               offset: 0x00
    volatile uint32_t PLLCFGR;              // RCC PLL configuration register           offset: 0x04
    volatile uint32_t CFGR;                 // RCC clock configuration register         offset: 0x08
    volatile uint32_t CIR;                  // RCC clock interrupt register             offset: 0x0c
    volatile uint32_t AHB1RSTR;             // RCC AHB1 pheriperal reset register       offset: 0x10
    volatile uint32_t AHB2RSTR;
    volatile uint32_t AHB3RSTR;
    volatile uint32_t RES1;                 // reserved
    volatile uint32_t APB1RSTR;             // RCC APB1 pheriperal reset register       offset: 0x20
    volatile uint32_t APB2RSTR;
    volatile uint32_t RES2;
    volatile uint32_t RES3;
    volatile uint32_t AHB1ENR;              // AHB pheriperal clock enable register     offset: 0x30
    volatile uint32_t AHB2ENR;
    volatile uint32_t AHB3ENR;
    volatile uint32_t RES4;
    volatile uint32_t APB1ENR;              // APB pheriperal clock enable register     offset: 0x40
    volatile uint32_t APB2ENR;
    volatile uint32_t RES5;
    volatile uint32_t RES6;
    volatile uint32_t AHB1LPENR;            // AHB1 clock enable in low power register  offset: 0x50
    volatile uint32_t AHB2LPENR;
    volatile uint32_t AHB3LPENR;
    volatile uint32_t RES7;
    volatile uint32_t APB1LPENR;            // APB1 clock enable in low power register  offset: 0x60
    volatile uint32_t APB2LPENR;
    volatile uint32_t RES8;
    volatile uint32_t RES9;
    volatile uint32_t BDCR;                 // backup domain control register           offset: 0x70
    volatile uint32_t CSR;                  // clock control and status register        offset: 0x74
    volatile uint32_t RES10;
    volatile uint32_t RES11;
    volatile uint32_t SSCGR;                // RCC spread spectrum clock generation reg offset: 0x80
    volatile uint32_t PLLI2SCFGR;           // pll I2S configuration register           offset: 0x84
    volatile uint32_t PLLSAICFGR;           // PLL SAI configuration register           offset: 0x88
    volatile uint32_t DCKCFGR1;             // dedicated clock configuration register   offset: 0x8C
    volatile uint32_t DCKCFGR2;
} RCC_RegDef_t;


typedef struct {
    volatile uint32_t EXTI_IMR;             // Interrupt Mask register
    volatile uint32_t EXTI_EMR;             // Event Mask register
    volatile uint32_t EXTI_RTSR;            // Rising trigger selection register
    volatile uint32_t EXTI_FTSR;            // falling trigger selection register
    volatile uint32_t EXTI_SWIER;           // Software interrupt event register
    volatile uint32_t EXTI_PR;              // interrupt pending register
} EXTI_RegDef_t;

typedef struct {
    volatile uint32_t SYSCFG_MEMRMP;        // Memory remap register
    volatile uint32_t SYSCFG_PMC;           // Perpheral Mode configuration register
    volatile uint32_t SYSCFG_EXTICR[4];     // array of external interrupt configuration register. for each intr 4 pins and each reg contains 4 intr
    volatile uint32_t reserved;
    volatile uint32_t SYSCFG_CBR;           // Class B register
    volatile uint32_t SYSCFG_CMPCR;         // Compensation cell control register
} SYSCFG_RegDef_t;

typedef struct {
    volatile uint32_t NVIC_ISER[8];         // Interrupt Set enable
    uint8_t res1[0x60];
    volatile uint32_t NVIC_ICER[8];         // Interrupt Clear enable
    uint8_t res2[0x60];
    volatile uint32_t NVIC_ISPR[8];         // Interrupt set pending register
    uint8_t res3[0x60];
    volatile uint32_t NVIC_ICPR[8];         // Interrupt clear pending register
    uint8_t res4[0x60];
    volatile uint32_t NVIC_IABR[8];         // Interrupt active bit register
    uint8_t res5[0xE0];
    volatile uint32_t NVIC_IPR[64];         // Interrput priority register. Note: here last 4 registers are not used
    volatile uint32_t STIR;                 // Software trigger Interrput register
} NVIC_RegDef_t;

typedef struct {
    uint8_t exti_num;                       // EXTI num 0-24
    Exti_Trigger_Modes mode;
    Exti_ports port;
} Exti_Config_R;

typedef struct {
    volatile uint32_t CR1;             // SPI control register
    volatile uint32_t CR2;             // SPI control register 2
    volatile uint32_t SR;              // SPI status register
    volatile uint32_t DR;              // SPI data register
    volatile uint32_t CRCPR;           // SPI CRC polynomial register
    volatile uint32_t RXCRCR;          // SPI Rx CRC register
    volatile uint32_t TXCRCR;          // SPI Tx CRC register
    volatile uint32_t I2SCFGR;         // SPI I2S configuration register
    volatile uint32_t I2SPR;           // SPI I2S prescalar register
}SPI_I2S_RegDef_t;


/******************************* pheriperal definition **********************/
#define GPIOA                   ((GPIO_RegDef_t *)	GPIOA_BASEADDR)
#define GPIOB                   ((GPIO_RegDef_t *)	GPIOB_BASEADDR)
#define GPIOC                   ((GPIO_RegDef_t *)	GPIOC_BASEADDR)
#define GPIOD                   ((GPIO_RegDef_t *)	GPIOD_BASEADDR)
#define GPIOE                   ((GPIO_RegDef_t *)	GPIOE_BASEADDR)
#define GPIOF                   ((GPIO_RegDef_t *)	GPIOF_BASEADDR)
#define GPIOG                   ((GPIO_RegDef_t *)	GPIOG_BASEADDR)
#define GPIOH                   ((GPIO_RegDef_t *)	GPIOH_BASEADDR)
#define GPIOI                   ((GPIO_RegDef_t *)	GPIOI_BASEADDR)
#define GPIOJ                   ((GPIO_RegDef_t *)	GPIOJ_BASEADDR)
#define GPIOK                   ((GPIO_RegDef_t *)	GPIOK_BASEADDR)
#define RCC                     ((RCC_RegDef_t *)   RCC_BASEADDR)
#define EXTI                    ((EXTI_RegDef_t *) EXTI_BASEADDR)
#define SYSCFG                  ((SYSCFG_RegDef_t *) SYSCFG_BASEADDR)
#define NVIC                    ((NVIC_RegDef_t *) CORTEX_M_PERIPH_BASEADDR)
#define SPI1                    ((SPI_I2S_RegDef_t *) SPI1_BASEADDR)
#define SPI2                    ((SPI_I2S_RegDef_t *) SPI2_BASEADDR)
#define SPI3                    ((SPI_I2S_RegDef_t *) SPI3_BASEADDR)
#define SPI4                    ((SPI_I2S_RegDef_t *) SPI4_BASEADDR)
#define SPI5                    ((SPI_I2S_RegDef_t *) SPI5_BASEADDR)
#define SPI6                    ((SPI_I2S_RegDef_t *) SPI6_BASEADDR)

/**************************** clock control **********************************/
#define RCC_SYSCFG_Clk_en()     (RCC->APB2ENR |= 1<<14)
#define RCC_SPI_Clk_en(SPI_1)        (RCC->APB2ENR |= 1<< 12)

/**************************** Functions *************************************/
// initiailizes interrupt based on config struct
void exti_init(Exti_Config_R * config);

// state SET or RESET. priority 4 bits value. lower the num higher priority
void IRQ_Configure(uint8_t intr, uint8_t state, uint8_t priority);

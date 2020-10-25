#pragma once
#define Get_RCC_CR(FLAG)                     (*(uint32_t*)0x40023800 & FLAG)
#define Get_RCC_PLLCFGR(FLAG)                (*(uint32_t*)0x40023804 & FLAG)
#define Get_RCC_CFGR(FLAG)                   (*(uint32_t*)0x40023808 & FLAG)
#define Get_RCC_CIR(FLAG)                    (*(uint32_t*)0x4002380c & FLAG)
#define Get_RCC_AHB1RSTR(FLAG)               (*(uint32_t*)0x40023810 & FLAG)
#define Get_RCC_AHB2RSTR(FLAG)               (*(uint32_t*)0x40023814 & FLAG)
#define Get_RCC_AHB3RSTR(FLAG)               (*(uint32_t*)0x40023818 & FLAG)
#define Get_RCC_APB1RSTR(FLAG)               (*(uint32_t*)0x40023820 & FLAG)
#define Get_RCC_APB2RSTR(FLAG)               (*(uint32_t*)0x40023824 & FLAG)
#define Get_RCC_AHB1ENR(FLAG)                (*(uint32_t*)0x40023830 & FLAG)
#define Get_RCC_AHB2ENR(FLAG)                (*(uint32_t*)0x40023834 & FLAG)
#define Get_RCC_AHB3ENR(FLAG)                (*(uint32_t*)0x40023838 & FLAG)
#define Get_RCC_APB1ENR(FLAG)                (*(uint32_t*)0x40023840 & FLAG)
#define Get_RCC_APB2ENR(FLAG)                (*(uint32_t*)0x40023844 & FLAG)
#define Get_RCC_AHB1LPENR(FLAG)              (*(uint32_t*)0x40023850 & FLAG)
#define Get_RCC_AHB2LPENR(FLAG)              (*(uint32_t*)0x40023854 & FLAG)
#define Get_RCC_AHB3LPENR(FLAG)              (*(uint32_t*)0x40023858 & FLAG)
#define Get_RCC_APB1LPENR(FLAG)              (*(uint32_t*)0x40023860 & FLAG)
#define Get_RCC_APB2LPENR(FLAG)              (*(uint32_t*)0x40023864 & FLAG)
#define Get_RCC_BDCR(FLAG)                   (*(uint32_t*)0x40023870 & FLAG)
#define Get_RCC_CSR(FLAG)                    (*(uint32_t*)0x40023874 & FLAG)
#define Get_RCC_SSCGR(FLAG)                  (*(uint32_t*)0x40023880 & FLAG)
#define Get_RCC_PLLI2SCFGR(FLAG)             (*(uint32_t*)0x40023884 & FLAG)
#define Get_RCC_PLLSAICFGR(FLAG)             (*(uint32_t*)0x40023888 & FLAG)
#define Get_RCC_DKCFGR1(FLAG)                (*(uint32_t*)0x4002388c & FLAG)
#define Get_RCC_DKCFGR2(FLAG)                (*(uint32_t*)0x40023890 & FLAG)
#define Set_RCC_CR(FLAG)                     (*(uint32_t*)0x40023800 |= FLAG)
#define Clr_RCC_CR(FLAG)                     (*(uint32_t*)0x40023800 &= ~FLAG)
#define Set_RCC_PLLCFGR(FLAG)                (*(uint32_t*)0x40023804 |= FLAG)
#define Clr_RCC_PLLCFGR(FLAG)                (*(uint32_t*)0x40023804 &= ~FLAG)
#define Set_RCC_CFGR(FLAG)                   (*(uint32_t*)0x40023808 |= FLAG)
#define Clr_RCC_CFGR(FLAG)                   (*(uint32_t*)0x40023808 &= ~FLAG)
#define Set_RCC_CIR(FLAG)                    (*(uint32_t*)0x4002380c |= FLAG)
#define Clr_RCC_CIR(FLAG)                    (*(uint32_t*)0x4002380c &= ~FLAG)
#define Set_RCC_AHB1RSTR(FLAG)               (*(uint32_t*)0x40023810 |= FLAG)
#define Clr_RCC_AHB1RSTR(FLAG)               (*(uint32_t*)0x40023810 &= ~FLAG)
#define Set_RCC_AHB2RSTR(FLAG)               (*(uint32_t*)0x40023814 |= FLAG)
#define Clr_RCC_AHB2RSTR(FLAG)               (*(uint32_t*)0x40023814 &= ~FLAG)
#define Set_RCC_AHB3RSTR(FLAG)               (*(uint32_t*)0x40023818 |= FLAG)
#define Clr_RCC_AHB3RSTR(FLAG)               (*(uint32_t*)0x40023818 &= ~FLAG)
#define Set_RCC_APB1RSTR(FLAG)               (*(uint32_t*)0x40023820 |= FLAG)
#define Clr_RCC_APB1RSTR(FLAG)               (*(uint32_t*)0x40023820 &= ~FLAG)
#define Set_RCC_APB2RSTR(FLAG)               (*(uint32_t*)0x40023824 |= FLAG)
#define Clr_RCC_APB2RSTR(FLAG)               (*(uint32_t*)0x40023824 &= ~FLAG)
#define Set_RCC_AHB1ENR(FLAG)                (*(uint32_t*)0x40023830 |= FLAG)
#define Clr_RCC_AHB1ENR(FLAG)                (*(uint32_t*)0x40023830 &= ~FLAG)
#define Set_RCC_AHB2ENR(FLAG)                (*(uint32_t*)0x40023834 |= FLAG)
#define Clr_RCC_AHB2ENR(FLAG)                (*(uint32_t*)0x40023834 &= ~FLAG)
#define Set_RCC_AHB3ENR(FLAG)                (*(uint32_t*)0x40023838 |= FLAG)
#define Clr_RCC_AHB3ENR(FLAG)                (*(uint32_t*)0x40023838 &= ~FLAG)
#define Set_RCC_APB1ENR(FLAG)                (*(uint32_t*)0x40023840 |= FLAG)
#define Clr_RCC_APB1ENR(FLAG)                (*(uint32_t*)0x40023840 &= ~FLAG)
#define Set_RCC_APB2ENR(FLAG)                (*(uint32_t*)0x40023844 |= FLAG)
#define Clr_RCC_APB2ENR(FLAG)                (*(uint32_t*)0x40023844 &= ~FLAG)
#define Set_RCC_AHB1LPENR(FLAG)              (*(uint32_t*)0x40023850 |= FLAG)
#define Clr_RCC_AHB1LPENR(FLAG)              (*(uint32_t*)0x40023850 &= ~FLAG)
#define Set_RCC_AHB2LPENR(FLAG)              (*(uint32_t*)0x40023854 |= FLAG)
#define Clr_RCC_AHB2LPENR(FLAG)              (*(uint32_t*)0x40023854 &= ~FLAG)
#define Set_RCC_AHB3LPENR(FLAG)              (*(uint32_t*)0x40023858 |= FLAG)
#define Clr_RCC_AHB3LPENR(FLAG)              (*(uint32_t*)0x40023858 &= ~FLAG)
#define Set_RCC_APB1LPENR(FLAG)              (*(uint32_t*)0x40023860 |= FLAG)
#define Clr_RCC_APB1LPENR(FLAG)              (*(uint32_t*)0x40023860 &= ~FLAG)
#define Set_RCC_APB2LPENR(FLAG)              (*(uint32_t*)0x40023864 |= FLAG)
#define Clr_RCC_APB2LPENR(FLAG)              (*(uint32_t*)0x40023864 &= ~FLAG)
#define Set_RCC_BDCR(FLAG)                   (*(uint32_t*)0x40023870 |= FLAG)
#define Clr_RCC_BDCR(FLAG)                   (*(uint32_t*)0x40023870 &= ~FLAG)
#define Set_RCC_CSR(FLAG)                    (*(uint32_t*)0x40023874 |= FLAG)
#define Clr_RCC_CSR(FLAG)                    (*(uint32_t*)0x40023874 &= ~FLAG)
#define Set_RCC_SSCGR(FLAG)                  (*(uint32_t*)0x40023880 |= FLAG)
#define Clr_RCC_SSCGR(FLAG)                  (*(uint32_t*)0x40023880 &= ~FLAG)
#define Set_RCC_PLLI2SCFGR(FLAG)             (*(uint32_t*)0x40023884 |= FLAG)
#define Clr_RCC_PLLI2SCFGR(FLAG)             (*(uint32_t*)0x40023884 &= ~FLAG)
#define Set_RCC_PLLSAICFGR(FLAG)             (*(uint32_t*)0x40023888 |= FLAG)
#define Clr_RCC_PLLSAICFGR(FLAG)             (*(uint32_t*)0x40023888 &= ~FLAG)
#define Set_RCC_DKCFGR1(FLAG)                (*(uint32_t*)0x4002388c |= FLAG)
#define Clr_RCC_DKCFGR1(FLAG)                (*(uint32_t*)0x4002388c &= ~FLAG)
#define Set_RCC_DKCFGR2(FLAG)                (*(uint32_t*)0x40023890 |= FLAG)
#define Clr_RCC_DKCFGR2(FLAG)                (*(uint32_t*)0x40023890 &= ~FLAG)
#define  _RCC_CR_PLLI2SRDY                                   (0x1 << 27)    // PLLI2S clock ready flag
#define  _RCC_CR_PLLI2SON                                    (0x1 << 26)    // PLLI2S enable
#define  _RCC_CR_PLLRDY                                      (0x1 << 25)    // Main PLL (PLL) clock ready flag
#define  _RCC_CR_PLLON                                       (0x1 << 24)    // Main PLL (PLL) enable
#define  _RCC_CR_CSSON                                       (0x1 << 19)    // Clock security system enable
#define  _RCC_CR_HSEBYP                                      (0x1 << 18)    // HSE clock bypass
#define  _RCC_CR_HSERDY                                      (0x1 << 17)    // HSE clock ready flag
#define  _RCC_CR_HSEON                                       (0x1 << 16)    // HSE clock enable
#define  _RCC_CR_HSICAL                                      (0xff << 8)    // Internal high-speed clock calibration
#define  _RCC_CR_HSITRIM                                     (0x1f << 3)    // Internal high-speed clock trimming
#define  _RCC_CR_HSIRDY                                      (0x1 << 1)    // Internal high-speed clock ready flag
#define  _RCC_CR_HSION                                       (0x1 << 0)    // Internal high-speed clock enable
#define  _RCC_PLLCFGR_PLLQ3                                  (0x1 << 27)    // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
#define  _RCC_PLLCFGR_PLLQ2                                  (0x1 << 26)    // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
#define  _RCC_PLLCFGR_PLLQ1                                  (0x1 << 25)    // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
#define  _RCC_PLLCFGR_PLLQ0                                  (0x1 << 24)    // Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator clocks
#define  _RCC_PLLCFGR_PLLSRC                                 (0x1 << 22)    // Main PLL(PLL) and audio PLL (PLLI2S) entry clock source
#define  _RCC_PLLCFGR_PLLP1                                  (0x1 << 17)    // Main PLL (PLL) division factor for main system clock
#define  _RCC_PLLCFGR_PLLP0                                  (0x1 << 16)    // Main PLL (PLL) division factor for main system clock
#define  _RCC_PLLCFGR_PLLN8                                  (0x1 << 14)    // Main PLL (PLL) multiplication factor for VCO
#define  _RCC_PLLCFGR_PLLN7                                  (0x1 << 13)    // Main PLL (PLL) multiplication factor for VCO
#define  _RCC_PLLCFGR_PLLN6                                  (0x1 << 12)    // Main PLL (PLL) multiplication factor for VCO
#define  _RCC_PLLCFGR_PLLN5                                  (0x1 << 11)    // Main PLL (PLL) multiplication factor for VCO
#define  _RCC_PLLCFGR_PLLN4                                  (0x1 << 10)    // Main PLL (PLL) multiplication factor for VCO
#define  _RCC_PLLCFGR_PLLN3                                  (0x1 << 9)    // Main PLL (PLL) multiplication factor for VCO
#define  _RCC_PLLCFGR_PLLN2                                  (0x1 << 8)    // Main PLL (PLL) multiplication factor for VCO
#define  _RCC_PLLCFGR_PLLN1                                  (0x1 << 7)    // Main PLL (PLL) multiplication factor for VCO
#define  _RCC_PLLCFGR_PLLN0                                  (0x1 << 6)    // Main PLL (PLL) multiplication factor for VCO
#define  _RCC_PLLCFGR_PLLM5                                  (0x1 << 5)    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
#define  _RCC_PLLCFGR_PLLM4                                  (0x1 << 4)    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
#define  _RCC_PLLCFGR_PLLM3                                  (0x1 << 3)    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
#define  _RCC_PLLCFGR_PLLM2                                  (0x1 << 2)    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
#define  _RCC_PLLCFGR_PLLM1                                  (0x1 << 1)    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
#define  _RCC_PLLCFGR_PLLM0                                  (0x1 << 0)    // Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
#define  _RCC_CFGR_MCO2                                      (0x3 << 30)    // Microcontroller clock output 2
#define  _RCC_CFGR_MCO2PRE                                   (0x7 << 27)    // MCO2 prescaler
#define  _RCC_CFGR_MCO1PRE                                   (0x7 << 24)    // MCO1 prescaler
#define  _RCC_CFGR_I2SSRC                                    (0x1 << 23)    // I2S clock selection
#define  _RCC_CFGR_MCO1                                      (0x3 << 21)    // Microcontroller clock output 1
#define  _RCC_CFGR_RTCPRE                                    (0x1f << 16)    // HSE division factor for RTC clock
#define  _RCC_CFGR_PPRE2                                     (0x7 << 13)    // APB high-speed prescaler (APB2)
#define  _RCC_CFGR_PPRE1                                     (0x7 << 10)    // APB Low speed prescaler (APB1)
#define  _RCC_CFGR_HPRE                                      (0xf << 4)    // AHB prescaler
#define  _RCC_CFGR_SWS1                                      (0x1 << 3)    // System clock switch status
#define  _RCC_CFGR_SWS0                                      (0x1 << 2)    // System clock switch status
#define  _RCC_CFGR_SW1                                       (0x1 << 1)    // System clock switch
#define  _RCC_CFGR_SW0                                       (0x1 << 0)    // System clock switch
#define  _RCC_CIR_CSSC                                       (0x1 << 23)    // Clock security system interrupt clear
#define  _RCC_CIR_PLLSAIRDYC                                 (0x1 << 22)    // PLLSAI Ready Interrupt Clear
#define  _RCC_CIR_PLLI2SRDYC                                 (0x1 << 21)    // PLLI2S ready interrupt clear
#define  _RCC_CIR_PLLRDYC                                    (0x1 << 20)    // Main PLL(PLL) ready interrupt clear
#define  _RCC_CIR_HSERDYC                                    (0x1 << 19)    // HSE ready interrupt clear
#define  _RCC_CIR_HSIRDYC                                    (0x1 << 18)    // HSI ready interrupt clear
#define  _RCC_CIR_LSERDYC                                    (0x1 << 17)    // LSE ready interrupt clear
#define  _RCC_CIR_LSIRDYC                                    (0x1 << 16)    // LSI ready interrupt clear
#define  _RCC_CIR_PLLSAIRDYIE                                (0x1 << 14)    // PLLSAI Ready Interrupt Enable
#define  _RCC_CIR_PLLI2SRDYIE                                (0x1 << 13)    // PLLI2S ready interrupt enable
#define  _RCC_CIR_PLLRDYIE                                   (0x1 << 12)    // Main PLL (PLL) ready interrupt enable
#define  _RCC_CIR_HSERDYIE                                   (0x1 << 11)    // HSE ready interrupt enable
#define  _RCC_CIR_HSIRDYIE                                   (0x1 << 10)    // HSI ready interrupt enable
#define  _RCC_CIR_LSERDYIE                                   (0x1 << 9)    // LSE ready interrupt enable
#define  _RCC_CIR_LSIRDYIE                                   (0x1 << 8)    // LSI ready interrupt enable
#define  _RCC_CIR_CSSF                                       (0x1 << 7)    // Clock security system interrupt flag
#define  _RCC_CIR_PLLSAIRDYF                                 (0x1 << 6)    // PLLSAI ready interrupt flag
#define  _RCC_CIR_PLLI2SRDYF                                 (0x1 << 5)    // PLLI2S ready interrupt flag
#define  _RCC_CIR_PLLRDYF                                    (0x1 << 4)    // Main PLL (PLL) ready interrupt flag
#define  _RCC_CIR_HSERDYF                                    (0x1 << 3)    // HSE ready interrupt flag
#define  _RCC_CIR_HSIRDYF                                    (0x1 << 2)    // HSI ready interrupt flag
#define  _RCC_CIR_LSERDYF                                    (0x1 << 1)    // LSE ready interrupt flag
#define  _RCC_CIR_LSIRDYF                                    (0x1 << 0)    // LSI ready interrupt flag
#define  _RCC_AHB1RSTR_OTGHSRST                              (0x1 << 29)    // USB OTG HS module reset
#define  _RCC_AHB1RSTR_ETHMACRST                             (0x1 << 25)    // Ethernet MAC reset
#define  _RCC_AHB1RSTR_DMA2DRST                              (0x1 << 23)    // DMA2D reset
#define  _RCC_AHB1RSTR_DMA2RST                               (0x1 << 22)    // DMA2 reset
#define  _RCC_AHB1RSTR_DMA1RST                               (0x1 << 21)    // DMA2 reset
#define  _RCC_AHB1RSTR_CRCRST                                (0x1 << 12)    // CRC reset
#define  _RCC_AHB1RSTR_GPIOKRST                              (0x1 << 10)    // IO port K reset
#define  _RCC_AHB1RSTR_GPIOJRST                              (0x1 << 9)    // IO port J reset
#define  _RCC_AHB1RSTR_GPIOIRST                              (0x1 << 8)    // IO port I reset
#define  _RCC_AHB1RSTR_GPIOHRST                              (0x1 << 7)    // IO port H reset
#define  _RCC_AHB1RSTR_GPIOGRST                              (0x1 << 6)    // IO port G reset
#define  _RCC_AHB1RSTR_GPIOFRST                              (0x1 << 5)    // IO port F reset
#define  _RCC_AHB1RSTR_GPIOERST                              (0x1 << 4)    // IO port E reset
#define  _RCC_AHB1RSTR_GPIODRST                              (0x1 << 3)    // IO port D reset
#define  _RCC_AHB1RSTR_GPIOCRST                              (0x1 << 2)    // IO port C reset
#define  _RCC_AHB1RSTR_GPIOBRST                              (0x1 << 1)    // IO port B reset
#define  _RCC_AHB1RSTR_GPIOARST                              (0x1 << 0)    // IO port A reset
#define  _RCC_AHB2RSTR_OTGFSRST                              (0x1 << 7)    // USB OTG FS module reset
#define  _RCC_AHB2RSTR_RNGRST                                (0x1 << 6)    // Random number generator module reset
#define  _RCC_AHB2RSTR_HSAHRST                               (0x1 << 5)    // Hash module reset
#define  _RCC_AHB2RSTR_CRYPRST                               (0x1 << 4)    // Cryptographic module reset
#define  _RCC_AHB2RSTR_DCMIRST                               (0x1 << 0)    // Camera interface reset
#define  _RCC_AHB3RSTR_FMCRST                                (0x1 << 0)    // Flexible memory controller module reset
#define  _RCC_AHB3RSTR_QSPIRST                               (0x1 << 1)    // Quad SPI memory controller reset
#define  _RCC_APB1RSTR_TIM2RST                               (0x1 << 0)    // TIM2 reset
#define  _RCC_APB1RSTR_TIM3RST                               (0x1 << 1)    // TIM3 reset
#define  _RCC_APB1RSTR_TIM4RST                               (0x1 << 2)    // TIM4 reset
#define  _RCC_APB1RSTR_TIM5RST                               (0x1 << 3)    // TIM5 reset
#define  _RCC_APB1RSTR_TIM6RST                               (0x1 << 4)    // TIM6 reset
#define  _RCC_APB1RSTR_TIM7RST                               (0x1 << 5)    // TIM7 reset
#define  _RCC_APB1RSTR_TIM12RST                              (0x1 << 6)    // TIM12 reset
#define  _RCC_APB1RSTR_TIM13RST                              (0x1 << 7)    // TIM13 reset
#define  _RCC_APB1RSTR_TIM14RST                              (0x1 << 8)    // TIM14 reset
#define  _RCC_APB1RSTR_WWDGRST                               (0x1 << 11)    // Window watchdog reset
#define  _RCC_APB1RSTR_SPI2RST                               (0x1 << 14)    // SPI 2 reset
#define  _RCC_APB1RSTR_SPI3RST                               (0x1 << 15)    // SPI 3 reset
#define  _RCC_APB1RSTR_UART2RST                              (0x1 << 17)    // USART 2 reset
#define  _RCC_APB1RSTR_UART3RST                              (0x1 << 18)    // USART 3 reset
#define  _RCC_APB1RSTR_UART4RST                              (0x1 << 19)    // USART 4 reset
#define  _RCC_APB1RSTR_UART5RST                              (0x1 << 20)    // USART 5 reset
#define  _RCC_APB1RSTR_I2C1RST                               (0x1 << 21)    // I2C 1 reset
#define  _RCC_APB1RSTR_I2C2RST                               (0x1 << 22)    // I2C 2 reset
#define  _RCC_APB1RSTR_I2C3RST                               (0x1 << 23)    // I2C3 reset
#define  _RCC_APB1RSTR_CAN1RST                               (0x1 << 25)    // CAN1 reset
#define  _RCC_APB1RSTR_CAN2RST                               (0x1 << 26)    // CAN2 reset
#define  _RCC_APB1RSTR_PWRRST                                (0x1 << 28)    // Power interface reset
#define  _RCC_APB1RSTR_DACRST                                (0x1 << 29)    // DAC reset
#define  _RCC_APB1RSTR_UART7RST                              (0x1 << 30)    // UART7 reset
#define  _RCC_APB1RSTR_UART8RST                              (0x1 << 31)    // UART8 reset
#define  _RCC_APB1RSTR_SPDIFRXRST                            (0x1 << 16)    // SPDIF-RX reset
#define  _RCC_APB1RSTR_CECRST                                (0x1 << 27)    // HDMI-CEC reset
#define  _RCC_APB1RSTR_LPTIM1RST                             (0x1 << 9)    // Low power timer 1 reset
#define  _RCC_APB1RSTR_I2C4RST                               (0x1 << 24)    // I2C 4 reset
#define  _RCC_APB2RSTR_TIM1RST                               (0x1 << 0)    // TIM1 reset
#define  _RCC_APB2RSTR_TIM8RST                               (0x1 << 1)    // TIM8 reset
#define  _RCC_APB2RSTR_USART1RST                             (0x1 << 4)    // USART1 reset
#define  _RCC_APB2RSTR_USART6RST                             (0x1 << 5)    // USART6 reset
#define  _RCC_APB2RSTR_ADCRST                                (0x1 << 8)    // ADC interface reset (common to all ADCs)
#define  _RCC_APB2RSTR_SPI1RST                               (0x1 << 12)    // SPI 1 reset
#define  _RCC_APB2RSTR_SPI4RST                               (0x1 << 13)    // SPI4 reset
#define  _RCC_APB2RSTR_SYSCFGRST                             (0x1 << 14)    // System configuration controller reset
#define  _RCC_APB2RSTR_TIM9RST                               (0x1 << 16)    // TIM9 reset
#define  _RCC_APB2RSTR_TIM10RST                              (0x1 << 17)    // TIM10 reset
#define  _RCC_APB2RSTR_TIM11RST                              (0x1 << 18)    // TIM11 reset
#define  _RCC_APB2RSTR_SPI5RST                               (0x1 << 20)    // SPI5 reset
#define  _RCC_APB2RSTR_SPI6RST                               (0x1 << 21)    // SPI6 reset
#define  _RCC_APB2RSTR_SAI1RST                               (0x1 << 22)    // SAI1 reset
#define  _RCC_APB2RSTR_LTDCRST                               (0x1 << 26)    // LTDC reset
#define  _RCC_APB2RSTR_SAI2RST                               (0x1 << 23)    // SAI2 reset
#define  _RCC_APB2RSTR_SDMMC1RST                             (0x1 << 11)    // SDMMC1 reset
#define  _RCC_AHB1ENR_OTGHSULPIEN                            (0x1 << 30)    // USB OTG HSULPI clock enable
#define  _RCC_AHB1ENR_OTGHSEN                                (0x1 << 29)    // USB OTG HS clock enable
#define  _RCC_AHB1ENR_ETHMACPTPEN                            (0x1 << 28)    // Ethernet PTP clock enable
#define  _RCC_AHB1ENR_ETHMACRXEN                             (0x1 << 27)    // Ethernet Reception clock enable
#define  _RCC_AHB1ENR_ETHMACTXEN                             (0x1 << 26)    // Ethernet Transmission clock enable
#define  _RCC_AHB1ENR_ETHMACEN                               (0x1 << 25)    // Ethernet MAC clock enable
#define  _RCC_AHB1ENR_DMA2DEN                                (0x1 << 23)    // DMA2D clock enable
#define  _RCC_AHB1ENR_DMA2EN                                 (0x1 << 22)    // DMA2 clock enable
#define  _RCC_AHB1ENR_DMA1EN                                 (0x1 << 21)    // DMA1 clock enable
#define  _RCC_AHB1ENR_CCMDATARAMEN                           (0x1 << 20)    // CCM data RAM clock enable
#define  _RCC_AHB1ENR_BKPSRAMEN                              (0x1 << 18)    // Backup SRAM interface clock enable
#define  _RCC_AHB1ENR_CRCEN                                  (0x1 << 12)    // CRC clock enable
#define  _RCC_AHB1ENR_GPIOKEN                                (0x1 << 10)    // IO port K clock enable
#define  _RCC_AHB1ENR_GPIOJEN                                (0x1 << 9)    // IO port J clock enable
#define  _RCC_AHB1ENR_GPIOIEN                                (0x1 << 8)    // IO port I clock enable
#define  _RCC_AHB1ENR_GPIOHEN                                (0x1 << 7)    // IO port H clock enable
#define  _RCC_AHB1ENR_GPIOGEN                                (0x1 << 6)    // IO port G clock enable
#define  _RCC_AHB1ENR_GPIOFEN                                (0x1 << 5)    // IO port F clock enable
#define  _RCC_AHB1ENR_GPIOEEN                                (0x1 << 4)    // IO port E clock enable
#define  _RCC_AHB1ENR_GPIODEN                                (0x1 << 3)    // IO port D clock enable
#define  _RCC_AHB1ENR_GPIOCEN                                (0x1 << 2)    // IO port C clock enable
#define  _RCC_AHB1ENR_GPIOBEN                                (0x1 << 1)    // IO port B clock enable
#define  _RCC_AHB1ENR_GPIOAEN                                (0x1 << 0)    // IO port A clock enable
#define  _RCC_AHB2ENR_OTGFSEN                                (0x1 << 7)    // USB OTG FS clock enable
#define  _RCC_AHB2ENR_RNGEN                                  (0x1 << 6)    // Random number generator clock enable
#define  _RCC_AHB2ENR_HASHEN                                 (0x1 << 5)    // Hash modules clock enable
#define  _RCC_AHB2ENR_CRYPEN                                 (0x1 << 4)    // Cryptographic modules clock enable
#define  _RCC_AHB2ENR_DCMIEN                                 (0x1 << 0)    // Camera interface enable
#define  _RCC_AHB3ENR_FMCEN                                  (0x1 << 0)    // Flexible memory controller module clock enable
#define  _RCC_AHB3ENR_QSPIEN                                 (0x1 << 1)    // Quad SPI memory controller clock enable
#define  _RCC_APB1ENR_TIM2EN                                 (0x1 << 0)    // TIM2 clock enable
#define  _RCC_APB1ENR_TIM3EN                                 (0x1 << 1)    // TIM3 clock enable
#define  _RCC_APB1ENR_TIM4EN                                 (0x1 << 2)    // TIM4 clock enable
#define  _RCC_APB1ENR_TIM5EN                                 (0x1 << 3)    // TIM5 clock enable
#define  _RCC_APB1ENR_TIM6EN                                 (0x1 << 4)    // TIM6 clock enable
#define  _RCC_APB1ENR_TIM7EN                                 (0x1 << 5)    // TIM7 clock enable
#define  _RCC_APB1ENR_TIM12EN                                (0x1 << 6)    // TIM12 clock enable
#define  _RCC_APB1ENR_TIM13EN                                (0x1 << 7)    // TIM13 clock enable
#define  _RCC_APB1ENR_TIM14EN                                (0x1 << 8)    // TIM14 clock enable
#define  _RCC_APB1ENR_WWDGEN                                 (0x1 << 11)    // Window watchdog clock enable
#define  _RCC_APB1ENR_SPI2EN                                 (0x1 << 14)    // SPI2 clock enable
#define  _RCC_APB1ENR_SPI3EN                                 (0x1 << 15)    // SPI3 clock enable
#define  _RCC_APB1ENR_USART2EN                               (0x1 << 17)    // USART 2 clock enable
#define  _RCC_APB1ENR_USART3EN                               (0x1 << 18)    // USART3 clock enable
#define  _RCC_APB1ENR_UART4EN                                (0x1 << 19)    // UART4 clock enable
#define  _RCC_APB1ENR_UART5EN                                (0x1 << 20)    // UART5 clock enable
#define  _RCC_APB1ENR_I2C1EN                                 (0x1 << 21)    // I2C1 clock enable
#define  _RCC_APB1ENR_I2C2EN                                 (0x1 << 22)    // I2C2 clock enable
#define  _RCC_APB1ENR_I2C3EN                                 (0x1 << 23)    // I2C3 clock enable
#define  _RCC_APB1ENR_CAN1EN                                 (0x1 << 25)    // CAN 1 clock enable
#define  _RCC_APB1ENR_CAN2EN                                 (0x1 << 26)    // CAN 2 clock enable
#define  _RCC_APB1ENR_PWREN                                  (0x1 << 28)    // Power interface clock enable
#define  _RCC_APB1ENR_DACEN                                  (0x1 << 29)    // DAC interface clock enable
#define  _RCC_APB1ENR_UART7ENR                               (0x1 << 30)    // UART7 clock enable
#define  _RCC_APB1ENR_UART8ENR                               (0x1 << 31)    // UART8 clock enable
#define  _RCC_APB1ENR_SPDIFRXEN                              (0x1 << 16)    // SPDIF-RX clock enable
#define  _RCC_APB1ENR_CECEN                                  (0x1 << 27)    // HDMI-CEN clock enable
#define  _RCC_APB1ENR_LPTMI1EN                               (0x1 << 9)    // Low power timer 1 clock enable
#define  _RCC_APB1ENR_I2C4EN                                 (0x1 << 24)    // I2C4 clock enable
#define  _RCC_APB2ENR_TIM1EN                                 (0x1 << 0)    // TIM1 clock enable
#define  _RCC_APB2ENR_TIM8EN                                 (0x1 << 1)    // TIM8 clock enable
#define  _RCC_APB2ENR_USART1EN                               (0x1 << 4)    // USART1 clock enable
#define  _RCC_APB2ENR_USART6EN                               (0x1 << 5)    // USART6 clock enable
#define  _RCC_APB2ENR_ADC1EN                                 (0x1 << 8)    // ADC1 clock enable
#define  _RCC_APB2ENR_ADC2EN                                 (0x1 << 9)    // ADC2 clock enable
#define  _RCC_APB2ENR_ADC3EN                                 (0x1 << 10)    // ADC3 clock enable
#define  _RCC_APB2ENR_SPI1EN                                 (0x1 << 12)    // SPI1 clock enable
#define  _RCC_APB2ENR_SPI4ENR                                (0x1 << 13)    // SPI4 clock enable
#define  _RCC_APB2ENR_SYSCFGEN                               (0x1 << 14)    // System configuration controller clock enable
#define  _RCC_APB2ENR_TIM9EN                                 (0x1 << 16)    // TIM9 clock enable
#define  _RCC_APB2ENR_TIM10EN                                (0x1 << 17)    // TIM10 clock enable
#define  _RCC_APB2ENR_TIM11EN                                (0x1 << 18)    // TIM11 clock enable
#define  _RCC_APB2ENR_SPI5ENR                                (0x1 << 20)    // SPI5 clock enable
#define  _RCC_APB2ENR_SPI6ENR                                (0x1 << 21)    // SPI6 clock enable
#define  _RCC_APB2ENR_SAI1EN                                 (0x1 << 22)    // SAI1 clock enable
#define  _RCC_APB2ENR_LTDCEN                                 (0x1 << 26)    // LTDC clock enable
#define  _RCC_APB2ENR_SAI2EN                                 (0x1 << 23)    // SAI2 clock enable
#define  _RCC_APB2ENR_SDMMC1EN                               (0x1 << 11)    // SDMMC1 clock enable
#define  _RCC_AHB1LPENR_GPIOALPEN                            (0x1 << 0)    // IO port A clock enable during sleep mode
#define  _RCC_AHB1LPENR_GPIOBLPEN                            (0x1 << 1)    // IO port B clock enable during Sleep mode
#define  _RCC_AHB1LPENR_GPIOCLPEN                            (0x1 << 2)    // IO port C clock enable during Sleep mode
#define  _RCC_AHB1LPENR_GPIODLPEN                            (0x1 << 3)    // IO port D clock enable during Sleep mode
#define  _RCC_AHB1LPENR_GPIOELPEN                            (0x1 << 4)    // IO port E clock enable during Sleep mode
#define  _RCC_AHB1LPENR_GPIOFLPEN                            (0x1 << 5)    // IO port F clock enable during Sleep mode
#define  _RCC_AHB1LPENR_GPIOGLPEN                            (0x1 << 6)    // IO port G clock enable during Sleep mode
#define  _RCC_AHB1LPENR_GPIOHLPEN                            (0x1 << 7)    // IO port H clock enable during Sleep mode
#define  _RCC_AHB1LPENR_GPIOILPEN                            (0x1 << 8)    // IO port I clock enable during Sleep mode
#define  _RCC_AHB1LPENR_GPIOJLPEN                            (0x1 << 9)    // IO port J clock enable during Sleep mode
#define  _RCC_AHB1LPENR_GPIOKLPEN                            (0x1 << 10)    // IO port K clock enable during Sleep mode
#define  _RCC_AHB1LPENR_CRCLPEN                              (0x1 << 12)    // CRC clock enable during Sleep mode
#define  _RCC_AHB1LPENR_FLITFLPEN                            (0x1 << 15)    // Flash interface clock enable during Sleep mode
#define  _RCC_AHB1LPENR_SRAM1LPEN                            (0x1 << 16)    // SRAM 1interface clock enable during Sleep mode
#define  _RCC_AHB1LPENR_SRAM2LPEN                            (0x1 << 17)    // SRAM 2 interface clock enable during Sleep mode
#define  _RCC_AHB1LPENR_BKPSRAMLPEN                          (0x1 << 18)    // Backup SRAM interface clock enable during Sleep mode
#define  _RCC_AHB1LPENR_SRAM3LPEN                            (0x1 << 19)    // SRAM 3 interface clock enable during Sleep mode
#define  _RCC_AHB1LPENR_DMA1LPEN                             (0x1 << 21)    // DMA1 clock enable during Sleep mode
#define  _RCC_AHB1LPENR_DMA2LPEN                             (0x1 << 22)    // DMA2 clock enable during Sleep mode
#define  _RCC_AHB1LPENR_DMA2DLPEN                            (0x1 << 23)    // DMA2D clock enable during Sleep mode
#define  _RCC_AHB1LPENR_ETHMACLPEN                           (0x1 << 25)    // Ethernet MAC clock enable during Sleep mode
#define  _RCC_AHB1LPENR_ETHMACTXLPEN                         (0x1 << 26)    // Ethernet transmission clock enable during Sleep mode
#define  _RCC_AHB1LPENR_ETHMACRXLPEN                         (0x1 << 27)    // Ethernet reception clock enable during Sleep mode
#define  _RCC_AHB1LPENR_ETHMACPTPLPEN                        (0x1 << 28)    // Ethernet PTP clock enable during Sleep mode
#define  _RCC_AHB1LPENR_OTGHSLPEN                            (0x1 << 29)    // USB OTG HS clock enable during Sleep mode
#define  _RCC_AHB1LPENR_OTGHSULPILPEN                        (0x1 << 30)    // USB OTG HS ULPI clock enable during Sleep mode
#define  _RCC_AHB2LPENR_OTGFSLPEN                            (0x1 << 7)    // USB OTG FS clock enable during Sleep mode
#define  _RCC_AHB2LPENR_RNGLPEN                              (0x1 << 6)    // Random number generator clock enable during Sleep mode
#define  _RCC_AHB2LPENR_HASHLPEN                             (0x1 << 5)    // Hash modules clock enable during Sleep mode
#define  _RCC_AHB2LPENR_CRYPLPEN                             (0x1 << 4)    // Cryptography modules clock enable during Sleep mode
#define  _RCC_AHB2LPENR_DCMILPEN                             (0x1 << 0)    // Camera interface enable during Sleep mode
#define  _RCC_AHB3LPENR_FMCLPEN                              (0x1 << 0)    // Flexible memory controller module clock enable during Sleep mode
#define  _RCC_AHB3LPENR_QSPILPEN                             (0x1 << 1)    // Quand SPI memory controller clock enable during Sleep mode
#define  _RCC_APB1LPENR_TIM2LPEN                             (0x1 << 0)    // TIM2 clock enable during Sleep mode
#define  _RCC_APB1LPENR_TIM3LPEN                             (0x1 << 1)    // TIM3 clock enable during Sleep mode
#define  _RCC_APB1LPENR_TIM4LPEN                             (0x1 << 2)    // TIM4 clock enable during Sleep mode
#define  _RCC_APB1LPENR_TIM5LPEN                             (0x1 << 3)    // TIM5 clock enable during Sleep mode
#define  _RCC_APB1LPENR_TIM6LPEN                             (0x1 << 4)    // TIM6 clock enable during Sleep mode
#define  _RCC_APB1LPENR_TIM7LPEN                             (0x1 << 5)    // TIM7 clock enable during Sleep mode
#define  _RCC_APB1LPENR_TIM12LPEN                            (0x1 << 6)    // TIM12 clock enable during Sleep mode
#define  _RCC_APB1LPENR_TIM13LPEN                            (0x1 << 7)    // TIM13 clock enable during Sleep mode
#define  _RCC_APB1LPENR_TIM14LPEN                            (0x1 << 8)    // TIM14 clock enable during Sleep mode
#define  _RCC_APB1LPENR_WWDGLPEN                             (0x1 << 11)    // Window watchdog clock enable during Sleep mode
#define  _RCC_APB1LPENR_SPI2LPEN                             (0x1 << 14)    // SPI2 clock enable during Sleep mode
#define  _RCC_APB1LPENR_SPI3LPEN                             (0x1 << 15)    // SPI3 clock enable during Sleep mode
#define  _RCC_APB1LPENR_USART2LPEN                           (0x1 << 17)    // USART2 clock enable during Sleep mode
#define  _RCC_APB1LPENR_USART3LPEN                           (0x1 << 18)    // USART3 clock enable during Sleep mode
#define  _RCC_APB1LPENR_UART4LPEN                            (0x1 << 19)    // UART4 clock enable during Sleep mode
#define  _RCC_APB1LPENR_UART5LPEN                            (0x1 << 20)    // UART5 clock enable during Sleep mode
#define  _RCC_APB1LPENR_I2C1LPEN                             (0x1 << 21)    // I2C1 clock enable during Sleep mode
#define  _RCC_APB1LPENR_I2C2LPEN                             (0x1 << 22)    // I2C2 clock enable during Sleep mode
#define  _RCC_APB1LPENR_I2C3LPEN                             (0x1 << 23)    // I2C3 clock enable during Sleep mode
#define  _RCC_APB1LPENR_CAN1LPEN                             (0x1 << 25)    // CAN 1 clock enable during Sleep mode
#define  _RCC_APB1LPENR_CAN2LPEN                             (0x1 << 26)    // CAN 2 clock enable during Sleep mode
#define  _RCC_APB1LPENR_PWRLPEN                              (0x1 << 28)    // Power interface clock enable during Sleep mode
#define  _RCC_APB1LPENR_DACLPEN                              (0x1 << 29)    // DAC interface clock enable during Sleep mode
#define  _RCC_APB1LPENR_UART7LPEN                            (0x1 << 30)    // UART7 clock enable during Sleep mode
#define  _RCC_APB1LPENR_UART8LPEN                            (0x1 << 31)    // UART8 clock enable during Sleep mode
#define  _RCC_APB1LPENR_SPDIFRXLPEN                          (0x1 << 16)    // SPDIF-RX clock enable during sleep mode
#define  _RCC_APB1LPENR_CECLPEN                              (0x1 << 27)    // HDMI-CEN clock enable during Sleep mode
#define  _RCC_APB1LPENR_LPTIM1LPEN                           (0x1 << 9)    // low power timer 1 clock enable during Sleep mode
#define  _RCC_APB1LPENR_I2C4LPEN                             (0x1 << 24)    // I2C4 clock enable during Sleep mode
#define  _RCC_APB2LPENR_TIM1LPEN                             (0x1 << 0)    // TIM1 clock enable during Sleep mode
#define  _RCC_APB2LPENR_TIM8LPEN                             (0x1 << 1)    // TIM8 clock enable during Sleep mode
#define  _RCC_APB2LPENR_USART1LPEN                           (0x1 << 4)    // USART1 clock enable during Sleep mode
#define  _RCC_APB2LPENR_USART6LPEN                           (0x1 << 5)    // USART6 clock enable during Sleep mode
#define  _RCC_APB2LPENR_ADC1LPEN                             (0x1 << 8)    // ADC1 clock enable during Sleep mode
#define  _RCC_APB2LPENR_ADC2LPEN                             (0x1 << 9)    // ADC2 clock enable during Sleep mode
#define  _RCC_APB2LPENR_ADC3LPEN                             (0x1 << 10)    // ADC 3 clock enable during Sleep mode
#define  _RCC_APB2LPENR_SPI1LPEN                             (0x1 << 12)    // SPI 1 clock enable during Sleep mode
#define  _RCC_APB2LPENR_SPI4LPEN                             (0x1 << 13)    // SPI 4 clock enable during Sleep mode
#define  _RCC_APB2LPENR_SYSCFGLPEN                           (0x1 << 14)    // System configuration controller clock enable during Sleep mode
#define  _RCC_APB2LPENR_TIM9LPEN                             (0x1 << 16)    // TIM9 clock enable during sleep mode
#define  _RCC_APB2LPENR_TIM10LPEN                            (0x1 << 17)    // TIM10 clock enable during Sleep mode
#define  _RCC_APB2LPENR_TIM11LPEN                            (0x1 << 18)    // TIM11 clock enable during Sleep mode
#define  _RCC_APB2LPENR_SPI5LPEN                             (0x1 << 20)    // SPI 5 clock enable during Sleep mode
#define  _RCC_APB2LPENR_SPI6LPEN                             (0x1 << 21)    // SPI 6 clock enable during Sleep mode
#define  _RCC_APB2LPENR_SAI1LPEN                             (0x1 << 22)    // SAI1 clock enable during sleep mode
#define  _RCC_APB2LPENR_LTDCLPEN                             (0x1 << 26)    // LTDC clock enable during sleep mode
#define  _RCC_APB2LPENR_SAI2LPEN                             (0x1 << 23)    // SAI2 clock enable during sleep mode
#define  _RCC_APB2LPENR_SDMMC1LPEN                           (0x1 << 11)    // SDMMC1 clock enable during Sleep mode
#define  _RCC_BDCR_BDRST                                     (0x1 << 16)    // Backup domain software reset
#define  _RCC_BDCR_RTCEN                                     (0x1 << 15)    // RTC clock enable
#define  _RCC_BDCR_RTCSEL1                                   (0x1 << 9)    // RTC clock source selection
#define  _RCC_BDCR_RTCSEL0                                   (0x1 << 8)    // RTC clock source selection
#define  _RCC_BDCR_LSEBYP                                    (0x1 << 2)    // External low-speed oscillator bypass
#define  _RCC_BDCR_LSERDY                                    (0x1 << 1)    // External low-speed oscillator ready
#define  _RCC_BDCR_LSEON                                     (0x1 << 0)    // External low-speed oscillator enable
#define  _RCC_CSR_LPWRRSTF                                   (0x1 << 31)    // Low-power reset flag
#define  _RCC_CSR_WWDGRSTF                                   (0x1 << 30)    // Window watchdog reset flag
#define  _RCC_CSR_WDGRSTF                                    (0x1 << 29)    // Independent watchdog reset flag
#define  _RCC_CSR_SFTRSTF                                    (0x1 << 28)    // Software reset flag
#define  _RCC_CSR_PORRSTF                                    (0x1 << 27)    // POR/PDR reset flag
#define  _RCC_CSR_PADRSTF                                    (0x1 << 26)    // PIN reset flag
#define  _RCC_CSR_BORRSTF                                    (0x1 << 25)    // BOR reset flag
#define  _RCC_CSR_RMVF                                       (0x1 << 24)    // Remove reset flag
#define  _RCC_CSR_LSIRDY                                     (0x1 << 1)    // Internal low-speed oscillator ready
#define  _RCC_CSR_LSION                                      (0x1 << 0)    // Internal low-speed oscillator enable
#define  _RCC_SSCGR_SSCGEN                                   (0x1 << 31)    // Spread spectrum modulation enable
#define  _RCC_SSCGR_SPREADSEL                                (0x1 << 30)    // Spread Select
#define  _RCC_SSCGR_INCSTEP                                  (0x7fff << 13)    // Incrementation step
#define  _RCC_SSCGR_MODPER                                   (0x1fff << 0)    // Modulation period
#define  _RCC_PLLI2SCFGR_PLLI2SR                             (0x7 << 28)    // PLLI2S division factor for I2S clocks
#define  _RCC_PLLI2SCFGR_PLLI2SQ                             (0xf << 24)    // PLLI2S division factor for SAI1 clock
#define  _RCC_PLLI2SCFGR_PLLI2SN                             (0x1ff << 6)    // PLLI2S multiplication factor for VCO
#define  _RCC_PLLSAICFGR_PLLSAIN                             (0x1ff << 6)    // PLLSAI division factor for VCO
#define  _RCC_PLLSAICFGR_PLLSAIP                             (0x3 << 16)    // PLLSAI division factor for 48MHz clock
#define  _RCC_PLLSAICFGR_PLLSAIQ                             (0xf << 24)    // PLLSAI division factor for SAI clock
#define  _RCC_PLLSAICFGR_PLLSAIR                             (0x7 << 28)    // PLLSAI division factor for LCD clock
#define  _RCC_DKCFGR1_PLLI2SDIV                              (0x1f << 0)    // PLLI2S division factor for SAI1 clock
#define  _RCC_DKCFGR1_PLLSAIDIVQ                             (0x1f << 8)    // PLLSAI division factor for SAI1 clock
#define  _RCC_DKCFGR1_PLLSAIDIVR                             (0x3 << 16)    // division factor for LCD_CLK
#define  _RCC_DKCFGR1_SAI1SEL                                (0x3 << 20)    // SAI1 clock source selection
#define  _RCC_DKCFGR1_SAI2SEL                                (0x3 << 22)    // SAI2 clock source selection
#define  _RCC_DKCFGR1_TIMPRE                                 (0x1 << 24)    // Timers clocks prescalers selection
#define  _RCC_DKCFGR2_USART1SEL                              (0x3 << 0)    // USART 1 clock source selection
#define  _RCC_DKCFGR2_USART2SEL                              (0x3 << 2)    // USART 2 clock source selection
#define  _RCC_DKCFGR2_USART3SEL                              (0x3 << 4)    // USART 3 clock source selection
#define  _RCC_DKCFGR2_UART4SEL                               (0x3 << 6)    // UART 4 clock source selection
#define  _RCC_DKCFGR2_UART5SEL                               (0x3 << 8)    // UART 5 clock source selection
#define  _RCC_DKCFGR2_USART6SEL                              (0x3 << 10)    // USART 6 clock source selection
#define  _RCC_DKCFGR2_UART7SEL                               (0x3 << 12)    // UART 7 clock source selection
#define  _RCC_DKCFGR2_UART8SEL                               (0x3 << 14)    // UART 8 clock source selection
#define  _RCC_DKCFGR2_I2C1SEL                                (0x3 << 16)    // I2C1 clock source selection
#define  _RCC_DKCFGR2_I2C2SEL                                (0x3 << 18)    // I2C2 clock source selection
#define  _RCC_DKCFGR2_I2C3SEL                                (0x3 << 20)    // I2C3 clock source selection
#define  _RCC_DKCFGR2_I2C4SEL                                (0x3 << 22)    // I2C4 clock source selection
#define  _RCC_DKCFGR2_LPTIM1SEL                              (0x3 << 24)    // Low power timer 1 clock source selection
#define  _RCC_DKCFGR2_CECSEL                                 (0x1 << 26)    // HDMI-CEC clock source selection
#define  _RCC_DKCFGR2_CK48MSEL                               (0x1 << 27)    // 48MHz clock source selection
#define  _RCC_DKCFGR2_SDMMCSEL                               (0x1 << 28)    // SDMMC clock source selection
#define  _RCC_DKCFGR2_SDMMC2SEL                              (0x1 << 29)    // SDMMC2 clock source selection
#define  _RCC_DKCFGR2_DSISEL                                 (0x1 << 30)    // DSI clock source selection

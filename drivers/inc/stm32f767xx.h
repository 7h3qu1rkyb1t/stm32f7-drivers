#pragma once
#include<stdint.h>
typedef enum {
    false,
    true
} bool;
// General purpose timers
typedef struct {
    volatile uint32_t CR1;                      // control register 1
    volatile uint32_t CR2;                      // control register 2
    volatile uint32_t SMCR;                     // slave mode control register
    volatile uint32_t DIER;                     // DMA/Interrupt enable register
    volatile uint32_t SR;                       // status register
    volatile uint32_t EGR;                      // event generation register
    volatile uint32_t CCMR1_Output;             // capture/compare mode register 1 (output mode)
												// -4.0
    volatile uint32_t CCMR1_Input;              // capture/compare mode register 1 (input mode)
    volatile uint32_t CCMR2_Output;             // capture/compare mode register 2 (output mode)
												// -4.0
    volatile uint32_t CCMR2_Input;              // capture/compare mode register 2 (input mode)
    volatile uint32_t CCER;                     // capture/compare enable register
    volatile uint32_t CNT;                      // counter
    volatile uint32_t PSC;                      // prescaler
    volatile uint32_t ARR;                      // auto-reload register
	uint32_t __reserved0[1];
    volatile uint32_t CCR1;                     // capture/compare register 1
    volatile uint32_t CCR2;                     // capture/compare register 2
    volatile uint32_t CCR3;                     // capture/compare register 3
    volatile uint32_t CCR4;                     // capture/compare register 4
	uint32_t __reserved1[1];
    volatile uint32_t DCR;                      // DMA control register
    volatile uint32_t DMAR;                     // DMA address for full transfer
    volatile uint32_t OR1;                      // TIM2 option register 1
	uint32_t __reserved2[3];
    volatile uint32_t OR2;                      // TIM2 option register 2
} TIM_RegDef_t;

// General purpose timers
// typedef struct {
//     volatile uint32_t CR1;                      // control register 1
//     volatile uint32_t CR2;                      // control register 2
//     volatile uint32_t SMCR;                     // slave mode control register
//     volatile uint32_t DIER;                     // DMA/Interrupt enable register
//     volatile uint32_t SR;                       // status register
//     volatile uint32_t EGR;                      // event generation register
//     volatile uint32_t CCMR1_Output;             // capture/compare mode register 1 (output mode)
//                                                 // -4.0
//     volatile uint32_t CCMR1_Input;              // capture/compare mode register 1 (input mode)
//     volatile uint32_t CCMR2_Output;             // capture/compare mode register 2 (output mode)
//                                                 // -4.0
//     volatile uint32_t CCMR2_Input;              // capture/compare mode register 2 (input mode)
//     volatile uint32_t CCER;                     // capture/compare enable register
//     volatile uint32_t CNT;                      // counter
//     volatile uint32_t PSC;                      // prescaler
//     volatile uint32_t ARR;                      // auto-reload register
//     uint32_t __reserved0[1];
//     volatile uint32_t CCR1;                     // capture/compare register 1
//     volatile uint32_t CCR2;                     // capture/compare register 2
//     volatile uint32_t CCR3;                     // capture/compare register 3
//     volatile uint32_t CCR4;                     // capture/compare register 4
//     uint32_t __reserved1[1];
//     volatile uint32_t DCR;                      // DMA control register
//     volatile uint32_t DMAR;                     // DMA address for full transfer
//     volatile uint32_t OR1;                      // TIM3 option register 1
//     uint32_t __reserved2[3];
//     volatile uint32_t OR2;                      // TIM3 option register 2
// } TIM_RegDef_t;

// General purpose timers
// typedef struct {
//     volatile uint32_t CR1;                      // control register 1
//     volatile uint32_t CR2;                      // control register 2
//     volatile uint32_t SMCR;                     // slave mode control register
//     volatile uint32_t DIER;                     // DMA/Interrupt enable register
//     volatile uint32_t SR;                       // status register
//     volatile uint32_t EGR;                      // event generation register
//     volatile uint32_t CCMR1_Output;             // capture/compare mode register 1 (output mode)
//                                                 // -4.0
//     volatile uint32_t CCMR1_Input;              // capture/compare mode register 1 (input mode)
//     volatile uint32_t CCMR2_Output;             // capture/compare mode register 2 (output mode)
//                                                 // -4.0
//     volatile uint32_t CCMR2_Input;              // capture/compare mode register 2 (input mode)
//     volatile uint32_t CCER;                     // capture/compare enable register
//     volatile uint32_t CNT;                      // counter
//     volatile uint32_t PSC;                      // prescaler
//     volatile uint32_t ARR;                      // auto-reload register
//     uint32_t __reserved0[1];
//     volatile uint32_t CCR1;                     // capture/compare register 1
//     volatile uint32_t CCR2;                     // capture/compare register 2
//     volatile uint32_t CCR3;                     // capture/compare register 3
//     volatile uint32_t CCR4;                     // capture/compare register 4
//     uint32_t __reserved1[1];
//     volatile uint32_t DCR;                      // DMA control register
//     volatile uint32_t DMAR;                     // DMA address for full transfer
// } TIM_RegDef_t;

// Basic timers
// typedef struct {
//     volatile uint32_t CR1;                      // control register 1
//     volatile uint32_t CR2;                      // control register 2
//     uint32_t __reserved0[1];
//     volatile uint32_t DIER;                     // DMA/Interrupt enable register
//     volatile uint32_t SR;                       // status register
//     volatile uint32_t EGR;                      // event generation register
//     uint32_t __reserved1[3];
//     volatile uint32_t CNT;                      // counter
//     volatile uint32_t PSC;                      // prescaler
//     volatile uint32_t ARR;                      // auto-reload register
// } TIM_RegDef_t;

// Low power timer
typedef struct {
    volatile uint32_t ISR;                      // Interrupt and Status Register
    volatile uint32_t ICR;                      // Interrupt Clear Register
    volatile uint32_t IER;                      // Interrupt Enable Register
    volatile uint32_t CFGR;                     // Configuration Register
    volatile uint32_t CR;                       // Control Register
    volatile uint32_t CMP;                      // Compare Register
    volatile uint32_t ARR;                      // Autoreload Register
    volatile uint32_t CNT;                      // Counter Register
} LPTIM_RegDef_t;

// Real-time clock
typedef struct {
    volatile uint32_t TR;                       // time register
    volatile uint32_t DR;                       // date register
    volatile uint32_t CR;                       // control register
    volatile uint32_t ISR;                      // initialization and status register
    volatile uint32_t PRER;                     // prescaler register
    volatile uint32_t WUTR;                     // wakeup timer register
	uint32_t __reserved0[1];
    volatile uint32_t ALRMAR;                   // alarm A register
    volatile uint32_t ALRMBR;                   // alarm B register
    volatile uint32_t WPR;                      // write protection register
    volatile uint32_t SSR;                      // sub second register
    volatile uint32_t SHIFTR;                   // shift control register
    volatile uint32_t TSTR;                     // time stamp time register
    volatile uint32_t TSDR;                     // time stamp date register
    volatile uint32_t TSSSR;                    // timestamp sub second register
    volatile uint32_t CALR;                     // calibration register
    volatile uint32_t TAMPCR;                   // tamper configuration register
    volatile uint32_t ALRMASSR;                 // alarm A sub second register
    volatile uint32_t ALRMBSSR;                 // alarm B sub second register
    volatile uint32_t OR;                       // option register
    volatile uint32_t BKP0R;                    // backup register
    volatile uint32_t BKP1R;                    // backup register
    volatile uint32_t BKP2R;                    // backup register
    volatile uint32_t BKP3R;                    // backup register
    volatile uint32_t BKP4R;                    // backup register
    volatile uint32_t BKP5R;                    // backup register
    volatile uint32_t BKP6R;                    // backup register
    volatile uint32_t BKP7R;                    // backup register
    volatile uint32_t BKP8R;                    // backup register
    volatile uint32_t BKP9R;                    // backup register
    volatile uint32_t BKP10R;                   // backup register
    volatile uint32_t BKP11R;                   // backup register
    volatile uint32_t BKP12R;                   // backup register
    volatile uint32_t BKP13R;                   // backup register
    volatile uint32_t BKP14R;                   // backup register
    volatile uint32_t BKP15R;                   // backup register
    volatile uint32_t BKP16R;                   // backup register
    volatile uint32_t BKP17R;                   // backup register
    volatile uint32_t BKP18R;                   // backup register
    volatile uint32_t BKP19R;                   // backup register
    volatile uint32_t BKP20R;                   // backup register
    volatile uint32_t BKP21R;                   // backup register
    volatile uint32_t BKP22R;                   // backup register
    volatile uint32_t BKP23R;                   // backup register
    volatile uint32_t BKP24R;                   // backup register
    volatile uint32_t BKP25R;                   // backup register
    volatile uint32_t BKP26R;                   // backup register
    volatile uint32_t BKP27R;                   // backup register
    volatile uint32_t BKP28R;                   // backup register
    volatile uint32_t BKP29R;                   // backup register
    volatile uint32_t BKP30R;                   // backup register
    volatile uint32_t BKP31R;                   // backup register
} RTC_RegDef_t;

// Window watchdog
typedef struct {
    volatile uint32_t CR;                       // Control register
    volatile uint32_t CFR;                      // Configuration register
    volatile uint32_t SR;                       // Status register
} WWDG_RegDef_t;

// Independent watchdog
typedef struct {
    volatile uint32_t KR;                       // Key register
    volatile uint32_t PR;                       // Prescaler register
    volatile uint32_t RLR;                      // Reload register
    volatile uint32_t SR;                       // Status register
    volatile uint32_t WINR;                     // Window register
} IWDG_RegDef_t;

// Receiver Interface
typedef struct {
    volatile uint32_t CR;                       // Control register
    volatile uint32_t IMR;                      // Interrupt mask register
    volatile uint32_t SR;                       // Status register
    volatile uint32_t IFCR;                     // Interrupt Flag Clear register
    volatile uint32_t DR;                       // Data input register
    volatile uint32_t CSR;                      // Channel Status register
    volatile uint32_t DIR;                      // Debug Information register
} SPDIF_RX_RegDef_t;

// Inter-integrated circuit
typedef struct {
    volatile uint32_t CR1;                      // Control register 1
    volatile uint32_t CR2;                      // Control register 2
    volatile uint32_t OAR1;                     // Own address register 1
    volatile uint32_t OAR2;                     // Own address register 2
    volatile uint32_t TIMINGR;                  // Timing register
    volatile uint32_t TIMEOUTR;                 // Status register 1
    volatile uint32_t ISR;                      // Interrupt and Status register
    volatile uint32_t ICR;                      // Interrupt clear register
    volatile uint32_t PECR;                     // PEC register
    volatile uint32_t RXDR;                     // Receive data register
    volatile uint32_t TXDR;                     // Transmit data register
} I2C_RegDef_t;

// Controller area network
typedef struct {
    volatile uint32_t MCR;                      // master control register
    volatile uint32_t MSR;                      // master status register
    volatile uint32_t TSR;                      // transmit status register
    volatile uint32_t RF0R;                     // receive FIFO 0 register
    volatile uint32_t RF1R;                     // receive FIFO 1 register
    volatile uint32_t IER;                      // interrupt enable register
    volatile uint32_t ESR;                      // interrupt enable register
    volatile uint32_t BTR;                      // bit timing register
	uint32_t __reserved0[88];
    volatile uint32_t TI0R;                     // TX mailbox identifier register
    volatile uint32_t TDT0R;                    // mailbox data length control and time stamp register
    volatile uint32_t TDL0R;                    // mailbox data low register
    volatile uint32_t TDH0R;                    // mailbox data high register
    volatile uint32_t TI1R;                     // mailbox identifier register
    volatile uint32_t TDT1R;                    // mailbox data length control and time stamp register
    volatile uint32_t TDL1R;                    // mailbox data low register
    volatile uint32_t TDH1R;                    // mailbox data high register
    volatile uint32_t TI2R;                     // mailbox identifier register
    volatile uint32_t TDT2R;                    // mailbox data length control and time stamp register
    volatile uint32_t TDL2R;                    // mailbox data low register
    volatile uint32_t TDH2R;                    // mailbox data high register
    volatile uint32_t RI0R;                     // receive FIFO mailbox identifier register
    volatile uint32_t RDT0R;                    // mailbox data high register
    volatile uint32_t RDL0R;                    // mailbox data high register
    volatile uint32_t RDH0R;                    // receive FIFO mailbox data high register
    volatile uint32_t RI1R;                     // mailbox data high register
    volatile uint32_t RDT1R;                    // mailbox data high register
    volatile uint32_t RDL1R;                    // mailbox data high register
    volatile uint32_t RDH1R;                    // mailbox data high register
	uint32_t __reserved1[12];
    volatile uint32_t FMR;                      // filter master register
    volatile uint32_t FM1R;                     // filter mode register
	uint32_t __reserved2[1];
    volatile uint32_t FS1R;                     // filter scale register
	uint32_t __reserved3[1];
    volatile uint32_t FFA1R;                    // filter FIFO assignment register
	uint32_t __reserved4[1];
    volatile uint32_t FA1R;                     // filter activation register
	uint32_t __reserved5[8];
    volatile uint32_t F0R1;                     // Filter bank 0 register 1
    volatile uint32_t F0R2;                     // Filter bank 0 register 2
    volatile uint32_t F1R1;                     // Filter bank 1 register 1
    volatile uint32_t F1R2;                     // Filter bank 1 register 2
    volatile uint32_t F2R1;                     // Filter bank 2 register 1
    volatile uint32_t F2R2;                     // Filter bank 2 register 2
    volatile uint32_t F3R1;                     // Filter bank 3 register 1
    volatile uint32_t F3R2;                     // Filter bank 3 register 2
    volatile uint32_t F4R1;                     // Filter bank 4 register 1
    volatile uint32_t F4R2;                     // Filter bank 4 register 2
    volatile uint32_t F5R1;                     // Filter bank 5 register 1
    volatile uint32_t F5R2;                     // Filter bank 5 register 2
    volatile uint32_t F6R1;                     // Filter bank 6 register 1
    volatile uint32_t F6R2;                     // Filter bank 6 register 2
    volatile uint32_t F7R1;                     // Filter bank 7 register 1
    volatile uint32_t F7R2;                     // Filter bank 7 register 2
    volatile uint32_t F8R1;                     // Filter bank 8 register 1
    volatile uint32_t F8R2;                     // Filter bank 8 register 2
    volatile uint32_t F9R1;                     // Filter bank 9 register 1
    volatile uint32_t F9R2;                     // Filter bank 9 register 2
    volatile uint32_t F10R1;                    // Filter bank 10 register 1
    volatile uint32_t F10R2;                    // Filter bank 10 register 2
    volatile uint32_t F11R1;                    // Filter bank 11 register 1
    volatile uint32_t F11R2;                    // Filter bank 11 register 2
    volatile uint32_t F12R1;                    // Filter bank 4 register 1
    volatile uint32_t F12R2;                    // Filter bank 12 register 2
    volatile uint32_t F13R1;                    // Filter bank 13 register 1
    volatile uint32_t F13R2;                    // Filter bank 13 register 2
    volatile uint32_t F14R1;                    // Filter bank 14 register 1
    volatile uint32_t F14R2;                    // Filter bank 14 register 2
    volatile uint32_t F15R1;                    // Filter bank 15 register 1
    volatile uint32_t F15R2;                    // Filter bank 15 register 2
    volatile uint32_t F16R1;                    // Filter bank 16 register 1
    volatile uint32_t F16R2;                    // Filter bank 16 register 2
    volatile uint32_t F17R1;                    // Filter bank 17 register 1
    volatile uint32_t F17R2;                    // Filter bank 17 register 2
    volatile uint32_t F18R1;                    // Filter bank 18 register 1
    volatile uint32_t F18R2;                    // Filter bank 18 register 2
    volatile uint32_t F19R1;                    // Filter bank 19 register 1
    volatile uint32_t F19R2;                    // Filter bank 19 register 2
    volatile uint32_t F20R1;                    // Filter bank 20 register 1
    volatile uint32_t F20R2;                    // Filter bank 20 register 2
    volatile uint32_t F21R1;                    // Filter bank 21 register 1
    volatile uint32_t F21R2;                    // Filter bank 21 register 2
    volatile uint32_t F22R1;                    // Filter bank 22 register 1
    volatile uint32_t F22R2;                    // Filter bank 22 register 2
    volatile uint32_t F23R1;                    // Filter bank 23 register 1
    volatile uint32_t F23R2;                    // Filter bank 23 register 2
    volatile uint32_t F24R1;                    // Filter bank 24 register 1
    volatile uint32_t F24R2;                    // Filter bank 24 register 2
    volatile uint32_t F25R1;                    // Filter bank 25 register 1
    volatile uint32_t F25R2;                    // Filter bank 25 register 2
    volatile uint32_t F26R1;                    // Filter bank 26 register 1
    volatile uint32_t F26R2;                    // Filter bank 26 register 2
    volatile uint32_t F27R1;                    // Filter bank 27 register 1
    volatile uint32_t F27R2;                    // Filter bank 27 register 2
} CAN_RegDef_t;

// HDMI-CEC controller
typedef struct {
    volatile uint32_t CR;                       // control register
    volatile uint32_t CFGR;                     // configuration register
    volatile uint32_t TXDR;                     // Tx data register
    volatile uint32_t RXDR;                     // Rx Data Register
    volatile uint32_t ISR;                      // Interrupt and Status Register
    volatile uint32_t IER;                      // interrupt enable register
} CEC_RegDef_t;

// Power control
typedef struct {
    volatile uint32_t CR1;                      // power control register
    volatile uint32_t CSR1;                     // power control/status register
    volatile uint32_t CR2;                      // power control register
    volatile uint32_t CSR2;                     // power control/status register
} PWR_RegDef_t;

// Digital-to-analog converter
typedef struct {
    volatile uint32_t CR;                       // control register
    volatile uint32_t SWTRIGR;                  // software trigger register
    volatile uint32_t DHR12R1;                  // channel1 12-bit right-aligned data holding register
    volatile uint32_t DHR12L1;                  // channel1 12-bit left aligned data holding register
    volatile uint32_t DHR8R1;                   // channel1 8-bit right aligned data holding register
    volatile uint32_t DHR12R2;                  // channel2 12-bit right aligned data holding register
    volatile uint32_t DHR12L2;                  // channel2 12-bit left aligned data holding register
    volatile uint32_t DHR8R2;                   // channel2 8-bit right-aligned data holding register
    volatile uint32_t DHR12RD;                  // Dual DAC 12-bit right-aligned data holding register
    volatile uint32_t DHR12LD;                  // DUAL DAC 12-bit left aligned data holding register
    volatile uint32_t DHR8RD;                   // DUAL DAC 8-bit right aligned data holding register
    volatile uint32_t DOR1;                     // channel1 data output register
    volatile uint32_t DOR2;                     // channel2 data output register
    volatile uint32_t SR;                       // status register
} DAC_RegDef_t;

// Advanced-timers
// typedef struct {
//     volatile uint32_t CR1;                      // control register 1
//     volatile uint32_t CR2;                      // control register 2
//     volatile uint32_t SMCR;                     // slave mode control register
//     volatile uint32_t DIER;                     // DMA/Interrupt enable register
//     volatile uint32_t SR;                       // status register
//     volatile uint32_t EGR;                      // event generation register
//     volatile uint32_t CCMR1_Output;             // capture/compare mode register 1 (output mode)
//                                                 // -4.0
//     volatile uint32_t CCMR1_Input;              // capture/compare mode register 1 (input mode)
//     volatile uint32_t CCMR2_Output;             // capture/compare mode register 2 (output mode)
//                                                 // -4.0
//     volatile uint32_t CCMR2_Input;              // capture/compare mode register 2 (input mode)
//     volatile uint32_t CCER;                     // capture/compare enable register
//     volatile uint32_t CNT;                      // counter
//     volatile uint32_t PSC;                      // prescaler
//     volatile uint32_t ARR;                      // auto-reload register
//     uint32_t __reserved0[1];
//     volatile uint32_t CCR1;                     // capture/compare register 1
//     volatile uint32_t CCR2;                     // capture/compare register 2
//     volatile uint32_t CCR3;                     // capture/compare register 3
//     volatile uint32_t CCR4;                     // capture/compare register 4
//     uint32_t __reserved1[1];
//     volatile uint32_t DCR;                      // DMA control register
//     volatile uint32_t DMAR;                     // DMA address for full transfer
//                                                 // -32.0
//     volatile uint32_t RCR;                      // repetition counter register
//     uint32_t __reserved2[4];
//     volatile uint32_t BDTR;                     // break and dead-time register
//     uint32_t __reserved3[3];
//     volatile uint32_t CCMR3_Output;             // capture/compare mode register 3 (output mode)
//     volatile uint32_t CCR5;                     // capture/compare register 5
//     volatile uint32_t CRR6;                     // capture/compare register 6
//     volatile uint32_t AF1;                      // alternate function option register 1
//     volatile uint32_t AF2;                      // alternate function option register 2
// } TIM_RegDef_t;

// Universal synchronous asynchronous receiver      transmitter
typedef struct {
    volatile uint32_t CR1;                      // Control register 1
    volatile uint32_t CR2;                      // Control register 2
    volatile uint32_t CR3;                      // Control register 3
    volatile uint32_t BRR;                      // Baud rate register
    volatile uint32_t GTPR;                     // Guard time and prescaler register
    volatile uint32_t RTOR;                     // Receiver timeout register
    volatile uint32_t RQR;                      // Request register
    volatile uint32_t ISR;                      // Interrupt & status register
    volatile uint32_t ICR;                      // Interrupt flag clear register
    volatile uint32_t RDR;                      // Receive data register
    volatile uint32_t TDR;                      // Transmit data register
} USART_RegDef_t;

// Analog-to-digital converter
typedef struct {
    volatile uint32_t SR;                       // status register
    volatile uint32_t CR1;                      // control register 1
    volatile uint32_t CR2;                      // control register 2
    volatile uint32_t SMPR1;                    // sample time register 1
    volatile uint32_t SMPR2;                    // sample time register 2
    volatile uint32_t JOFR1;                    // injected channel data offset register x
    volatile uint32_t JOFR2;                    // injected channel data offset register x
    volatile uint32_t JOFR3;                    // injected channel data offset register x
    volatile uint32_t JOFR4;                    // injected channel data offset register x
    volatile uint32_t HTR;                      // watchdog higher threshold register
    volatile uint32_t LTR;                      // watchdog lower threshold register
    volatile uint32_t SQR1;                     // regular sequence register 1
    volatile uint32_t SQR2;                     // regular sequence register 2
    volatile uint32_t SQR3;                     // regular sequence register 3
    volatile uint32_t JSQR;                     // injected sequence register
    volatile uint32_t JDR1;                     // injected data register x
    volatile uint32_t JDR2;                     // injected data register x
    volatile uint32_t JDR3;                     // injected data register x
    volatile uint32_t JDR4;                     // injected data register x
    volatile uint32_t DR;                       // regular data register
} ADC_RegDef_t;

// Secure digital input/output      interface
typedef struct {
    volatile uint32_t POWER;                    // power control register
    volatile uint32_t CLKCR;                    // SDI clock control register
    volatile uint32_t ARG;                      // argument register
    volatile uint32_t CMD;                      // command register
    volatile uint32_t RESPCMD;                  // command response register
    volatile uint32_t RESP1;                    // response 1..4 register
    volatile uint32_t RESP2;                    // response 1..4 register
    volatile uint32_t RESP3;                    // response 1..4 register
    volatile uint32_t RESP4;                    // response 1..4 register
    volatile uint32_t DTIMER;                   // data timer register
    volatile uint32_t DLEN;                     // data length register
    volatile uint32_t DCTRL;                    // data control register
    volatile uint32_t DCOUNT;                   // data counter register
    volatile uint32_t STA;                      // status register
    volatile uint32_t ICR;                      // interrupt clear register
    volatile uint32_t MASK;                     // mask register
	uint32_t __reserved0[2];
    volatile uint32_t FIFOCNT;                  // FIFO counter register
	uint32_t __reserved1[13];
    volatile uint32_t FIFO;                     // data FIFO register
} SDMMC_RegDef_t;

// System configuration controller
typedef struct {
    volatile uint32_t MEMRM;                    // memory remap register
    volatile uint32_t PMC;                      // peripheral mode configuration register
    volatile uint32_t EXTICR[4];                  // external interrupt configuration register 1
    // volatile uint32_t EXTICR2;                  // external interrupt configuration register 2
    // volatile uint32_t EXTICR3;                  // external interrupt configuration register 3
    // volatile uint32_t EXTICR4;                  // external interrupt configuration register 4
	uint32_t __reserved0[2];
    volatile uint32_t CMPCR;                    // Compensation cell control register
} SYSCFG_RegDef_t;

// External interrupt/event      controller
typedef struct {
    volatile uint32_t IMR;                      // Interrupt mask register (EXTI_IMR)
    volatile uint32_t EMR;                      // Event mask register (EXTI_EMR)
    volatile uint32_t RTSR;                     // Rising Trigger selection register (EXTI_RTSR)
    volatile uint32_t FTSR;                     // Falling Trigger selection register (EXTI_FTSR)
    volatile uint32_t SWIER;                    // Software interrupt event register (EXTI_SWIER)
    volatile uint32_t PR;                       // Pending register (EXTI_PR)
} EXTI_RegDef_t;

// General purpose timers
// typedef struct {
//     volatile uint32_t CR1;                      // control register 1
//     uint32_t __reserved0[1];
//     volatile uint32_t SMCR;                     // slave mode control register
//     volatile uint32_t DIER;                     // DMA/Interrupt enable register
//     volatile uint32_t SR;                       // status register
//     volatile uint32_t EGR;                      // event generation register
//     volatile uint32_t CCMR1_Output;             // capture/compare mode register 1 (output mode)
//                                                 // -4.0
//     volatile uint32_t CCMR1_Input;              // capture/compare mode register 1 (input mode)
//     uint32_t __reserved1[1];
//     volatile uint32_t CCER;                     // capture/compare enable register
//     volatile uint32_t CNT;                      // counter
//     volatile uint32_t PSC;                      // prescaler
//     volatile uint32_t ARR;                      // auto-reload register
//     uint32_t __reserved2[1];
//     volatile uint32_t CCR1;                     // capture/compare register 1
//     volatile uint32_t CCR2;                     // capture/compare register 2
// } TIM_RegDef_t;

// General-purpose-timers
// typedef struct {
//     volatile uint32_t CR1;                      // control register 1
//     uint32_t __reserved0[2];
//     volatile uint32_t DIER;                     // DMA/Interrupt enable register
//     volatile uint32_t SR;                       // status register
//     volatile uint32_t EGR;                      // event generation register
//     volatile uint32_t CCMR1_Output;             // capture/compare mode register 1 (output mode)
//                                                 // -4.0
//     volatile uint32_t CCMR1_Input;              // capture/compare mode register 1 (input mode)
//     uint32_t __reserved1[1];
//     volatile uint32_t CCER;                     // capture/compare enable register
//     volatile uint32_t CNT;                      // counter
//     volatile uint32_t PSC;                      // prescaler
//     volatile uint32_t ARR;                      // auto-reload register
//     uint32_t __reserved2[1];
//     volatile uint32_t CCR1;                     // capture/compare register 1
//                                                 // -48.0
//     volatile uint32_t SMCR;                     // slave mode control register
//     uint32_t __reserved3[17];
//     volatile uint32_t OR;                       // option register
// } TIM_RegDef_t;

// Serial peripheral interface
typedef struct {
    volatile uint32_t CR1;                      // control register 1
    volatile uint32_t CR2;                      // control register 2
    volatile uint32_t SR;                       // status register
    volatile uint32_t DR;                       // data register
    volatile uint32_t CRCPR;                    // CRC polynomial register
    volatile uint32_t RXCRCR;                   // RX CRC register
    volatile uint32_t TXCRCR;                   // TX CRC register
    volatile uint32_t I2SCFGR;                  // I2S configuration register
    volatile uint32_t I2SPR;                    // I2S prescaler register
} SPI_RegDef_t;

// Serial audio interface
typedef struct {
	uint32_t __reserved0[9];
    volatile uint32_t BCR1;                     // BConfiguration register 1
    volatile uint32_t BCR2;                     // BConfiguration register 2
    volatile uint32_t BFRCR;                    // BFRCR
    volatile uint32_t BSLOTR;                   // BSlot register
    volatile uint32_t BIM;                      // BInterrupt mask register2
    volatile uint32_t BSR;                      // BStatus register
    volatile uint32_t BCLRFR;                   // BClear flag register
    volatile uint32_t BDR;                      // BData register
												// -64.0
    volatile uint32_t ACR1;                     // AConfiguration register 1
    volatile uint32_t ACR2;                     // AConfiguration register 2
    volatile uint32_t AFRCR;                    // AFRCR
    volatile uint32_t ASLOTR;                   // ASlot register
    volatile uint32_t AIM;                      // AInterrupt mask register2
    volatile uint32_t ASR;                      // AStatus register
    volatile uint32_t ACLRFR;                   // AClear flag register
    volatile uint32_t ADR;                      // AData register
												// -36.0
    volatile uint32_t GCR;                      // Global configuration register
} SAI_RegDef_t;

// LCD-TFT Controller
typedef struct {
	uint32_t __reserved0[2];
    volatile uint32_t SSCR;                     // Synchronization Size Configuration Register
    volatile uint32_t BPCR;                     // Back Porch Configuration Register
    volatile uint32_t AWCR;                     // Active Width Configuration Register
    volatile uint32_t TWCR;                     // Total Width Configuration Register
    volatile uint32_t GCR;                      // Global Control Register
	uint32_t __reserved1[2];
    volatile uint32_t SRCR;                     // Shadow Reload Configuration Register
	uint32_t __reserved2[1];
    volatile uint32_t BCCR;                     // Background Color Configuration Register
	uint32_t __reserved3[1];
    volatile uint32_t IER;                      // Interrupt Enable Register
    volatile uint32_t ISR;                      // Interrupt Status Register
    volatile uint32_t ICR;                      // Interrupt Clear Register
    volatile uint32_t LIPCR;                    // Line Interrupt Position Configuration Register
    volatile uint32_t CPSR;                     // Current Position Status Register
    volatile uint32_t CDSR;                     // Current Display Status Register
	uint32_t __reserved4[14];
    volatile uint32_t L1CR;                     // Layerx Control Register
    volatile uint32_t L1WHPCR;                  // Layerx Window Horizontal Position Configuration Register
    volatile uint32_t L1WVPCR;                  // Layerx Window Vertical Position Configuration Register
    volatile uint32_t L1CKCR;                   // Layerx Color Keying Configuration Register
    volatile uint32_t L1PFCR;                   // Layerx Pixel Format Configuration Register
    volatile uint32_t L1CACR;                   // Layerx Constant Alpha Configuration Register
    volatile uint32_t L1DCCR;                   // Layerx Default Color Configuration Register
    volatile uint32_t L1BFCR;                   // Layerx Blending Factors Configuration Register
	uint32_t __reserved5[2];
    volatile uint32_t L1CFBAR;                  // Layerx Color Frame Buffer Address Register
    volatile uint32_t L1CFBLR;                  // Layerx Color Frame Buffer Length Register
    volatile uint32_t L1CFBLNR;                 // Layerx ColorFrame Buffer Line Number Register
	uint32_t __reserved6[3];
    volatile uint32_t L1CLUTWR;                 // Layerx CLUT Write Register
	uint32_t __reserved7[15];
    volatile uint32_t L2CR;                     // Layerx Control Register
    volatile uint32_t L2WHPCR;                  // Layerx Window Horizontal Position Configuration Register
    volatile uint32_t L2WVPCR;                  // Layerx Window Vertical Position Configuration Register
    volatile uint32_t L2CKCR;                   // Layerx Color Keying Configuration Register
    volatile uint32_t L2PFCR;                   // Layerx Pixel Format Configuration Register
    volatile uint32_t L2CACR;                   // Layerx Constant Alpha Configuration Register
    volatile uint32_t L2DCCR;                   // Layerx Default Color Configuration Register
    volatile uint32_t L2BFCR;                   // Layerx Blending Factors Configuration Register
	uint32_t __reserved8[2];
    volatile uint32_t L2CFBAR;                  // Layerx Color Frame Buffer Address Register
    volatile uint32_t L2CFBLR;                  // Layerx Color Frame Buffer Length Register
    volatile uint32_t L2CFBLNR;                 // Layerx ColorFrame Buffer Line Number Register
	uint32_t __reserved9[3];
    volatile uint32_t L2CLUTWR;                 // Layerx CLUT Write Register
} LTDC_RegDef_t;

// DSI Host
typedef struct {
    volatile uint32_t DSI_VR;                   // DSI Host Version Register
    volatile uint32_t DSI_CR;                   // DSI Host Control Register
    volatile uint32_t DSI_CCR;                  // DSI HOST Clock Control Register
    volatile uint32_t DSI_LVCIDR;               // DSI Host LTDC VCID Register
    volatile uint32_t DSI_LCOLCR;               // DSI Host LTDC Color Coding Register
    volatile uint32_t DSI_LPCR;                 // DSI Host LTDC Polarity Configuration Register
    volatile uint32_t DSI_LPMCR;                // DSI Host Low-Power mode Configuration Register
	uint32_t __reserved0[4];
    volatile uint32_t DSI_PCR;                  // DSI Host Protocol Configuration Register
    volatile uint32_t DSI_GVCIDR;               // DSI Host Generic VCID Register
    volatile uint32_t DSI_MCR;                  // DSI Host mode Configuration Register
    volatile uint32_t DSI_VMCR;                 // DSI Host Video mode Configuration Register
    volatile uint32_t DSI_VPCR;                 // DSI Host Video Packet Configuration Register
    volatile uint32_t DSI_VCCR;                 // DSI Host Video Chunks Configuration Register
    volatile uint32_t DSI_VNPCR;                // DSI Host Video Null Packet Configuration Register
    volatile uint32_t DSI_VHSACR;               // DSI Host Video HSA Configuration Register
    volatile uint32_t DSI_VHBPCR;               // DSI Host Video HBP Configuration Register
    volatile uint32_t DSI_VLCR;                 // DSI Host Video Line Configuration Register
    volatile uint32_t DSI_VVSACR;               // DSI Host Video VSA Configuration Register
    volatile uint32_t DSI_VVBPCR;               // DSI Host Video VBP Configuration Register
    volatile uint32_t DSI_VVFPCR;               // DSI Host Video VFP Configuration Register
    volatile uint32_t DSI_VVACR;                // DSI Host Video VA Configuration Register
    volatile uint32_t DSI_LCCR;                 // DSI Host LTDC Command Configuration Register
    volatile uint32_t DSI_CMCR;                 // DSI Host Command mode Configuration Register
    volatile uint32_t DSI_GHCR;                 // DSI Host Generic Header Configuration Register
    volatile uint32_t DSI_GPDR;                 // DSI Host Generic Payload Data Register
    volatile uint32_t DSI_GPSR;                 // DSI Host Generic Packet Status Register
    volatile uint32_t DSI_TCCR0;                // DSI Host Timeout Counter Configuration Register 0
    volatile uint32_t DSI_TCCR1;                // DSI Host Timeout Counter Configuration Register 1
    volatile uint32_t DSI_TCCR2;                // DSI Host Timeout Counter Configuration Register 2
    volatile uint32_t DSI_TCCR3;                // DSI Host Timeout Counter Configuration Register 3
    volatile uint32_t DSI_TCCR4;                // DSI Host Timeout Counter Configuration Register 4
    volatile uint32_t DSI_TCCR5;                // DSI Host Timeout Counter Configuration Register 5
	uint32_t __reserved1[1];
    volatile uint32_t DSI_CLCR;                 // DSI Host Clock Lane Configuration Register
    volatile uint32_t DSI_CLTCR;                // DSI Host Clock Lane Timer Configuration Register
    volatile uint32_t DSI_DLTCR;                // DSI Host Data Lane Timer Configuration Register
    volatile uint32_t DSI_PCTLR;                // DSI Host PHY Control Register
    volatile uint32_t DSI_PCONFR;               // DSI Host PHY Configuration Register
    volatile uint32_t DSI_PUCR;                 // DSI Host PHY ULPS Control Register
    volatile uint32_t DSI_PTTCR;                // DSI Host PHY TX Triggers Configuration Register
    volatile uint32_t DSI_PSR;                  // DSI Host PHY Status Register
	uint32_t __reserved2[2];
    volatile uint32_t DSI_ISR0;                 // DSI Host Interrupt & Status Register 0
    volatile uint32_t DSI_ISR1;                 // DSI Host Interrupt & Status Register 1
    volatile uint32_t DSI_IER0;                 // DSI Host Interrupt Enable Register 0
    volatile uint32_t DSI_IER1;                 // DSI Host Interrupt Enable Register 1
	uint32_t __reserved3[3];
    volatile uint32_t DSI_FIR0;                 // DSI Host Force Interrupt Register 0
    volatile uint32_t DSI_FIR1;                 // DSI Host Force Interrupt Register 1
	uint32_t __reserved4[8];
    volatile uint32_t DSI_VSCR;                 // DSI Host Video Shadow Control Register
	uint32_t __reserved5[2];
    volatile uint32_t DSI_LCVCIDR;              // DSI Host LTDC Current VCID Register
    volatile uint32_t DSI_LCCCR;                // DSI Host LTDC Current Color Coding Register
	uint32_t __reserved6[1];
    volatile uint32_t DSI_LPMCCR;               // DSI Host Low-Power mode Current Configuration Register
	uint32_t __reserved7[7];
    volatile uint32_t DSI_VMCCR;                // DSI Host Video mode Current Configuration Register
    volatile uint32_t DSI_VPCCR;                // DSI Host Video Packet Current Configuration Register
    volatile uint32_t DSI_VCCCR;                // DSI Host Video Chunks Current Configuration Register
    volatile uint32_t DSI_VNPCCR;               // DSI Host Video Null Packet Current Configuration Register
    volatile uint32_t DSI_VHSACCR;              // DSI Host Video HSA Current Configuration Register
    volatile uint32_t DSI_VHBPCCR;              // DSI Host Video HBP Current Configuration Register
    volatile uint32_t DSI_VLCCR;                // DSI Host Video Line Current Configuration Register
    volatile uint32_t DSI_VVSACCR;              // DSI Host Video VSA Current Configuration Register
    volatile uint32_t DSI_VVBPCCR;              // DSI Host Video VBP Current Configuration Register
    volatile uint32_t DSI_VVFPCCR;              // DSI Host Video VFP Current Configuration Register
    volatile uint32_t DSI_VVACCR;               // DSI Host Video VA Current Configuration Register
	uint32_t __reserved8[167];
    volatile uint32_t DSI_WCFGR;                // DSI Wrapper Configuration Register
    volatile uint32_t DSI_WCR;                  // DSI Wrapper Control Register
    volatile uint32_t DSI_WIER;                 // DSI Wrapper Interrupt Enable Register
    volatile uint32_t DSI_WISR;                 // DSI Wrapper Interrupt & Status Register
    volatile uint32_t DSI_WIFCR;                // DSI Wrapper Interrupt Flag Clear Register
	uint32_t __reserved9[1];
    volatile uint32_t DSI_WPCR1;                // DSI Wrapper PHY Configuration Register 1
    volatile uint32_t DSI_WPCR2;                // DSI Wrapper PHY Configuration Register 2
    volatile uint32_t DSI_WPCR3;                // DSI Wrapper PHY Configuration Register 3
    volatile uint32_t DSI_WPCR4;                // DSI_WPCR4
    volatile uint32_t DSI_WPCR5;                // DSI Wrapper PHY Configuration Register 5
	uint32_t __reserved10[1];
    volatile uint32_t DSI_WRPCR;                // DSI Wrapper Regulator and PLL Control Register
} DSI_RegDef_t;

// Digital filter for sigma delta      modulators
typedef struct {
    volatile uint32_t DFSDM_CHCFG0R1;           // DFSDM channel configuration 0 register 1
	uint32_t __reserved0[7];
    volatile uint32_t DFSDM_CHCFG1R1;           // DFSDM channel configuration 1 register 1
	uint32_t __reserved1[7];
    volatile uint32_t DFSDM_CHCFG2R1;           // DFSDM channel configuration 2 register 1
	uint32_t __reserved2[7];
    volatile uint32_t DFSDM_CHCFG3R1;           // DFSDM channel configuration 3 register 1
	uint32_t __reserved3[7];
    volatile uint32_t DFSDM_CHCFG4R1;           // DFSDM channel configuration 4 register 1
	uint32_t __reserved4[7];
    volatile uint32_t DFSDM_CHCFG5R1;           // DFSDM channel configuration 5 register 1
	uint32_t __reserved5[7];
    volatile uint32_t DFSDM_CHCFG6R1;           // DFSDM channel configuration 6 register 1
	uint32_t __reserved6[7];
    volatile uint32_t DFSDM_CHCFG7R1;           // DFSDM channel configuration 7 register 1
												// -224.0
    volatile uint32_t DFSDM_CHCFG0R2;           // DFSDM channel configuration 0 register 2
	uint32_t __reserved7[7];
    volatile uint32_t DFSDM_CHCFG1R2;           // DFSDM channel configuration 1 register 2
	uint32_t __reserved8[7];
    volatile uint32_t DFSDM_CHCFG2R2;           // DFSDM channel configuration 2 register 2
	uint32_t __reserved9[7];
    volatile uint32_t DFSDM_CHCFG3R2;           // DFSDM channel configuration 3 register 2
	uint32_t __reserved10[7];
    volatile uint32_t DFSDM_CHCFG4R2;           // DFSDM channel configuration 4 register 2
	uint32_t __reserved11[7];
    volatile uint32_t DFSDM_CHCFG5R2;           // DFSDM channel configuration 5 register 2
	uint32_t __reserved12[7];
    volatile uint32_t DFSDM_CHCFG6R2;           // DFSDM channel configuration 6 register 2
	uint32_t __reserved13[7];
    volatile uint32_t DFSDM_CHCFG7R2;           // DFSDM channel configuration 7 register 2
												// -224.0
    volatile uint32_t DFSDM_AWSCD0R;            // DFSDM analog watchdog and short-circuit detector register
	uint32_t __reserved14[7];
    volatile uint32_t DFSDM_AWSCD1R;            // DFSDM analog watchdog and short-circuit detector register
	uint32_t __reserved15[7];
    volatile uint32_t DFSDM_AWSCD2R;            // DFSDM analog watchdog and short-circuit detector register
	uint32_t __reserved16[7];
    volatile uint32_t DFSDM_AWSCD3R;            // DFSDM analog watchdog and short-circuit detector register
	uint32_t __reserved17[7];
    volatile uint32_t DFSDM_AWSCD4R;            // DFSDM analog watchdog and short-circuit detector register
	uint32_t __reserved18[7];
    volatile uint32_t DFSDM_AWSCD5R;            // DFSDM analog watchdog and short-circuit detector register
	uint32_t __reserved19[7];
    volatile uint32_t DFSDM_AWSCD6R;            // DFSDM analog watchdog and short-circuit detector register
	uint32_t __reserved20[7];
    volatile uint32_t DFSDM_AWSCD7R;            // DFSDM analog watchdog and short-circuit detector register
												// -224.0
    volatile uint32_t DFSDM_CHWDAT0R;           // DFSDM channel watchdog filter data register
	uint32_t __reserved21[7];
    volatile uint32_t DFSDM_CHWDAT1R;           // DFSDM channel watchdog filter data register
	uint32_t __reserved22[7];
    volatile uint32_t DFSDM_CHWDAT2R;           // DFSDM channel watchdog filter data register
	uint32_t __reserved23[7];
    volatile uint32_t DFSDM_CHWDAT3R;           // DFSDM channel watchdog filter data register
	uint32_t __reserved24[7];
    volatile uint32_t DFSDM_CHWDAT4R;           // DFSDM channel watchdog filter data register
	uint32_t __reserved25[7];
    volatile uint32_t DFSDM_CHWDAT5R;           // DFSDM channel watchdog filter data register
	uint32_t __reserved26[7];
    volatile uint32_t DFSDM_CHWDAT6R;           // DFSDM channel watchdog filter data register
	uint32_t __reserved27[7];
    volatile uint32_t DFSDM_CHWDAT7R;           // DFSDM channel watchdog filter data register
												// -224.0
    volatile uint32_t DFSDM_CHDATIN0R;          // DFSDM channel data input register
	uint32_t __reserved28[7];
    volatile uint32_t DFSDM_CHDATIN1R;          // DFSDM channel data input register
	uint32_t __reserved29[7];
    volatile uint32_t DFSDM_CHDATIN2R;          // DFSDM channel data input register
	uint32_t __reserved30[7];
    volatile uint32_t DFSDM_CHDATIN3R;          // DFSDM channel data input register
	uint32_t __reserved31[7];
    volatile uint32_t DFSDM_CHDATIN4R;          // DFSDM channel data input register
	uint32_t __reserved32[7];
    volatile uint32_t DFSDM_CHDATIN5R;          // DFSDM channel data input register
	uint32_t __reserved33[7];
    volatile uint32_t DFSDM_CHDATIN6R;          // DFSDM channel data input register
	uint32_t __reserved34[7];
    volatile uint32_t DFSDM_CHDATIN7R;          // DFSDM channel data input register
	uint32_t __reserved35[3];
    volatile uint32_t DFSDM0_CR1;               // DFSDM control register 1
	uint32_t __reserved36[31];
    volatile uint32_t DFSDM1_CR1;               // DFSDM control register 1
	uint32_t __reserved37[31];
    volatile uint32_t DFSDM2_CR1;               // DFSDM control register 1
	uint32_t __reserved38[95];
    volatile uint32_t DFSDM3_CR1;               // DFSDM control register 1
												// -640.0
    volatile uint32_t DFSDM0_CR2;               // DFSDM control register 2
	uint32_t __reserved39[31];
    volatile uint32_t DFSDM1_CR2;               // DFSDM control register 2
	uint32_t __reserved40[31];
    volatile uint32_t DFSDM2_CR2;               // DFSDM control register 2
	uint32_t __reserved41[95];
    volatile uint32_t DFSDM3_CR2;               // DFSDM control register 2
												// -640.0
    volatile uint32_t DFSDM0_ISR;               // DFSDM interrupt and status register
	uint32_t __reserved42[31];
    volatile uint32_t DFSDM1_ISR;               // DFSDM interrupt and status register
	uint32_t __reserved43[31];
    volatile uint32_t DFSDM2_ISR;               // DFSDM interrupt and status register
	uint32_t __reserved44[95];
    volatile uint32_t DFSDM3_ISR;               // DFSDM interrupt and status register
												// -640.0
    volatile uint32_t DFSDM0_ICR;               // DFSDM interrupt flag clear register
	uint32_t __reserved45[31];
    volatile uint32_t DFSDM1_ICR;               // DFSDM interrupt flag clear register
	uint32_t __reserved46[31];
    volatile uint32_t DFSDM2_ICR;               // DFSDM interrupt flag clear register
	uint32_t __reserved47[95];
    volatile uint32_t DFSDM3_ICR;               // DFSDM interrupt flag clear register
												// -640.0
    volatile uint32_t DFSDM0_JCHGR;             // DFSDM injected channel group selection register
	uint32_t __reserved48[31];
    volatile uint32_t DFSDM1_JCHGR;             // DFSDM injected channel group selection register
	uint32_t __reserved49[31];
    volatile uint32_t DFSDM2_JCHGR;             // DFSDM injected channel group selection register
	uint32_t __reserved50[63];
    volatile uint32_t DFSDM3_JCHGR;             // DFSDM injected channel group selection register
												// -512.0
    volatile uint32_t DFSDM0_FCR;               // DFSDM filter control register
	uint32_t __reserved51[31];
    volatile uint32_t DFSDM1_FCR;               // DFSDM filter control register
	uint32_t __reserved52[31];
    volatile uint32_t DFSDM2_FCR;               // DFSDM filter control register
	uint32_t __reserved53[63];
    volatile uint32_t DFSDM3_FCR;               // DFSDM filter control register
												// -512.0
    volatile uint32_t DFSDM0_JDATAR;            // DFSDM data register for injected group
	uint32_t __reserved54[31];
    volatile uint32_t DFSDM1_JDATAR;            // DFSDM data register for injected group
	uint32_t __reserved55[31];
    volatile uint32_t DFSDM2_JDATAR;            // DFSDM data register for injected group
	uint32_t __reserved56[63];
    volatile uint32_t DFSDM3_JDATAR;            // DFSDM data register for injected group
												// -512.0
    volatile uint32_t DFSDM0_RDATAR;            // DFSDM data register for the regular channel
	uint32_t __reserved57[30];
    volatile uint32_t DFSDM1_RDATAR;            // DFSDM data register for the regular channel
	uint32_t __reserved58[31];
    volatile uint32_t DFSDM2_RDATAR;            // DFSDM data register for the regular channel
	uint32_t __reserved59[63];
    volatile uint32_t DFSDM3_RDATAR;            // DFSDM data register for the regular channel
												// -508.0
    volatile uint32_t DFSDM0_AWHTR;             // DFSDM analog watchdog high threshold register
	uint32_t __reserved60[31];
    volatile uint32_t DFSDM1_AWHTR;             // DFSDM analog watchdog high threshold register
	uint32_t __reserved61[31];
    volatile uint32_t DFSDM2_AWHTR;             // DFSDM analog watchdog high threshold register
	uint32_t __reserved62[31];
    volatile uint32_t DFSDM3_AWHTR;             // DFSDM analog watchdog high threshold register
												// -384.0
    volatile uint32_t DFSDM0_AWLTR;             // DFSDM analog watchdog low threshold register
	uint32_t __reserved63[31];
    volatile uint32_t DFSDM1_AWLTR;             // DFSDM analog watchdog low threshold register
	uint32_t __reserved64[31];
    volatile uint32_t DFSDM2_AWLTR;             // DFSDM analog watchdog low threshold register
	uint32_t __reserved65[31];
    volatile uint32_t DFSDM3_AWLTR;             // DFSDM analog watchdog low threshold register
												// -384.0
    volatile uint32_t DFSDM0_AWSR;              // DFSDM analog watchdog status register
	uint32_t __reserved66[31];
    volatile uint32_t DFSDM1_AWSR;              // DFSDM analog watchdog status register
	uint32_t __reserved67[31];
    volatile uint32_t DFSDM2_AWSR;              // DFSDM analog watchdog status register
	uint32_t __reserved68[31];
    volatile uint32_t DFSDM3_AWSR;              // DFSDM analog watchdog status register
												// -384.0
    volatile uint32_t DFSDM0_AWCFR;             // DFSDM analog watchdog clear flag register
	uint32_t __reserved69[31];
    volatile uint32_t DFSDM1_AWCFR;             // DFSDM analog watchdog clear flag register
	uint32_t __reserved70[31];
    volatile uint32_t DFSDM2_AWCFR;             // DFSDM analog watchdog clear flag register
	uint32_t __reserved71[31];
    volatile uint32_t DFSDM3_AWCFR;             // DFSDM analog watchdog clear flag register
												// -384.0
    volatile uint32_t DFSDM0_EXMAX;             // DFSDM Extremes detector maximum register
	uint32_t __reserved72[31];
    volatile uint32_t DFSDM1_EXMAX;             // DFSDM Extremes detector maximum register
	uint32_t __reserved73[31];
    volatile uint32_t DFSDM2_EXMAX;             // DFSDM Extremes detector maximum register
	uint32_t __reserved74[31];
    volatile uint32_t DFSDM3_EXMAX;             // DFSDM Extremes detector maximum register
												// -384.0
    volatile uint32_t DFSDM0_EXMIN;             // DFSDM Extremes detector minimum register
	uint32_t __reserved75[31];
    volatile uint32_t DFSDM1_EXMIN;             // DFSDM Extremes detector minimum register
	uint32_t __reserved76[31];
    volatile uint32_t DFSDM2_EXMIN;             // DFSDM Extremes detector minimum register
	uint32_t __reserved77[31];
    volatile uint32_t DFSDM3_EXMIN;             // DFSDM Extremes detector minimum register
												// -384.0
    volatile uint32_t DFSDM0_CNVTIMR;           // DFSDM conversion timer register
	uint32_t __reserved78[31];
    volatile uint32_t DFSDM1_CNVTIMR;           // DFSDM conversion timer register
	uint32_t __reserved79[31];
    volatile uint32_t DFSDM2_CNVTIMR;           // DFSDM conversion timer register
	uint32_t __reserved80[31];
    volatile uint32_t DFSDM3_CNVTIMR;           // DFSDM conversion timer register
} DFSDM_RegDef_t;

// Management data input/output slave
typedef struct {
    volatile uint32_t MDIOS_CR;                 // MDIOS configuration register
    volatile uint32_t MDIOS_WRFR;               // MDIOS write flag register
    volatile uint32_t MDIOS_CWRFR;              // MDIOS clear write flag register
    volatile uint32_t MDIOS_RDFR;               // MDIOS read flag register
    volatile uint32_t MDIOS_CRDFR;              // MDIOS clear read flag register
    volatile uint32_t MDIOS_SR;                 // MDIOS status register
    volatile uint32_t MDIOS_CLRFR;              // MDIOS clear flag register
    volatile uint32_t MDIOS_DINR0;              // MDIOS input data register 0
    volatile uint32_t MDIOS_DINR1;              // MDIOS input data register 1
    volatile uint32_t MDIOS_DINR2;              // MDIOS input data register 2
    volatile uint32_t MDIOS_DINR3;              // MDIOS input data register 3
    volatile uint32_t MDIOS_DINR4;              // MDIOS input data register 4
    volatile uint32_t MDIOS_DINR5;              // MDIOS input data register 5
    volatile uint32_t MDIOS_DINR6;              // MDIOS input data register 6
    volatile uint32_t MDIOS_DINR7;              // MDIOS input data register 7
    volatile uint32_t MDIOS_DINR8;              // MDIOS input data register 8
    volatile uint32_t MDIOS_DINR9;              // MDIOS input data register 9
    volatile uint32_t MDIOS_DINR10;             // MDIOS input data register 10
    volatile uint32_t MDIOS_DINR11;             // MDIOS input data register 11
    volatile uint32_t MDIOS_DINR12;             // MDIOS input data register 12
    volatile uint32_t MDIOS_DINR13;             // MDIOS input data register 13
    volatile uint32_t MDIOS_DINR14;             // MDIOS input data register 14
    volatile uint32_t MDIOS_DINR15;             // MDIOS input data register 15
    volatile uint32_t MDIOS_DINR16;             // MDIOS input data register 16
    volatile uint32_t MDIOS_DINR17;             // MDIOS input data register 17
    volatile uint32_t MDIOS_DINR18;             // MDIOS input data register 18
    volatile uint32_t MDIOS_DINR19;             // MDIOS input data register 19
    volatile uint32_t MDIOS_DINR20;             // MDIOS input data register 20
    volatile uint32_t MDIOS_DINR21;             // MDIOS input data register 21
    volatile uint32_t MDIOS_DINR22;             // MDIOS input data register 22
    volatile uint32_t MDIOS_DINR23;             // MDIOS input data register 23
    volatile uint32_t MDIOS_DINR24;             // MDIOS input data register 24
    volatile uint32_t MDIOS_DINR25;             // MDIOS input data register 25
    volatile uint32_t MDIOS_DINR26;             // MDIOS input data register 26
    volatile uint32_t MDIOS_DINR27;             // MDIOS input data register 27
    volatile uint32_t MDIOS_DINR28;             // MDIOS input data register 28
    volatile uint32_t MDIOS_DINR29;             // MDIOS input data register 29
    volatile uint32_t MDIOS_DINR30;             // MDIOS input data register 30
    volatile uint32_t MDIOS_DINR31;             // MDIOS input data register 31
    volatile uint32_t MDIOS_DOUTR0;             // MDIOS output data register 0
    volatile uint32_t MDIOS_DOUTR1;             // MDIOS output data register 1
    volatile uint32_t MDIOS_DOUTR2;             // MDIOS output data register 2
    volatile uint32_t MDIOS_DOUTR3;             // MDIOS output data register 3
    volatile uint32_t MDIOS_DOUTR4;             // MDIOS output data register 4
    volatile uint32_t MDIOS_DOUTR5;             // MDIOS output data register 5
    volatile uint32_t MDIOS_DOUTR6;             // MDIOS output data register 6
    volatile uint32_t MDIOS_DOUTR7;             // MDIOS output data register 7
    volatile uint32_t MDIOS_DOUTR8;             // MDIOS output data register 8
    volatile uint32_t MDIOS_DOUTR9;             // MDIOS output data register 9
    volatile uint32_t MDIOS_DOUTR10;            // MDIOS output data register 10
    volatile uint32_t MDIOS_DOUTR11;            // MDIOS output data register 11
    volatile uint32_t MDIOS_DOUTR12;            // MDIOS output data register 12
    volatile uint32_t MDIOS_DOUTR13;            // MDIOS output data register 13
    volatile uint32_t MDIOS_DOUTR14;            // MDIOS output data register 14
    volatile uint32_t MDIOS_DOUTR15;            // MDIOS output data register 15
    volatile uint32_t MDIOS_DOUTR16;            // MDIOS output data register 16
    volatile uint32_t MDIOS_DOUTR17;            // MDIOS output data register 17
    volatile uint32_t MDIOS_DOUTR18;            // MDIOS output data register 18
    volatile uint32_t MDIOS_DOUTR19;            // MDIOS output data register 19
    volatile uint32_t MDIOS_DOUTR20;            // MDIOS output data register 20
    volatile uint32_t MDIOS_DOUTR21;            // MDIOS output data register 21
    volatile uint32_t MDIOS_DOUTR22;            // MDIOS output data register 22
    volatile uint32_t MDIOS_DOUTR23;            // MDIOS output data register 23
    volatile uint32_t MDIOS_DOUTR24;            // MDIOS output data register 24
    volatile uint32_t MDIOS_DOUTR25;            // MDIOS output data register 25
    volatile uint32_t MDIOS_DOUTR26;            // MDIOS output data register 26
    volatile uint32_t MDIOS_DOUTR27;            // MDIOS output data register 27
    volatile uint32_t MDIOS_DOUTR28;            // MDIOS output data register 28
    volatile uint32_t MDIOS_DOUTR29;            // MDIOS output data register 29
    volatile uint32_t MDIOS_DOUTR30;            // MDIOS output data register 30
    volatile uint32_t MDIOS_DOUTR31;            // MDIOS output data register 31
} MDIOS_RegDef_t;

// General-purpose I/Os
typedef struct {
    volatile uint32_t MODER;                    // GPIO port mode register
    volatile uint32_t OTYPER;                   // GPIO port output type register
    volatile uint32_t OSPEEDR;                  // GPIO port output speed register
    volatile uint32_t PUPDR;                    // GPIO port pull-up/pull-down register
    volatile uint32_t IDR;                      // GPIO port input data register
    volatile uint32_t ODR;                      // GPIO port output data register
    volatile uint32_t BSRR;                     // GPIO port bit set/reset register
    volatile uint32_t LCKR;                     // GPIO port configuration lock register
    volatile uint32_t AFRL;                     // GPIO alternate function low register
    volatile uint32_t AFRH;                     // GPIO alternate function high register
    volatile uint32_t BRR;                      // GPIO port bit reset register
} GPIO_RegDef_t;

// General-purpose I/Os
// typedef struct {
//     volatile uint32_t MODER;                    // GPIO port mode register
//     volatile uint32_t OTYPER;                   // GPIO port output type register
//     volatile uint32_t GPIOB_OSPEEDR;            // GPIO port output speed register
//     volatile uint32_t PUPDR;                    // GPIO port pull-up/pull-down register
//     volatile uint32_t IDR;                      // GPIO port input data register
//     volatile uint32_t ODR;                      // GPIO port output data register
//     volatile uint32_t BSRR;                     // GPIO port bit set/reset register
//     volatile uint32_t LCKR;                     // GPIO port configuration lock register
//     volatile uint32_t AFRL;                     // GPIO alternate function lowregister
//     volatile uint32_t AFRH;                     // GPIO alternate function high register
//     volatile uint32_t BRR;                      // GPIO port bit reset register
// } GPIO_RegDef_t;

// Cryptographic processor
typedef struct {
    volatile uint32_t DR;                       // Data register
    volatile uint32_t IDR;                      // Independent Data register
    volatile uint32_t CR;                       // Control register
    volatile uint32_t INIT;                     // Initial CRC value
    volatile uint32_t POL;                      // CRC polynomial
} CRC_RegDef_t;

// Reset and clock control
typedef struct {
    volatile uint32_t CR;                       // clock control register
    volatile uint32_t PLLCFGR;                  // PLL configuration register
    volatile uint32_t CFGR;                     // clock configuration register
    volatile uint32_t CIR;                      // clock interrupt register
    volatile uint32_t AHB1RSTR;                 // AHB1 peripheral reset register
    volatile uint32_t AHB2RSTR;                 // AHB2 peripheral reset register
    volatile uint32_t AHB3RSTR;                 // AHB3 peripheral reset register
	uint32_t __reserved0[1];
    volatile uint32_t APB1RSTR;                 // APB1 peripheral reset register
    volatile uint32_t APB2RSTR;                 // APB2 peripheral reset register
	uint32_t __reserved1[2];
    volatile uint32_t AHB1ENR;                  // AHB1 peripheral clock register
    volatile uint32_t AHB2ENR;                  // AHB2 peripheral clock enable register
    volatile uint32_t AHB3ENR;                  // AHB3 peripheral clock enable register
	uint32_t __reserved2[1];
    volatile uint32_t APB1ENR;                  // APB1 peripheral clock enable register
    volatile uint32_t APB2ENR;                  // APB2 peripheral clock enable register
	uint32_t __reserved3[2];
    volatile uint32_t AHB1LPENR;                // AHB1 peripheral clock enable in low power mode register
    volatile uint32_t AHB2LPENR;                // AHB2 peripheral clock enable in low power mode register
    volatile uint32_t AHB3LPENR;                // AHB3 peripheral clock enable in low power mode register
	uint32_t __reserved4[1];
    volatile uint32_t APB1LPENR;                // APB1 peripheral clock enable in low power mode register
    volatile uint32_t APB2LPENR;                // APB2 peripheral clock enabled in low power mode register
	uint32_t __reserved5[2];
    volatile uint32_t BDCR;                     // Backup domain control register
    volatile uint32_t CSR;                      // clock control & status register
	uint32_t __reserved6[2];
    volatile uint32_t SSCGR;                    // spread spectrum clock generation register
    volatile uint32_t PLLI2SCFGR;               // PLLI2S configuration register
    volatile uint32_t PLLSAICFGR;               // PLL configuration register
    volatile uint32_t DKCFGR1;                  // dedicated clocks configuration register
    volatile uint32_t DKCFGR2;                  // dedicated clocks configuration register
} RCC_RegDef_t;

// FLASH
typedef struct {
    volatile uint32_t ACR;                      // Flash access control register
    volatile uint32_t KEYR;                     // Flash key register
    volatile uint32_t OPTKEYR;                  // Flash option key register
    volatile uint32_t SR;                       // Status register
    volatile uint32_t CR;                       // Control register
    volatile uint32_t OPTCR;                    // Flash option control register
    volatile uint32_t OPTCR1;                   // Flash option control register 1
} FLASH_RegDef_t;

// DMA controller
typedef struct {
    volatile uint32_t LISR;                     // low interrupt status register
    volatile uint32_t HISR;                     // high interrupt status register
    volatile uint32_t LIFCR;                    // low interrupt flag clear register
    volatile uint32_t HIFCR;                    // high interrupt flag clear register
    volatile uint32_t S0CR;                     // stream x configuration register
    volatile uint32_t S0NDTR;                   // stream x number of data register
    volatile uint32_t S0PAR;                    // stream x peripheral address register
    volatile uint32_t S0M0AR;                   // stream x memory 0 address register
    volatile uint32_t S0M1AR;                   // stream x memory 1 address register
    volatile uint32_t S0FCR;                    // stream x FIFO control register
    volatile uint32_t S1CR;                     // stream x configuration register
    volatile uint32_t S1NDTR;                   // stream x number of data register
    volatile uint32_t S1PAR;                    // stream x peripheral address register
    volatile uint32_t S1M0AR;                   // stream x memory 0 address register
    volatile uint32_t S1M1AR;                   // stream x memory 1 address register
    volatile uint32_t S1FCR;                    // stream x FIFO control register
    volatile uint32_t S2CR;                     // stream x configuration register
    volatile uint32_t S2NDTR;                   // stream x number of data register
    volatile uint32_t S2PAR;                    // stream x peripheral address register
    volatile uint32_t S2M0AR;                   // stream x memory 0 address register
    volatile uint32_t S2M1AR;                   // stream x memory 1 address register
    volatile uint32_t S2FCR;                    // stream x FIFO control register
    volatile uint32_t S3CR;                     // stream x configuration register
    volatile uint32_t S3NDTR;                   // stream x number of data register
    volatile uint32_t S3PAR;                    // stream x peripheral address register
    volatile uint32_t S3M0AR;                   // stream x memory 0 address register
    volatile uint32_t S3M1AR;                   // stream x memory 1 address register
    volatile uint32_t S3FCR;                    // stream x FIFO control register
    volatile uint32_t S4CR;                     // stream x configuration register
    volatile uint32_t S4NDTR;                   // stream x number of data register
    volatile uint32_t S4PAR;                    // stream x peripheral address register
    volatile uint32_t S4M0AR;                   // stream x memory 0 address register
    volatile uint32_t S4M1AR;                   // stream x memory 1 address register
    volatile uint32_t S4FCR;                    // stream x FIFO control register
    volatile uint32_t S5CR;                     // stream x configuration register
    volatile uint32_t S5NDTR;                   // stream x number of data register
    volatile uint32_t S5PAR;                    // stream x peripheral address register
    volatile uint32_t S5M0AR;                   // stream x memory 0 address register
    volatile uint32_t S5M1AR;                   // stream x memory 1 address register
    volatile uint32_t S5FCR;                    // stream x FIFO control register
    volatile uint32_t S6CR;                     // stream x configuration register
    volatile uint32_t S6NDTR;                   // stream x number of data register
    volatile uint32_t S6PAR;                    // stream x peripheral address register
    volatile uint32_t S6M0AR;                   // stream x memory 0 address register
    volatile uint32_t S6M1AR;                   // stream x memory 1 address register
    volatile uint32_t S6FCR;                    // stream x FIFO control register
    volatile uint32_t S7CR;                     // stream x configuration register
    volatile uint32_t S7NDTR;                   // stream x number of data register
    volatile uint32_t S7PAR;                    // stream x peripheral address register
    volatile uint32_t S7M0AR;                   // stream x memory 0 address register
    volatile uint32_t S7M1AR;                   // stream x memory 1 address register
    volatile uint32_t S7FCR;                    // stream x FIFO control register
} DMA_RegDef_t;

// Ethernet: media access control      (MAC)
typedef struct {
    volatile uint32_t MACCR;                    // Ethernet MAC configuration register
    volatile uint32_t MACFFR;                   // Ethernet MAC frame filter register
    volatile uint32_t MACHTHR;                  // Ethernet MAC hash table high register
    volatile uint32_t MACHTLR;                  // Ethernet MAC hash table low register
    volatile uint32_t MACMIIAR;                 // Ethernet MAC MII address register
    volatile uint32_t MACMIIDR;                 // Ethernet MAC MII data register
    volatile uint32_t MACFCR;                   // Ethernet MAC flow control register
    volatile uint32_t MACVLANTR;                // Ethernet MAC VLAN tag register
	uint32_t __reserved0[3];
    volatile uint32_t MACPMTCSR;                // Ethernet MAC PMT control and status register
	uint32_t __reserved1[1];
    volatile uint32_t MACDBGR;                  // Ethernet MAC debug register
    volatile uint32_t MACSR;                    // Ethernet MAC interrupt status register
    volatile uint32_t MACIMR;                   // Ethernet MAC interrupt mask register
    volatile uint32_t MACA0HR;                  // Ethernet MAC address 0 high register
    volatile uint32_t MACA0LR;                  // Ethernet MAC address 0 low register
    volatile uint32_t MACA1HR;                  // Ethernet MAC address 1 high register
    volatile uint32_t MACA1LR;                  // Ethernet MAC address1 low register
    volatile uint32_t MACA2HR;                  // Ethernet MAC address 2 high register
    volatile uint32_t MACA2LR;                  // Ethernet MAC address 2 low register
    volatile uint32_t MACA3HR;                  // Ethernet MAC address 3 high register
    volatile uint32_t MACA3LR;                  // Ethernet MAC address 3 low register
    volatile uint32_t MACRWUFFER;               // Ethernet MAC remote wakeup frame filter register
} Ethernet_RegDef_t;

// Ethernet: MAC management counters
// typedef struct {
//     volatile uint32_t MMCCR;                    // Ethernet MMC control register
//     volatile uint32_t MMCRIR;                   // Ethernet MMC receive interrupt register
//     volatile uint32_t MMCTIR;                   // Ethernet MMC transmit interrupt register
//     volatile uint32_t MMCRIMR;                  // Ethernet MMC receive interrupt mask register
//     volatile uint32_t MMCTIMR;                  // Ethernet MMC transmit interrupt mask register
//     uint32_t __reserved0[14];
//     volatile uint32_t MMCTGFSCCR;               // Ethernet MMC transmitted good frames after a single collision counter
//     volatile uint32_t MMCTGFMSCCR;              // Ethernet MMC transmitted good frames after more than a single collision
//     uint32_t __reserved1[5];
//     volatile uint32_t MMCTGFCR;                 // Ethernet MMC transmitted good frames counter register
//     uint32_t __reserved2[10];
//     volatile uint32_t MMCRFCECR;                // Ethernet MMC received frames with CRC error counter register
//     volatile uint32_t MMCRFAECR;                // Ethernet MMC received frames with alignment error counter register
//     uint32_t __reserved3[10];
//     volatile uint32_t MMCRGUFCR;                // MMC received good unicast frames counter register
// } Ethernet_RegDef_t;

// Ethernet: Precision time protocol
// typedef struct {
//     volatile uint32_t PTPTSCR;                  // Ethernet PTP time stamp control register
//     volatile uint32_t PTPSSIR;                  // Ethernet PTP subsecond increment register
//     volatile uint32_t PTPTSHR;                  // Ethernet PTP time stamp high register
//     volatile uint32_t PTPTSLR;                  // Ethernet PTP time stamp low register
//     volatile uint32_t PTPTSHUR;                 // Ethernet PTP time stamp high update register
//     volatile uint32_t PTPTSLUR;                 // Ethernet PTP time stamp low update register
//     volatile uint32_t PTPTSAR;                  // Ethernet PTP time stamp addend register
//     volatile uint32_t PTPTTHR;                  // Ethernet PTP target time high register
//     volatile uint32_t PTPTTLR;                  // Ethernet PTP target time low register
//     uint32_t __reserved0[1];
//     volatile uint32_t PTPTSSR;                  // Ethernet PTP time stamp status register
//     volatile uint32_t PTPPPSCR;                 // Ethernet PTP PPS control register
// } Ethernet_RegDef_t;

// Ethernet: DMA controller operation
// typedef struct {
//     volatile uint32_t DMABMR;                   // Ethernet DMA bus mode register
//     volatile uint32_t DMATPDR;                  // Ethernet DMA transmit poll demand register
//     volatile uint32_t DMARPDR;                  // EHERNET DMA receive poll demand register
//     volatile uint32_t DMARDLAR;                 // Ethernet DMA receive descriptor list address register
//     volatile uint32_t DMATDLAR;                 // Ethernet DMA transmit descriptor list address register
//     volatile uint32_t DMASR;                    // Ethernet DMA status register
//     volatile uint32_t DMAOMR;                   // Ethernet DMA operation mode register
//     volatile uint32_t DMAIER;                   // Ethernet DMA interrupt enable register
//     volatile uint32_t DMAMFBOCR;                // Ethernet DMA missed frame and buffer overflow counter register
//     volatile uint32_t DMARSWTR;                 // Ethernet DMA receive status watchdog timer register
//     uint32_t __reserved0[8];
//     volatile uint32_t DMACHTDR;                 // Ethernet DMA current host transmit descriptor register
//     volatile uint32_t DMACHRDR;                 // Ethernet DMA current host receive descriptor register
//     volatile uint32_t DMACHTBAR;                // Ethernet DMA current host transmit buffer address register
//     volatile uint32_t DMACHRBAR;                // Ethernet DMA current host receive buffer address register
// } Ethernet_RegDef_t;

// DMA2D controller
typedef struct {
    volatile uint32_t CR;                       // control register
    volatile uint32_t ISR;                      // Interrupt Status Register
    volatile uint32_t IFCR;                     // interrupt flag clear register
    volatile uint32_t FGMAR;                    // foreground memory address register
    volatile uint32_t FGOR;                     // foreground offset register
    volatile uint32_t BGMAR;                    // background memory address register
    volatile uint32_t BGOR;                     // background offset register
    volatile uint32_t FGPFCCR;                  // foreground PFC control register
    volatile uint32_t FGCOLR;                   // foreground color register
    volatile uint32_t BGPFCCR;                  // background PFC control register
    volatile uint32_t BGCOLR;                   // background color register
    volatile uint32_t FGCMAR;                   // foreground CLUT memory address register
    volatile uint32_t BGCMAR;                   // background CLUT memory address register
    volatile uint32_t OPFCCR;                   // output PFC control register
    volatile uint32_t OCOLR;                    // output color register
    volatile uint32_t OMAR;                     // output memory address register
    volatile uint32_t OOR;                      // output offset register
    volatile uint32_t NLR;                      // number of line register
    volatile uint32_t LWR;                      // line watermark register
    volatile uint32_t AMTCR;                    // AHB master timer configuration register
	uint32_t __reserved0[236];
    volatile uint32_t FGCLUT;                   // FGCLUT
	uint32_t __reserved1[255];
    volatile uint32_t BGCLUT;                   // BGCLUT
} DMA2D_RegDef_t;

// USB on the go high speed
typedef struct {
    volatile uint32_t OTG_HS_GOTGCTL;           // OTG_HS control and status register
    volatile uint32_t OTG_HS_GOTGINT;           // OTG_HS interrupt register
    volatile uint32_t OTG_HS_GAHBCFG;           // OTG_HS AHB configuration register
    volatile uint32_t OTG_HS_GUSBCFG;           // OTG_HS USB configuration register
    volatile uint32_t OTG_HS_GRSTCTL;           // OTG_HS reset register
    volatile uint32_t OTG_HS_GINTSTS;           // OTG_HS core interrupt register
    volatile uint32_t OTG_HS_GINTMSK;           // OTG_HS interrupt mask register
    volatile uint32_t OTG_HS_GRXSTSR_Host;      // OTG_HS Receive status debug read register (host mode)
    volatile uint32_t OTG_HS_GRXSTSP_Host;      // OTG_HS status read and pop register (host mode)
    volatile uint32_t OTG_HS_GRXFSIZ;           // OTG_HS Receive FIFO size register
    volatile uint32_t OTG_HS_HNPTXFSIZ_Host;    // OTG_HS nonperiodic transmit FIFO size register (host mode)
												// -4.0
    volatile uint32_t OTG_HS_DIEPTXF0_Device;   // Endpoint 0 transmit FIFO size (peripheral mode)
    volatile uint32_t OTG_HS_GNPTXSTS;          // OTG_HS nonperiodic transmit FIFO/queue status register
	uint32_t __reserved0[2];
    volatile uint32_t OTG_HS_GCCFG;             // OTG_HS general core configuration register
    volatile uint32_t OTG_HS_CID;               // OTG_HS core ID register
	uint32_t __reserved1[48];
    volatile uint32_t OTG_HS_HPTXFSIZ;          // OTG_HS Host periodic transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF1;          // OTG_HS device IN endpoint transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF2;          // OTG_HS device IN endpoint transmit FIFO size register
	uint32_t __reserved2[4];
    volatile uint32_t OTG_HS_DIEPTXF3;          // OTG_HS device IN endpoint transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF4;          // OTG_HS device IN endpoint transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF5;          // OTG_HS device IN endpoint transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF6;          // OTG_HS device IN endpoint transmit FIFO size register
    volatile uint32_t OTG_HS_DIEPTXF7;          // OTG_HS device IN endpoint transmit FIFO size register
												// -276.0
    volatile uint32_t OTG_HS_GRXSTSR_Device;    // OTG_HS Receive status debug read register (peripheral mode mode)
    volatile uint32_t OTG_HS_GRXSTSP_Device;    // OTG_HS status read and pop register (peripheral mode)
	uint32_t __reserved3[12];
    volatile uint32_t OTG_HS_GLPMCFG;           // OTG core LPM configuration register
} USB_OTG_HS_RegDef_t;

// USB on the go high speed
// typedef struct {
//     volatile uint32_t OTG_HS_HCFG;              // OTG_HS host configuration register
//     volatile uint32_t OTG_HS_HFIR;              // OTG_HS Host frame interval register
//     volatile uint32_t OTG_HS_HFNUM;             // OTG_HS host frame number/frame time remaining register
//     uint32_t __reserved0[1];
//     volatile uint32_t OTG_HS_HPTXSTS;           // OTG_HS_Host periodic transmit FIFO/queue status register
//     volatile uint32_t OTG_HS_HAINT;             // OTG_HS Host all channels interrupt register
//     volatile uint32_t OTG_HS_HAINTMSK;          // OTG_HS host all channels interrupt mask register
//     uint32_t __reserved1[9];
//     volatile uint32_t OTG_HS_HPRT;              // OTG_HS host port control and status register
//     uint32_t __reserved2[47];
//     volatile uint32_t OTG_HS_HCCHAR0;           // OTG_HS host channel-0 characteristics register
//     uint32_t __reserved3[7];
//     volatile uint32_t OTG_HS_HCCHAR1;           // OTG_HS host channel-1 characteristics register
//     uint32_t __reserved4[7];
//     volatile uint32_t OTG_HS_HCCHAR2;           // OTG_HS host channel-2 characteristics register
//     uint32_t __reserved5[7];
//     volatile uint32_t OTG_HS_HCCHAR3;           // OTG_HS host channel-3 characteristics register
//     uint32_t __reserved6[7];
//     volatile uint32_t OTG_HS_HCCHAR4;           // OTG_HS host channel-4 characteristics register
//     uint32_t __reserved7[7];
//     volatile uint32_t OTG_HS_HCCHAR5;           // OTG_HS host channel-5 characteristics register
//     uint32_t __reserved8[7];
//     volatile uint32_t OTG_HS_HCCHAR6;           // OTG_HS host channel-6 characteristics register
//     uint32_t __reserved9[7];
//     volatile uint32_t OTG_HS_HCCHAR7;           // OTG_HS host channel-7 characteristics register
//     uint32_t __reserved10[7];
//     volatile uint32_t OTG_HS_HCCHAR8;           // OTG_HS host channel-8 characteristics register
//     uint32_t __reserved11[7];
//     volatile uint32_t OTG_HS_HCCHAR9;           // OTG_HS host channel-9 characteristics register
//     uint32_t __reserved12[7];
//     volatile uint32_t OTG_HS_HCCHAR10;          // OTG_HS host channel-10 characteristics register
//     uint32_t __reserved13[7];
//     volatile uint32_t OTG_HS_HCCHAR11;          // OTG_HS host channel-11 characteristics register
//                                                 // -352.0
//     volatile uint32_t OTG_HS_HCSPLT0;           // OTG_HS host channel-0 split control register
//     uint32_t __reserved14[7];
//     volatile uint32_t OTG_HS_HCSPLT1;           // OTG_HS host channel-1 split control register
//     uint32_t __reserved15[7];
//     volatile uint32_t OTG_HS_HCSPLT2;           // OTG_HS host channel-2 split control register
//     uint32_t __reserved16[7];
//     volatile uint32_t OTG_HS_HCSPLT3;           // OTG_HS host channel-3 split control register
//     uint32_t __reserved17[7];
//     volatile uint32_t OTG_HS_HCSPLT4;           // OTG_HS host channel-4 split control register
//     uint32_t __reserved18[7];
//     volatile uint32_t OTG_HS_HCSPLT5;           // OTG_HS host channel-5 split control register
//     uint32_t __reserved19[7];
//     volatile uint32_t OTG_HS_HCSPLT6;           // OTG_HS host channel-6 split control register
//     uint32_t __reserved20[7];
//     volatile uint32_t OTG_HS_HCSPLT7;           // OTG_HS host channel-7 split control register
//     uint32_t __reserved21[7];
//     volatile uint32_t OTG_HS_HCSPLT8;           // OTG_HS host channel-8 split control register
//     uint32_t __reserved22[7];
//     volatile uint32_t OTG_HS_HCSPLT9;           // OTG_HS host channel-9 split control register
//     uint32_t __reserved23[7];
//     volatile uint32_t OTG_HS_HCSPLT10;          // OTG_HS host channel-10 split control register
//     uint32_t __reserved24[7];
//     volatile uint32_t OTG_HS_HCSPLT11;          // OTG_HS host channel-11 split control register
//                                                 // -352.0
//     volatile uint32_t OTG_HS_HCINT0;            // OTG_HS host channel-11 interrupt register
//     uint32_t __reserved25[7];
//     volatile uint32_t OTG_HS_HCINT1;            // OTG_HS host channel-1 interrupt register
//     uint32_t __reserved26[7];
//     volatile uint32_t OTG_HS_HCINT2;            // OTG_HS host channel-2 interrupt register
//     uint32_t __reserved27[7];
//     volatile uint32_t OTG_HS_HCINT3;            // OTG_HS host channel-3 interrupt register
//     uint32_t __reserved28[7];
//     volatile uint32_t OTG_HS_HCINT4;            // OTG_HS host channel-4 interrupt register
//     uint32_t __reserved29[7];
//     volatile uint32_t OTG_HS_HCINT5;            // OTG_HS host channel-5 interrupt register
//     uint32_t __reserved30[7];
//     volatile uint32_t OTG_HS_HCINT6;            // OTG_HS host channel-6 interrupt register
//     uint32_t __reserved31[7];
//     volatile uint32_t OTG_HS_HCINT7;            // OTG_HS host channel-7 interrupt register
//     uint32_t __reserved32[7];
//     volatile uint32_t OTG_HS_HCINT8;            // OTG_HS host channel-8 interrupt register
//     uint32_t __reserved33[7];
//     volatile uint32_t OTG_HS_HCINT9;            // OTG_HS host channel-9 interrupt register
//     uint32_t __reserved34[7];
//     volatile uint32_t OTG_HS_HCINT10;           // OTG_HS host channel-10 interrupt register
//     uint32_t __reserved35[7];
//     volatile uint32_t OTG_HS_HCINT11;           // OTG_HS host channel-11 interrupt register
//                                                 // -352.0
//     volatile uint32_t OTG_HS_HCINTMSK0;         // OTG_HS host channel-11 interrupt mask register
//     uint32_t __reserved36[7];
//     volatile uint32_t OTG_HS_HCINTMSK1;         // OTG_HS host channel-1 interrupt mask register
//     uint32_t __reserved37[7];
//     volatile uint32_t OTG_HS_HCINTMSK2;         // OTG_HS host channel-2 interrupt mask register
//     uint32_t __reserved38[7];
//     volatile uint32_t OTG_HS_HCINTMSK3;         // OTG_HS host channel-3 interrupt mask register
//     uint32_t __reserved39[7];
//     volatile uint32_t OTG_HS_HCINTMSK4;         // OTG_HS host channel-4 interrupt mask register
//     uint32_t __reserved40[7];
//     volatile uint32_t OTG_HS_HCINTMSK5;         // OTG_HS host channel-5 interrupt mask register
//     uint32_t __reserved41[7];
//     volatile uint32_t OTG_HS_HCINTMSK6;         // OTG_HS host channel-6 interrupt mask register
//     uint32_t __reserved42[7];
//     volatile uint32_t OTG_HS_HCINTMSK7;         // OTG_HS host channel-7 interrupt mask register
//     uint32_t __reserved43[7];
//     volatile uint32_t OTG_HS_HCINTMSK8;         // OTG_HS host channel-8 interrupt mask register
//     uint32_t __reserved44[7];
//     volatile uint32_t OTG_HS_HCINTMSK9;         // OTG_HS host channel-9 interrupt mask register
//     uint32_t __reserved45[7];
//     volatile uint32_t OTG_HS_HCINTMSK10;        // OTG_HS host channel-10 interrupt mask register
//     uint32_t __reserved46[7];
//     volatile uint32_t OTG_HS_HCINTMSK11;        // OTG_HS host channel-11 interrupt mask register
//                                                 // -352.0
//     volatile uint32_t OTG_HS_HCTSIZ0;           // OTG_HS host channel-11 transfer size register
//     uint32_t __reserved47[7];
//     volatile uint32_t OTG_HS_HCTSIZ1;           // OTG_HS host channel-1 transfer size register
//     uint32_t __reserved48[7];
//     volatile uint32_t OTG_HS_HCTSIZ2;           // OTG_HS host channel-2 transfer size register
//     uint32_t __reserved49[7];
//     volatile uint32_t OTG_HS_HCTSIZ3;           // OTG_HS host channel-3 transfer size register
//     uint32_t __reserved50[7];
//     volatile uint32_t OTG_HS_HCTSIZ4;           // OTG_HS host channel-4 transfer size register
//     uint32_t __reserved51[7];
//     volatile uint32_t OTG_HS_HCTSIZ5;           // OTG_HS host channel-5 transfer size register
//     uint32_t __reserved52[7];
//     volatile uint32_t OTG_HS_HCTSIZ6;           // OTG_HS host channel-6 transfer size register
//     uint32_t __reserved53[7];
//     volatile uint32_t OTG_HS_HCTSIZ7;           // OTG_HS host channel-7 transfer size register
//     uint32_t __reserved54[7];
//     volatile uint32_t OTG_HS_HCTSIZ8;           // OTG_HS host channel-8 transfer size register
//     uint32_t __reserved55[7];
//     volatile uint32_t OTG_HS_HCTSIZ9;           // OTG_HS host channel-9 transfer size register
//     uint32_t __reserved56[7];
//     volatile uint32_t OTG_HS_HCTSIZ10;          // OTG_HS host channel-10 transfer size register
//     uint32_t __reserved57[7];
//     volatile uint32_t OTG_HS_HCTSIZ11;          // OTG_HS host channel-11 transfer size register
//                                                 // -352.0
//     volatile uint32_t OTG_HS_HCDMA0;            // OTG_HS host channel-0 DMA address register
//     uint32_t __reserved58[7];
//     volatile uint32_t OTG_HS_HCDMA1;            // OTG_HS host channel-1 DMA address register
//     uint32_t __reserved59[7];
//     volatile uint32_t OTG_HS_HCDMA2;            // OTG_HS host channel-2 DMA address register
//     uint32_t __reserved60[7];
//     volatile uint32_t OTG_HS_HCDMA3;            // OTG_HS host channel-3 DMA address register
//     uint32_t __reserved61[7];
//     volatile uint32_t OTG_HS_HCDMA4;            // OTG_HS host channel-4 DMA address register
//     uint32_t __reserved62[7];
//     volatile uint32_t OTG_HS_HCDMA5;            // OTG_HS host channel-5 DMA address register
//     uint32_t __reserved63[7];
//     volatile uint32_t OTG_HS_HCDMA6;            // OTG_HS host channel-6 DMA address register
//     uint32_t __reserved64[7];
//     volatile uint32_t OTG_HS_HCDMA7;            // OTG_HS host channel-7 DMA address register
//     uint32_t __reserved65[7];
//     volatile uint32_t OTG_HS_HCDMA8;            // OTG_HS host channel-8 DMA address register
//     uint32_t __reserved66[7];
//     volatile uint32_t OTG_HS_HCDMA9;            // OTG_HS host channel-9 DMA address register
//     uint32_t __reserved67[7];
//     volatile uint32_t OTG_HS_HCDMA10;           // OTG_HS host channel-10 DMA address register
//     uint32_t __reserved68[7];
//     volatile uint32_t OTG_HS_HCDMA11;           // OTG_HS host channel-11 DMA address register
//     volatile uint32_t OTG_HS_HCCHAR12;          // OTG_HS host channel-12 characteristics register
//     volatile uint32_t OTG_HS_HCSPLT12;          // OTG_HS host channel-12 split control register
//     volatile uint32_t OTG_HS_HCINT12;           // OTG_HS host channel-12 interrupt register
//     volatile uint32_t OTG_HS_HCINTMSK12;        // OTG_HS host channel-12 interrupt mask register
//     volatile uint32_t OTG_HS_HCTSIZ12;          // OTG_HS host channel-12 transfer size register
//     volatile uint32_t OTG_HS_HCDMA12;           // OTG_HS host channel-12 DMA address register
//     volatile uint32_t OTG_HS_HCCHAR13;          // OTG_HS host channel-13 characteristics register
//     volatile uint32_t OTG_HS_HCSPLT13;          // OTG_HS host channel-13 split control register
//     volatile uint32_t OTG_HS_HCINT13;           // OTG_HS host channel-13 interrupt register
//     volatile uint32_t OTG_HS_HCINTMSK13;        // OTG_HS host channel-13 interrupt mask register
//     volatile uint32_t OTG_HS_HCTSIZ13;          // OTG_HS host channel-13 transfer size register
//     volatile uint32_t OTG_HS_HCDMA13;           // OTG_HS host channel-13 DMA address register
//     volatile uint32_t OTG_HS_HCCHAR14;          // OTG_HS host channel-14 characteristics register
//     volatile uint32_t OTG_HS_HCSPLT14;          // OTG_HS host channel-14 split control register
//     volatile uint32_t OTG_HS_HCINT14;           // OTG_HS host channel-14 interrupt register
//     volatile uint32_t OTG_HS_HCINTMSK14;        // OTG_HS host channel-14 interrupt mask register
//     volatile uint32_t OTG_HS_HCTSIZ14;          // OTG_HS host channel-14 transfer size register
//     volatile uint32_t OTG_HS_HCDMA14;           // OTG_HS host channel-14 DMA address register
//     volatile uint32_t OTG_HS_HCCHAR15;          // OTG_HS host channel-15 characteristics register
//     volatile uint32_t OTG_HS_HCSPLT15;          // OTG_HS host channel-15 split control register
//     volatile uint32_t OTG_HS_HCINT15;           // OTG_HS host channel-15 interrupt register
//     volatile uint32_t OTG_HS_HCINTMSK15;        // OTG_HS host channel-15 interrupt mask register
//     volatile uint32_t OTG_HS_HCTSIZ15;          // OTG_HS host channel-15 transfer size register
//     volatile uint32_t OTG_HS_HCDMA15;           // OTG_HS host channel-15 DMA address register
// } USB_OTG_HS_RegDef_t;

// USB on the go high speed
// typedef struct {
//     volatile uint32_t OTG_HS_DCFG;              // OTG_HS device configuration register
//     volatile uint32_t OTG_HS_DCTL;              // OTG_HS device control register
//     volatile uint32_t OTG_HS_DSTS;              // OTG_HS device status register
//     uint32_t __reserved0[1];
//     volatile uint32_t OTG_HS_DIEPMSK;           // OTG_HS device IN endpoint common interrupt mask register
//     volatile uint32_t OTG_HS_DOEPMSK;           // OTG_HS device OUT endpoint common interrupt mask register
//     volatile uint32_t OTG_HS_DAINT;             // OTG_HS device all endpoints interrupt register
//     volatile uint32_t OTG_HS_DAINTMSK;          // OTG_HS all endpoints interrupt mask register
//     uint32_t __reserved1[2];
//     volatile uint32_t OTG_HS_DVBUSDIS;          // OTG_HS device VBUS discharge time register
//     volatile uint32_t OTG_HS_DVBUSPULSE;        // OTG_HS device VBUS pulsing time register
//     volatile uint32_t OTG_HS_DTHRCTL;           // OTG_HS Device threshold control register
//     volatile uint32_t OTG_HS_DIEPEMPMSK;        // OTG_HS device IN endpoint FIFO empty interrupt mask register
//     volatile uint32_t OTG_HS_DEACHINT;          // OTG_HS device each endpoint interrupt register
//     volatile uint32_t OTG_HS_DEACHINTMSK;       // OTG_HS device each endpoint interrupt register mask
//     uint32_t __reserved2[48];
//     volatile uint32_t OTG_HS_DIEPCTL0;          // OTG device endpoint-0 control register
//     uint32_t __reserved3[7];
//     volatile uint32_t OTG_HS_DIEPCTL1;          // OTG device endpoint-1 control register
//     uint32_t __reserved4[7];
//     volatile uint32_t OTG_HS_DIEPCTL2;          // OTG device endpoint-2 control register
//     uint32_t __reserved5[7];
//     volatile uint32_t OTG_HS_DIEPCTL3;          // OTG device endpoint-3 control register
//     uint32_t __reserved6[7];
//     volatile uint32_t OTG_HS_DIEPCTL4;          // OTG device endpoint-4 control register
//     uint32_t __reserved7[7];
//     volatile uint32_t OTG_HS_DIEPCTL5;          // OTG device endpoint-5 control register
//     uint32_t __reserved8[7];
//     volatile uint32_t OTG_HS_DIEPCTL6;          // OTG device endpoint-6 control register
//     uint32_t __reserved9[7];
//     volatile uint32_t OTG_HS_DIEPCTL7;          // OTG device endpoint-7 control register
//                                                 // -220.0
//     volatile uint32_t OTG_HS_DIEPINT0;          // OTG device endpoint-0 interrupt register
//     uint32_t __reserved10[7];
//     volatile uint32_t OTG_HS_DIEPINT1;          // OTG device endpoint-1 interrupt register
//     uint32_t __reserved11[7];
//     volatile uint32_t OTG_HS_DIEPINT2;          // OTG device endpoint-2 interrupt register
//     uint32_t __reserved12[7];
//     volatile uint32_t OTG_HS_DIEPINT3;          // OTG device endpoint-3 interrupt register
//     uint32_t __reserved13[7];
//     volatile uint32_t OTG_HS_DIEPINT4;          // OTG device endpoint-4 interrupt register
//     uint32_t __reserved14[7];
//     volatile uint32_t OTG_HS_DIEPINT5;          // OTG device endpoint-5 interrupt register
//     uint32_t __reserved15[7];
//     volatile uint32_t OTG_HS_DIEPINT6;          // OTG device endpoint-6 interrupt register
//     uint32_t __reserved16[7];
//     volatile uint32_t OTG_HS_DIEPINT7;          // OTG device endpoint-7 interrupt register
//                                                 // -220.0
//     volatile uint32_t OTG_HS_DIEPTSIZ0;         // OTG_HS device IN endpoint 0 transfer size register
//     volatile uint32_t OTG_HS_DIEPDMA1;          // OTG_HS device endpoint-1 DMA address register
//     uint32_t __reserved17[7];
//     volatile uint32_t OTG_HS_DIEPDMA2;          // OTG_HS device endpoint-2 DMA address register
//     uint32_t __reserved18[7];
//     volatile uint32_t OTG_HS_DIEPDMA3;          // OTG_HS device endpoint-3 DMA address register
//     uint32_t __reserved19[7];
//     volatile uint32_t OTG_HS_DIEPDMA4;          // OTG_HS device endpoint-4 DMA address register
//     uint32_t __reserved20[7];
//     volatile uint32_t OTG_HS_DIEPDMA5;          // OTG_HS device endpoint-5 DMA address register
//                                                 // -128.0
//     volatile uint32_t OTG_HS_DTXFSTS0;          // OTG_HS device IN endpoint transmit FIFO status register
//     uint32_t __reserved21[7];
//     volatile uint32_t OTG_HS_DTXFSTS1;          // OTG_HS device IN endpoint transmit FIFO status register
//     uint32_t __reserved22[7];
//     volatile uint32_t OTG_HS_DTXFSTS2;          // OTG_HS device IN endpoint transmit FIFO status register
//     uint32_t __reserved23[7];
//     volatile uint32_t OTG_HS_DTXFSTS3;          // OTG_HS device IN endpoint transmit FIFO status register
//     uint32_t __reserved24[7];
//     volatile uint32_t OTG_HS_DTXFSTS4;          // OTG_HS device IN endpoint transmit FIFO status register
//     uint32_t __reserved25[7];
//     volatile uint32_t OTG_HS_DTXFSTS5;          // OTG_HS device IN endpoint transmit FIFO status register
//                                                 // -140.0
//     volatile uint32_t OTG_HS_DIEPTSIZ1;         // OTG_HS device endpoint transfer size register
//     uint32_t __reserved26[7];
//     volatile uint32_t OTG_HS_DIEPTSIZ2;         // OTG_HS device endpoint transfer size register
//     uint32_t __reserved27[7];
//     volatile uint32_t OTG_HS_DIEPTSIZ3;         // OTG_HS device endpoint transfer size register
//     uint32_t __reserved28[7];
//     volatile uint32_t OTG_HS_DIEPTSIZ4;         // OTG_HS device endpoint transfer size register
//     uint32_t __reserved29[7];
//     volatile uint32_t OTG_HS_DIEPTSIZ5;         // OTG_HS device endpoint transfer size register
//     uint32_t __reserved30[83];
//     volatile uint32_t OTG_HS_DOEPCTL0;          // OTG_HS device control OUT endpoint 0 control register
//     uint32_t __reserved31[7];
//     volatile uint32_t OTG_HS_DOEPCTL1;          // OTG device endpoint-1 control register
//     uint32_t __reserved32[7];
//     volatile uint32_t OTG_HS_DOEPCTL2;          // OTG device endpoint-2 control register
//     uint32_t __reserved33[7];
//     volatile uint32_t OTG_HS_DOEPCTL3;          // OTG device endpoint-3 control register
//                                                 // -92.0
//     volatile uint32_t OTG_HS_DOEPINT0;          // OTG_HS device endpoint-0 interrupt register
//     uint32_t __reserved34[7];
//     volatile uint32_t OTG_HS_DOEPINT1;          // OTG_HS device endpoint-1 interrupt register
//     uint32_t __reserved35[7];
//     volatile uint32_t OTG_HS_DOEPINT2;          // OTG_HS device endpoint-2 interrupt register
//     uint32_t __reserved36[7];
//     volatile uint32_t OTG_HS_DOEPINT3;          // OTG_HS device endpoint-3 interrupt register
//     uint32_t __reserved37[7];
//     volatile uint32_t OTG_HS_DOEPINT4;          // OTG_HS device endpoint-4 interrupt register
//     uint32_t __reserved38[7];
//     volatile uint32_t OTG_HS_DOEPINT5;          // OTG_HS device endpoint-5 interrupt register
//     uint32_t __reserved39[7];
//     volatile uint32_t OTG_HS_DOEPINT6;          // OTG_HS device endpoint-6 interrupt register
//     uint32_t __reserved40[7];
//     volatile uint32_t OTG_HS_DOEPINT7;          // OTG_HS device endpoint-7 interrupt register
//                                                 // -220.0
//     volatile uint32_t OTG_HS_DOEPTSIZ0;         // OTG_HS device endpoint-0 transfer size register
//     uint32_t __reserved41[7];
//     volatile uint32_t OTG_HS_DOEPTSIZ1;         // OTG_HS device endpoint-1 transfer size register
//     uint32_t __reserved42[7];
//     volatile uint32_t OTG_HS_DOEPTSIZ2;         // OTG_HS device endpoint-2 transfer size register
//     uint32_t __reserved43[7];
//     volatile uint32_t OTG_HS_DOEPTSIZ3;         // OTG_HS device endpoint-3 transfer size register
//     uint32_t __reserved44[7];
//     volatile uint32_t OTG_HS_DOEPTSIZ4;         // OTG_HS device endpoint-4 transfer size register
//                                                 // -500.0
//     volatile uint32_t OTG_HS_DIEPTSIZ6;         // OTG_HS device endpoint transfer size register
//     volatile uint32_t OTG_HS_DTXFSTS6;          // OTG_HS device IN endpoint transmit FIFO status register
//     volatile uint32_t OTG_HS_DIEPTSIZ7;         // OTG_HS device endpoint transfer size register
//     volatile uint32_t OTG_HS_DTXFSTS7;          // OTG_HS device IN endpoint transmit FIFO status register
//     uint32_t __reserved45[116];
//     volatile uint32_t OTG_HS_DOEPCTL4;          // OTG device endpoint-4 control register
//     uint32_t __reserved46[7];
//     volatile uint32_t OTG_HS_DOEPCTL5;          // OTG device endpoint-5 control register
//     uint32_t __reserved47[7];
//     volatile uint32_t OTG_HS_DOEPCTL6;          // OTG device endpoint-6 control register
//     uint32_t __reserved48[7];
//     volatile uint32_t OTG_HS_DOEPCTL7;          // OTG device endpoint-7 control register
//                                                 // -52.0
//     volatile uint32_t OTG_HS_DOEPTSIZ5;         // OTG_HS device endpoint-5 transfer size register
//     uint32_t __reserved49[7];
//     volatile uint32_t OTG_HS_DOEPTSIZ6;         // OTG_HS device endpoint-6 transfer size register
//     uint32_t __reserved50[7];
//     volatile uint32_t OTG_HS_DOEPTSIZ7;         // OTG_HS device endpoint-7 transfer size register
// } USB_OTG_HS_RegDef_t;

// USB on the go high speed
// typedef struct {
//     volatile uint32_t OTG_HS_PCGCR;             // Power and clock gating control register
// } USB_OTG_HS_RegDef_t;

// USB on the go full speed
typedef struct {
    volatile uint32_t OTG_FS_GOTGCTL;           // OTG_FS control and status register (OTG_FS_GOTGCTL)
    volatile uint32_t OTG_FS_GOTGINT;           // OTG_FS interrupt register (OTG_FS_GOTGINT)
    volatile uint32_t OTG_FS_GAHBCFG;           // OTG_FS AHB configuration register (OTG_FS_GAHBCFG)
    volatile uint32_t OTG_FS_GUSBCFG;           // OTG_FS USB configuration register (OTG_FS_GUSBCFG)
    volatile uint32_t OTG_FS_GRSTCTL;           // OTG_FS reset register (OTG_FS_GRSTCTL)
    volatile uint32_t OTG_FS_GINTSTS;           // OTG_FS core interrupt register (OTG_FS_GINTSTS)
    volatile uint32_t OTG_FS_GINTMSK;           // OTG_FS interrupt mask register (OTG_FS_GINTMSK)
    volatile uint32_t OTG_FS_GRXSTSR_Device;    // OTG_FS Receive status debug read(Device mode)
												// -4.0
    volatile uint32_t OTG_FS_GRXSTSR_Host;      // OTG_FS Receive status debug read(Host mode)
	uint32_t __reserved0[1];
    volatile uint32_t OTG_FS_GRXFSIZ;           // OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ)
    volatile uint32_t OTG_FS_DIEPTXF0_Device;   // OTG_FS Endpoint 0 Transmit FIFO size
												// -4.0
    volatile uint32_t OTG_FS_HNPTXFSIZ_Host;    // OTG_FS Host non-periodic transmit FIFO size register
    volatile uint32_t OTG_FS_HNPTXSTS;          // OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS)
	uint32_t __reserved1[2];
    volatile uint32_t OTG_FS_GCCFG;             // OTG_FS general core configuration register (OTG_FS_GCCFG)
    volatile uint32_t OTG_FS_CID;               // core ID register
	uint32_t __reserved2[48];
    volatile uint32_t OTG_FS_HPTXFSIZ;          // OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ)
    volatile uint32_t OTG_FS_DIEPTXF1;          // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF1)
    volatile uint32_t OTG_FS_DIEPTXF2;          // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2)
    volatile uint32_t OTG_FS_DIEPTXF3;          // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3)
												// -240.0
    volatile uint32_t OTG_FS_GRXSTSP_Device;    // OTG status read and pop register (Device mode)
												// -4.0
    volatile uint32_t OTG_FS_GRXSTSP_Host;      // OTG status read and pop register (Host mode)
	uint32_t __reserved3[3];
    volatile uint32_t OTG_FS_GI2CCTL;           // OTG I2C access register
	uint32_t __reserved4[9];
    volatile uint32_t OTG_FS_GPWRDN;            // OTG power down register
	uint32_t __reserved5[1];
    volatile uint32_t OTG_FS_GADPCTL;           // OTG ADP timer, control and status register
	uint32_t __reserved6[43];
    volatile uint32_t OTG_FS_DIEPTXF4;          // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4)
    volatile uint32_t OTG_FS_DIEPTXF5;          // OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF5)
												// -196.0
    volatile uint32_t OTG_FS_GLPMCFG;           // OTG core LPM configuration register
} USB_OTG_FS_RegDef_t;

// USB on the go full speed
// typedef struct {
//     volatile uint32_t OTG_FS_HCFG;              // OTG_FS host configuration register (OTG_FS_HCFG)
//     volatile uint32_t OTG_FS_HFIR;              // OTG_FS Host frame interval register
//     volatile uint32_t OTG_FS_HFNUM;             // OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM)
//     uint32_t __reserved0[1];
//     volatile uint32_t OTG_FS_HPTXSTS;           // OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS)
//     volatile uint32_t OTG_FS_HAINT;             // OTG_FS Host all channels interrupt register
//     volatile uint32_t OTG_FS_HAINTMSK;          // OTG_FS host all channels interrupt mask register
//     uint32_t __reserved1[9];
//     volatile uint32_t OTG_FS_HPRT;              // OTG_FS host port control and status register (OTG_FS_HPRT)
//     uint32_t __reserved2[47];
//     volatile uint32_t OTG_FS_HCCHAR0;           // OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0)
//     uint32_t __reserved3[7];
//     volatile uint32_t OTG_FS_HCCHAR1;           // OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1)
//     uint32_t __reserved4[7];
//     volatile uint32_t OTG_FS_HCCHAR2;           // OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2)
//     uint32_t __reserved5[7];
//     volatile uint32_t OTG_FS_HCCHAR3;           // OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3)
//     uint32_t __reserved6[7];
//     volatile uint32_t OTG_FS_HCCHAR4;           // OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4)
//     uint32_t __reserved7[7];
//     volatile uint32_t OTG_FS_HCCHAR5;           // OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5)
//     uint32_t __reserved8[7];
//     volatile uint32_t OTG_FS_HCCHAR6;           // OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6)
//     uint32_t __reserved9[7];
//     volatile uint32_t OTG_FS_HCCHAR7;           // OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7)
//                                                 // -220.0
//     volatile uint32_t OTG_FS_HCINT0;            // OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0)
//     uint32_t __reserved10[7];
//     volatile uint32_t OTG_FS_HCINT1;            // OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1)
//     uint32_t __reserved11[7];
//     volatile uint32_t OTG_FS_HCINT2;            // OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2)
//     uint32_t __reserved12[7];
//     volatile uint32_t OTG_FS_HCINT3;            // OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3)
//     uint32_t __reserved13[7];
//     volatile uint32_t OTG_FS_HCINT4;            // OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4)
//     uint32_t __reserved14[7];
//     volatile uint32_t OTG_FS_HCINT5;            // OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5)
//     uint32_t __reserved15[7];
//     volatile uint32_t OTG_FS_HCINT6;            // OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6)
//     uint32_t __reserved16[7];
//     volatile uint32_t OTG_FS_HCINT7;            // OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7)
//                                                 // -224.0
//     volatile uint32_t OTG_FS_HCINTMSK0;         // OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0)
//     uint32_t __reserved17[7];
//     volatile uint32_t OTG_FS_HCINTMSK1;         // OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1)
//     uint32_t __reserved18[7];
//     volatile uint32_t OTG_FS_HCINTMSK2;         // OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2)
//     uint32_t __reserved19[7];
//     volatile uint32_t OTG_FS_HCINTMSK3;         // OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3)
//     uint32_t __reserved20[7];
//     volatile uint32_t OTG_FS_HCINTMSK4;         // OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4)
//     uint32_t __reserved21[7];
//     volatile uint32_t OTG_FS_HCINTMSK5;         // OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5)
//     uint32_t __reserved22[7];
//     volatile uint32_t OTG_FS_HCINTMSK6;         // OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6)
//     uint32_t __reserved23[7];
//     volatile uint32_t OTG_FS_HCINTMSK7;         // OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7)
//                                                 // -224.0
//     volatile uint32_t OTG_FS_HCTSIZ0;           // OTG_FS host channel-0 transfer size register
//     uint32_t __reserved24[7];
//     volatile uint32_t OTG_FS_HCTSIZ1;           // OTG_FS host channel-1 transfer size register
//     uint32_t __reserved25[7];
//     volatile uint32_t OTG_FS_HCTSIZ2;           // OTG_FS host channel-2 transfer size register
//     uint32_t __reserved26[7];
//     volatile uint32_t OTG_FS_HCTSIZ3;           // OTG_FS host channel-3 transfer size register
//     uint32_t __reserved27[7];
//     volatile uint32_t OTG_FS_HCTSIZ4;           // OTG_FS host channel-x transfer size register
//     uint32_t __reserved28[7];
//     volatile uint32_t OTG_FS_HCTSIZ5;           // OTG_FS host channel-5 transfer size register
//     uint32_t __reserved29[7];
//     volatile uint32_t OTG_FS_HCTSIZ6;           // OTG_FS host channel-6 transfer size register
//     uint32_t __reserved30[7];
//     volatile uint32_t OTG_FS_HCTSIZ7;           // OTG_FS host channel-7 transfer size register
//     volatile uint32_t OTG_FS_HCCHAR8;           // OTG_FS host channel-8 characteristics register
//     volatile uint32_t OTG_FS_HCINT8;            // OTG_FS host channel-8 interrupt register
//     volatile uint32_t OTG_FS_HCINTMSK8;         // OTG_FS host channel-8 mask register
//     volatile uint32_t OTG_FS_HCTSIZ8;           // OTG_FS host channel-8 transfer size register
//     volatile uint32_t OTG_FS_HCCHAR9;           // OTG_FS host channel-9 characteristics register
//     volatile uint32_t OTG_FS_HCINT9;            // OTG_FS host channel-9 interrupt register
//     volatile uint32_t OTG_FS_HCINTMSK9;         // OTG_FS host channel-9 mask register
//     volatile uint32_t OTG_FS_HCTSIZ9;           // OTG_FS host channel-9 transfer size register
//     volatile uint32_t OTG_FS_HCCHAR10;          // OTG_FS host channel-10 characteristics register
//     volatile uint32_t OTG_FS_HCINT10;           // OTG_FS host channel-10 interrupt register
//     volatile uint32_t OTG_FS_HCINTMSK10;        // OTG_FS host channel-10 mask register
//     volatile uint32_t OTG_FS_HCTSIZ10;          // OTG_FS host channel-10 transfer size register
//     volatile uint32_t OTG_FS_HCCHAR11;          // OTG_FS host channel-11 characteristics register
//     volatile uint32_t OTG_FS_HCINT11;           // OTG_FS host channel-11 interrupt register
//     volatile uint32_t OTG_FS_HCINTMSK11;        // OTG_FS host channel-11 mask register
//     volatile uint32_t OTG_FS_HCTSIZ11;          // OTG_FS host channel-11 transfer size register
// } USB_OTG_FS_RegDef_t;
//
// USB on the go full speed
// typedef struct {
//     volatile uint32_t OTG_FS_DCFG;              // OTG_FS device configuration register (OTG_FS_DCFG)
//     volatile uint32_t OTG_FS_DCTL;              // OTG_FS device control register (OTG_FS_DCTL)
//     volatile uint32_t OTG_FS_DSTS;              // OTG_FS device status register (OTG_FS_DSTS)
//     uint32_t __reserved0[1];
//     volatile uint32_t OTG_FS_DIEPMSK;           // OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
//     volatile uint32_t OTG_FS_DOEPMSK;           // OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
//     volatile uint32_t OTG_FS_DAINT;             // OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
//     volatile uint32_t OTG_FS_DAINTMSK;          // OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
//     uint32_t __reserved1[2];
//     volatile uint32_t OTG_FS_DVBUSDIS;          // OTG_FS device VBUS discharge time register
//     volatile uint32_t OTG_FS_DVBUSPULSE;        // OTG_FS device VBUS pulsing time register
//     uint32_t __reserved2[1];
//     volatile uint32_t OTG_FS_DIEPEMPMSK;        // OTG_FS device IN endpoint FIFO empty interrupt mask register
//     uint32_t __reserved3[50];
//     volatile uint32_t OTG_FS_DIEPCTL0;          // OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
//     uint32_t __reserved4[7];
//     volatile uint32_t OTG_FS_DIEPCTL1;          // OTG device endpoint-1 control register
//     uint32_t __reserved5[7];
//     volatile uint32_t OTG_FS_DIEPCTL2;          // OTG device endpoint-2 control register
//     uint32_t __reserved6[7];
//     volatile uint32_t OTG_FS_DIEPCTL3;          // OTG device endpoint-3 control register
//     uint32_t __reserved7[103];
//     volatile uint32_t OTG_FS_DOEPCTL0;          // device endpoint-0 control register
//     uint32_t __reserved8[7];
//     volatile uint32_t OTG_FS_DOEPCTL1;          // device endpoint-1 control register
//     uint32_t __reserved9[7];
//     volatile uint32_t OTG_FS_DOEPCTL2;          // device endpoint-2 control register
//     uint32_t __reserved10[7];
//     volatile uint32_t OTG_FS_DOEPCTL3;          // device endpoint-3 control register
//                                                 // -604.0
//     volatile uint32_t OTG_FS_DIEPINT0;          // device endpoint-x interrupt register
//     uint32_t __reserved11[7];
//     volatile uint32_t OTG_FS_DIEPINT1;          // device endpoint-1 interrupt register
//     uint32_t __reserved12[7];
//     volatile uint32_t OTG_FS_DIEPINT2;          // device endpoint-2 interrupt register
//     uint32_t __reserved13[7];
//     volatile uint32_t OTG_FS_DIEPINT3;          // device endpoint-3 interrupt register
//     uint32_t __reserved14[103];
//     volatile uint32_t OTG_FS_DOEPINT0;          // device endpoint-0 interrupt register
//     uint32_t __reserved15[7];
//     volatile uint32_t OTG_FS_DOEPINT1;          // device endpoint-1 interrupt register
//     uint32_t __reserved16[7];
//     volatile uint32_t OTG_FS_DOEPINT2;          // device endpoint-2 interrupt register
//     uint32_t __reserved17[7];
//     volatile uint32_t OTG_FS_DOEPINT3;          // device endpoint-3 interrupt register
//                                                 // -604.0
//     volatile uint32_t OTG_FS_DIEPTSIZ0;         // device endpoint-0 transfer size register
//     uint32_t __reserved18[127];
//     volatile uint32_t OTG_FS_DOEPTSIZ0;         // device OUT endpoint-0 transfer size register
//                                                 // -484.0
//     volatile uint32_t OTG_FS_DIEPTSIZ1;         // device endpoint-1 transfer size register
//     uint32_t __reserved19[7];
//     volatile uint32_t OTG_FS_DIEPTSIZ2;         // device endpoint-2 transfer size register
//     uint32_t __reserved20[7];
//     volatile uint32_t OTG_FS_DIEPTSIZ3;         // device endpoint-3 transfer size register
//                                                 // -92.0
//     volatile uint32_t OTG_FS_DTXFSTS0;          // OTG_FS device IN endpoint transmit FIFO status register
//     uint32_t __reserved21[7];
//     volatile uint32_t OTG_FS_DTXFSTS1;          // OTG_FS device IN endpoint transmit FIFO status register
//     uint32_t __reserved22[7];
//     volatile uint32_t OTG_FS_DTXFSTS2;          // OTG_FS device IN endpoint transmit FIFO status register
//     uint32_t __reserved23[7];
//     volatile uint32_t OTG_FS_DTXFSTS3;          // OTG_FS device IN endpoint transmit FIFO status register
//     uint32_t __reserved24[109];
//     volatile uint32_t OTG_FS_DOEPTSIZ1;         // device OUT endpoint-1 transfer size register
//     uint32_t __reserved25[7];
//     volatile uint32_t OTG_FS_DOEPTSIZ2;         // device OUT endpoint-2 transfer size register
//     uint32_t __reserved26[7];
//     volatile uint32_t OTG_FS_DOEPTSIZ3;         // device OUT endpoint-3 transfer size register
//                                                 // -500.0
//     volatile uint32_t OTG_FS_DIEPCTL4;          // OTG device endpoint-4 control register
//     uint32_t __reserved27[1];
//     volatile uint32_t OTG_FS_DIEPINT4;          // device endpoint-4 interrupt register
//     uint32_t __reserved28[2];
//     volatile uint32_t OTG_FS_DIEPTSIZ4;         // device endpoint-4 transfer size register
//     uint32_t __reserved29[1];
//     volatile uint32_t OTG_FS_DTXFSTS4;          // OTG_FS device IN endpoint transmit FIFO status register
//     volatile uint32_t OTG_FS_DIEPCTL5;          // OTG device endpoint-5 control register
//     uint32_t __reserved30[1];
//     volatile uint32_t OTG_FS_DIEPINT5;          // device endpoint-5 interrupt register
//     uint32_t __reserved31[1];
//     volatile uint32_t OTG_FS_DIEPTSIZ55;        // device endpoint-5 transfer size register
//     uint32_t __reserved32[1];
//     volatile uint32_t OTG_FS_DTXFSTS55;         // OTG_FS device IN endpoint transmit FIFO status register
//     uint32_t __reserved33[111];
//     volatile uint32_t OTG_FS_DOEPCTL4;          // device endpoint-4 control register
//     uint32_t __reserved34[1];
//     volatile uint32_t OTG_FS_DOEPINT4;          // device endpoint-4 interrupt register
//     uint32_t __reserved35[1];
//     volatile uint32_t OTG_FS_DOEPTSIZ4;         // device OUT endpoint-4 transfer size register
//     uint32_t __reserved36[1];
//     volatile uint32_t OTG_FS_DOEPCTL5;          // device endpoint-5 control register
//     uint32_t __reserved37[1];
//     volatile uint32_t OTG_FS_DOEPINT5;          // device endpoint-5 interrupt register
//     uint32_t __reserved38[1];
//     volatile uint32_t OTG_FS_DOEPTSIZ5;         // device OUT endpoint-5 transfer size register
// } USB_OTG_FS_RegDef_t;

// USB on the go full speed
// typedef struct {
//     volatile uint32_t OTG_FS_PCGCCTL;           // OTG_FS power and clock gating control register (OTG_FS_PCGCCTL)
// } USB_OTG_FS_RegDef_t;

// Digital camera interface
typedef struct {
    volatile uint32_t CR;                       // control register 1
    volatile uint32_t SR;                       // status register
    volatile uint32_t RIS;                      // raw interrupt status register
    volatile uint32_t IER;                      // interrupt enable register
    volatile uint32_t MIS;                      // masked interrupt status register
    volatile uint32_t ICR;                      // interrupt clear register
    volatile uint32_t ESCR;                     // embedded synchronization code register
    volatile uint32_t ESUR;                     // embedded synchronization unmask register
    volatile uint32_t CWSTRT;                   // crop window start
    volatile uint32_t CWSIZE;                   // crop window size
    volatile uint32_t DR;                       // data register
} DCMI_RegDef_t;

// JPEG codec
typedef struct {
    volatile uint32_t JPEG_CONFR0;              // JPEG codec configuration register 0
    volatile uint32_t JPEG_CONFR1;              // JPEG codec configuration register 1
    volatile uint32_t JPEG_CONFR2;              // JPEG codec configuration register 2
    volatile uint32_t JPEG_CONFR3;              // JPEG codec configuration register 3
    volatile uint32_t JPEG_CONFR4;              // JPEG codec configuration register 4
    volatile uint32_t JPEG_CONFR5;              // JPEG codec configuration register 5
    volatile uint32_t JPEG_CONFR6;              // JPEG codec configuration register 6
    volatile uint32_t JPEG_CONFR7;              // JPEG codec configuration register 7
	uint32_t __reserved0[4];
    volatile uint32_t JPEG_CR;                  // JPEG control register
    volatile uint32_t JPEG_SR;                  // JPEG status register
    volatile uint32_t JPEG_CFR;                 // JPEG clear flag register
	uint32_t __reserved1[1];
    volatile uint32_t JPEG_DIR;                 // JPEG data input register
    volatile uint32_t JPEG_DOR;                 // JPEG data output register
	uint32_t __reserved2[2];
    volatile uint32_t QMEM0_0;                  // JPEG quantization tables
    volatile uint32_t QMEM0_1;                  // JPEG quantization tables
    volatile uint32_t QMEM0_2;                  // JPEG quantization tables
    volatile uint32_t QMEM0_3;                  // JPEG quantization tables
    volatile uint32_t QMEM0_4;                  // JPEG quantization tables
    volatile uint32_t QMEM0_5;                  // JPEG quantization tables
    volatile uint32_t QMEM0_6;                  // JPEG quantization tables
    volatile uint32_t QMEM0_7;                  // JPEG quantization tables
    volatile uint32_t QMEM0_8;                  // JPEG quantization tables
    volatile uint32_t QMEM0_9;                  // JPEG quantization tables
    volatile uint32_t QMEM0_10;                 // JPEG quantization tables
    volatile uint32_t QMEM0_11;                 // JPEG quantization tables
    volatile uint32_t QMEM0_12;                 // JPEG quantization tables
    volatile uint32_t QMEM0_13;                 // JPEG quantization tables
    volatile uint32_t QMEM0_14;                 // JPEG quantization tables
    volatile uint32_t QMEM0_15;                 // JPEG quantization tables
    volatile uint32_t QMEM1_0;                  // JPEG quantization tables
    volatile uint32_t QMEM1_1;                  // JPEG quantization tables
    volatile uint32_t QMEM1_2;                  // JPEG quantization tables
    volatile uint32_t QMEM1_3;                  // JPEG quantization tables
    volatile uint32_t QMEM1_4;                  // JPEG quantization tables
    volatile uint32_t QMEM1_5;                  // JPEG quantization tables
    volatile uint32_t QMEM1_6;                  // JPEG quantization tables
    volatile uint32_t QMEM1_7;                  // JPEG quantization tables
    volatile uint32_t QMEM1_8;                  // JPEG quantization tables
    volatile uint32_t QMEM1_9;                  // JPEG quantization tables
    volatile uint32_t QMEM1_10;                 // JPEG quantization tables
    volatile uint32_t QMEM1_11;                 // JPEG quantization tables
    volatile uint32_t QMEM1_12;                 // JPEG quantization tables
    volatile uint32_t QMEM1_13;                 // JPEG quantization tables
    volatile uint32_t QMEM1_14;                 // JPEG quantization tables
    volatile uint32_t QMEM1_15;                 // JPEG quantization tables
    volatile uint32_t QMEM2_0;                  // JPEG quantization tables
    volatile uint32_t QMEM2_1;                  // JPEG quantization tables
    volatile uint32_t QMEM2_2;                  // JPEG quantization tables
    volatile uint32_t QMEM2_3;                  // JPEG quantization tables
    volatile uint32_t QMEM2_4;                  // JPEG quantization tables
    volatile uint32_t QMEM2_5;                  // JPEG quantization tables
    volatile uint32_t QMEM2_6;                  // JPEG quantization tables
    volatile uint32_t QMEM2_7;                  // JPEG quantization tables
    volatile uint32_t QMEM2_8;                  // JPEG quantization tables
    volatile uint32_t QMEM2_9;                  // JPEG quantization tables
    volatile uint32_t QMEM2_10;                 // JPEG quantization tables
    volatile uint32_t QMEM2_11;                 // JPEG quantization tables
    volatile uint32_t QMEM2_12;                 // JPEG quantization tables
    volatile uint32_t QMEM2_13;                 // JPEG quantization tables
    volatile uint32_t QMEM2_14;                 // JPEG quantization tables
    volatile uint32_t QMEM2_15;                 // JPEG quantization tables
    volatile uint32_t QMEM3_0;                  // JPEG quantization tables
    volatile uint32_t QMEM3_1;                  // JPEG quantization tables
    volatile uint32_t QMEM3_2;                  // JPEG quantization tables
    volatile uint32_t QMEM3_3;                  // JPEG quantization tables
    volatile uint32_t QMEM3_4;                  // JPEG quantization tables
    volatile uint32_t QMEM3_5;                  // JPEG quantization tables
    volatile uint32_t QMEM3_6;                  // JPEG quantization tables
    volatile uint32_t QMEM3_7;                  // JPEG quantization tables
    volatile uint32_t QMEM3_8;                  // JPEG quantization tables
    volatile uint32_t QMEM3_9;                  // JPEG quantization tables
    volatile uint32_t QMEM3_10;                 // JPEG quantization tables
    volatile uint32_t QMEM3_11;                 // JPEG quantization tables
    volatile uint32_t QMEM3_12;                 // JPEG quantization tables
    volatile uint32_t QMEM3_13;                 // JPEG quantization tables
    volatile uint32_t QMEM3_14;                 // JPEG quantization tables
    volatile uint32_t QMEM3_15;                 // JPEG quantization tables
    volatile uint32_t HUFFMIN_0;                // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_1;                // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_2;                // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_3;                // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_4;                // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_5;                // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_6;                // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_7;                // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_8;                // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_9;                // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_10;               // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_11;               // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_12;               // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_13;               // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_14;               // JPEG HuffMin tables
    volatile uint32_t HUFFMIN_15;               // JPEG HuffMin tables
    volatile uint32_t HUFFBASE0;                // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE1;                // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE2;                // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE3;                // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE4;                // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE5;                // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE6;                // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE7;                // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE8;                // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE9;                // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE10;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE11;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE12;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE13;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE14;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE15;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE16;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE17;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE18;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE19;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE20;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE21;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE22;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE23;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE24;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE25;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE26;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE27;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE28;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE29;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE30;               // JPEG HuffSymb tables
    volatile uint32_t HUFFBASE31;               // JPEG HuffSymb tables
    volatile uint32_t HUFFSYMB0;                // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB1;                // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB2;                // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB3;                // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB4;                // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB5;                // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB6;                // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB7;                // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB8;                // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB9;                // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB10;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB11;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB12;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB13;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB14;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB15;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB16;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB17;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB18;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB19;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB20;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB21;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB22;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB23;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB24;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB25;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB26;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB27;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB28;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB29;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB30;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB31;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB32;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB33;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB34;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB35;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB36;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB37;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB38;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB39;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB40;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB41;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB42;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB43;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB44;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB45;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB46;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB47;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB48;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB49;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB50;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB51;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB52;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB53;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB54;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB55;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB56;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB57;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB58;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB59;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB60;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB61;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB62;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB63;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB64;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB65;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB66;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB67;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB68;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB69;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB70;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB71;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB72;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB73;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB74;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB75;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB76;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB77;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB78;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB79;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB80;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB81;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB82;               // JPEG HUFFSYMB tables
    volatile uint32_t HUFFSYMB83;               // JPEG HUFFSYMB tables
    volatile uint32_t DHTMEM0;                  // JPEG DHTMem tables
    volatile uint32_t DHTMEM2;                  // JPEG DHTMem tables
    volatile uint32_t DHTMEM3;                  // JPEG DHTMem tables
    volatile uint32_t DHTMEM4;                  // JPEG DHTMem tables
    volatile uint32_t DHTMEM5;                  // JPEG DHTMem tables
    volatile uint32_t DHTMEM6;                  // JPEG DHTMem tables
    volatile uint32_t DHTMEM7;                  // JPEG DHTMem tables
    volatile uint32_t DHTMEM8;                  // JPEG DHTMem tables
    volatile uint32_t DHTMEM9;                  // JPEG DHTMem tables
    volatile uint32_t DHTMEM10;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM11;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM12;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM13;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM14;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM15;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM16;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM17;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM18;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM19;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM20;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM21;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM22;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM23;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM24;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM25;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM26;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM27;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM28;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM29;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM30;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM31;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM32;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM33;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM34;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM35;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM36;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM37;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM38;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM39;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM40;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM41;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM42;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM43;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM44;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM45;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM46;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM47;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM48;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM49;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM50;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM51;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM52;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM53;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM54;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM55;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM56;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM57;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM58;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM59;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM60;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM61;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM62;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM63;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM64;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM65;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM66;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM67;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM68;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM69;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM70;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM71;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM72;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM73;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM74;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM75;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM76;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM77;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM78;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM79;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM80;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM81;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM82;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM83;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM84;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM85;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM86;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM87;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM88;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM89;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM90;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM91;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM92;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM93;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM94;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM95;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM96;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM97;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM98;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM99;                 // JPEG DHTMem tables
    volatile uint32_t DHTMEM100;                // JPEG DHTMem tables
    volatile uint32_t DHTMEM101;                // JPEG DHTMem tables
    volatile uint32_t DHTMEM102;                // JPEG DHTMem tables
    volatile uint32_t DHTMEM103;                // JPEG DHTMem tables
	uint32_t __reserved3[1];
    volatile uint32_t HUFFENC_AC0_0;            // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_1;            // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_2;            // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_3;            // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_4;            // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_5;            // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_6;            // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_7;            // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_8;            // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_9;            // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_10;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_11;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_12;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_13;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_14;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_15;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_16;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_17;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_18;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_19;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_20;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_21;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_22;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_23;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_24;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_25;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_26;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_27;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_28;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_29;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_30;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_31;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_32;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_33;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_34;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_35;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_36;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_37;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_38;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_39;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_40;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_41;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_42;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_43;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_44;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_45;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_46;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_47;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_48;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_49;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_50;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_51;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_52;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_53;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_54;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_55;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_56;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_57;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_58;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_59;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_60;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_61;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_62;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_63;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_64;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_65;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_66;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_67;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_68;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_69;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_70;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_71;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_72;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_73;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_74;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_75;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_76;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_77;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_78;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_79;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_80;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_81;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_82;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_83;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_84;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_85;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_86;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC0_87;           // JPEG encoder, AC Huffman table 0
    volatile uint32_t HUFFENC_AC1_0;            // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_1;            // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_2;            // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_3;            // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_4;            // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_5;            // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_6;            // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_7;            // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_8;            // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_9;            // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_10;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_11;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_12;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_13;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_14;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_15;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_16;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_17;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_18;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_19;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_20;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_21;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_22;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_23;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_24;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_25;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_26;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_27;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_28;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_29;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_30;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_31;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_32;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_33;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_34;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_35;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_36;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_37;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_38;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_39;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_40;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_41;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_42;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_43;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_44;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_45;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_46;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_47;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_48;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_49;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_50;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_51;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_52;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_53;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_54;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_55;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_56;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_57;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_58;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_59;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_60;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_61;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_62;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_63;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_64;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_65;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_66;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_67;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_68;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_69;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_70;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_71;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_72;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_73;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_74;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_75;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_76;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_77;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_78;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_79;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_80;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_81;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_82;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_83;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_84;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_85;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_86;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_AC1_87;           // JPEG encoder, AC Huffman table 1
    volatile uint32_t HUFFENC_DC0_0;            // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_1;            // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_2;            // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_3;            // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_4;            // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_5;            // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_6;            // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC0_7;            // JPEG encoder, DC Huffman table 0
    volatile uint32_t HUFFENC_DC1_0;            // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_1;            // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_2;            // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_3;            // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_4;            // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_5;            // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_6;            // JPEG encoder, DC Huffman table 1
    volatile uint32_t HUFFENC_DC1_7;            // JPEG encoder, DC Huffman table 1
} JPEG_RegDef_t;

// Cryptographic processor
typedef struct {
    volatile uint32_t CR;                       // control register
    volatile uint32_t SR;                       // status register
    volatile uint32_t DIN;                      // data input register
    volatile uint32_t DOUT;                     // data output register
    volatile uint32_t DMACR;                    // DMA control register
    volatile uint32_t IMSCR;                    // interrupt mask set/clear register
    volatile uint32_t RISR;                     // raw interrupt status register
    volatile uint32_t MISR;                     // masked interrupt status register
    volatile uint32_t K0LR;                     // key registers
    volatile uint32_t K0RR;                     // key registers
    volatile uint32_t K1LR;                     // key registers
    volatile uint32_t K1RR;                     // key registers
    volatile uint32_t K2LR;                     // key registers
    volatile uint32_t K2RR;                     // key registers
    volatile uint32_t K3LR;                     // key registers
    volatile uint32_t K3RR;                     // key registers
    volatile uint32_t IV0LR;                    // initialization vector registers
    volatile uint32_t IV0RR;                    // initialization vector registers
    volatile uint32_t IV1LR;                    // initialization vector registers
    volatile uint32_t IV1RR;                    // initialization vector registers
    volatile uint32_t CSGCMCCM0R;               // context swap register
    volatile uint32_t CSGCMCCM1R;               // context swap register
    volatile uint32_t CSGCMCCM2R;               // context swap register
    volatile uint32_t CSGCMCCM3R;               // context swap register
    volatile uint32_t CSGCMCCM4R;               // context swap register
    volatile uint32_t CSGCMCCM5R;               // context swap register
    volatile uint32_t CSGCMCCM6R;               // context swap register
    volatile uint32_t CSGCMCCM7R;               // context swap register
    volatile uint32_t CSGCM0R;                  // context swap register
    volatile uint32_t CSGCM1R;                  // context swap register
    volatile uint32_t CSGCM2R;                  // context swap register
    volatile uint32_t CSGCM3R;                  // context swap register
    volatile uint32_t CSGCM4R;                  // context swap register
    volatile uint32_t CSGCM5R;                  // context swap register
    volatile uint32_t CSGCM6R;                  // context swap register
    volatile uint32_t CSGCM7R;                  // context swap register
} CRYP_RegDef_t;

// Hash processor
typedef struct {
    volatile uint32_t CR;                       // control register
    volatile uint32_t DIN;                      // data input register
    volatile uint32_t STR;                      // start register
    volatile uint32_t HR0;                      // digest registers
    volatile uint32_t HR1;                      // digest registers
    volatile uint32_t HR2;                      // digest registers
    volatile uint32_t HR3;                      // digest registers
    volatile uint32_t HR4;                      // digest registers
    volatile uint32_t IMR;                      // interrupt enable register
    volatile uint32_t SR;                       // status register
	uint32_t __reserved0[52];
    volatile uint32_t CSR0;                     // context swap registers
    volatile uint32_t CSR1;                     // context swap registers
    volatile uint32_t CSR2;                     // context swap registers
    volatile uint32_t CSR3;                     // context swap registers
    volatile uint32_t CSR4;                     // context swap registers
    volatile uint32_t CSR5;                     // context swap registers
    volatile uint32_t CSR6;                     // context swap registers
    volatile uint32_t CSR7;                     // context swap registers
    volatile uint32_t CSR8;                     // context swap registers
    volatile uint32_t CSR9;                     // context swap registers
    volatile uint32_t CSR10;                    // context swap registers
    volatile uint32_t CSR11;                    // context swap registers
    volatile uint32_t CSR12;                    // context swap registers
    volatile uint32_t CSR13;                    // context swap registers
    volatile uint32_t CSR14;                    // context swap registers
    volatile uint32_t CSR15;                    // context swap registers
    volatile uint32_t CSR16;                    // context swap registers
    volatile uint32_t CSR17;                    // context swap registers
    volatile uint32_t CSR18;                    // context swap registers
    volatile uint32_t CSR19;                    // context swap registers
    volatile uint32_t CSR20;                    // context swap registers
    volatile uint32_t CSR21;                    // context swap registers
    volatile uint32_t CSR22;                    // context swap registers
    volatile uint32_t CSR23;                    // context swap registers
    volatile uint32_t CSR24;                    // context swap registers
    volatile uint32_t CSR25;                    // context swap registers
    volatile uint32_t CSR26;                    // context swap registers
    volatile uint32_t CSR27;                    // context swap registers
    volatile uint32_t CSR28;                    // context swap registers
    volatile uint32_t CSR29;                    // context swap registers
    volatile uint32_t CSR30;                    // context swap registers
    volatile uint32_t CSR31;                    // context swap registers
    volatile uint32_t CSR32;                    // context swap registers
    volatile uint32_t CSR33;                    // context swap registers
    volatile uint32_t CSR34;                    // context swap registers
    volatile uint32_t CSR35;                    // context swap registers
    volatile uint32_t CSR36;                    // context swap registers
    volatile uint32_t CSR37;                    // context swap registers
    volatile uint32_t CSR38;                    // context swap registers
    volatile uint32_t CSR39;                    // context swap registers
    volatile uint32_t CSR40;                    // context swap registers
    volatile uint32_t CSR41;                    // context swap registers
    volatile uint32_t CSR42;                    // context swap registers
    volatile uint32_t CSR43;                    // context swap registers
    volatile uint32_t CSR44;                    // context swap registers
    volatile uint32_t CSR45;                    // context swap registers
    volatile uint32_t CSR46;                    // context swap registers
    volatile uint32_t CSR47;                    // context swap registers
    volatile uint32_t CSR48;                    // context swap registers
    volatile uint32_t CSR49;                    // context swap registers
    volatile uint32_t CSR50;                    // context swap registers
    volatile uint32_t CSR51;                    // context swap registers
    volatile uint32_t CSR52;                    // context swap registers
    volatile uint32_t CSR53;                    // context swap registers
	uint32_t __reserved1[80];
    volatile uint32_t HASH_HR0;                 // HASH digest register
    volatile uint32_t HASH_HR1;                 // read-only
    volatile uint32_t HASH_HR2;                 // read-only
    volatile uint32_t HASH_HR3;                 // read-only
    volatile uint32_t HASH_HR4;                 // read-only
    volatile uint32_t HASH_HR5;                 // read-only
    volatile uint32_t HASH_HR6;                 // read-only
    volatile uint32_t HASH_HR7;                 // read-only
} HASH_RegDef_t;

// Random number generator
typedef struct {
    volatile uint32_t CR;                       // control register
    volatile uint32_t SR;                       // status register
    volatile uint32_t DR;                       // data register
} RNG_RegDef_t;

// Flexible memory controller
typedef struct {
    volatile uint32_t BCR1;                     // SRAM/NOR-Flash chip-select control register 1
    volatile uint32_t BTR1;                     // SRAM/NOR-Flash chip-select timing register 1
    volatile uint32_t BCR2;                     // SRAM/NOR-Flash chip-select control register 2
    volatile uint32_t BTR2;                     // SRAM/NOR-Flash chip-select timing register 2
    volatile uint32_t BCR3;                     // SRAM/NOR-Flash chip-select control register 3
    volatile uint32_t BTR3;                     // SRAM/NOR-Flash chip-select timing register 3
    volatile uint32_t BCR4;                     // SRAM/NOR-Flash chip-select control register 4
    volatile uint32_t BTR4;                     // SRAM/NOR-Flash chip-select timing register 4
	uint32_t __reserved0[24];
    volatile uint32_t PCR;                      // PC Card/NAND Flash control register
    volatile uint32_t SR;                       // FIFO status and interrupt register
    volatile uint32_t PMEM;                     // Common memory space timing register
    volatile uint32_t PATT;                     // Attribute memory space timing register
	uint32_t __reserved1[1];
    volatile uint32_t ECCR;                     // ECC result register
	uint32_t __reserved2[27];
    volatile uint32_t BWTR1;                    // SRAM/NOR-Flash write timing registers 1
	uint32_t __reserved3[1];
    volatile uint32_t BWTR2;                    // SRAM/NOR-Flash write timing registers 2
	uint32_t __reserved4[1];
    volatile uint32_t BWTR3;                    // SRAM/NOR-Flash write timing registers 3
	uint32_t __reserved5[1];
    volatile uint32_t BWTR4;                    // SRAM/NOR-Flash write timing registers 4
	uint32_t __reserved6[8];
    volatile uint32_t SDCR1;                    // SDRAM Control Register 1
    volatile uint32_t SDCR2;                    // SDRAM Control Register 2
    volatile uint32_t SDTR1;                    // SDRAM Timing register 1
    volatile uint32_t SDTR2;                    // SDRAM Timing register 2
    volatile uint32_t SDCMR;                    // SDRAM Command Mode register
    volatile uint32_t SDRTR;                    // SDRAM Refresh Timer register
    volatile uint32_t SDSR;                     // SDRAM Status register
} FSMC_RegDef_t;

// QuadSPI interface
typedef struct {
    volatile uint32_t CR;                       // control register
    volatile uint32_t DCR;                      // device configuration register
    volatile uint32_t SR;                       // status register
    volatile uint32_t FCR;                      // flag clear register
    volatile uint32_t DLR;                      // data length register
    volatile uint32_t CCR;                      // communication configuration register
    volatile uint32_t AR;                       // address register
    volatile uint32_t ABR;                      // ABR
    volatile uint32_t DR;                       // data register
    volatile uint32_t PSMKR;                    // polling status mask register
    volatile uint32_t PSMAR;                    // polling status match register
    volatile uint32_t PIR;                      // polling interval register
    volatile uint32_t LPTR;                     // low-power timeout register
} QUADSPI_RegDef_t;

// System control block ACTLR
typedef struct {
    volatile uint32_t ACTRL;                    // Auxiliary control register
} SCB_RegDef_t;

// SysTick timer
typedef struct {
    volatile uint32_t CSR;                      // SysTick control and status register
    volatile uint32_t RVR;                      // SysTick reload value register
    volatile uint32_t CVR;                      // SysTick current value register
    volatile uint32_t CALIB;                    // SysTick calibration value register
} STK_RegDef_t;

// Nested Vectored Interrupt      Controller
typedef struct {
    volatile uint32_t ISER0;                    // Interrupt Set-Enable Register
    volatile uint32_t ISER1;                    // Interrupt Set-Enable Register
    volatile uint32_t ISER2;                    // Interrupt Set-Enable Register
	uint32_t __reserved0[29];
    volatile uint32_t ICER0;                    // Interrupt Clear-Enable Register
    volatile uint32_t ICER1;                    // Interrupt Clear-Enable Register
    volatile uint32_t ICER2;                    // Interrupt Clear-Enable Register
	uint32_t __reserved1[29];
    volatile uint32_t ISPR0;                    // Interrupt Set-Pending Register
    volatile uint32_t ISPR1;                    // Interrupt Set-Pending Register
    volatile uint32_t ISPR2;                    // Interrupt Set-Pending Register
	uint32_t __reserved2[29];
    volatile uint32_t ICPR0;                    // Interrupt Clear-Pending Register
    volatile uint32_t ICPR1;                    // Interrupt Clear-Pending Register
    volatile uint32_t ICPR2;                    // Interrupt Clear-Pending Register
	uint32_t __reserved3[29];
    volatile uint32_t IABR0;                    // Interrupt Active Bit Register
    volatile uint32_t IABR1;                    // Interrupt Active Bit Register
    volatile uint32_t IABR2;                    // Interrupt Active Bit Register
	uint32_t __reserved4[61];
    volatile uint32_t IPR0;                     // Interrupt Priority Register
    volatile uint32_t IPR1;                     // Interrupt Priority Register
    volatile uint32_t IPR2;                     // Interrupt Priority Register
    volatile uint32_t IPR3;                     // Interrupt Priority Register
    volatile uint32_t IPR4;                     // Interrupt Priority Register
    volatile uint32_t IPR5;                     // Interrupt Priority Register
    volatile uint32_t IPR6;                     // Interrupt Priority Register
    volatile uint32_t IPR7;                     // Interrupt Priority Register
    volatile uint32_t IPR8;                     // Interrupt Priority Register
    volatile uint32_t IPR9;                     // Interrupt Priority Register
    volatile uint32_t IPR10;                    // Interrupt Priority Register
    volatile uint32_t IPR11;                    // Interrupt Priority Register
    volatile uint32_t IPR12;                    // Interrupt Priority Register
    volatile uint32_t IPR13;                    // Interrupt Priority Register
    volatile uint32_t IPR14;                    // Interrupt Priority Register
    volatile uint32_t IPR15;                    // Interrupt Priority Register
    volatile uint32_t IPR16;                    // Interrupt Priority Register
    volatile uint32_t IPR17;                    // Interrupt Priority Register
    volatile uint32_t IPR18;                    // Interrupt Priority Register
    volatile uint32_t IPR19;                    // Interrupt Priority Register
    volatile uint32_t IPR20;                    // Interrupt Priority Register
												// -840.0
    volatile uint32_t ISER3;                    // Interrupt Set-Enable Register
	uint32_t __reserved5[31];
    volatile uint32_t ICER3;                    // Interrupt Clear-Enable Register
	uint32_t __reserved6[31];
    volatile uint32_t ISPR3;                    // Interrupt Set-Pending Register
	uint32_t __reserved7[31];
    volatile uint32_t ICPR3;                    // Interrupt Clear-Pending Register
	uint32_t __reserved8[31];
    volatile uint32_t IABR3;                    // Interrupt Active Bit Register
	uint32_t __reserved9[81];
    volatile uint32_t IPR21;                    // Interrupt Priority Register
    volatile uint32_t IPR22;                    // Interrupt Priority Register
    volatile uint32_t IPR23;                    // Interrupt Priority Register
    volatile uint32_t IPR24;                    // Interrupt Priority Register
    volatile uint32_t IPR25;                    // Interrupt Priority Register
    volatile uint32_t IPR26;                    // Interrupt Priority Register
    volatile uint32_t IPR27;                    // Interrupt Priority Register
    volatile uint32_t IPR28;                    // Interrupt Priority Register
    volatile uint32_t IPR29;                    // Interrupt Priority Register
} NVIC_RegDef_t;

// System control block
// typedef struct {
//     volatile uint32_t CPUID;                    // CPUID base register
//     volatile uint32_t ICSR;                     // Interrupt control and state register
//     volatile uint32_t VTOR;                     // Vector table offset register
//     volatile uint32_t AIRCR;                    // Application interrupt and reset control register
//     volatile uint32_t SCR;                      // System control register
//     volatile uint32_t CCR;                      // Configuration and control register
//     volatile uint32_t SHPR1;                    // System handler priority registers
//     volatile uint32_t SHPR2;                    // System handler priority registers
//     volatile uint32_t SHPR3;                    // System handler priority registers
//     volatile uint32_t SHCSR;                    // System handler control and state register
//     volatile uint32_t CFSR_UFSR_BFSR_MMFSR;     // Configurable fault status register
//     volatile uint32_t HFSR;                     // Hard fault status register
//     uint32_t __reserved0[1];
//     volatile uint32_t MMFAR;                    // Memory management fault address register
//     volatile uint32_t BFAR;                     // Bus fault address register
// } SCB_RegDef_t;

// Processor features
typedef struct {
    volatile uint32_t CLIDR;                    // Cache Level ID register
    volatile uint32_t CTR;                      // Cache Type register
    volatile uint32_t CCSIDR;                   // Cache Size ID register
} PF_RegDef_t;

// Floating point unit CPACR
typedef struct {
    volatile uint32_t CPACR;                    // Coprocessor access control register
} FPU_RegDef_t;

// Memory protection unit
typedef struct {
    volatile uint32_t MPU_TYPER;                // MPU type register
    volatile uint32_t MPU_CTRL;                 // MPU control register
    volatile uint32_t MPU_RNR;                  // MPU region number register
    volatile uint32_t MPU_RBAR;                 // MPU region base address register
    volatile uint32_t MPU_RASR;                 // MPU region attribute and size register
} MPU_RegDef_t;

// Nested vectored interrupt      controller
// typedef struct {
//     volatile uint32_t STIR;                     // Software trigger interrupt register
// } NVIC_RegDef_t;

// Floting point unit
// typedef struct {
//     volatile uint32_t FPCCR;                    // Floating-point context control register
//     volatile uint32_t FPCAR;                    // Floating-point context address register
//     volatile uint32_t FPSCR;                    // Floating-point status control register
// } FPU_RegDef_t;

// Access control
typedef struct {
    volatile uint32_t ITCMCR;                   // Instruction and Data Tightly-Coupled Memory Control Registers
    volatile uint32_t DTCMCR;                   // Instruction and Data Tightly-Coupled Memory Control Registers
    volatile uint32_t AHBPCR;                   // AHBP Control register
    volatile uint32_t CACR;                     // Auxiliary Cache Control register
    volatile uint32_t AHBSCR;                   // AHB Slave Control register
	uint32_t __reserved0[1];
    volatile uint32_t ABFSR;                    // Auxiliary Bus Fault Status register
} AC_RegDef_t;

// MCU debug component
typedef struct {
    volatile uint32_t IDCODE;                   // DBGMCU_IDCODE
} DBGMCU_RegDef_t;


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



typedef struct {
    uint8_t exti_num;                       // EXTI num 0-24
    Exti_Trigger_Modes mode;
    Exti_ports port;
} Exti_Config_R;



/**************************** clock control **********************************/
#define RCC_SYSCFG_Clk_en()     (RCC->APB2ENR |= 1<<14)
#define RCC_SPI_Clk_en(SPI_1)        (RCC->APB2ENR |= 1<< 12)

/**************************** Functions *************************************/
// initiailizes interrupt based on config struct
void exti_init(Exti_Config_R * config);

// state SET or RESET. priority 4 bits value. lower the num higher priority
void IRQ_Configure(uint8_t intr, uint8_t state, uint8_t priority);
#define TIM2                ((TIM_RegDef_t *)         0x40000000)		// General purpose timers
#define TIM3                ((TIM_RegDef_t *)         0x40000400)		// General purpose timers
#define TIM4                ((TIM_RegDef_t *)         0x40000800)		// General purpose timers
#define TIM5                ((TIM_RegDef_t *)         0x40000c00)		// General purpose timers
#define TIM6                ((TIM_RegDef_t *)         0x40001000)		// Basic timers
#define TIM7                ((TIM_RegDef_t *)         0x40001400)		// Basic timers
#define TIM12               ((TIM_RegDef_t *)         0x40001800)		// General purpose timers
#define TIM13               ((TIM_RegDef_t *)         0x40001c00)		// General-purpose-timers
#define TIM14               ((TIM_RegDef_t *)         0x40002000)		// General-purpose-timers
#define LPTIM1              ((LPTIM_RegDef_t *)       0x40002400)		// Low power timer
#define RTC                 ((RTC_RegDef_t *)         0x40002800)		// Real-time clock
#define WWDG                ((WWDG_RegDef_t *)        0x40002c00)		// Window watchdog
#define IWDG                ((IWDG_RegDef_t *)        0x40003000)		// Independent watchdog
#define CAN3                ((CAN_RegDef_t *)         0x40003400)		// Controller area network
#define SPI2                ((SPI_RegDef_t *)         0x40003800)		// Serial peripheral interface
#define SPI3                ((SPI_RegDef_t *)         0x40003c00)		// Serial peripheral interface
#define SPDIFRX             ((SPDIF_RX_RegDef_t *)    0x40004000)		// Receiver Interface
#define USART2              ((USART_RegDef_t *)       0x40004400)		// Universal synchronous asynchronous receiver      transmitter
#define USART3              ((USART_RegDef_t *)       0x40004800)		// Universal synchronous asynchronous receiver      transmitter
#define UART4               ((USART_RegDef_t *)       0x40004c00)		// Universal synchronous asynchronous receiver      transmitter
#define UART5               ((USART_RegDef_t *)       0x40005000)		// Universal synchronous asynchronous receiver      transmitter
#define I2C1                ((I2C_RegDef_t *)         0x40005400)		// Inter-integrated circuit
#define I2C2                ((I2C_RegDef_t *)         0x40005800)		// Inter-integrated circuit
#define I2C3                ((I2C_RegDef_t *)         0x40005c00)		// Inter-integrated circuit
#define I2C4                ((I2C_RegDef_t *)         0x40006000)		// Inter-integrated circuit
#define CAN1                ((CAN_RegDef_t *)         0x40006400)		// Controller area network
#define CAN2                ((CAN_RegDef_t *)         0x40006800)		// Controller area network
#define CEC                 ((CEC_RegDef_t *)         0x40006c00)		// HDMI-CEC controller
#define PWR                 ((PWR_RegDef_t *)         0x40007000)		// Power control
#define DAC                 ((DAC_RegDef_t *)         0x40007400)		// Digital-to-analog converter
#define UART7               ((USART_RegDef_t *)       0x40007800)		// Universal synchronous asynchronous receiver      transmitter
#define UART8               ((USART_RegDef_t *)       0x40007c00)		// Universal synchronous asynchronous receiver      transmitter
#define TIM1                ((TIM_RegDef_t *)         0x40010000)		// Advanced-timers
#define TIM8                ((TIM_RegDef_t *)         0x40010400)		// Advanced-timers
#define USART1              ((USART_RegDef_t *)       0x40011000)		// Universal synchronous asynchronous receiver      transmitter
#define USART6              ((USART_RegDef_t *)       0x40011400)		// Universal synchronous asynchronous receiver      transmitter
#define SDMMC2              ((SDMMC_RegDef_t *)       0x40011c00)		// Secure digital input/output      interface
#define ADC1                ((ADC_RegDef_t *)         0x40012000)		// Analog-to-digital converter
#define ADC2                ((ADC_RegDef_t *)         0x40012100)		// Analog-to-digital converter
#define ADC3                ((ADC_RegDef_t *)         0x40012200)		// Analog-to-digital converter
#define SDMMC1              ((SDMMC_RegDef_t *)       0x40012c00)		// Secure digital input/output      interface
#define SPI1                ((SPI_RegDef_t *)         0x40013000)		// Serial peripheral interface
#define SPI4                ((SPI_RegDef_t *)         0x40013400)		// Serial peripheral interface
#define SYSCFG              ((SYSCFG_RegDef_t *)      0x40013800)		// System configuration controller
#define EXTI                ((EXTI_RegDef_t *)        0x40013c00)		// External interrupt/event      controller
#define TIM9                ((TIM_RegDef_t *)         0x40014000)		// General purpose timers
#define TIM10               ((TIM_RegDef_t *)         0x40014400)		// General-purpose-timers
#define TIM11               ((TIM_RegDef_t *)         0x40014800)		// General-purpose-timers
#define SPI5                ((SPI_RegDef_t *)         0x40015000)		// Serial peripheral interface
#define SPI6                ((SPI_RegDef_t *)         0x40015400)		// Serial peripheral interface
#define SAI1                ((SAI_RegDef_t *)         0x40015800)		// Serial audio interface
#define SAI2                ((SAI_RegDef_t *)         0x40015c00)		// Serial audio interface
#define LTCD                ((LTDC_RegDef_t *)        0x40016800)		// LCD-TFT Controller
#define DSI                 ((DSI_RegDef_t *)         0x40016c00)		// DSI Host
#define DFSDM               ((DFSDM_RegDef_t *)       0x40017400)		// Digital filter for sigma delta      modulators
#define MDIOS               ((MDIOS_RegDef_t *)       0x40017800)		// Management data input/output slave
#define GPIOA               ((GPIO_RegDef_t *)        0x40020000)		// General-purpose I/Os
#define GPIOB               ((GPIO_RegDef_t *)        0x40020400)		// General-purpose I/Os
#define GPIOC               ((GPIO_RegDef_t *)        0x40020800)		// General-purpose I/Os
#define GPIOD               ((GPIO_RegDef_t *)        0x40020c00)		// General-purpose I/Os
#define GPIOE               ((GPIO_RegDef_t *)        0x40021000)		// General-purpose I/Os
#define GPIOF               ((GPIO_RegDef_t *)        0x40021400)		// General-purpose I/Os
#define GPIOG               ((GPIO_RegDef_t *)        0x40021800)		// General-purpose I/Os
#define GPIOH               ((GPIO_RegDef_t *)        0x40021c00)		// General-purpose I/Os
#define GPIOI               ((GPIO_RegDef_t *)        0x40022000)		// General-purpose I/Os
#define GPIOJ               ((GPIO_RegDef_t *)        0x40022400)		// General-purpose I/Os
#define GPIOK               ((GPIO_RegDef_t *)        0x40022800)		// General-purpose I/Os
#define CRC                 ((CRC_RegDef_t *)         0x40023000)		// Cryptographic processor
#define RCC                 ((RCC_RegDef_t *)         0x40023800)		// Reset and clock control
#define Flash               ((FLASH_RegDef_t *)       0x40023c00)		// FLASH
#define DMA1                ((DMA_RegDef_t *)         0x40026000)		// DMA controller
#define DMA2                ((DMA_RegDef_t *)         0x40026400)		// DMA controller
#define Ethernet_MAC        ((Ethernet_RegDef_t *)    0x40028000)		// Ethernet: media access control      (MAC)
#define Ethernet_MMC        ((Ethernet_RegDef_t *)    0x40028100)		// Ethernet: MAC management counters
#define Ethernet_PTP        ((Ethernet_RegDef_t *)    0x40028700)		// Ethernet: Precision time protocol
#define Ethernet_DMA        ((Ethernet_RegDef_t *)    0x40029000)		// Ethernet: DMA controller operation
#define DMA2D               ((DMA2D_RegDef_t *)       0x4002b000)		// DMA2D controller
#define OTG_HS_GLOBAL       ((USB_OTG_HS_RegDef_t *)  0x40040000)		// USB on the go high speed
#define OTG_HS_HOST         ((USB_OTG_HS_RegDef_t *)  0x40040400)		// USB on the go high speed
#define OTG_HS_DEVICE       ((USB_OTG_HS_RegDef_t *)  0x40040800)		// USB on the go high speed
#define OTG_HS_PWRCLK       ((USB_OTG_HS_RegDef_t *)  0x40040e00)		// USB on the go high speed
#define OTG_FS_GLOBAL       ((USB_OTG_FS_RegDef_t *)  0x50000000)		// USB on the go full speed
#define OTG_FS_HOST         ((USB_OTG_FS_RegDef_t *)  0x50000400)		// USB on the go full speed
#define OTG_FS_DEVICE       ((USB_OTG_FS_RegDef_t *)  0x50000800)		// USB on the go full speed
#define OTG_FS_PWRCLK       ((USB_OTG_FS_RegDef_t *)  0x50000e00)		// USB on the go full speed
#define DCMI                ((DCMI_RegDef_t *)        0x50050000)		// Digital camera interface
#define JPEG                ((JPEG_RegDef_t *)        0x50051000)		// JPEG codec
#define CRYP                ((CRYP_RegDef_t *)        0x50060000)		// Cryptographic processor
#define HASH                ((HASH_RegDef_t *)        0x50060400)		// Hash processor
#define RNG                 ((RNG_RegDef_t *)         0x50060800)		// Random number generator
#define FMC                 ((FSMC_RegDef_t *)        0xa0000000)		// Flexible memory controller
#define QUADSPI             ((QUADSPI_RegDef_t *)     0xa0001000)		// QuadSPI interface
#define SCB_ACTRL           ((SCB_RegDef_t *)         0xe000e008)		// System control block ACTLR
#define STK                 ((STK_RegDef_t *)         0xe000e010)		// SysTick timer
#define NVIC                ((NVIC_RegDef_t *)        0xe000e100)		// Nested Vectored Interrupt      Controller
#define SCB                 ((SCB_RegDef_t *)         0xe000ed00)		// System control block
#define PF                  ((PF_RegDef_t *)          0xe000ed78)		// Processor features
#define FPU_CPACR           ((FPU_RegDef_t *)         0xe000ed88)		// Floating point unit CPACR
#define MPU                 ((MPU_RegDef_t *)         0xe000ed90)		// Memory protection unit
#define NVIC_STIR           ((NVIC_RegDef_t *)        0xe000ef00)		// Nested vectored interrupt      controller
#define FPU                 ((FPU_RegDef_t *)         0xe000ef34)		// Floting point unit
#define AC                  ((AC_RegDef_t *)          0xe000ef90)		// Access control
#define DBGMCU              ((DBGMCU_RegDef_t *)      0xe0042000)		// MCU debug component

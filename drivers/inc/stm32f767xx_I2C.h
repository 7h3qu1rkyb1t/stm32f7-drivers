#include "lib.h"
#include "stm32f767xx.h"
#include "stm32f767xx_RCC.h"
#include "math.h""

#define Get_I2C1_CR1(FLAG)                   (*(uint32_t*)0x40005400 & FLAG)
#define Get_I2C1_CR2(FLAG)                   (*(uint32_t*)0x40005404 & FLAG)
#define Get_I2C1_OAR1(FLAG)                  (*(uint32_t*)0x40005408 & FLAG)
#define Get_I2C1_OAR2(FLAG)                  (*(uint32_t*)0x4000540c & FLAG)
#define Get_I2C1_TIMINGR(FLAG)               (*(uint32_t*)0x40005410 & FLAG)
#define Get_I2C1_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005414 & FLAG)
#define Get_I2C1_ISR(FLAG)                   (*(uint32_t*)0x40005418 & FLAG)
#define Get_I2C1_ICR(FLAG)                   (*(uint32_t*)0x4000541c & FLAG)
#define Get_I2C1_PECR(FLAG)                  (*(uint32_t*)0x40005420 & FLAG)
#define Get_I2C1_RXDR(FLAG)                  (*(uint32_t*)0x40005424 & FLAG)
#define Get_I2C1_TXDR(FLAG)                  (*(uint32_t*)0x40005428 & FLAG)
#define Get_I2C2_CR1(FLAG)                   (*(uint32_t*)0x40005800 & FLAG)
#define Get_I2C2_CR2(FLAG)                   (*(uint32_t*)0x40005804 & FLAG)
#define Get_I2C2_OAR1(FLAG)                  (*(uint32_t*)0x40005808 & FLAG)
#define Get_I2C2_OAR2(FLAG)                  (*(uint32_t*)0x4000580c & FLAG)
#define Get_I2C2_TIMINGR(FLAG)               (*(uint32_t*)0x40005810 & FLAG)
#define Get_I2C2_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005814 & FLAG)
#define Get_I2C2_ISR(FLAG)                   (*(uint32_t*)0x40005818 & FLAG)
#define Get_I2C2_ICR(FLAG)                   (*(uint32_t*)0x4000581c & FLAG)
#define Get_I2C2_PECR(FLAG)                  (*(uint32_t*)0x40005820 & FLAG)
#define Get_I2C2_RXDR(FLAG)                  (*(uint32_t*)0x40005824 & FLAG)
#define Get_I2C2_TXDR(FLAG)                  (*(uint32_t*)0x40005828 & FLAG)
#define Get_I2C3_CR1(FLAG)                   (*(uint32_t*)0x40005c00 & FLAG)
#define Get_I2C3_CR2(FLAG)                   (*(uint32_t*)0x40005c04 & FLAG)
#define Get_I2C3_OAR1(FLAG)                  (*(uint32_t*)0x40005c08 & FLAG)
#define Get_I2C3_OAR2(FLAG)                  (*(uint32_t*)0x40005c0c & FLAG)
#define Get_I2C3_TIMINGR(FLAG)               (*(uint32_t*)0x40005c10 & FLAG)
#define Get_I2C3_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005c14 & FLAG)
#define Get_I2C3_ISR(FLAG)                   (*(uint32_t*)0x40005c18 & FLAG)
#define Get_I2C3_ICR(FLAG)                   (*(uint32_t*)0x40005c1c & FLAG)
#define Get_I2C3_PECR(FLAG)                  (*(uint32_t*)0x40005c20 & FLAG)
#define Get_I2C3_RXDR(FLAG)                  (*(uint32_t*)0x40005c24 & FLAG)
#define Get_I2C3_TXDR(FLAG)                  (*(uint32_t*)0x40005c28 & FLAG)
#define Get_I2C4_CR1(FLAG)                   (*(uint32_t*)0x40006000 & FLAG)
#define Get_I2C4_CR2(FLAG)                   (*(uint32_t*)0x40006004 & FLAG)
#define Get_I2C4_OAR1(FLAG)                  (*(uint32_t*)0x40006008 & FLAG)
#define Get_I2C4_OAR2(FLAG)                  (*(uint32_t*)0x4000600c & FLAG)
#define Get_I2C4_TIMINGR(FLAG)               (*(uint32_t*)0x40006010 & FLAG)
#define Get_I2C4_TIMEOUTR(FLAG)              (*(uint32_t*)0x40006014 & FLAG)
#define Get_I2C4_ISR(FLAG)                   (*(uint32_t*)0x40006018 & FLAG)
#define Get_I2C4_ICR(FLAG)                   (*(uint32_t*)0x4000601c & FLAG)
#define Get_I2C4_PECR(FLAG)                  (*(uint32_t*)0x40006020 & FLAG)
#define Get_I2C4_RXDR(FLAG)                  (*(uint32_t*)0x40006024 & FLAG)
#define Get_I2C4_TXDR(FLAG)                  (*(uint32_t*)0x40006028 & FLAG)
#define Set_I2C1_CR1(FLAG)                   (*(uint32_t*)0x40005400 |= FLAG)
#define Clr_I2C1_CR1(FLAG)                   (*(uint32_t*)0x40005400 &= ~FLAG)
#define Set_I2C1_CR2(FLAG)                   (*(uint32_t*)0x40005404 |= FLAG)
#define Clr_I2C1_CR2(FLAG)                   (*(uint32_t*)0x40005404 &= ~FLAG)
#define Set_I2C1_OAR1(FLAG)                  (*(uint32_t*)0x40005408 |= FLAG)
#define Clr_I2C1_OAR1(FLAG)                  (*(uint32_t*)0x40005408 &= ~FLAG)
#define Set_I2C1_OAR2(FLAG)                  (*(uint32_t*)0x4000540c |= FLAG)
#define Clr_I2C1_OAR2(FLAG)                  (*(uint32_t*)0x4000540c &= ~FLAG)
#define Set_I2C1_TIMINGR(FLAG)               (*(uint32_t*)0x40005410 |= FLAG)
#define Clr_I2C1_TIMINGR(FLAG)               (*(uint32_t*)0x40005410 &= ~FLAG)
#define Set_I2C1_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005414 |= FLAG)
#define Clr_I2C1_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005414 &= ~FLAG)
#define Set_I2C1_ISR(FLAG)                   (*(uint32_t*)0x40005418 |= FLAG)
#define Clr_I2C1_ISR(FLAG)                   (*(uint32_t*)0x40005418 &= ~FLAG)
#define Set_I2C1_ICR(FLAG)                   (*(uint32_t*)0x4000541c |= FLAG)
#define Clr_I2C1_ICR(FLAG)                   (*(uint32_t*)0x4000541c &= ~FLAG)
#define Set_I2C1_PECR(FLAG)                  (*(uint32_t*)0x40005420 |= FLAG)
#define Clr_I2C1_PECR(FLAG)                  (*(uint32_t*)0x40005420 &= ~FLAG)
#define Set_I2C1_RXDR(FLAG)                  (*(uint32_t*)0x40005424 |= FLAG)
#define Clr_I2C1_RXDR(FLAG)                  (*(uint32_t*)0x40005424 &= ~FLAG)
#define Set_I2C1_TXDR(FLAG)                  (*(uint32_t*)0x40005428 |= FLAG)
#define Clr_I2C1_TXDR(FLAG)                  (*(uint32_t*)0x40005428 &= ~FLAG)
#define Set_I2C2_CR1(FLAG)                   (*(uint32_t*)0x40005800 |= FLAG)
#define Clr_I2C2_CR1(FLAG)                   (*(uint32_t*)0x40005800 &= ~FLAG)
#define Set_I2C2_CR2(FLAG)                   (*(uint32_t*)0x40005804 |= FLAG)
#define Clr_I2C2_CR2(FLAG)                   (*(uint32_t*)0x40005804 &= ~FLAG)
#define Set_I2C2_OAR1(FLAG)                  (*(uint32_t*)0x40005808 |= FLAG)
#define Clr_I2C2_OAR1(FLAG)                  (*(uint32_t*)0x40005808 &= ~FLAG)
#define Set_I2C2_OAR2(FLAG)                  (*(uint32_t*)0x4000580c |= FLAG)
#define Clr_I2C2_OAR2(FLAG)                  (*(uint32_t*)0x4000580c &= ~FLAG)
#define Set_I2C2_TIMINGR(FLAG)               (*(uint32_t*)0x40005810 |= FLAG)
#define Clr_I2C2_TIMINGR(FLAG)               (*(uint32_t*)0x40005810 &= ~FLAG)
#define Set_I2C2_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005814 |= FLAG)
#define Clr_I2C2_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005814 &= ~FLAG)
#define Set_I2C2_ISR(FLAG)                   (*(uint32_t*)0x40005818 |= FLAG)
#define Clr_I2C2_ISR(FLAG)                   (*(uint32_t*)0x40005818 &= ~FLAG)
#define Set_I2C2_ICR(FLAG)                   (*(uint32_t*)0x4000581c |= FLAG)
#define Clr_I2C2_ICR(FLAG)                   (*(uint32_t*)0x4000581c &= ~FLAG)
#define Set_I2C2_PECR(FLAG)                  (*(uint32_t*)0x40005820 |= FLAG)
#define Clr_I2C2_PECR(FLAG)                  (*(uint32_t*)0x40005820 &= ~FLAG)
#define Set_I2C2_RXDR(FLAG)                  (*(uint32_t*)0x40005824 |= FLAG)
#define Clr_I2C2_RXDR(FLAG)                  (*(uint32_t*)0x40005824 &= ~FLAG)
#define Set_I2C2_TXDR(FLAG)                  (*(uint32_t*)0x40005828 |= FLAG)
#define Clr_I2C2_TXDR(FLAG)                  (*(uint32_t*)0x40005828 &= ~FLAG)
#define Set_I2C3_CR1(FLAG)                   (*(uint32_t*)0x40005c00 |= FLAG)
#define Clr_I2C3_CR1(FLAG)                   (*(uint32_t*)0x40005c00 &= ~FLAG)
#define Set_I2C3_CR2(FLAG)                   (*(uint32_t*)0x40005c04 |= FLAG)
#define Clr_I2C3_CR2(FLAG)                   (*(uint32_t*)0x40005c04 &= ~FLAG)
#define Set_I2C3_OAR1(FLAG)                  (*(uint32_t*)0x40005c08 |= FLAG)
#define Clr_I2C3_OAR1(FLAG)                  (*(uint32_t*)0x40005c08 &= ~FLAG)
#define Set_I2C3_OAR2(FLAG)                  (*(uint32_t*)0x40005c0c |= FLAG)
#define Clr_I2C3_OAR2(FLAG)                  (*(uint32_t*)0x40005c0c &= ~FLAG)
#define Set_I2C3_TIMINGR(FLAG)               (*(uint32_t*)0x40005c10 |= FLAG)
#define Clr_I2C3_TIMINGR(FLAG)               (*(uint32_t*)0x40005c10 &= ~FLAG)
#define Set_I2C3_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005c14 |= FLAG)
#define Clr_I2C3_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005c14 &= ~FLAG)
#define Set_I2C3_ISR(FLAG)                   (*(uint32_t*)0x40005c18 |= FLAG)
#define Clr_I2C3_ISR(FLAG)                   (*(uint32_t*)0x40005c18 &= ~FLAG)
#define Set_I2C3_ICR(FLAG)                   (*(uint32_t*)0x40005c1c |= FLAG)
#define Clr_I2C3_ICR(FLAG)                   (*(uint32_t*)0x40005c1c &= ~FLAG)
#define Set_I2C3_PECR(FLAG)                  (*(uint32_t*)0x40005c20 |= FLAG)
#define Clr_I2C3_PECR(FLAG)                  (*(uint32_t*)0x40005c20 &= ~FLAG)
#define Set_I2C3_RXDR(FLAG)                  (*(uint32_t*)0x40005c24 |= FLAG)
#define Clr_I2C3_RXDR(FLAG)                  (*(uint32_t*)0x40005c24 &= ~FLAG)
#define Set_I2C3_TXDR(FLAG)                  (*(uint32_t*)0x40005c28 |= FLAG)
#define Clr_I2C3_TXDR(FLAG)                  (*(uint32_t*)0x40005c28 &= ~FLAG)
#define Set_I2C4_CR1(FLAG)                   (*(uint32_t*)0x40006000 |= FLAG)
#define Clr_I2C4_CR1(FLAG)                   (*(uint32_t*)0x40006000 &= ~FLAG)
#define Set_I2C4_CR2(FLAG)                   (*(uint32_t*)0x40006004 |= FLAG)
#define Clr_I2C4_CR2(FLAG)                   (*(uint32_t*)0x40006004 &= ~FLAG)
#define Set_I2C4_OAR1(FLAG)                  (*(uint32_t*)0x40006008 |= FLAG)
#define Clr_I2C4_OAR1(FLAG)                  (*(uint32_t*)0x40006008 &= ~FLAG)
#define Set_I2C4_OAR2(FLAG)                  (*(uint32_t*)0x4000600c |= FLAG)
#define Clr_I2C4_OAR2(FLAG)                  (*(uint32_t*)0x4000600c &= ~FLAG)
#define Set_I2C4_TIMINGR(FLAG)               (*(uint32_t*)0x40006010 |= FLAG)
#define Clr_I2C4_TIMINGR(FLAG)               (*(uint32_t*)0x40006010 &= ~FLAG)
#define Set_I2C4_TIMEOUTR(FLAG)              (*(uint32_t*)0x40006014 |= FLAG)
#define Clr_I2C4_TIMEOUTR(FLAG)              (*(uint32_t*)0x40006014 &= ~FLAG)
#define Set_I2C4_ISR(FLAG)                   (*(uint32_t*)0x40006018 |= FLAG)
#define Clr_I2C4_ISR(FLAG)                   (*(uint32_t*)0x40006018 &= ~FLAG)
#define Set_I2C4_ICR(FLAG)                   (*(uint32_t*)0x4000601c |= FLAG)
#define Clr_I2C4_ICR(FLAG)                   (*(uint32_t*)0x4000601c &= ~FLAG)
#define Set_I2C4_PECR(FLAG)                  (*(uint32_t*)0x40006020 |= FLAG)
#define Clr_I2C4_PECR(FLAG)                  (*(uint32_t*)0x40006020 &= ~FLAG)
#define Set_I2C4_RXDR(FLAG)                  (*(uint32_t*)0x40006024 |= FLAG)
#define Clr_I2C4_RXDR(FLAG)                  (*(uint32_t*)0x40006024 &= ~FLAG)
#define Set_I2C4_TXDR(FLAG)                  (*(uint32_t*)0x40006028 |= FLAG)
#define Clr_I2C4_TXDR(FLAG)                  (*(uint32_t*)0x40006028 &= ~FLAG)

// Flags
#define  _I2C_CR1_PE                                        (0x1 << 0)    // Peripheral enable
#define  _I2C_CR1_TXIE                                      (0x1 << 1)    // TX Interrupt enable
#define  _I2C_CR1_RXIE                                      (0x1 << 2)    // RX Interrupt enable
#define  _I2C_CR1_ADDRIE                                    (0x1 << 3)    // Address match interrupt enable (slave only)
#define  _I2C_CR1_NACKIE                                    (0x1 << 4)    // Not acknowledge received interrupt enable
#define  _I2C_CR1_STOPIE                                    (0x1 << 5)    // STOP detection Interrupt enable
#define  _I2C_CR1_TCIE                                      (0x1 << 6)    // Transfer Complete interrupt enable
#define  _I2C_CR1_ERRIE                                     (0x1 << 7)    // Error interrupts enable
#define  _I2C_CR1_DNF                                       (0xf << 8)    // Digital noise filter
#define  _I2C_CR1_ANFOFF                                    (0x1 << 12)    // Analog noise filter OFF
#define  _I2C_CR1_TXDMAEN                                   (0x1 << 14)    // DMA transmission requests enable
#define  _I2C_CR1_RXDMAEN                                   (0x1 << 15)    // DMA reception requests enable
#define  _I2C_CR1_SBC                                       (0x1 << 16)    // Slave byte control
#define  _I2C_CR1_NOSTRETCH                                 (0x1 << 17)    // Clock stretching disable
#define  _I2C_CR1_WUPEN                                     (0x1 << 18)    // Wakeup from STOP enable
#define  _I2C_CR1_GCEN                                      (0x1 << 19)    // General call enable
#define  _I2C_CR1_SMBHEN                                    (0x1 << 20)    // SMBus Host address enable
#define  _I2C_CR1_SMBDEN                                    (0x1 << 21)    // SMBus Device Default address enable
#define  _I2C_CR1_ALERTEN                                   (0x1 << 22)    // SMBUS alert enable
#define  _I2C_CR1_PECEN                                     (0x1 << 23)    // PEC enable
#define  _I2C_CR2_PECBYTE                                   (0x1 << 26)    // Packet error checking byte
#define  _I2C_CR2_AUTOEND                                   (0x1 << 25)    // Automatic end mode (master mode)
#define  _I2C_CR2_RELOAD                                    (0x1 << 24)    // NBYTES reload mode
#define  _I2C_CR2_NBYTES                                    (0xff << 16)    // Number of bytes
#define  _I2C_CR2_NACK                                      (0x1 << 15)    // NACK generation (slave mode)
#define  _I2C_CR2_STOP                                      (0x1 << 14)    // Stop generation (master mode)
#define  _I2C_CR2_START                                     (0x1 << 13)    // Start generation
#define  _I2C_CR2_HEAD10R                                   (0x1 << 12)    // 10-bit address header only read direction (master receiver mode)
#define  _I2C_CR2_ADD10                                     (0x1 << 11)    // 10-bit addressing mode (master mode)
#define  _I2C_CR2_RD_WRN                                    (0x1 << 10)    // Transfer direction (master mode)
#define  _I2C_CR2_SADD                                      (0x3ff << 0)    // Slave address bit (master mode)
#define  _I2C_OAR1_OA1                                      (0x3ff << 0)    // Interface address
#define  _I2C_OAR1_OA1MODE                                  (0x1 << 10)    // Own Address 1 10-bit mode
#define  _I2C_OAR1_OA1EN                                    (0x1 << 15)    // Own Address 1 enable
#define  _I2C_OAR2_OA2                                      (0x7f << 1)    // Interface address
#define  _I2C_OAR2_OA2MSK                                   (0x7 << 8)    // Own Address 2 masks
#define  _I2C_OAR2_OA2EN                                    (0x1 << 15)    // Own Address 2 enable
#define  _I2C_TIMINGR_SCLL                                  (0xff << 0)    // SCL low period (master mode)
#define  _I2C_TIMINGR_SCLH                                  (0xff << 8)    // SCL high period (master mode)
#define  _I2C_TIMINGR_SDADEL                                (0xf << 16)    // Data hold time
#define  _I2C_TIMINGR_SCLDEL                                (0xf << 20)    // Data setup time
#define  _I2C_TIMINGR_PRESC                                 (0xf << 28)    // Timing prescaler
#define  _I2C_TIMEOUTR_TIMEOUTA                             (0xfff << 0)    // Bus timeout A
#define  _I2C_TIMEOUTR_TIDLE                                (0x1 << 12)    // Idle clock timeout detection
#define  _I2C_TIMEOUTR_TIMOUTEN                             (0x1 << 15)    // Clock timeout enable
#define  _I2C_TIMEOUTR_TIMEOUTB                             (0xfff << 16)    // Bus timeout B
#define  _I2C_TIMEOUTR_TEXTEN                               (0x1 << 31)    // Extended clock timeout enable
#define  _I2C_ISR_ADDCODE                                   (0x7f << 17)    // Address match code (Slave mode)
#define  _I2C_ISR_DIR                                       (0x1 << 16)    // Transfer direction (Slave mode)
#define  _I2C_ISR_BUSY                                      (0x1 << 15)    // Bus busy
#define  _I2C_ISR_ALERT                                     (0x1 << 13)    // SMBus alert
#define  _I2C_ISR_TIMEOUT                                   (0x1 << 12)    // Timeout or t_low detection flag
#define  _I2C_ISR_PECERR                                    (0x1 << 11)    // PEC Error in reception
#define  _I2C_ISR_OVR                                       (0x1 << 10)    // Overrun/Underrun (slave mode)
#define  _I2C_ISR_ARLO                                      (0x1 << 9)    // Arbitration lost
#define  _I2C_ISR_BERR                                      (0x1 << 8)    // Bus error
#define  _I2C_ISR_TCR                                       (0x1 << 7)    // Transfer Complete Reload
#define  _I2C_ISR_TC                                        (0x1 << 6)    // Transfer Complete (master mode)
#define  _I2C_ISR_STOPF                                     (0x1 << 5)    // Stop detection flag
#define  _I2C_ISR_NACKF                                     (0x1 << 4)    // Not acknowledge received flag
#define  _I2C_ISR_ADDR                                      (0x1 << 3)    // Address matched (slave mode)
#define  _I2C_ISR_RXNE                                      (0x1 << 2)    // Receive data register not empty (receivers)
#define  _I2C_ISR_TXIS                                      (0x1 << 1)    // Transmit interrupt status (transmitters)
#define  _I2C_ISR_TXE                                       (0x1 << 0)    // Transmit data register empty (transmitters)
#define  _I2C_ICR_ALERTCF                                   (0x1 << 13)    // Alert flag clear
#define  _I2C_ICR_TIMOUTCF                                  (0x1 << 12)    // Timeout detection flag clear
#define  _I2C_ICR_PECCF                                     (0x1 << 11)    // PEC Error flag clear
#define  _I2C_ICR_OVRCF                                     (0x1 << 10)    // Overrun/Underrun flag clear
#define  _I2C_ICR_ARLOCF                                    (0x1 << 9)    // Arbitration lost flag clear
#define  _I2C_ICR_BERRCF                                    (0x1 << 8)    // Bus error flag clear
#define  _I2C_ICR_STOPCF                                    (0x1 << 5)    // Stop detection flag clear
#define  _I2C_ICR_NACKCF                                    (0x1 << 4)    // Not Acknowledge flag clear
#define  _I2C_ICR_ADDRCF                                    (0x1 << 3)    // Address Matched flag clear
#define  _I2C_PECR_PEC                                      (0xff << 0)    // Packet error checking register
#define  _I2C_RXDR_RXDATA                                   (0xff << 0)    // 8-bit receive data
#define  _I2C_TXDR_TXDATA                                   (0xff << 0)    // 8-bit transmit data

#define RCC_I2C_ClkCtrl(I2C_interfaces)         (RCC->APB1ENR |= (1<<(21+I2C_interfaces)))

#define I2C_ClkSrc_PClk                                (0)

#define I2C_ClkSrc_SysClk                              (1 << _RCC_DKCFGR2_I2C1SEL)

#define I2C_ClkSrc_HSI                                 (2 << _RCC_DKCFGR2_I2C1SEL)

#define I2C_Speed_10KHz                                 (10000U)
#define I2C_Speed_100KHz                                (100000U)
#define I2C_Speed_400KHz                                (400000U)
#define I2C_Speed_500KHz                                (500000U)
#define I2C_Speed_1MHz                                  (1000000U)           // Only available with 16MHz or above clkSrc

#define I2C_Mode_STD_10KHz                              I2C_Speed_10KHz
#define I2C_Mode_STD_100KHz                             I2C_Speed_100KHz
#define I2C_Mode_FAST                                   I2C_Speed_400KHz
#define I2C_Mode_FAST_p_500KHz                          I2C_Speed_500KHz
#define I2C_Mode_FAST_p                                 I2C_Speed_1MHz      // not available in 8MHz clksource

// it will calculate interface based on register address
#define _GET_I2C_Interface(RegDef)                      ((I2C_interfaces)(((RegDef-0x400)&0xf00)/0x400))



typedef enum {
    RCC_I2C1,
    RCC_I2C2,
    RCC_I2C3,
    RCC_I2C4,
} I2C_interfaces;

typedef enum {
    RCC_ClkSrc_PClk,
    RCC_ClkSrc_SysClk,
    RCC_ClkSrc_HSI,
} I2C_ClkSrc ;

typedef struct {
    I2C_RegDef_t* reg_handle;
} I2C_Config_t;

/* it will start i2c with some default configs
 * default configs are:
 * enable clock stretching
 * own_address->10 bit value, but [7:1] 7 bit is used by default, later can be converted to 10 bits
 * clk_src: already defined, select one from I2C_ClkSrc_
 * speed: speed of i2c clk. ( in 8MHz src I2C_Mode_Fast_p is not available, only use I2C_Mode_Fast_500KHz )
 * duty_cycle : value from 1-99. duty cycle of SCL with respect high .
 */
I2C_Config_t I2C_Init(I2C_RegDef_t* handle, uint16_t own_address, I2C_ClkSrc clk_src, uint32_t speed);
void I2C_deInit(I2C_interfaces interface);
void I2C_config();
/* generates start pulse to configure itself as a master over bus
 * handle-> I2C register Defination struct
 */
void I2C_StartMaster(I2C_RegDef_t* handle);
/* generates stop pulse release I2C bus.
 * handle-> I2C register Defination struct
 */
void I2C_StopMaster(I2C_RegDef_t* handle);
/* resets I2C status bits and start, stop, nack bits
 * handle-> I2C register Defination struct
 */
void I2C_Reset(I2C_RegDef_t* handle);
void I2C_SendAck(I2C_Config_t* handle);
void I2C_SendNack(I2C_Config_t* handle);

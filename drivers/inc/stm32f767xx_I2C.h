#define Get_I2C1_CR1(FLAG)                   (*(uint32_t*)0x40005400 |= FLAG)
#define Get_I2C1_CR2(FLAG)                   (*(uint32_t*)0x40005404 |= FLAG)
#define Get_I2C1_OAR1(FLAG)                  (*(uint32_t*)0x40005408 |= FLAG)
#define Get_I2C1_OAR2(FLAG)                  (*(uint32_t*)0x4000540c |= FLAG)
#define Get_I2C1_TIMINGR(FLAG)               (*(uint32_t*)0x40005410 |= FLAG)
#define Get_I2C1_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005414 |= FLAG)
#define Get_I2C1_ISR(FLAG)                   (*(uint32_t*)0x40005418 |= FLAG)
#define Get_I2C1_ICR(FLAG)                   (*(uint32_t*)0x4000541c |= FLAG)
#define Get_I2C1_PECR(FLAG)                  (*(uint32_t*)0x40005420 |= FLAG)
#define Get_I2C1_RXDR(FLAG)                  (*(uint32_t*)0x40005424 |= FLAG)
#define Get_I2C1_TXDR(FLAG)                  (*(uint32_t*)0x40005428 |= FLAG)
#define Get_I2C2_CR1(FLAG)                   (*(uint32_t*)0x40005800 |= FLAG)
#define Get_I2C2_CR2(FLAG)                   (*(uint32_t*)0x40005804 |= FLAG)
#define Get_I2C2_OAR1(FLAG)                  (*(uint32_t*)0x40005808 |= FLAG)
#define Get_I2C2_OAR2(FLAG)                  (*(uint32_t*)0x4000580c |= FLAG)
#define Get_I2C2_TIMINGR(FLAG)               (*(uint32_t*)0x40005810 |= FLAG)
#define Get_I2C2_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005814 |= FLAG)
#define Get_I2C2_ISR(FLAG)                   (*(uint32_t*)0x40005818 |= FLAG)
#define Get_I2C2_ICR(FLAG)                   (*(uint32_t*)0x4000581c |= FLAG)
#define Get_I2C2_PECR(FLAG)                  (*(uint32_t*)0x40005820 |= FLAG)
#define Get_I2C2_RXDR(FLAG)                  (*(uint32_t*)0x40005824 |= FLAG)
#define Get_I2C2_TXDR(FLAG)                  (*(uint32_t*)0x40005828 |= FLAG)
#define Get_I2C3_CR1(FLAG)                   (*(uint32_t*)0x40005c00 |= FLAG)
#define Get_I2C3_CR2(FLAG)                   (*(uint32_t*)0x40005c04 |= FLAG)
#define Get_I2C3_OAR1(FLAG)                  (*(uint32_t*)0x40005c08 |= FLAG)
#define Get_I2C3_OAR2(FLAG)                  (*(uint32_t*)0x40005c0c |= FLAG)
#define Get_I2C3_TIMINGR(FLAG)               (*(uint32_t*)0x40005c10 |= FLAG)
#define Get_I2C3_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005c14 |= FLAG)
#define Get_I2C3_ISR(FLAG)                   (*(uint32_t*)0x40005c18 |= FLAG)
#define Get_I2C3_ICR(FLAG)                   (*(uint32_t*)0x40005c1c |= FLAG)
#define Get_I2C3_PECR(FLAG)                  (*(uint32_t*)0x40005c20 |= FLAG)
#define Get_I2C3_RXDR(FLAG)                  (*(uint32_t*)0x40005c24 |= FLAG)
#define Get_I2C3_TXDR(FLAG)                  (*(uint32_t*)0x40005c28 |= FLAG)
#define Get_I2C4_CR1(FLAG)                   (*(uint32_t*)0x40006000 |= FLAG)
#define Get_I2C4_CR2(FLAG)                   (*(uint32_t*)0x40006004 |= FLAG)
#define Get_I2C4_OAR1(FLAG)                  (*(uint32_t*)0x40006008 |= FLAG)
#define Get_I2C4_OAR2(FLAG)                  (*(uint32_t*)0x4000600c |= FLAG)
#define Get_I2C4_TIMINGR(FLAG)               (*(uint32_t*)0x40006010 |= FLAG)
#define Get_I2C4_TIMEOUTR(FLAG)              (*(uint32_t*)0x40006014 |= FLAG)
#define Get_I2C4_ISR(FLAG)                   (*(uint32_t*)0x40006018 |= FLAG)
#define Get_I2C4_ICR(FLAG)                   (*(uint32_t*)0x4000601c |= FLAG)
#define Get_I2C4_PECR(FLAG)                  (*(uint32_t*)0x40006020 |= FLAG)
#define Get_I2C4_RXDR(FLAG)                  (*(uint32_t*)0x40006024 |= FLAG)
#define Get_I2C4_TXDR(FLAG)                  (*(uint32_t*)0x40006028 |= FLAG)
#define Set_I2C1_CR1(FLAG)                   (*(uint32_t*)0x40005400 &= FLAG)
#define Clr_I2C1_CR1(FLAG)                   (*(uint32_t*)0x40005400 |= ~FLAG)
#define Set_I2C1_CR2(FLAG)                   (*(uint32_t*)0x40005404 &= FLAG)
#define Clr_I2C1_CR2(FLAG)                   (*(uint32_t*)0x40005404 |= ~FLAG)
#define Set_I2C1_OAR1(FLAG)                  (*(uint32_t*)0x40005408 &= FLAG)
#define Clr_I2C1_OAR1(FLAG)                  (*(uint32_t*)0x40005408 |= ~FLAG)
#define Set_I2C1_OAR2(FLAG)                  (*(uint32_t*)0x4000540c &= FLAG)
#define Clr_I2C1_OAR2(FLAG)                  (*(uint32_t*)0x4000540c |= ~FLAG)
#define Set_I2C1_TIMINGR(FLAG)               (*(uint32_t*)0x40005410 &= FLAG)
#define Clr_I2C1_TIMINGR(FLAG)               (*(uint32_t*)0x40005410 |= ~FLAG)
#define Set_I2C1_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005414 &= FLAG)
#define Clr_I2C1_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005414 |= ~FLAG)
#define Set_I2C1_ISR(FLAG)                   (*(uint32_t*)0x40005418 &= FLAG)
#define Clr_I2C1_ISR(FLAG)                   (*(uint32_t*)0x40005418 |= ~FLAG)
#define Set_I2C1_ICR(FLAG)                   (*(uint32_t*)0x4000541c &= FLAG)
#define Clr_I2C1_ICR(FLAG)                   (*(uint32_t*)0x4000541c |= ~FLAG)
#define Set_I2C1_PECR(FLAG)                  (*(uint32_t*)0x40005420 &= FLAG)
#define Clr_I2C1_PECR(FLAG)                  (*(uint32_t*)0x40005420 |= ~FLAG)
#define Set_I2C1_RXDR(FLAG)                  (*(uint32_t*)0x40005424 &= FLAG)
#define Clr_I2C1_RXDR(FLAG)                  (*(uint32_t*)0x40005424 |= ~FLAG)
#define Set_I2C1_TXDR(FLAG)                  (*(uint32_t*)0x40005428 &= FLAG)
#define Clr_I2C1_TXDR(FLAG)                  (*(uint32_t*)0x40005428 |= ~FLAG)
#define Set_I2C2_CR1(FLAG)                   (*(uint32_t*)0x40005800 &= FLAG)
#define Clr_I2C2_CR1(FLAG)                   (*(uint32_t*)0x40005800 |= ~FLAG)
#define Set_I2C2_CR2(FLAG)                   (*(uint32_t*)0x40005804 &= FLAG)
#define Clr_I2C2_CR2(FLAG)                   (*(uint32_t*)0x40005804 |= ~FLAG)
#define Set_I2C2_OAR1(FLAG)                  (*(uint32_t*)0x40005808 &= FLAG)
#define Clr_I2C2_OAR1(FLAG)                  (*(uint32_t*)0x40005808 |= ~FLAG)
#define Set_I2C2_OAR2(FLAG)                  (*(uint32_t*)0x4000580c &= FLAG)
#define Clr_I2C2_OAR2(FLAG)                  (*(uint32_t*)0x4000580c |= ~FLAG)
#define Set_I2C2_TIMINGR(FLAG)               (*(uint32_t*)0x40005810 &= FLAG)
#define Clr_I2C2_TIMINGR(FLAG)               (*(uint32_t*)0x40005810 |= ~FLAG)
#define Set_I2C2_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005814 &= FLAG)
#define Clr_I2C2_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005814 |= ~FLAG)
#define Set_I2C2_ISR(FLAG)                   (*(uint32_t*)0x40005818 &= FLAG)
#define Clr_I2C2_ISR(FLAG)                   (*(uint32_t*)0x40005818 |= ~FLAG)
#define Set_I2C2_ICR(FLAG)                   (*(uint32_t*)0x4000581c &= FLAG)
#define Clr_I2C2_ICR(FLAG)                   (*(uint32_t*)0x4000581c |= ~FLAG)
#define Set_I2C2_PECR(FLAG)                  (*(uint32_t*)0x40005820 &= FLAG)
#define Clr_I2C2_PECR(FLAG)                  (*(uint32_t*)0x40005820 |= ~FLAG)
#define Set_I2C2_RXDR(FLAG)                  (*(uint32_t*)0x40005824 &= FLAG)
#define Clr_I2C2_RXDR(FLAG)                  (*(uint32_t*)0x40005824 |= ~FLAG)
#define Set_I2C2_TXDR(FLAG)                  (*(uint32_t*)0x40005828 &= FLAG)
#define Clr_I2C2_TXDR(FLAG)                  (*(uint32_t*)0x40005828 |= ~FLAG)
#define Set_I2C3_CR1(FLAG)                   (*(uint32_t*)0x40005c00 &= FLAG)
#define Clr_I2C3_CR1(FLAG)                   (*(uint32_t*)0x40005c00 |= ~FLAG)
#define Set_I2C3_CR2(FLAG)                   (*(uint32_t*)0x40005c04 &= FLAG)
#define Clr_I2C3_CR2(FLAG)                   (*(uint32_t*)0x40005c04 |= ~FLAG)
#define Set_I2C3_OAR1(FLAG)                  (*(uint32_t*)0x40005c08 &= FLAG)
#define Clr_I2C3_OAR1(FLAG)                  (*(uint32_t*)0x40005c08 |= ~FLAG)
#define Set_I2C3_OAR2(FLAG)                  (*(uint32_t*)0x40005c0c &= FLAG)
#define Clr_I2C3_OAR2(FLAG)                  (*(uint32_t*)0x40005c0c |= ~FLAG)
#define Set_I2C3_TIMINGR(FLAG)               (*(uint32_t*)0x40005c10 &= FLAG)
#define Clr_I2C3_TIMINGR(FLAG)               (*(uint32_t*)0x40005c10 |= ~FLAG)
#define Set_I2C3_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005c14 &= FLAG)
#define Clr_I2C3_TIMEOUTR(FLAG)              (*(uint32_t*)0x40005c14 |= ~FLAG)
#define Set_I2C3_ISR(FLAG)                   (*(uint32_t*)0x40005c18 &= FLAG)
#define Clr_I2C3_ISR(FLAG)                   (*(uint32_t*)0x40005c18 |= ~FLAG)
#define Set_I2C3_ICR(FLAG)                   (*(uint32_t*)0x40005c1c &= FLAG)
#define Clr_I2C3_ICR(FLAG)                   (*(uint32_t*)0x40005c1c |= ~FLAG)
#define Set_I2C3_PECR(FLAG)                  (*(uint32_t*)0x40005c20 &= FLAG)
#define Clr_I2C3_PECR(FLAG)                  (*(uint32_t*)0x40005c20 |= ~FLAG)
#define Set_I2C3_RXDR(FLAG)                  (*(uint32_t*)0x40005c24 &= FLAG)
#define Clr_I2C3_RXDR(FLAG)                  (*(uint32_t*)0x40005c24 |= ~FLAG)
#define Set_I2C3_TXDR(FLAG)                  (*(uint32_t*)0x40005c28 &= FLAG)
#define Clr_I2C3_TXDR(FLAG)                  (*(uint32_t*)0x40005c28 |= ~FLAG)
#define Set_I2C4_CR1(FLAG)                   (*(uint32_t*)0x40006000 &= FLAG)
#define Clr_I2C4_CR1(FLAG)                   (*(uint32_t*)0x40006000 |= ~FLAG)
#define Set_I2C4_CR2(FLAG)                   (*(uint32_t*)0x40006004 &= FLAG)
#define Clr_I2C4_CR2(FLAG)                   (*(uint32_t*)0x40006004 |= ~FLAG)
#define Set_I2C4_OAR1(FLAG)                  (*(uint32_t*)0x40006008 &= FLAG)
#define Clr_I2C4_OAR1(FLAG)                  (*(uint32_t*)0x40006008 |= ~FLAG)
#define Set_I2C4_OAR2(FLAG)                  (*(uint32_t*)0x4000600c &= FLAG)
#define Clr_I2C4_OAR2(FLAG)                  (*(uint32_t*)0x4000600c |= ~FLAG)
#define Set_I2C4_TIMINGR(FLAG)               (*(uint32_t*)0x40006010 &= FLAG)
#define Clr_I2C4_TIMINGR(FLAG)               (*(uint32_t*)0x40006010 |= ~FLAG)
#define Set_I2C4_TIMEOUTR(FLAG)              (*(uint32_t*)0x40006014 &= FLAG)
#define Clr_I2C4_TIMEOUTR(FLAG)              (*(uint32_t*)0x40006014 |= ~FLAG)
#define Set_I2C4_ISR(FLAG)                   (*(uint32_t*)0x40006018 &= FLAG)
#define Clr_I2C4_ISR(FLAG)                   (*(uint32_t*)0x40006018 |= ~FLAG)
#define Set_I2C4_ICR(FLAG)                   (*(uint32_t*)0x4000601c &= FLAG)
#define Clr_I2C4_ICR(FLAG)                   (*(uint32_t*)0x4000601c |= ~FLAG)
#define Set_I2C4_PECR(FLAG)                  (*(uint32_t*)0x40006020 &= FLAG)
#define Clr_I2C4_PECR(FLAG)                  (*(uint32_t*)0x40006020 |= ~FLAG)
#define Set_I2C4_RXDR(FLAG)                  (*(uint32_t*)0x40006024 &= FLAG)
#define Clr_I2C4_RXDR(FLAG)                  (*(uint32_t*)0x40006024 |= ~FLAG)
#define Set_I2C4_TXDR(FLAG)                  (*(uint32_t*)0x40006028 &= FLAG)
#define Clr_I2C4_TXDR(FLAG)                  (*(uint32_t*)0x40006028 |= ~FLAG)
#define  _I2C1_CR1_PE                                        (0x1 << 0)    // Peripheral enable
#define  _I2C1_CR1_TXIE                                      (0x1 << 1)    // TX Interrupt enable
#define  _I2C1_CR1_RXIE                                      (0x1 << 2)    // RX Interrupt enable
#define  _I2C1_CR1_ADDRIE                                    (0x1 << 3)    // Address match interrupt enable (slave only)
#define  _I2C1_CR1_NACKIE                                    (0x1 << 4)    // Not acknowledge received interrupt enable
#define  _I2C1_CR1_STOPIE                                    (0x1 << 5)    // STOP detection Interrupt enable
#define  _I2C1_CR1_TCIE                                      (0x1 << 6)    // Transfer Complete interrupt enable
#define  _I2C1_CR1_ERRIE                                     (0x1 << 7)    // Error interrupts enable
#define  _I2C1_CR1_DNF                                       (0xf << 8)    // Digital noise filter
#define  _I2C1_CR1_ANFOFF                                    (0x1 << 12)    // Analog noise filter OFF
#define  _I2C1_CR1_TXDMAEN                                   (0x1 << 14)    // DMA transmission requests enable
#define  _I2C1_CR1_RXDMAEN                                   (0x1 << 15)    // DMA reception requests enable
#define  _I2C1_CR1_SBC                                       (0x1 << 16)    // Slave byte control
#define  _I2C1_CR1_NOSTRETCH                                 (0x1 << 17)    // Clock stretching disable
#define  _I2C1_CR1_WUPEN                                     (0x1 << 18)    // Wakeup from STOP enable
#define  _I2C1_CR1_GCEN                                      (0x1 << 19)    // General call enable
#define  _I2C1_CR1_SMBHEN                                    (0x1 << 20)    // SMBus Host address enable
#define  _I2C1_CR1_SMBDEN                                    (0x1 << 21)    // SMBus Device Default address enable
#define  _I2C1_CR1_ALERTEN                                   (0x1 << 22)    // SMBUS alert enable
#define  _I2C1_CR1_PECEN                                     (0x1 << 23)    // PEC enable
#define  _I2C1_CR2_PECBYTE                                   (0x1 << 26)    // Packet error checking byte
#define  _I2C1_CR2_AUTOEND                                   (0x1 << 25)    // Automatic end mode (master mode)
#define  _I2C1_CR2_RELOAD                                    (0x1 << 24)    // NBYTES reload mode
#define  _I2C1_CR2_NBYTES                                    (0xff << 16)    // Number of bytes
#define  _I2C1_CR2_NACK                                      (0x1 << 15)    // NACK generation (slave mode)
#define  _I2C1_CR2_STOP                                      (0x1 << 14)    // Stop generation (master mode)
#define  _I2C1_CR2_START                                     (0x1 << 13)    // Start generation
#define  _I2C1_CR2_HEAD10R                                   (0x1 << 12)    // 10-bit address header only read direction (master receiver mode)
#define  _I2C1_CR2_ADD10                                     (0x1 << 11)    // 10-bit addressing mode (master mode)
#define  _I2C1_CR2_RD_WRN                                    (0x1 << 10)    // Transfer direction (master mode)
#define  _I2C1_CR2_SADD                                      (0x3ff << 0)    // Slave address bit (master mode)
#define  _I2C1_OAR1_OA1                                      (0x3ff << 0)    // Interface address
#define  _I2C1_OAR1_OA1MODE                                  (0x1 << 10)    // Own Address 1 10-bit mode
#define  _I2C1_OAR1_OA1EN                                    (0x1 << 15)    // Own Address 1 enable
#define  _I2C1_OAR2_OA2                                      (0x7f << 1)    // Interface address
#define  _I2C1_OAR2_OA2MSK                                   (0x7 << 8)    // Own Address 2 masks
#define  _I2C1_OAR2_OA2EN                                    (0x1 << 15)    // Own Address 2 enable
#define  _I2C1_TIMINGR_SCLL                                  (0xff << 0)    // SCL low period (master mode)
#define  _I2C1_TIMINGR_SCLH                                  (0xff << 8)    // SCL high period (master mode)
#define  _I2C1_TIMINGR_SDADEL                                (0xf << 16)    // Data hold time
#define  _I2C1_TIMINGR_SCLDEL                                (0xf << 20)    // Data setup time
#define  _I2C1_TIMINGR_PRESC                                 (0xf << 28)    // Timing prescaler
#define  _I2C1_TIMEOUTR_TIMEOUTA                             (0xfff << 0)    // Bus timeout A
#define  _I2C1_TIMEOUTR_TIDLE                                (0x1 << 12)    // Idle clock timeout detection
#define  _I2C1_TIMEOUTR_TIMOUTEN                             (0x1 << 15)    // Clock timeout enable
#define  _I2C1_TIMEOUTR_TIMEOUTB                             (0xfff << 16)    // Bus timeout B
#define  _I2C1_TIMEOUTR_TEXTEN                               (0x1 << 31)    // Extended clock timeout enable
#define  _I2C1_ISR_ADDCODE                                   (0x7f << 17)    // Address match code (Slave mode)
#define  _I2C1_ISR_DIR                                       (0x1 << 16)    // Transfer direction (Slave mode)
#define  _I2C1_ISR_BUSY                                      (0x1 << 15)    // Bus busy
#define  _I2C1_ISR_ALERT                                     (0x1 << 13)    // SMBus alert
#define  _I2C1_ISR_TIMEOUT                                   (0x1 << 12)    // Timeout or t_low detection flag
#define  _I2C1_ISR_PECERR                                    (0x1 << 11)    // PEC Error in reception
#define  _I2C1_ISR_OVR                                       (0x1 << 10)    // Overrun/Underrun (slave mode)
#define  _I2C1_ISR_ARLO                                      (0x1 << 9)    // Arbitration lost
#define  _I2C1_ISR_BERR                                      (0x1 << 8)    // Bus error
#define  _I2C1_ISR_TCR                                       (0x1 << 7)    // Transfer Complete Reload
#define  _I2C1_ISR_TC                                        (0x1 << 6)    // Transfer Complete (master mode)
#define  _I2C1_ISR_STOPF                                     (0x1 << 5)    // Stop detection flag
#define  _I2C1_ISR_NACKF                                     (0x1 << 4)    // Not acknowledge received flag
#define  _I2C1_ISR_ADDR                                      (0x1 << 3)    // Address matched (slave mode)
#define  _I2C1_ISR_RXNE                                      (0x1 << 2)    // Receive data register not empty (receivers)
#define  _I2C1_ISR_TXIS                                      (0x1 << 1)    // Transmit interrupt status (transmitters)
#define  _I2C1_ISR_TXE                                       (0x1 << 0)    // Transmit data register empty (transmitters)
#define  _I2C1_ICR_ALERTCF                                   (0x1 << 13)    // Alert flag clear
#define  _I2C1_ICR_TIMOUTCF                                  (0x1 << 12)    // Timeout detection flag clear
#define  _I2C1_ICR_PECCF                                     (0x1 << 11)    // PEC Error flag clear
#define  _I2C1_ICR_OVRCF                                     (0x1 << 10)    // Overrun/Underrun flag clear
#define  _I2C1_ICR_ARLOCF                                    (0x1 << 9)    // Arbitration lost flag clear
#define  _I2C1_ICR_BERRCF                                    (0x1 << 8)    // Bus error flag clear
#define  _I2C1_ICR_STOPCF                                    (0x1 << 5)    // Stop detection flag clear
#define  _I2C1_ICR_NACKCF                                    (0x1 << 4)    // Not Acknowledge flag clear
#define  _I2C1_ICR_ADDRCF                                    (0x1 << 3)    // Address Matched flag clear
#define  _I2C1_PECR_PEC                                      (0xff << 0)    // Packet error checking register
#define  _I2C1_RXDR_RXDATA                                   (0xff << 0)    // 8-bit receive data
#define  _I2C1_TXDR_TXDATA                                   (0xff << 0)    // 8-bit transmit data
#define  _I2C2_CR1_PE                                        (0x1 << 0)    // Peripheral enable
#define  _I2C2_CR1_TXIE                                      (0x1 << 1)    // TX Interrupt enable
#define  _I2C2_CR1_RXIE                                      (0x1 << 2)    // RX Interrupt enable
#define  _I2C2_CR1_ADDRIE                                    (0x1 << 3)    // Address match interrupt enable (slave only)
#define  _I2C2_CR1_NACKIE                                    (0x1 << 4)    // Not acknowledge received interrupt enable
#define  _I2C2_CR1_STOPIE                                    (0x1 << 5)    // STOP detection Interrupt enable
#define  _I2C2_CR1_TCIE                                      (0x1 << 6)    // Transfer Complete interrupt enable
#define  _I2C2_CR1_ERRIE                                     (0x1 << 7)    // Error interrupts enable
#define  _I2C2_CR1_DNF                                       (0xf << 8)    // Digital noise filter
#define  _I2C2_CR1_ANFOFF                                    (0x1 << 12)    // Analog noise filter OFF
#define  _I2C2_CR1_TXDMAEN                                   (0x1 << 14)    // DMA transmission requests enable
#define  _I2C2_CR1_RXDMAEN                                   (0x1 << 15)    // DMA reception requests enable
#define  _I2C2_CR1_SBC                                       (0x1 << 16)    // Slave byte control
#define  _I2C2_CR1_NOSTRETCH                                 (0x1 << 17)    // Clock stretching disable
#define  _I2C2_CR1_WUPEN                                     (0x1 << 18)    // Wakeup from STOP enable
#define  _I2C2_CR1_GCEN                                      (0x1 << 19)    // General call enable
#define  _I2C2_CR1_SMBHEN                                    (0x1 << 20)    // SMBus Host address enable
#define  _I2C2_CR1_SMBDEN                                    (0x1 << 21)    // SMBus Device Default address enable
#define  _I2C2_CR1_ALERTEN                                   (0x1 << 22)    // SMBUS alert enable
#define  _I2C2_CR1_PECEN                                     (0x1 << 23)    // PEC enable
#define  _I2C2_CR2_PECBYTE                                   (0x1 << 26)    // Packet error checking byte
#define  _I2C2_CR2_AUTOEND                                   (0x1 << 25)    // Automatic end mode (master mode)
#define  _I2C2_CR2_RELOAD                                    (0x1 << 24)    // NBYTES reload mode
#define  _I2C2_CR2_NBYTES                                    (0xff << 16)    // Number of bytes
#define  _I2C2_CR2_NACK                                      (0x1 << 15)    // NACK generation (slave mode)
#define  _I2C2_CR2_STOP                                      (0x1 << 14)    // Stop generation (master mode)
#define  _I2C2_CR2_START                                     (0x1 << 13)    // Start generation
#define  _I2C2_CR2_HEAD10R                                   (0x1 << 12)    // 10-bit address header only read direction (master receiver mode)
#define  _I2C2_CR2_ADD10                                     (0x1 << 11)    // 10-bit addressing mode (master mode)
#define  _I2C2_CR2_RD_WRN                                    (0x1 << 10)    // Transfer direction (master mode)
#define  _I2C2_CR2_SADD                                      (0x3ff << 0)    // Slave address bit (master mode)
#define  _I2C2_OAR1_OA1                                      (0x3ff << 0)    // Interface address
#define  _I2C2_OAR1_OA1MODE                                  (0x1 << 10)    // Own Address 1 10-bit mode
#define  _I2C2_OAR1_OA1EN                                    (0x1 << 15)    // Own Address 1 enable
#define  _I2C2_OAR2_OA2                                      (0x7f << 1)    // Interface address
#define  _I2C2_OAR2_OA2MSK                                   (0x7 << 8)    // Own Address 2 masks
#define  _I2C2_OAR2_OA2EN                                    (0x1 << 15)    // Own Address 2 enable
#define  _I2C2_TIMINGR_SCLL                                  (0xff << 0)    // SCL low period (master mode)
#define  _I2C2_TIMINGR_SCLH                                  (0xff << 8)    // SCL high period (master mode)
#define  _I2C2_TIMINGR_SDADEL                                (0xf << 16)    // Data hold time
#define  _I2C2_TIMINGR_SCLDEL                                (0xf << 20)    // Data setup time
#define  _I2C2_TIMINGR_PRESC                                 (0xf << 28)    // Timing prescaler
#define  _I2C2_TIMEOUTR_TIMEOUTA                             (0xfff << 0)    // Bus timeout A
#define  _I2C2_TIMEOUTR_TIDLE                                (0x1 << 12)    // Idle clock timeout detection
#define  _I2C2_TIMEOUTR_TIMOUTEN                             (0x1 << 15)    // Clock timeout enable
#define  _I2C2_TIMEOUTR_TIMEOUTB                             (0xfff << 16)    // Bus timeout B
#define  _I2C2_TIMEOUTR_TEXTEN                               (0x1 << 31)    // Extended clock timeout enable
#define  _I2C2_ISR_ADDCODE                                   (0x7f << 17)    // Address match code (Slave mode)
#define  _I2C2_ISR_DIR                                       (0x1 << 16)    // Transfer direction (Slave mode)
#define  _I2C2_ISR_BUSY                                      (0x1 << 15)    // Bus busy
#define  _I2C2_ISR_ALERT                                     (0x1 << 13)    // SMBus alert
#define  _I2C2_ISR_TIMEOUT                                   (0x1 << 12)    // Timeout or t_low detection flag
#define  _I2C2_ISR_PECERR                                    (0x1 << 11)    // PEC Error in reception
#define  _I2C2_ISR_OVR                                       (0x1 << 10)    // Overrun/Underrun (slave mode)
#define  _I2C2_ISR_ARLO                                      (0x1 << 9)    // Arbitration lost
#define  _I2C2_ISR_BERR                                      (0x1 << 8)    // Bus error
#define  _I2C2_ISR_TCR                                       (0x1 << 7)    // Transfer Complete Reload
#define  _I2C2_ISR_TC                                        (0x1 << 6)    // Transfer Complete (master mode)
#define  _I2C2_ISR_STOPF                                     (0x1 << 5)    // Stop detection flag
#define  _I2C2_ISR_NACKF                                     (0x1 << 4)    // Not acknowledge received flag
#define  _I2C2_ISR_ADDR                                      (0x1 << 3)    // Address matched (slave mode)
#define  _I2C2_ISR_RXNE                                      (0x1 << 2)    // Receive data register not empty (receivers)
#define  _I2C2_ISR_TXIS                                      (0x1 << 1)    // Transmit interrupt status (transmitters)
#define  _I2C2_ISR_TXE                                       (0x1 << 0)    // Transmit data register empty (transmitters)
#define  _I2C2_ICR_ALERTCF                                   (0x1 << 13)    // Alert flag clear
#define  _I2C2_ICR_TIMOUTCF                                  (0x1 << 12)    // Timeout detection flag clear
#define  _I2C2_ICR_PECCF                                     (0x1 << 11)    // PEC Error flag clear
#define  _I2C2_ICR_OVRCF                                     (0x1 << 10)    // Overrun/Underrun flag clear
#define  _I2C2_ICR_ARLOCF                                    (0x1 << 9)    // Arbitration lost flag clear
#define  _I2C2_ICR_BERRCF                                    (0x1 << 8)    // Bus error flag clear
#define  _I2C2_ICR_STOPCF                                    (0x1 << 5)    // Stop detection flag clear
#define  _I2C2_ICR_NACKCF                                    (0x1 << 4)    // Not Acknowledge flag clear
#define  _I2C2_ICR_ADDRCF                                    (0x1 << 3)    // Address Matched flag clear
#define  _I2C2_PECR_PEC                                      (0xff << 0)    // Packet error checking register
#define  _I2C2_RXDR_RXDATA                                   (0xff << 0)    // 8-bit receive data
#define  _I2C2_TXDR_TXDATA                                   (0xff << 0)    // 8-bit transmit data
#define  _I2C3_CR1_PE                                        (0x1 << 0)    // Peripheral enable
#define  _I2C3_CR1_TXIE                                      (0x1 << 1)    // TX Interrupt enable
#define  _I2C3_CR1_RXIE                                      (0x1 << 2)    // RX Interrupt enable
#define  _I2C3_CR1_ADDRIE                                    (0x1 << 3)    // Address match interrupt enable (slave only)
#define  _I2C3_CR1_NACKIE                                    (0x1 << 4)    // Not acknowledge received interrupt enable
#define  _I2C3_CR1_STOPIE                                    (0x1 << 5)    // STOP detection Interrupt enable
#define  _I2C3_CR1_TCIE                                      (0x1 << 6)    // Transfer Complete interrupt enable
#define  _I2C3_CR1_ERRIE                                     (0x1 << 7)    // Error interrupts enable
#define  _I2C3_CR1_DNF                                       (0xf << 8)    // Digital noise filter
#define  _I2C3_CR1_ANFOFF                                    (0x1 << 12)    // Analog noise filter OFF
#define  _I2C3_CR1_TXDMAEN                                   (0x1 << 14)    // DMA transmission requests enable
#define  _I2C3_CR1_RXDMAEN                                   (0x1 << 15)    // DMA reception requests enable
#define  _I2C3_CR1_SBC                                       (0x1 << 16)    // Slave byte control
#define  _I2C3_CR1_NOSTRETCH                                 (0x1 << 17)    // Clock stretching disable
#define  _I2C3_CR1_WUPEN                                     (0x1 << 18)    // Wakeup from STOP enable
#define  _I2C3_CR1_GCEN                                      (0x1 << 19)    // General call enable
#define  _I2C3_CR1_SMBHEN                                    (0x1 << 20)    // SMBus Host address enable
#define  _I2C3_CR1_SMBDEN                                    (0x1 << 21)    // SMBus Device Default address enable
#define  _I2C3_CR1_ALERTEN                                   (0x1 << 22)    // SMBUS alert enable
#define  _I2C3_CR1_PECEN                                     (0x1 << 23)    // PEC enable
#define  _I2C3_CR2_PECBYTE                                   (0x1 << 26)    // Packet error checking byte
#define  _I2C3_CR2_AUTOEND                                   (0x1 << 25)    // Automatic end mode (master mode)
#define  _I2C3_CR2_RELOAD                                    (0x1 << 24)    // NBYTES reload mode
#define  _I2C3_CR2_NBYTES                                    (0xff << 16)    // Number of bytes
#define  _I2C3_CR2_NACK                                      (0x1 << 15)    // NACK generation (slave mode)
#define  _I2C3_CR2_STOP                                      (0x1 << 14)    // Stop generation (master mode)
#define  _I2C3_CR2_START                                     (0x1 << 13)    // Start generation
#define  _I2C3_CR2_HEAD10R                                   (0x1 << 12)    // 10-bit address header only read direction (master receiver mode)
#define  _I2C3_CR2_ADD10                                     (0x1 << 11)    // 10-bit addressing mode (master mode)
#define  _I2C3_CR2_RD_WRN                                    (0x1 << 10)    // Transfer direction (master mode)
#define  _I2C3_CR2_SADD                                      (0x3ff << 0)    // Slave address bit (master mode)
#define  _I2C3_OAR1_OA1                                      (0x3ff << 0)    // Interface address
#define  _I2C3_OAR1_OA1MODE                                  (0x1 << 10)    // Own Address 1 10-bit mode
#define  _I2C3_OAR1_OA1EN                                    (0x1 << 15)    // Own Address 1 enable
#define  _I2C3_OAR2_OA2                                      (0x7f << 1)    // Interface address
#define  _I2C3_OAR2_OA2MSK                                   (0x7 << 8)    // Own Address 2 masks
#define  _I2C3_OAR2_OA2EN                                    (0x1 << 15)    // Own Address 2 enable
#define  _I2C3_TIMINGR_SCLL                                  (0xff << 0)    // SCL low period (master mode)
#define  _I2C3_TIMINGR_SCLH                                  (0xff << 8)    // SCL high period (master mode)
#define  _I2C3_TIMINGR_SDADEL                                (0xf << 16)    // Data hold time
#define  _I2C3_TIMINGR_SCLDEL                                (0xf << 20)    // Data setup time
#define  _I2C3_TIMINGR_PRESC                                 (0xf << 28)    // Timing prescaler
#define  _I2C3_TIMEOUTR_TIMEOUTA                             (0xfff << 0)    // Bus timeout A
#define  _I2C3_TIMEOUTR_TIDLE                                (0x1 << 12)    // Idle clock timeout detection
#define  _I2C3_TIMEOUTR_TIMOUTEN                             (0x1 << 15)    // Clock timeout enable
#define  _I2C3_TIMEOUTR_TIMEOUTB                             (0xfff << 16)    // Bus timeout B
#define  _I2C3_TIMEOUTR_TEXTEN                               (0x1 << 31)    // Extended clock timeout enable
#define  _I2C3_ISR_ADDCODE                                   (0x7f << 17)    // Address match code (Slave mode)
#define  _I2C3_ISR_DIR                                       (0x1 << 16)    // Transfer direction (Slave mode)
#define  _I2C3_ISR_BUSY                                      (0x1 << 15)    // Bus busy
#define  _I2C3_ISR_ALERT                                     (0x1 << 13)    // SMBus alert
#define  _I2C3_ISR_TIMEOUT                                   (0x1 << 12)    // Timeout or t_low detection flag
#define  _I2C3_ISR_PECERR                                    (0x1 << 11)    // PEC Error in reception
#define  _I2C3_ISR_OVR                                       (0x1 << 10)    // Overrun/Underrun (slave mode)
#define  _I2C3_ISR_ARLO                                      (0x1 << 9)    // Arbitration lost
#define  _I2C3_ISR_BERR                                      (0x1 << 8)    // Bus error
#define  _I2C3_ISR_TCR                                       (0x1 << 7)    // Transfer Complete Reload
#define  _I2C3_ISR_TC                                        (0x1 << 6)    // Transfer Complete (master mode)
#define  _I2C3_ISR_STOPF                                     (0x1 << 5)    // Stop detection flag
#define  _I2C3_ISR_NACKF                                     (0x1 << 4)    // Not acknowledge received flag
#define  _I2C3_ISR_ADDR                                      (0x1 << 3)    // Address matched (slave mode)
#define  _I2C3_ISR_RXNE                                      (0x1 << 2)    // Receive data register not empty (receivers)
#define  _I2C3_ISR_TXIS                                      (0x1 << 1)    // Transmit interrupt status (transmitters)
#define  _I2C3_ISR_TXE                                       (0x1 << 0)    // Transmit data register empty (transmitters)
#define  _I2C3_ICR_ALERTCF                                   (0x1 << 13)    // Alert flag clear
#define  _I2C3_ICR_TIMOUTCF                                  (0x1 << 12)    // Timeout detection flag clear
#define  _I2C3_ICR_PECCF                                     (0x1 << 11)    // PEC Error flag clear
#define  _I2C3_ICR_OVRCF                                     (0x1 << 10)    // Overrun/Underrun flag clear
#define  _I2C3_ICR_ARLOCF                                    (0x1 << 9)    // Arbitration lost flag clear
#define  _I2C3_ICR_BERRCF                                    (0x1 << 8)    // Bus error flag clear
#define  _I2C3_ICR_STOPCF                                    (0x1 << 5)    // Stop detection flag clear
#define  _I2C3_ICR_NACKCF                                    (0x1 << 4)    // Not Acknowledge flag clear
#define  _I2C3_ICR_ADDRCF                                    (0x1 << 3)    // Address Matched flag clear
#define  _I2C3_PECR_PEC                                      (0xff << 0)    // Packet error checking register
#define  _I2C3_RXDR_RXDATA                                   (0xff << 0)    // 8-bit receive data
#define  _I2C3_TXDR_TXDATA                                   (0xff << 0)    // 8-bit transmit data
#define  _I2C4_CR1_PE                                        (0x1 << 0)    // Peripheral enable
#define  _I2C4_CR1_TXIE                                      (0x1 << 1)    // TX Interrupt enable
#define  _I2C4_CR1_RXIE                                      (0x1 << 2)    // RX Interrupt enable
#define  _I2C4_CR1_ADDRIE                                    (0x1 << 3)    // Address match interrupt enable (slave only)
#define  _I2C4_CR1_NACKIE                                    (0x1 << 4)    // Not acknowledge received interrupt enable
#define  _I2C4_CR1_STOPIE                                    (0x1 << 5)    // STOP detection Interrupt enable
#define  _I2C4_CR1_TCIE                                      (0x1 << 6)    // Transfer Complete interrupt enable
#define  _I2C4_CR1_ERRIE                                     (0x1 << 7)    // Error interrupts enable
#define  _I2C4_CR1_DNF                                       (0xf << 8)    // Digital noise filter
#define  _I2C4_CR1_ANFOFF                                    (0x1 << 12)    // Analog noise filter OFF
#define  _I2C4_CR1_TXDMAEN                                   (0x1 << 14)    // DMA transmission requests enable
#define  _I2C4_CR1_RXDMAEN                                   (0x1 << 15)    // DMA reception requests enable
#define  _I2C4_CR1_SBC                                       (0x1 << 16)    // Slave byte control
#define  _I2C4_CR1_NOSTRETCH                                 (0x1 << 17)    // Clock stretching disable
#define  _I2C4_CR1_WUPEN                                     (0x1 << 18)    // Wakeup from STOP enable
#define  _I2C4_CR1_GCEN                                      (0x1 << 19)    // General call enable
#define  _I2C4_CR1_SMBHEN                                    (0x1 << 20)    // SMBus Host address enable
#define  _I2C4_CR1_SMBDEN                                    (0x1 << 21)    // SMBus Device Default address enable
#define  _I2C4_CR1_ALERTEN                                   (0x1 << 22)    // SMBUS alert enable
#define  _I2C4_CR1_PECEN                                     (0x1 << 23)    // PEC enable
#define  _I2C4_CR2_PECBYTE                                   (0x1 << 26)    // Packet error checking byte
#define  _I2C4_CR2_AUTOEND                                   (0x1 << 25)    // Automatic end mode (master mode)
#define  _I2C4_CR2_RELOAD                                    (0x1 << 24)    // NBYTES reload mode
#define  _I2C4_CR2_NBYTES                                    (0xff << 16)    // Number of bytes
#define  _I2C4_CR2_NACK                                      (0x1 << 15)    // NACK generation (slave mode)
#define  _I2C4_CR2_STOP                                      (0x1 << 14)    // Stop generation (master mode)
#define  _I2C4_CR2_START                                     (0x1 << 13)    // Start generation
#define  _I2C4_CR2_HEAD10R                                   (0x1 << 12)    // 10-bit address header only read direction (master receiver mode)
#define  _I2C4_CR2_ADD10                                     (0x1 << 11)    // 10-bit addressing mode (master mode)
#define  _I2C4_CR2_RD_WRN                                    (0x1 << 10)    // Transfer direction (master mode)
#define  _I2C4_CR2_SADD                                      (0x3ff << 0)    // Slave address bit (master mode)
#define  _I2C4_OAR1_OA1                                      (0x3ff << 0)    // Interface address
#define  _I2C4_OAR1_OA1MODE                                  (0x1 << 10)    // Own Address 1 10-bit mode
#define  _I2C4_OAR1_OA1EN                                    (0x1 << 15)    // Own Address 1 enable
#define  _I2C4_OAR2_OA2                                      (0x7f << 1)    // Interface address
#define  _I2C4_OAR2_OA2MSK                                   (0x7 << 8)    // Own Address 2 masks
#define  _I2C4_OAR2_OA2EN                                    (0x1 << 15)    // Own Address 2 enable
#define  _I2C4_TIMINGR_SCLL                                  (0xff << 0)    // SCL low period (master mode)
#define  _I2C4_TIMINGR_SCLH                                  (0xff << 8)    // SCL high period (master mode)
#define  _I2C4_TIMINGR_SDADEL                                (0xf << 16)    // Data hold time
#define  _I2C4_TIMINGR_SCLDEL                                (0xf << 20)    // Data setup time
#define  _I2C4_TIMINGR_PRESC                                 (0xf << 28)    // Timing prescaler
#define  _I2C4_TIMEOUTR_TIMEOUTA                             (0xfff << 0)    // Bus timeout A
#define  _I2C4_TIMEOUTR_TIDLE                                (0x1 << 12)    // Idle clock timeout detection
#define  _I2C4_TIMEOUTR_TIMOUTEN                             (0x1 << 15)    // Clock timeout enable
#define  _I2C4_TIMEOUTR_TIMEOUTB                             (0xfff << 16)    // Bus timeout B
#define  _I2C4_TIMEOUTR_TEXTEN                               (0x1 << 31)    // Extended clock timeout enable
#define  _I2C4_ISR_ADDCODE                                   (0x7f << 17)    // Address match code (Slave mode)
#define  _I2C4_ISR_DIR                                       (0x1 << 16)    // Transfer direction (Slave mode)
#define  _I2C4_ISR_BUSY                                      (0x1 << 15)    // Bus busy
#define  _I2C4_ISR_ALERT                                     (0x1 << 13)    // SMBus alert
#define  _I2C4_ISR_TIMEOUT                                   (0x1 << 12)    // Timeout or t_low detection flag
#define  _I2C4_ISR_PECERR                                    (0x1 << 11)    // PEC Error in reception
#define  _I2C4_ISR_OVR                                       (0x1 << 10)    // Overrun/Underrun (slave mode)
#define  _I2C4_ISR_ARLO                                      (0x1 << 9)    // Arbitration lost
#define  _I2C4_ISR_BERR                                      (0x1 << 8)    // Bus error
#define  _I2C4_ISR_TCR                                       (0x1 << 7)    // Transfer Complete Reload
#define  _I2C4_ISR_TC                                        (0x1 << 6)    // Transfer Complete (master mode)
#define  _I2C4_ISR_STOPF                                     (0x1 << 5)    // Stop detection flag
#define  _I2C4_ISR_NACKF                                     (0x1 << 4)    // Not acknowledge received flag
#define  _I2C4_ISR_ADDR                                      (0x1 << 3)    // Address matched (slave mode)
#define  _I2C4_ISR_RXNE                                      (0x1 << 2)    // Receive data register not empty (receivers)
#define  _I2C4_ISR_TXIS                                      (0x1 << 1)    // Transmit interrupt status (transmitters)
#define  _I2C4_ISR_TXE                                       (0x1 << 0)    // Transmit data register empty (transmitters)
#define  _I2C4_ICR_ALERTCF                                   (0x1 << 13)    // Alert flag clear
#define  _I2C4_ICR_TIMOUTCF                                  (0x1 << 12)    // Timeout detection flag clear
#define  _I2C4_ICR_PECCF                                     (0x1 << 11)    // PEC Error flag clear
#define  _I2C4_ICR_OVRCF                                     (0x1 << 10)    // Overrun/Underrun flag clear
#define  _I2C4_ICR_ARLOCF                                    (0x1 << 9)    // Arbitration lost flag clear
#define  _I2C4_ICR_BERRCF                                    (0x1 << 8)    // Bus error flag clear
#define  _I2C4_ICR_STOPCF                                    (0x1 << 5)    // Stop detection flag clear
#define  _I2C4_ICR_NACKCF                                    (0x1 << 4)    // Not Acknowledge flag clear
#define  _I2C4_ICR_ADDRCF                                    (0x1 << 3)    // Address Matched flag clear
#define  _I2C4_PECR_PEC                                      (0xff << 0)    // Packet error checking register
#define  _I2C4_RXDR_RXDATA                                   (0xff << 0)    // 8-bit receive data
#define  _I2C4_TXDR_TXDATA                                   (0xff << 0)    // 8-bit transmit data

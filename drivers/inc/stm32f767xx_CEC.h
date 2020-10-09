#define Get_CEC_CR(FLAG)                     (*(uint32_t*)0x40006c00 |= FLAG)
#define Get_CEC_CFGR(FLAG)                   (*(uint32_t*)0x40006c04 |= FLAG)
#define Get_CEC_TXDR(FLAG)                   (*(uint32_t*)0x40006c08 |= FLAG)
#define Get_CEC_RXDR(FLAG)                   (*(uint32_t*)0x40006c0c |= FLAG)
#define Get_CEC_ISR(FLAG)                    (*(uint32_t*)0x40006c10 |= FLAG)
#define Get_CEC_IER(FLAG)                    (*(uint32_t*)0x40006c14 |= FLAG)
#define Set_CEC_CR(FLAG)                     (*(uint32_t*)0x40006c00 &= FLAG)
#define Clr_CEC_CR(FLAG)                     (*(uint32_t*)0x40006c00 |= ~FLAG)
#define Set_CEC_CFGR(FLAG)                   (*(uint32_t*)0x40006c04 &= FLAG)
#define Clr_CEC_CFGR(FLAG)                   (*(uint32_t*)0x40006c04 |= ~FLAG)
#define Set_CEC_TXDR(FLAG)                   (*(uint32_t*)0x40006c08 &= FLAG)
#define Clr_CEC_TXDR(FLAG)                   (*(uint32_t*)0x40006c08 |= ~FLAG)
#define Set_CEC_RXDR(FLAG)                   (*(uint32_t*)0x40006c0c &= FLAG)
#define Clr_CEC_RXDR(FLAG)                   (*(uint32_t*)0x40006c0c |= ~FLAG)
#define Set_CEC_ISR(FLAG)                    (*(uint32_t*)0x40006c10 &= FLAG)
#define Clr_CEC_ISR(FLAG)                    (*(uint32_t*)0x40006c10 |= ~FLAG)
#define Set_CEC_IER(FLAG)                    (*(uint32_t*)0x40006c14 &= FLAG)
#define Clr_CEC_IER(FLAG)                    (*(uint32_t*)0x40006c14 |= ~FLAG)
#define  _CEC_CR_TXEOM                                       (0x1 << 2)    // Tx End Of Message
#define  _CEC_CR_TXSOM                                       (0x1 << 1)    // Tx start of message
#define  _CEC_CR_CECEN                                       (0x1 << 0)    // CEC Enable
#define  _CEC_CFGR_SFT                                       (0x7 << 0)    // Signal Free Time
#define  _CEC_CFGR_RXTOL                                     (0x1 << 3)    // Rx-Tolerance
#define  _CEC_CFGR_BRESTP                                    (0x1 << 4)    // Rx-stop on bit rising error
#define  _CEC_CFGR_BREGEN                                    (0x1 << 5)    // Generate error-bit on bit rising error
#define  _CEC_CFGR_LBPEGEN                                   (0x1 << 6)    // Generate Error-Bit on Long Bit Period Error
#define  _CEC_CFGR_BRDNOGEN                                  (0x1 << 7)    // Avoid Error-Bit Generation in Broadcast
#define  _CEC_CFGR_SFTOP                                     (0x1 << 8)    // SFT Option Bit
#define  _CEC_CFGR_OAR                                       (0x7fff << 16)    // Own addresses configuration
#define  _CEC_CFGR_LSTN                                      (0x1 << 31)    // Listen mode
#define  _CEC_TXDR_TXD                                       (0xff << 0)    // Tx Data register
#define  _CEC_RXDR_RXDR                                      (0xff << 0)    // CEC Rx Data Register
#define  _CEC_ISR_TXACKE                                     (0x1 << 12)    // Tx-Missing acknowledge error
#define  _CEC_ISR_TXERR                                      (0x1 << 11)    // Tx-Error
#define  _CEC_ISR_TXUDR                                      (0x1 << 10)    // Tx-Buffer Underrun
#define  _CEC_ISR_TXEND                                      (0x1 << 9)    // End of Transmission
#define  _CEC_ISR_TXBR                                       (0x1 << 8)    // Tx-Byte Request
#define  _CEC_ISR_ARBLST                                     (0x1 << 7)    // Arbitration Lost
#define  _CEC_ISR_RXACKE                                     (0x1 << 6)    // Rx-Missing Acknowledge
#define  _CEC_ISR_LBPE                                       (0x1 << 5)    // Rx-Long Bit Period Error
#define  _CEC_ISR_SBPE                                       (0x1 << 4)    // Rx-Short Bit period error
#define  _CEC_ISR_BRE                                        (0x1 << 3)    // Rx-Bit rising error
#define  _CEC_ISR_RXOVR                                      (0x1 << 2)    // Rx-Overrun
#define  _CEC_ISR_RXEND                                      (0x1 << 1)    // End Of Reception
#define  _CEC_ISR_RXBR                                       (0x1 << 0)    // Rx-Byte Received
#define  _CEC_IER_TXACKIE                                    (0x1 << 12)    // Tx-Missing Acknowledge Error Interrupt Enable
#define  _CEC_IER_TXERRIE                                    (0x1 << 11)    // Tx-Error Interrupt Enable
#define  _CEC_IER_TXUDRIE                                    (0x1 << 10)    // Tx-Underrun interrupt enable
#define  _CEC_IER_TXENDIE                                    (0x1 << 9)    // Tx-End of message interrupt enable
#define  _CEC_IER_TXBRIE                                     (0x1 << 8)    // Tx-Byte Request Interrupt Enable
#define  _CEC_IER_ARBLSTIE                                   (0x1 << 7)    // Arbitration Lost Interrupt Enable
#define  _CEC_IER_RXACKIE                                    (0x1 << 6)    // Rx-Missing Acknowledge Error Interrupt Enable
#define  _CEC_IER_LBPEIE                                     (0x1 << 5)    // Long Bit Period Error Interrupt Enable
#define  _CEC_IER_SBPEIE                                     (0x1 << 4)    // Short Bit Period Error Interrupt Enable
#define  _CEC_IER_BREIE                                      (0x1 << 3)    // Bit Rising Error Interrupt Enable
#define  _CEC_IER_RXOVRIE                                    (0x1 << 2)    // Rx-Buffer Overrun Interrupt Enable
#define  _CEC_IER_RXENDIE                                    (0x1 << 1)    // End Of Reception Interrupt Enable
#define  _CEC_IER_RXBRIE                                     (0x1 << 0)    // Rx-Byte Received Interrupt Enable

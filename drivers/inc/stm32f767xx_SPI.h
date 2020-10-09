#include "stm32f767xx.h"

//Get and set functions 
//FLAGS are macro starts with _
#define Get_SPI2_CR1(FLAG)                   (*<uint32_t*>0x40003800 |= FLAG)
#define Get_SPI2_CR2(FLAG)                   (*<uint32_t*>0x40003804 |= FLAG)
#define Get_SPI2_SR(FLAG)                    (*<uint32_t*>0x40003808 |= FLAG)
#define Get_SPI2_DR(FLAG)                    (*<uint32_t*>0x4000380c |= FLAG)
#define Get_SPI2_CRCPR(FLAG)                 (*<uint32_t*>0x40003810 |= FLAG)
#define Get_SPI2_RXCRCR(FLAG)                (*<uint32_t*>0x40003814 |= FLAG)
#define Get_SPI2_TXCRCR(FLAG)                (*<uint32_t*>0x40003818 |= FLAG)
#define Get_SPI2_I2SCFGR(FLAG)               (*<uint32_t*>0x4000381c |= FLAG)
#define Get_SPI2_I2SPR(FLAG)                 (*<uint32_t*>0x40003820 |= FLAG)
#define Get_SPI3_CR1(FLAG)                   (*<uint32_t*>0x40003c00 |= FLAG)
#define Get_SPI3_CR2(FLAG)                   (*<uint32_t*>0x40003c04 |= FLAG)
#define Get_SPI3_SR(FLAG)                    (*<uint32_t*>0x40003c08 |= FLAG)
#define Get_SPI3_DR(FLAG)                    (*<uint32_t*>0x40003c0c |= FLAG)
#define Get_SPI3_CRCPR(FLAG)                 (*<uint32_t*>0x40003c10 |= FLAG)
#define Get_SPI3_RXCRCR(FLAG)                (*<uint32_t*>0x40003c14 |= FLAG)
#define Get_SPI3_TXCRCR(FLAG)                (*<uint32_t*>0x40003c18 |= FLAG)
#define Get_SPI3_I2SCFGR(FLAG)               (*<uint32_t*>0x40003c1c |= FLAG)
#define Get_SPI3_I2SPR(FLAG)                 (*<uint32_t*>0x40003c20 |= FLAG)
#define Get_SPI1_CR1(FLAG)                   (*<uint32_t*>0x40013000 |= FLAG)
#define Get_SPI1_CR2(FLAG)                   (*<uint32_t*>0x40013004 |= FLAG)
#define Get_SPI1_SR(FLAG)                    (*<uint32_t*>0x40013008 |= FLAG)
#define Get_SPI1_DR(FLAG)                    (*<uint32_t*>0x4001300c |= FLAG)
#define Get_SPI1_CRCPR(FLAG)                 (*<uint32_t*>0x40013010 |= FLAG)
#define Get_SPI1_RXCRCR(FLAG)                (*<uint32_t*>0x40013014 |= FLAG)
#define Get_SPI1_TXCRCR(FLAG)                (*<uint32_t*>0x40013018 |= FLAG)
#define Get_SPI1_I2SCFGR(FLAG)               (*<uint32_t*>0x4001301c |= FLAG)
#define Get_SPI1_I2SPR(FLAG)                 (*<uint32_t*>0x40013020 |= FLAG)
#define Get_SPI4_CR1(FLAG)                   (*<uint32_t*>0x40013400 |= FLAG)
#define Get_SPI4_CR2(FLAG)                   (*<uint32_t*>0x40013404 |= FLAG)
#define Get_SPI4_SR(FLAG)                    (*<uint32_t*>0x40013408 |= FLAG)
#define Get_SPI4_DR(FLAG)                    (*<uint32_t*>0x4001340c |= FLAG)
#define Get_SPI4_CRCPR(FLAG)                 (*<uint32_t*>0x40013410 |= FLAG)
#define Get_SPI4_RXCRCR(FLAG)                (*<uint32_t*>0x40013414 |= FLAG)
#define Get_SPI4_TXCRCR(FLAG)                (*<uint32_t*>0x40013418 |= FLAG)
#define Get_SPI4_I2SCFGR(FLAG)               (*<uint32_t*>0x4001341c |= FLAG)
#define Get_SPI4_I2SPR(FLAG)                 (*<uint32_t*>0x40013420 |= FLAG)
#define Get_SPI5_CR1(FLAG)                   (*<uint32_t*>0x40015000 |= FLAG)
#define Get_SPI5_CR2(FLAG)                   (*<uint32_t*>0x40015004 |= FLAG)
#define Get_SPI5_SR(FLAG)                    (*<uint32_t*>0x40015008 |= FLAG)
#define Get_SPI5_DR(FLAG)                    (*<uint32_t*>0x4001500c |= FLAG)
#define Get_SPI5_CRCPR(FLAG)                 (*<uint32_t*>0x40015010 |= FLAG)
#define Get_SPI5_RXCRCR(FLAG)                (*<uint32_t*>0x40015014 |= FLAG)
#define Get_SPI5_TXCRCR(FLAG)                (*<uint32_t*>0x40015018 |= FLAG)
#define Get_SPI5_I2SCFGR(FLAG)               (*<uint32_t*>0x4001501c |= FLAG)
#define Get_SPI5_I2SPR(FLAG)                 (*<uint32_t*>0x40015020 |= FLAG)
#define Get_SPI6_CR1(FLAG)                   (*<uint32_t*>0x40015400 |= FLAG)
#define Get_SPI6_CR2(FLAG)                   (*<uint32_t*>0x40015404 |= FLAG)
#define Get_SPI6_SR(FLAG)                    (*<uint32_t*>0x40015408 |= FLAG)
#define Get_SPI6_DR(FLAG)                    (*<uint32_t*>0x4001540c |= FLAG)
#define Get_SPI6_CRCPR(FLAG)                 (*<uint32_t*>0x40015410 |= FLAG)
#define Get_SPI6_RXCRCR(FLAG)                (*<uint32_t*>0x40015414 |= FLAG)
#define Get_SPI6_TXCRCR(FLAG)                (*<uint32_t*>0x40015418 |= FLAG)
#define Get_SPI6_I2SCFGR(FLAG)               (*<uint32_t*>0x4001541c |= FLAG)
#define Get_SPI6_I2SPR(FLAG)                 (*<uint32_t*>0x40015420 |= FLAG)
#define Set_SPI2_CR1(FLAG)                   (*<uint32_t*>0x40003800 &= FLAG)
#define Clr_SPI2_CR1(FLAG)                   (*<uint32_t*>0x40003800 |= ~FLAG)
#define Set_SPI2_CR2(FLAG)                   (*<uint32_t*>0x40003804 &= FLAG)
#define Clr_SPI2_CR2(FLAG)                   (*<uint32_t*>0x40003804 |= ~FLAG)
#define Set_SPI2_SR(FLAG)                    (*<uint32_t*>0x40003808 &= FLAG)
#define Clr_SPI2_SR(FLAG)                    (*<uint32_t*>0x40003808 |= ~FLAG)
#define Set_SPI2_DR(FLAG)                    (*<uint32_t*>0x4000380c &= FLAG)
#define Clr_SPI2_DR(FLAG)                    (*<uint32_t*>0x4000380c |= ~FLAG)
#define Set_SPI2_CRCPR(FLAG)                 (*<uint32_t*>0x40003810 &= FLAG)
#define Clr_SPI2_CRCPR(FLAG)                 (*<uint32_t*>0x40003810 |= ~FLAG)
#define Set_SPI2_RXCRCR(FLAG)                (*<uint32_t*>0x40003814 &= FLAG)
#define Clr_SPI2_RXCRCR(FLAG)                (*<uint32_t*>0x40003814 |= ~FLAG)
#define Set_SPI2_TXCRCR(FLAG)                (*<uint32_t*>0x40003818 &= FLAG)
#define Clr_SPI2_TXCRCR(FLAG)                (*<uint32_t*>0x40003818 |= ~FLAG)
#define Set_SPI2_I2SCFGR(FLAG)               (*<uint32_t*>0x4000381c &= FLAG)
#define Clr_SPI2_I2SCFGR(FLAG)               (*<uint32_t*>0x4000381c |= ~FLAG)
#define Set_SPI2_I2SPR(FLAG)                 (*<uint32_t*>0x40003820 &= FLAG)
#define Clr_SPI2_I2SPR(FLAG)                 (*<uint32_t*>0x40003820 |= ~FLAG)
#define Set_SPI3_CR1(FLAG)                   (*<uint32_t*>0x40003c00 &= FLAG)
#define Clr_SPI3_CR1(FLAG)                   (*<uint32_t*>0x40003c00 |= ~FLAG)
#define Set_SPI3_CR2(FLAG)                   (*<uint32_t*>0x40003c04 &= FLAG)
#define Clr_SPI3_CR2(FLAG)                   (*<uint32_t*>0x40003c04 |= ~FLAG)
#define Set_SPI3_SR(FLAG)                    (*<uint32_t*>0x40003c08 &= FLAG)
#define Clr_SPI3_SR(FLAG)                    (*<uint32_t*>0x40003c08 |= ~FLAG)
#define Set_SPI3_DR(FLAG)                    (*<uint32_t*>0x40003c0c &= FLAG)
#define Clr_SPI3_DR(FLAG)                    (*<uint32_t*>0x40003c0c |= ~FLAG)
#define Set_SPI3_CRCPR(FLAG)                 (*<uint32_t*>0x40003c10 &= FLAG)
#define Clr_SPI3_CRCPR(FLAG)                 (*<uint32_t*>0x40003c10 |= ~FLAG)
#define Set_SPI3_RXCRCR(FLAG)                (*<uint32_t*>0x40003c14 &= FLAG)
#define Clr_SPI3_RXCRCR(FLAG)                (*<uint32_t*>0x40003c14 |= ~FLAG)
#define Set_SPI3_TXCRCR(FLAG)                (*<uint32_t*>0x40003c18 &= FLAG)
#define Clr_SPI3_TXCRCR(FLAG)                (*<uint32_t*>0x40003c18 |= ~FLAG)
#define Set_SPI3_I2SCFGR(FLAG)               (*<uint32_t*>0x40003c1c &= FLAG)
#define Clr_SPI3_I2SCFGR(FLAG)               (*<uint32_t*>0x40003c1c |= ~FLAG)
#define Set_SPI3_I2SPR(FLAG)                 (*<uint32_t*>0x40003c20 &= FLAG)
#define Clr_SPI3_I2SPR(FLAG)                 (*<uint32_t*>0x40003c20 |= ~FLAG)
#define Set_SPI1_CR1(FLAG)                   (*<uint32_t*>0x40013000 &= FLAG)
#define Clr_SPI1_CR1(FLAG)                   (*<uint32_t*>0x40013000 |= ~FLAG)
#define Set_SPI1_CR2(FLAG)                   (*<uint32_t*>0x40013004 &= FLAG)
#define Clr_SPI1_CR2(FLAG)                   (*<uint32_t*>0x40013004 |= ~FLAG)
#define Set_SPI1_SR(FLAG)                    (*<uint32_t*>0x40013008 &= FLAG)
#define Clr_SPI1_SR(FLAG)                    (*<uint32_t*>0x40013008 |= ~FLAG)
#define Set_SPI1_DR(FLAG)                    (*<uint32_t*>0x4001300c &= FLAG)
#define Clr_SPI1_DR(FLAG)                    (*<uint32_t*>0x4001300c |= ~FLAG)
#define Set_SPI1_CRCPR(FLAG)                 (*<uint32_t*>0x40013010 &= FLAG)
#define Clr_SPI1_CRCPR(FLAG)                 (*<uint32_t*>0x40013010 |= ~FLAG)
#define Set_SPI1_RXCRCR(FLAG)                (*<uint32_t*>0x40013014 &= FLAG)
#define Clr_SPI1_RXCRCR(FLAG)                (*<uint32_t*>0x40013014 |= ~FLAG)
#define Set_SPI1_TXCRCR(FLAG)                (*<uint32_t*>0x40013018 &= FLAG)
#define Clr_SPI1_TXCRCR(FLAG)                (*<uint32_t*>0x40013018 |= ~FLAG)
#define Set_SPI1_I2SCFGR(FLAG)               (*<uint32_t*>0x4001301c &= FLAG)
#define Clr_SPI1_I2SCFGR(FLAG)               (*<uint32_t*>0x4001301c |= ~FLAG)
#define Set_SPI1_I2SPR(FLAG)                 (*<uint32_t*>0x40013020 &= FLAG)
#define Clr_SPI1_I2SPR(FLAG)                 (*<uint32_t*>0x40013020 |= ~FLAG)
#define Set_SPI4_CR1(FLAG)                   (*<uint32_t*>0x40013400 &= FLAG)
#define Clr_SPI4_CR1(FLAG)                   (*<uint32_t*>0x40013400 |= ~FLAG)
#define Set_SPI4_CR2(FLAG)                   (*<uint32_t*>0x40013404 &= FLAG)
#define Clr_SPI4_CR2(FLAG)                   (*<uint32_t*>0x40013404 |= ~FLAG)
#define Set_SPI4_SR(FLAG)                    (*<uint32_t*>0x40013408 &= FLAG)
#define Clr_SPI4_SR(FLAG)                    (*<uint32_t*>0x40013408 |= ~FLAG)
#define Set_SPI4_DR(FLAG)                    (*<uint32_t*>0x4001340c &= FLAG)
#define Clr_SPI4_DR(FLAG)                    (*<uint32_t*>0x4001340c |= ~FLAG)
#define Set_SPI4_CRCPR(FLAG)                 (*<uint32_t*>0x40013410 &= FLAG)
#define Clr_SPI4_CRCPR(FLAG)                 (*<uint32_t*>0x40013410 |= ~FLAG)
#define Set_SPI4_RXCRCR(FLAG)                (*<uint32_t*>0x40013414 &= FLAG)
#define Clr_SPI4_RXCRCR(FLAG)                (*<uint32_t*>0x40013414 |= ~FLAG)
#define Set_SPI4_TXCRCR(FLAG)                (*<uint32_t*>0x40013418 &= FLAG)
#define Clr_SPI4_TXCRCR(FLAG)                (*<uint32_t*>0x40013418 |= ~FLAG)
#define Set_SPI4_I2SCFGR(FLAG)               (*<uint32_t*>0x4001341c &= FLAG)
#define Clr_SPI4_I2SCFGR(FLAG)               (*<uint32_t*>0x4001341c |= ~FLAG)
#define Set_SPI4_I2SPR(FLAG)                 (*<uint32_t*>0x40013420 &= FLAG)
#define Clr_SPI4_I2SPR(FLAG)                 (*<uint32_t*>0x40013420 |= ~FLAG)
#define Set_SPI5_CR1(FLAG)                   (*<uint32_t*>0x40015000 &= FLAG)
#define Clr_SPI5_CR1(FLAG)                   (*<uint32_t*>0x40015000 |= ~FLAG)
#define Set_SPI5_CR2(FLAG)                   (*<uint32_t*>0x40015004 &= FLAG)
#define Clr_SPI5_CR2(FLAG)                   (*<uint32_t*>0x40015004 |= ~FLAG)
#define Set_SPI5_SR(FLAG)                    (*<uint32_t*>0x40015008 &= FLAG)
#define Clr_SPI5_SR(FLAG)                    (*<uint32_t*>0x40015008 |= ~FLAG)
#define Set_SPI5_DR(FLAG)                    (*<uint32_t*>0x4001500c &= FLAG)
#define Clr_SPI5_DR(FLAG)                    (*<uint32_t*>0x4001500c |= ~FLAG)
#define Set_SPI5_CRCPR(FLAG)                 (*<uint32_t*>0x40015010 &= FLAG)
#define Clr_SPI5_CRCPR(FLAG)                 (*<uint32_t*>0x40015010 |= ~FLAG)
#define Set_SPI5_RXCRCR(FLAG)                (*<uint32_t*>0x40015014 &= FLAG)
#define Clr_SPI5_RXCRCR(FLAG)                (*<uint32_t*>0x40015014 |= ~FLAG)
#define Set_SPI5_TXCRCR(FLAG)                (*<uint32_t*>0x40015018 &= FLAG)
#define Clr_SPI5_TXCRCR(FLAG)                (*<uint32_t*>0x40015018 |= ~FLAG)
#define Set_SPI5_I2SCFGR(FLAG)               (*<uint32_t*>0x4001501c &= FLAG)
#define Clr_SPI5_I2SCFGR(FLAG)               (*<uint32_t*>0x4001501c |= ~FLAG)
#define Set_SPI5_I2SPR(FLAG)                 (*<uint32_t*>0x40015020 &= FLAG)
#define Clr_SPI5_I2SPR(FLAG)                 (*<uint32_t*>0x40015020 |= ~FLAG)
#define Set_SPI6_CR1(FLAG)                   (*<uint32_t*>0x40015400 &= FLAG)
#define Clr_SPI6_CR1(FLAG)                   (*<uint32_t*>0x40015400 |= ~FLAG)
#define Set_SPI6_CR2(FLAG)                   (*<uint32_t*>0x40015404 &= FLAG)
#define Clr_SPI6_CR2(FLAG)                   (*<uint32_t*>0x40015404 |= ~FLAG)
#define Set_SPI6_SR(FLAG)                    (*<uint32_t*>0x40015408 &= FLAG)
#define Clr_SPI6_SR(FLAG)                    (*<uint32_t*>0x40015408 |= ~FLAG)
#define Set_SPI6_DR(FLAG)                    (*<uint32_t*>0x4001540c &= FLAG)
#define Clr_SPI6_DR(FLAG)                    (*<uint32_t*>0x4001540c |= ~FLAG)
#define Set_SPI6_CRCPR(FLAG)                 (*<uint32_t*>0x40015410 &= FLAG)
#define Clr_SPI6_CRCPR(FLAG)                 (*<uint32_t*>0x40015410 |= ~FLAG)
#define Set_SPI6_RXCRCR(FLAG)                (*<uint32_t*>0x40015414 &= FLAG)
#define Clr_SPI6_RXCRCR(FLAG)                (*<uint32_t*>0x40015414 |= ~FLAG)
#define Set_SPI6_TXCRCR(FLAG)                (*<uint32_t*>0x40015418 &= FLAG)
#define Clr_SPI6_TXCRCR(FLAG)                (*<uint32_t*>0x40015418 |= ~FLAG)
#define Set_SPI6_I2SCFGR(FLAG)               (*<uint32_t*>0x4001541c &= FLAG)
#define Clr_SPI6_I2SCFGR(FLAG)               (*<uint32_t*>0x4001541c |= ~FLAG)
#define Set_SPI6_I2SPR(FLAG)                 (*<uint32_t*>0x40015420 &= FLAG)
#define Clr_SPI6_I2SPR(FLAG)                 (*<uint32_t*>0x40015420 |= ~FLAG)


#define  _SPI_CR1_BIDIMODE                                  (0x1 << 15)    // Bidirectional data mode enable
#define  _SPI_CR1_BIDIOE                                    (0x1 << 14)    // Output enable in bidirectional mode
#define  _SPI_CR1_BR                                        (0x7 << 3)    // Baud rate control
#define  _SPI_CR1_CPHA                                      (0x1 << 0)    // Clock phase
#define  _SPI_CR1_CPOL                                      (0x1 << 1)    // Clock polarity
#define  _SPI_CR1_CRCEN                                     (0x1 << 13)    // Hardware CRC calculation enable
#define  _SPI_CR1_CRCL                                      (0x1 << 11)    // CRC length
#define  _SPI_CR1_CRCNEXT                                   (0x1 << 12)    // CRC transfer next
#define  _SPI_CR1_LSBFIRST                                  (0x1 << 7)    // Frame format
#define  _SPI_CR1_MSTR                                      (0x1 << 2)    // Master selection
#define  _SPI_CR1_RXONLY                                    (0x1 << 10)    // Receive only
#define  _SPI_CR1_SPE                                       (0x1 << 6)    // SPI enable
#define  _SPI_CR1_SSI                                       (0x1 << 8)    // Internal slave select
#define  _SPI_CR1_SSM                                       (0x1 << 9)    // Software slave management
#define  _SPI_CR2_DS                                        (0xf << 8)    // Data size
#define  _SPI_CR2_ERRIE                                     (0x1 << 5)    // Error interrupt enable
#define  _SPI_CR2_FRF                                       (0x1 << 4)    // Frame format
#define  _SPI_CR2_FRXTH                                     (0x1 << 12)    // FIFO reception threshold
#define  _SPI_CR2_LDMA_RX                                   (0x1 << 13)    // Last DMA transfer for reception
#define  _SPI_CR2_LDMA_TX                                   (0x1 << 14)    // Last DMA transfer for transmission
#define  _SPI_CR2_NSSP                                      (0x1 << 3)    // NSS pulse management
#define  _SPI_CR2_RXDMAEN                                   (0x1 << 0)    // Rx buffer DMA enable
#define  _SPI_CR2_RXNEIE                                    (0x1 << 6)    // RX buffer not empty interrupt enable
#define  _SPI_CR2_SSOE                                      (0x1 << 2)    // SS output enable
#define  _SPI_CR2_TXDMAEN                                   (0x1 << 1)    // Tx buffer DMA enable
#define  _SPI_CR2_TXEIE                                     (0x1 << 7)    // Tx buffer empty interrupt enable
#define  _SPI_CRCPR_CRCPOLY                                 (0xffff << 0)    // CRC polynomial register
#define  _SPI_DR_DR                                         (0xffff << 0)    // Data register
#define  _SPI_I2SCFGR_ASTRTEN                               (0x1 << 12)    // Asynchronous start enable
#define  _SPI_I2SCFGR_CHLEN                                 (0x1 << 0)    // Channel length (number of bits per audio channel)
#define  _SPI_I2SCFGR_CKPOL                                 (0x1 << 3)    // Steady state clock polarity
#define  _SPI_I2SCFGR_DATLEN                                (0x3 << 1)    // Data length to be transferred
#define  _SPI_I2SCFGR_I2SCFG                                (0x3 << 8)    // I2S configuration mode
#define  _SPI_I2SCFGR_I2SE                                  (0x1 << 10)    // I2S Enable
#define  _SPI_I2SCFGR_I2SMOD                                (0x1 << 11)    // I2S mode selection
#define  _SPI_I2SCFGR_I2SSTD                                (0x3 << 4)    // I2S standard selection
#define  _SPI_I2SCFGR_PCMSYNC                               (0x1 << 7)    // PCM frame synchronization
#define  _SPI_I2SPR_I2SDIV                                  (0xff << 0)    // I2S Linear prescaler
#define  _SPI_I2SPR_MCKOE                                   (0x1 << 9)    // Master clock output enable
#define  _SPI_I2SPR_ODD                                     (0x1 << 8)    // Odd factor for the prescaler
#define  _SPI_RXCRCR_RxCRC                                  (0xffff << 0)    // Rx CRC register
#define  _SPI_SR_BSY                                        (0x1 << 7)    // Busy flag
#define  _SPI_SR_CHSIDE                                     (0x1 << 2)    // Channel side
#define  _SPI_SR_CRCERR                                     (0x1 << 4)    // CRC error flag
#define  _SPI_SR_FRE                                        (0x1 << 8)    // Frame format error
#define  _SPI_SR_FRLVL                                      (0x3 << 9)    // FIFO reception level
#define  _SPI_SR_FTLVL                                      (0x3 << 11)    // FIFO Transmission Level
#define  _SPI_SR_MODF                                       (0x1 << 5)    // Mode fault
#define  _SPI_SR_OVR                                        (0x1 << 6)    // Overrun flag
#define  _SPI_SR_RXNE                                       (0x1 << 0)    // Receive buffer not empty
#define  _SPI_SR_TXE                                        (0x1 << 1)    // Transmit buffer empty
#define  _SPI_SR_UDR                                        (0x1 << 3)    // Underrun flag
#define  _SPI_TXCRCR_TxCRC                                  (0xffff << 0)    // Tx CRC register
// Flags

/* 
 * spi config flags
 */

#define SPI_Config_CPHA     (1 << 0 )
#define SPI_Config_CPOL     (1 << 1 )
#define SPI_Config_MASTER   (1 << 2 )
#define SPI_Config_LSB_FST  (1 << 3 )
#define SPI_Config_SSI      (1 << 4 )
#define SPI_Config_SSM      (1 << 5 )
#define SPI_Config_RX_ONLY  (1 << 6 )
#define SPI_Config_CRC_16B  (1 << 7 )
#define SPI_Config_CRC_NEXT (1 << 8 )
#define SPI_Config_CRC_EN   (1 << 9 )
#define SPI_Config_BIDIOE   (1 << 10)
#define SPI_Config_BIDIEN   (1 << 11)
#define SPI_Config_RXDMAEN  (1 << 12)
#define SPI_Config_TXDMAEN  (1 << 13)
#define SPI_Config_SSOE     (1 << 14)
#define SPI_Config_NSSP     (1 << 15)
#define SPI_Config_FRF      (1 << 16)
#define SPI_Config_ERRIE    (1 << 17)
#define SPI_Config_RXNEIE   (1 << 18)
#define SPI_Config_TXEIE    (1 << 19)
#define SPI_Config_FRXTH    (1 << 20)
#define SPI_Config_LDMA_RX  (1 << 21)
#define SPI_Config_LDMA_TX  (1 << 22)


typedef enum {
    SPI_Status_RXNE     ,
    SPI_Status_TXE      ,
    SPI_Status_CHSIDE   ,
    SPI_Status_UDR      ,
    SPI_Status_CRC_ERR  ,
    SPI_Status_MODF     ,
    SPI_Status_OVR      ,
    SPI_Status_BSY      ,
    SPI_Status_FRE      ,
    SPI_Status_FRLVL    ,
    SPI_Status_FTLVL    ,
} SPI_Status_Flags;

typedef enum {
    SPI_Mode_Slave,
    SPI_Mode_Master,
}SPI_Device_mode;

typedef enum {
    SPI_Bus_Full_duplex,
    SPI_Bus_Half_duplex,        // TODO: desc
    SPI_Bus_Simplex             // Recieve only mode for transmit only just disconnect Rx pin
}SPI_BusConfig;

typedef enum {
    SPI_CPHA_First,           // data is available in first transition
    SPI_CPHA_Second           // data is available in second transition
}SPI_CPHA;

typedef enum {
    SPI_CPOL_LOW,           // idle low clk
    SPI_CPOL_HIGH           // idle high clk
}SPI_CPOL;

typedef enum {
    SPI_SSM_RESET,          // slave management is done by hardware
    SPI_SSM_SET             // slave management is done by software
}SPI_SSM;

typedef enum {
    SPI_pclk_div_by_2,
    SPI_pclk_div_by_4,
    SPI_pclk_div_by_8,
    SPI_pclk_div_by_16,
    SPI_pclk_div_by_32,
    SPI_pclk_div_by_64,
    SPI_pclk_div_by_128,
    SPI_pclk_div_by_256
}SPI_SPEED;

typedef enum {
    RCC_SPI1,
    RCC_SPI2,
    RCC_SPI3,
    RCC_SPI4,
    RCC_SPI5,
    RCC_SPI6
}SPI_Interfaces;

typedef struct {
    SPI_Device_mode device_mode;    // Slave or Master
    SPI_BusConfig bus_config;       // Mode of the bus. For simplex transmit only mode use full duplex and ignore miso
    uint8_t ds;                     // data frame size (4-16) bits allowed
    SPI_CPHA cpha;                  // clock phase (data read on first or second cycle)
    SPI_CPOL cpol;                  // Clock polarity (idle state of clk)
    SPI_SSM ssm;                    // software slave management
    SPI_SPEED speed;                // spi clk speed
}SPI_I2s_Config_t;

typedef struct {
    SPI_RegDef_t* handle;
    SPI_I2s_Config_t config;
}SPI_Handle_t;

/* fuctions */

// Initialization
void SPI_Init(SPI_Handle_t* PinHandler);
void SPI_DeInit(SPI_Interfaces interface);

// clock control
void RCC_SPI_ClkCtrl(SPI_Interfaces interface, uint8_t State);

// Data send and recieve
void SPI_SendData(SPI_RegDef_t* reg, uint8_t* tx_buf, uint32_t size);
void SPI_ReceiveData(SPI_RegDef_t* reg, uint8_t* rx_buf, uint32_t size);

// Interupt handling
void SPI_irq_config(uint8_t irq_num, uint8_t state);            // SET or RESET state
void SPI_IRQ_set_priority(uint8_t irq_num, uint32_t priority);
void SPI_IRQ_Handling(SPI_Handle_t* handle);

// Enable or disable SPI
void SPI_Control(SPI_RegDef_t* reg_handle, uint8_t state);
uint32_t SPI_Status(SPI_RegDef_t* reg_handle, SPI_Status_Flags item);

/*
 * Configure SPI
 * Should be used after initialization
 * flags are from enum spi_flags
 */
void SPI_Config(SPI_Handle_t handler, uint32_t flags);

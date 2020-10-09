#define Get_SDMMC2_POWER(FLAG)               (*(uint32_t*)0x40011c00 |= FLAG)
#define Get_SDMMC2_CLKCR(FLAG)               (*(uint32_t*)0x40011c04 |= FLAG)
#define Get_SDMMC2_ARG(FLAG)                 (*(uint32_t*)0x40011c08 |= FLAG)
#define Get_SDMMC2_CMD(FLAG)                 (*(uint32_t*)0x40011c0c |= FLAG)
#define Get_SDMMC2_RESPCMD(FLAG)             (*(uint32_t*)0x40011c10 |= FLAG)
#define Get_SDMMC2_RESP1(FLAG)               (*(uint32_t*)0x40011c14 |= FLAG)
#define Get_SDMMC2_RESP2(FLAG)               (*(uint32_t*)0x40011c18 |= FLAG)
#define Get_SDMMC2_RESP3(FLAG)               (*(uint32_t*)0x40011c1c |= FLAG)
#define Get_SDMMC2_RESP4(FLAG)               (*(uint32_t*)0x40011c20 |= FLAG)
#define Get_SDMMC2_DTIMER(FLAG)              (*(uint32_t*)0x40011c24 |= FLAG)
#define Get_SDMMC2_DLEN(FLAG)                (*(uint32_t*)0x40011c28 |= FLAG)
#define Get_SDMMC2_DCTRL(FLAG)               (*(uint32_t*)0x40011c2c |= FLAG)
#define Get_SDMMC2_DCOUNT(FLAG)              (*(uint32_t*)0x40011c30 |= FLAG)
#define Get_SDMMC2_STA(FLAG)                 (*(uint32_t*)0x40011c34 |= FLAG)
#define Get_SDMMC2_ICR(FLAG)                 (*(uint32_t*)0x40011c38 |= FLAG)
#define Get_SDMMC2_MASK(FLAG)                (*(uint32_t*)0x40011c3c |= FLAG)
#define Get_SDMMC2_FIFOCNT(FLAG)             (*(uint32_t*)0x40011c48 |= FLAG)
#define Get_SDMMC2_FIFO(FLAG)                (*(uint32_t*)0x40011c80 |= FLAG)
#define Get_SDMMC1_POWER(FLAG)               (*(uint32_t*)0x40012c00 |= FLAG)
#define Get_SDMMC1_CLKCR(FLAG)               (*(uint32_t*)0x40012c04 |= FLAG)
#define Get_SDMMC1_ARG(FLAG)                 (*(uint32_t*)0x40012c08 |= FLAG)
#define Get_SDMMC1_CMD(FLAG)                 (*(uint32_t*)0x40012c0c |= FLAG)
#define Get_SDMMC1_RESPCMD(FLAG)             (*(uint32_t*)0x40012c10 |= FLAG)
#define Get_SDMMC1_RESP1(FLAG)               (*(uint32_t*)0x40012c14 |= FLAG)
#define Get_SDMMC1_RESP2(FLAG)               (*(uint32_t*)0x40012c18 |= FLAG)
#define Get_SDMMC1_RESP3(FLAG)               (*(uint32_t*)0x40012c1c |= FLAG)
#define Get_SDMMC1_RESP4(FLAG)               (*(uint32_t*)0x40012c20 |= FLAG)
#define Get_SDMMC1_DTIMER(FLAG)              (*(uint32_t*)0x40012c24 |= FLAG)
#define Get_SDMMC1_DLEN(FLAG)                (*(uint32_t*)0x40012c28 |= FLAG)
#define Get_SDMMC1_DCTRL(FLAG)               (*(uint32_t*)0x40012c2c |= FLAG)
#define Get_SDMMC1_DCOUNT(FLAG)              (*(uint32_t*)0x40012c30 |= FLAG)
#define Get_SDMMC1_STA(FLAG)                 (*(uint32_t*)0x40012c34 |= FLAG)
#define Get_SDMMC1_ICR(FLAG)                 (*(uint32_t*)0x40012c38 |= FLAG)
#define Get_SDMMC1_MASK(FLAG)                (*(uint32_t*)0x40012c3c |= FLAG)
#define Get_SDMMC1_FIFOCNT(FLAG)             (*(uint32_t*)0x40012c48 |= FLAG)
#define Get_SDMMC1_FIFO(FLAG)                (*(uint32_t*)0x40012c80 |= FLAG)
#define Set_SDMMC2_POWER(FLAG)               (*(uint32_t*)0x40011c00 &= FLAG)
#define Clr_SDMMC2_POWER(FLAG)               (*(uint32_t*)0x40011c00 |= ~FLAG)
#define Set_SDMMC2_CLKCR(FLAG)               (*(uint32_t*)0x40011c04 &= FLAG)
#define Clr_SDMMC2_CLKCR(FLAG)               (*(uint32_t*)0x40011c04 |= ~FLAG)
#define Set_SDMMC2_ARG(FLAG)                 (*(uint32_t*)0x40011c08 &= FLAG)
#define Clr_SDMMC2_ARG(FLAG)                 (*(uint32_t*)0x40011c08 |= ~FLAG)
#define Set_SDMMC2_CMD(FLAG)                 (*(uint32_t*)0x40011c0c &= FLAG)
#define Clr_SDMMC2_CMD(FLAG)                 (*(uint32_t*)0x40011c0c |= ~FLAG)
#define Set_SDMMC2_RESPCMD(FLAG)             (*(uint32_t*)0x40011c10 &= FLAG)
#define Clr_SDMMC2_RESPCMD(FLAG)             (*(uint32_t*)0x40011c10 |= ~FLAG)
#define Set_SDMMC2_RESP1(FLAG)               (*(uint32_t*)0x40011c14 &= FLAG)
#define Clr_SDMMC2_RESP1(FLAG)               (*(uint32_t*)0x40011c14 |= ~FLAG)
#define Set_SDMMC2_RESP2(FLAG)               (*(uint32_t*)0x40011c18 &= FLAG)
#define Clr_SDMMC2_RESP2(FLAG)               (*(uint32_t*)0x40011c18 |= ~FLAG)
#define Set_SDMMC2_RESP3(FLAG)               (*(uint32_t*)0x40011c1c &= FLAG)
#define Clr_SDMMC2_RESP3(FLAG)               (*(uint32_t*)0x40011c1c |= ~FLAG)
#define Set_SDMMC2_RESP4(FLAG)               (*(uint32_t*)0x40011c20 &= FLAG)
#define Clr_SDMMC2_RESP4(FLAG)               (*(uint32_t*)0x40011c20 |= ~FLAG)
#define Set_SDMMC2_DTIMER(FLAG)              (*(uint32_t*)0x40011c24 &= FLAG)
#define Clr_SDMMC2_DTIMER(FLAG)              (*(uint32_t*)0x40011c24 |= ~FLAG)
#define Set_SDMMC2_DLEN(FLAG)                (*(uint32_t*)0x40011c28 &= FLAG)
#define Clr_SDMMC2_DLEN(FLAG)                (*(uint32_t*)0x40011c28 |= ~FLAG)
#define Set_SDMMC2_DCTRL(FLAG)               (*(uint32_t*)0x40011c2c &= FLAG)
#define Clr_SDMMC2_DCTRL(FLAG)               (*(uint32_t*)0x40011c2c |= ~FLAG)
#define Set_SDMMC2_DCOUNT(FLAG)              (*(uint32_t*)0x40011c30 &= FLAG)
#define Clr_SDMMC2_DCOUNT(FLAG)              (*(uint32_t*)0x40011c30 |= ~FLAG)
#define Set_SDMMC2_STA(FLAG)                 (*(uint32_t*)0x40011c34 &= FLAG)
#define Clr_SDMMC2_STA(FLAG)                 (*(uint32_t*)0x40011c34 |= ~FLAG)
#define Set_SDMMC2_ICR(FLAG)                 (*(uint32_t*)0x40011c38 &= FLAG)
#define Clr_SDMMC2_ICR(FLAG)                 (*(uint32_t*)0x40011c38 |= ~FLAG)
#define Set_SDMMC2_MASK(FLAG)                (*(uint32_t*)0x40011c3c &= FLAG)
#define Clr_SDMMC2_MASK(FLAG)                (*(uint32_t*)0x40011c3c |= ~FLAG)
#define Set_SDMMC2_FIFOCNT(FLAG)             (*(uint32_t*)0x40011c48 &= FLAG)
#define Clr_SDMMC2_FIFOCNT(FLAG)             (*(uint32_t*)0x40011c48 |= ~FLAG)
#define Set_SDMMC2_FIFO(FLAG)                (*(uint32_t*)0x40011c80 &= FLAG)
#define Clr_SDMMC2_FIFO(FLAG)                (*(uint32_t*)0x40011c80 |= ~FLAG)
#define Set_SDMMC1_POWER(FLAG)               (*(uint32_t*)0x40012c00 &= FLAG)
#define Clr_SDMMC1_POWER(FLAG)               (*(uint32_t*)0x40012c00 |= ~FLAG)
#define Set_SDMMC1_CLKCR(FLAG)               (*(uint32_t*)0x40012c04 &= FLAG)
#define Clr_SDMMC1_CLKCR(FLAG)               (*(uint32_t*)0x40012c04 |= ~FLAG)
#define Set_SDMMC1_ARG(FLAG)                 (*(uint32_t*)0x40012c08 &= FLAG)
#define Clr_SDMMC1_ARG(FLAG)                 (*(uint32_t*)0x40012c08 |= ~FLAG)
#define Set_SDMMC1_CMD(FLAG)                 (*(uint32_t*)0x40012c0c &= FLAG)
#define Clr_SDMMC1_CMD(FLAG)                 (*(uint32_t*)0x40012c0c |= ~FLAG)
#define Set_SDMMC1_RESPCMD(FLAG)             (*(uint32_t*)0x40012c10 &= FLAG)
#define Clr_SDMMC1_RESPCMD(FLAG)             (*(uint32_t*)0x40012c10 |= ~FLAG)
#define Set_SDMMC1_RESP1(FLAG)               (*(uint32_t*)0x40012c14 &= FLAG)
#define Clr_SDMMC1_RESP1(FLAG)               (*(uint32_t*)0x40012c14 |= ~FLAG)
#define Set_SDMMC1_RESP2(FLAG)               (*(uint32_t*)0x40012c18 &= FLAG)
#define Clr_SDMMC1_RESP2(FLAG)               (*(uint32_t*)0x40012c18 |= ~FLAG)
#define Set_SDMMC1_RESP3(FLAG)               (*(uint32_t*)0x40012c1c &= FLAG)
#define Clr_SDMMC1_RESP3(FLAG)               (*(uint32_t*)0x40012c1c |= ~FLAG)
#define Set_SDMMC1_RESP4(FLAG)               (*(uint32_t*)0x40012c20 &= FLAG)
#define Clr_SDMMC1_RESP4(FLAG)               (*(uint32_t*)0x40012c20 |= ~FLAG)
#define Set_SDMMC1_DTIMER(FLAG)              (*(uint32_t*)0x40012c24 &= FLAG)
#define Clr_SDMMC1_DTIMER(FLAG)              (*(uint32_t*)0x40012c24 |= ~FLAG)
#define Set_SDMMC1_DLEN(FLAG)                (*(uint32_t*)0x40012c28 &= FLAG)
#define Clr_SDMMC1_DLEN(FLAG)                (*(uint32_t*)0x40012c28 |= ~FLAG)
#define Set_SDMMC1_DCTRL(FLAG)               (*(uint32_t*)0x40012c2c &= FLAG)
#define Clr_SDMMC1_DCTRL(FLAG)               (*(uint32_t*)0x40012c2c |= ~FLAG)
#define Set_SDMMC1_DCOUNT(FLAG)              (*(uint32_t*)0x40012c30 &= FLAG)
#define Clr_SDMMC1_DCOUNT(FLAG)              (*(uint32_t*)0x40012c30 |= ~FLAG)
#define Set_SDMMC1_STA(FLAG)                 (*(uint32_t*)0x40012c34 &= FLAG)
#define Clr_SDMMC1_STA(FLAG)                 (*(uint32_t*)0x40012c34 |= ~FLAG)
#define Set_SDMMC1_ICR(FLAG)                 (*(uint32_t*)0x40012c38 &= FLAG)
#define Clr_SDMMC1_ICR(FLAG)                 (*(uint32_t*)0x40012c38 |= ~FLAG)
#define Set_SDMMC1_MASK(FLAG)                (*(uint32_t*)0x40012c3c &= FLAG)
#define Clr_SDMMC1_MASK(FLAG)                (*(uint32_t*)0x40012c3c |= ~FLAG)
#define Set_SDMMC1_FIFOCNT(FLAG)             (*(uint32_t*)0x40012c48 &= FLAG)
#define Clr_SDMMC1_FIFOCNT(FLAG)             (*(uint32_t*)0x40012c48 |= ~FLAG)
#define Set_SDMMC1_FIFO(FLAG)                (*(uint32_t*)0x40012c80 &= FLAG)
#define Clr_SDMMC1_FIFO(FLAG)                (*(uint32_t*)0x40012c80 |= ~FLAG)
#define  _SDMMC2_POWER_PWRCTRL                               (0x3 << 0)    // PWRCTRL
#define  _SDMMC2_CLKCR_HWFC_EN                               (0x1 << 14)    // HW Flow Control enable
#define  _SDMMC2_CLKCR_NEGEDGE                               (0x1 << 13)    // SDIO_CK dephasing selection bit
#define  _SDMMC2_CLKCR_WIDBUS                                (0x3 << 11)    // Wide bus mode enable bit
#define  _SDMMC2_CLKCR_BYPASS                                (0x1 << 10)    // Clock divider bypass enable bit
#define  _SDMMC2_CLKCR_PWRSAV                                (0x1 << 9)    // Power saving configuration bit
#define  _SDMMC2_CLKCR_CLKEN                                 (0x1 << 8)    // Clock enable bit
#define  _SDMMC2_CLKCR_CLKDIV                                (0xff << 0)    // Clock divide factor
#define  _SDMMC2_ARG_CMDARG                                  (0xffffffff << 0)    // Command argument
#define  _SDMMC2_CMD_CE_ATACMD                               (0x1 << 14)    // CE-ATA command
#define  _SDMMC2_CMD_nIEN                                    (0x1 << 13)    // not Interrupt Enable
#define  _SDMMC2_CMD_ENCMDcompl                              (0x1 << 12)    // Enable CMD completion
#define  _SDMMC2_CMD_SDIOSuspend                             (0x1 << 11)    // SD I/O suspend command
#define  _SDMMC2_CMD_CPSMEN                                  (0x1 << 10)    // Command path state machine (CPSM) Enable bit
#define  _SDMMC2_CMD_WAITPEND                                (0x1 << 9)    // CPSM Waits for ends of data transfer (CmdPend internal signal)
#define  _SDMMC2_CMD_WAITINT                                 (0x1 << 8)    // CPSM waits for interrupt request
#define  _SDMMC2_CMD_WAITRESP                                (0x3 << 6)    // Wait for response bits
#define  _SDMMC2_CMD_CMDINDEX                                (0x3f << 0)    // Command index
#define  _SDMMC2_RESPCMD_RESPCMD                             (0x3f << 0)    // Response command index
#define  _SDMMC2_RESP1_CARDSTATUS1                           (0xffffffff << 0)    // see Table 132
#define  _SDMMC2_RESP2_CARDSTATUS2                           (0xffffffff << 0)    // see Table 132
#define  _SDMMC2_RESP3_CARDSTATUS3                           (0xffffffff << 0)    // see Table 132
#define  _SDMMC2_RESP4_CARDSTATUS4                           (0xffffffff << 0)    // see Table 132
#define  _SDMMC2_DTIMER_DATATIME                             (0xffffffff << 0)    // Data timeout period
#define  _SDMMC2_DLEN_DATALENGTH                             (0x1ffffff << 0)    // Data length value
#define  _SDMMC2_DCTRL_SDIOEN                                (0x1 << 11)    // SD I/O enable functions
#define  _SDMMC2_DCTRL_RWMOD                                 (0x1 << 10)    // Read wait mode
#define  _SDMMC2_DCTRL_RWSTOP                                (0x1 << 9)    // Read wait stop
#define  _SDMMC2_DCTRL_RWSTART                               (0x1 << 8)    // Read wait start
#define  _SDMMC2_DCTRL_DBLOCKSIZE                            (0xf << 4)    // Data block size
#define  _SDMMC2_DCTRL_DMAEN                                 (0x1 << 3)    // DMA enable bit
#define  _SDMMC2_DCTRL_DTMODE                                (0x1 << 2)    // Data transfer mode selection 1: Stream or SDIO multibyte data transfer
#define  _SDMMC2_DCTRL_DTDIR                                 (0x1 << 1)    // Data transfer direction selection
#define  _SDMMC2_DCTRL_DTEN                                  (0x1 << 0)    // DTEN
#define  _SDMMC2_DCOUNT_DATACOUNT                            (0x1ffffff << 0)    // Data count value
#define  _SDMMC2_STA_CEATAEND                                (0x1 << 23)    // CE-ATA command completion signal received for CMD61
#define  _SDMMC2_STA_SDIOIT                                  (0x1 << 22)    // SDIO interrupt received
#define  _SDMMC2_STA_RXDAVL                                  (0x1 << 21)    // Data available in receive FIFO
#define  _SDMMC2_STA_TXDAVL                                  (0x1 << 20)    // Data available in transmit FIFO
#define  _SDMMC2_STA_RXFIFOE                                 (0x1 << 19)    // Receive FIFO empty
#define  _SDMMC2_STA_TXFIFOE                                 (0x1 << 18)    // Transmit FIFO empty
#define  _SDMMC2_STA_RXFIFOF                                 (0x1 << 17)    // Receive FIFO full
#define  _SDMMC2_STA_TXFIFOF                                 (0x1 << 16)    // Transmit FIFO full
#define  _SDMMC2_STA_RXFIFOHF                                (0x1 << 15)    // Receive FIFO half full: there are at least 8 words in the FIFO
#define  _SDMMC2_STA_TXFIFOHE                                (0x1 << 14)    // Transmit FIFO half empty: at least 8 words can be written into the FIFO
#define  _SDMMC2_STA_RXACT                                   (0x1 << 13)    // Data receive in progress
#define  _SDMMC2_STA_TXACT                                   (0x1 << 12)    // Data transmit in progress
#define  _SDMMC2_STA_CMDACT                                  (0x1 << 11)    // Command transfer in progress
#define  _SDMMC2_STA_DBCKEND                                 (0x1 << 10)    // Data block sent/received (CRC check passed)
#define  _SDMMC2_STA_STBITERR                                (0x1 << 9)    // Start bit not detected on all data signals in wide bus mode
#define  _SDMMC2_STA_DATAEND                                 (0x1 << 8)    // Data end (data counter, SDIDCOUNT, is zero)
#define  _SDMMC2_STA_CMDSENT                                 (0x1 << 7)    // Command sent (no response required)
#define  _SDMMC2_STA_CMDREND                                 (0x1 << 6)    // Command response received (CRC check passed)
#define  _SDMMC2_STA_RXOVERR                                 (0x1 << 5)    // Received FIFO overrun error
#define  _SDMMC2_STA_TXUNDERR                                (0x1 << 4)    // Transmit FIFO underrun error
#define  _SDMMC2_STA_DTIMEOUT                                (0x1 << 3)    // Data timeout
#define  _SDMMC2_STA_CTIMEOUT                                (0x1 << 2)    // Command response timeout
#define  _SDMMC2_STA_DCRCFAIL                                (0x1 << 1)    // Data block sent/received (CRC check failed)
#define  _SDMMC2_STA_CCRCFAIL                                (0x1 << 0)    // Command response received (CRC check failed)
#define  _SDMMC2_ICR_CEATAENDC                               (0x1 << 23)    // CEATAEND flag clear bit
#define  _SDMMC2_ICR_SDIOITC                                 (0x1 << 22)    // SDIOIT flag clear bit
#define  _SDMMC2_ICR_DBCKENDC                                (0x1 << 10)    // DBCKEND flag clear bit
#define  _SDMMC2_ICR_STBITERRC                               (0x1 << 9)    // STBITERR flag clear bit
#define  _SDMMC2_ICR_DATAENDC                                (0x1 << 8)    // DATAEND flag clear bit
#define  _SDMMC2_ICR_CMDSENTC                                (0x1 << 7)    // CMDSENT flag clear bit
#define  _SDMMC2_ICR_CMDRENDC                                (0x1 << 6)    // CMDREND flag clear bit
#define  _SDMMC2_ICR_RXOVERRC                                (0x1 << 5)    // RXOVERR flag clear bit
#define  _SDMMC2_ICR_TXUNDERRC                               (0x1 << 4)    // TXUNDERR flag clear bit
#define  _SDMMC2_ICR_DTIMEOUTC                               (0x1 << 3)    // DTIMEOUT flag clear bit
#define  _SDMMC2_ICR_CTIMEOUTC                               (0x1 << 2)    // CTIMEOUT flag clear bit
#define  _SDMMC2_ICR_DCRCFAILC                               (0x1 << 1)    // DCRCFAIL flag clear bit
#define  _SDMMC2_ICR_CCRCFAILC                               (0x1 << 0)    // CCRCFAIL flag clear bit
#define  _SDMMC2_MASK_CEATAENDIE                             (0x1 << 23)    // CE-ATA command completion signal received interrupt enable
#define  _SDMMC2_MASK_SDIOITIE                               (0x1 << 22)    // SDIO mode interrupt received interrupt enable
#define  _SDMMC2_MASK_RXDAVLIE                               (0x1 << 21)    // Data available in Rx FIFO interrupt enable
#define  _SDMMC2_MASK_TXDAVLIE                               (0x1 << 20)    // Data available in Tx FIFO interrupt enable
#define  _SDMMC2_MASK_RXFIFOEIE                              (0x1 << 19)    // Rx FIFO empty interrupt enable
#define  _SDMMC2_MASK_TXFIFOEIE                              (0x1 << 18)    // Tx FIFO empty interrupt enable
#define  _SDMMC2_MASK_RXFIFOFIE                              (0x1 << 17)    // Rx FIFO full interrupt enable
#define  _SDMMC2_MASK_TXFIFOFIE                              (0x1 << 16)    // Tx FIFO full interrupt enable
#define  _SDMMC2_MASK_RXFIFOHFIE                             (0x1 << 15)    // Rx FIFO half full interrupt enable
#define  _SDMMC2_MASK_TXFIFOHEIE                             (0x1 << 14)    // Tx FIFO half empty interrupt enable
#define  _SDMMC2_MASK_RXACTIE                                (0x1 << 13)    // Data receive acting interrupt enable
#define  _SDMMC2_MASK_TXACTIE                                (0x1 << 12)    // Data transmit acting interrupt enable
#define  _SDMMC2_MASK_CMDACTIE                               (0x1 << 11)    // Command acting interrupt enable
#define  _SDMMC2_MASK_DBCKENDIE                              (0x1 << 10)    // Data block end interrupt enable
#define  _SDMMC2_MASK_STBITERRIE                             (0x1 << 9)    // Start bit error interrupt enable
#define  _SDMMC2_MASK_DATAENDIE                              (0x1 << 8)    // Data end interrupt enable
#define  _SDMMC2_MASK_CMDSENTIE                              (0x1 << 7)    // Command sent interrupt enable
#define  _SDMMC2_MASK_CMDRENDIE                              (0x1 << 6)    // Command response received interrupt enable
#define  _SDMMC2_MASK_RXOVERRIE                              (0x1 << 5)    // Rx FIFO overrun error interrupt enable
#define  _SDMMC2_MASK_TXUNDERRIE                             (0x1 << 4)    // Tx FIFO underrun error interrupt enable
#define  _SDMMC2_MASK_DTIMEOUTIE                             (0x1 << 3)    // Data timeout interrupt enable
#define  _SDMMC2_MASK_CTIMEOUTIE                             (0x1 << 2)    // Command timeout interrupt enable
#define  _SDMMC2_MASK_DCRCFAILIE                             (0x1 << 1)    // Data CRC fail interrupt enable
#define  _SDMMC2_MASK_CCRCFAILIE                             (0x1 << 0)    // Command CRC fail interrupt enable
#define  _SDMMC2_FIFOCNT_FIFOCOUNT                           (0xffffff << 0)    // Remaining number of words to be written to or read from the FIFO
#define  _SDMMC2_FIFO_FIFOData                               (0xffffffff << 0)    // Receive and transmit FIFO data
#define  _SDMMC1_POWER_PWRCTRL                               (0x3 << 0)    // PWRCTRL
#define  _SDMMC1_CLKCR_HWFC_EN                               (0x1 << 14)    // HW Flow Control enable
#define  _SDMMC1_CLKCR_NEGEDGE                               (0x1 << 13)    // SDIO_CK dephasing selection bit
#define  _SDMMC1_CLKCR_WIDBUS                                (0x3 << 11)    // Wide bus mode enable bit
#define  _SDMMC1_CLKCR_BYPASS                                (0x1 << 10)    // Clock divider bypass enable bit
#define  _SDMMC1_CLKCR_PWRSAV                                (0x1 << 9)    // Power saving configuration bit
#define  _SDMMC1_CLKCR_CLKEN                                 (0x1 << 8)    // Clock enable bit
#define  _SDMMC1_CLKCR_CLKDIV                                (0xff << 0)    // Clock divide factor
#define  _SDMMC1_ARG_CMDARG                                  (0xffffffff << 0)    // Command argument
#define  _SDMMC1_CMD_CE_ATACMD                               (0x1 << 14)    // CE-ATA command
#define  _SDMMC1_CMD_nIEN                                    (0x1 << 13)    // not Interrupt Enable
#define  _SDMMC1_CMD_ENCMDcompl                              (0x1 << 12)    // Enable CMD completion
#define  _SDMMC1_CMD_SDIOSuspend                             (0x1 << 11)    // SD I/O suspend command
#define  _SDMMC1_CMD_CPSMEN                                  (0x1 << 10)    // Command path state machine (CPSM) Enable bit
#define  _SDMMC1_CMD_WAITPEND                                (0x1 << 9)    // CPSM Waits for ends of data transfer (CmdPend internal signal)
#define  _SDMMC1_CMD_WAITINT                                 (0x1 << 8)    // CPSM waits for interrupt request
#define  _SDMMC1_CMD_WAITRESP                                (0x3 << 6)    // Wait for response bits
#define  _SDMMC1_CMD_CMDINDEX                                (0x3f << 0)    // Command index
#define  _SDMMC1_RESPCMD_RESPCMD                             (0x3f << 0)    // Response command index
#define  _SDMMC1_RESP1_CARDSTATUS1                           (0xffffffff << 0)    // see Table 132
#define  _SDMMC1_RESP2_CARDSTATUS2                           (0xffffffff << 0)    // see Table 132
#define  _SDMMC1_RESP3_CARDSTATUS3                           (0xffffffff << 0)    // see Table 132
#define  _SDMMC1_RESP4_CARDSTATUS4                           (0xffffffff << 0)    // see Table 132
#define  _SDMMC1_DTIMER_DATATIME                             (0xffffffff << 0)    // Data timeout period
#define  _SDMMC1_DLEN_DATALENGTH                             (0x1ffffff << 0)    // Data length value
#define  _SDMMC1_DCTRL_SDIOEN                                (0x1 << 11)    // SD I/O enable functions
#define  _SDMMC1_DCTRL_RWMOD                                 (0x1 << 10)    // Read wait mode
#define  _SDMMC1_DCTRL_RWSTOP                                (0x1 << 9)    // Read wait stop
#define  _SDMMC1_DCTRL_RWSTART                               (0x1 << 8)    // Read wait start
#define  _SDMMC1_DCTRL_DBLOCKSIZE                            (0xf << 4)    // Data block size
#define  _SDMMC1_DCTRL_DMAEN                                 (0x1 << 3)    // DMA enable bit
#define  _SDMMC1_DCTRL_DTMODE                                (0x1 << 2)    // Data transfer mode selection 1: Stream or SDIO multibyte data transfer
#define  _SDMMC1_DCTRL_DTDIR                                 (0x1 << 1)    // Data transfer direction selection
#define  _SDMMC1_DCTRL_DTEN                                  (0x1 << 0)    // DTEN
#define  _SDMMC1_DCOUNT_DATACOUNT                            (0x1ffffff << 0)    // Data count value
#define  _SDMMC1_STA_CEATAEND                                (0x1 << 23)    // CE-ATA command completion signal received for CMD61
#define  _SDMMC1_STA_SDIOIT                                  (0x1 << 22)    // SDIO interrupt received
#define  _SDMMC1_STA_RXDAVL                                  (0x1 << 21)    // Data available in receive FIFO
#define  _SDMMC1_STA_TXDAVL                                  (0x1 << 20)    // Data available in transmit FIFO
#define  _SDMMC1_STA_RXFIFOE                                 (0x1 << 19)    // Receive FIFO empty
#define  _SDMMC1_STA_TXFIFOE                                 (0x1 << 18)    // Transmit FIFO empty
#define  _SDMMC1_STA_RXFIFOF                                 (0x1 << 17)    // Receive FIFO full
#define  _SDMMC1_STA_TXFIFOF                                 (0x1 << 16)    // Transmit FIFO full
#define  _SDMMC1_STA_RXFIFOHF                                (0x1 << 15)    // Receive FIFO half full: there are at least 8 words in the FIFO
#define  _SDMMC1_STA_TXFIFOHE                                (0x1 << 14)    // Transmit FIFO half empty: at least 8 words can be written into the FIFO
#define  _SDMMC1_STA_RXACT                                   (0x1 << 13)    // Data receive in progress
#define  _SDMMC1_STA_TXACT                                   (0x1 << 12)    // Data transmit in progress
#define  _SDMMC1_STA_CMDACT                                  (0x1 << 11)    // Command transfer in progress
#define  _SDMMC1_STA_DBCKEND                                 (0x1 << 10)    // Data block sent/received (CRC check passed)
#define  _SDMMC1_STA_STBITERR                                (0x1 << 9)    // Start bit not detected on all data signals in wide bus mode
#define  _SDMMC1_STA_DATAEND                                 (0x1 << 8)    // Data end (data counter, SDIDCOUNT, is zero)
#define  _SDMMC1_STA_CMDSENT                                 (0x1 << 7)    // Command sent (no response required)
#define  _SDMMC1_STA_CMDREND                                 (0x1 << 6)    // Command response received (CRC check passed)
#define  _SDMMC1_STA_RXOVERR                                 (0x1 << 5)    // Received FIFO overrun error
#define  _SDMMC1_STA_TXUNDERR                                (0x1 << 4)    // Transmit FIFO underrun error
#define  _SDMMC1_STA_DTIMEOUT                                (0x1 << 3)    // Data timeout
#define  _SDMMC1_STA_CTIMEOUT                                (0x1 << 2)    // Command response timeout
#define  _SDMMC1_STA_DCRCFAIL                                (0x1 << 1)    // Data block sent/received (CRC check failed)
#define  _SDMMC1_STA_CCRCFAIL                                (0x1 << 0)    // Command response received (CRC check failed)
#define  _SDMMC1_ICR_CEATAENDC                               (0x1 << 23)    // CEATAEND flag clear bit
#define  _SDMMC1_ICR_SDIOITC                                 (0x1 << 22)    // SDIOIT flag clear bit
#define  _SDMMC1_ICR_DBCKENDC                                (0x1 << 10)    // DBCKEND flag clear bit
#define  _SDMMC1_ICR_STBITERRC                               (0x1 << 9)    // STBITERR flag clear bit
#define  _SDMMC1_ICR_DATAENDC                                (0x1 << 8)    // DATAEND flag clear bit
#define  _SDMMC1_ICR_CMDSENTC                                (0x1 << 7)    // CMDSENT flag clear bit
#define  _SDMMC1_ICR_CMDRENDC                                (0x1 << 6)    // CMDREND flag clear bit
#define  _SDMMC1_ICR_RXOVERRC                                (0x1 << 5)    // RXOVERR flag clear bit
#define  _SDMMC1_ICR_TXUNDERRC                               (0x1 << 4)    // TXUNDERR flag clear bit
#define  _SDMMC1_ICR_DTIMEOUTC                               (0x1 << 3)    // DTIMEOUT flag clear bit
#define  _SDMMC1_ICR_CTIMEOUTC                               (0x1 << 2)    // CTIMEOUT flag clear bit
#define  _SDMMC1_ICR_DCRCFAILC                               (0x1 << 1)    // DCRCFAIL flag clear bit
#define  _SDMMC1_ICR_CCRCFAILC                               (0x1 << 0)    // CCRCFAIL flag clear bit
#define  _SDMMC1_MASK_CEATAENDIE                             (0x1 << 23)    // CE-ATA command completion signal received interrupt enable
#define  _SDMMC1_MASK_SDIOITIE                               (0x1 << 22)    // SDIO mode interrupt received interrupt enable
#define  _SDMMC1_MASK_RXDAVLIE                               (0x1 << 21)    // Data available in Rx FIFO interrupt enable
#define  _SDMMC1_MASK_TXDAVLIE                               (0x1 << 20)    // Data available in Tx FIFO interrupt enable
#define  _SDMMC1_MASK_RXFIFOEIE                              (0x1 << 19)    // Rx FIFO empty interrupt enable
#define  _SDMMC1_MASK_TXFIFOEIE                              (0x1 << 18)    // Tx FIFO empty interrupt enable
#define  _SDMMC1_MASK_RXFIFOFIE                              (0x1 << 17)    // Rx FIFO full interrupt enable
#define  _SDMMC1_MASK_TXFIFOFIE                              (0x1 << 16)    // Tx FIFO full interrupt enable
#define  _SDMMC1_MASK_RXFIFOHFIE                             (0x1 << 15)    // Rx FIFO half full interrupt enable
#define  _SDMMC1_MASK_TXFIFOHEIE                             (0x1 << 14)    // Tx FIFO half empty interrupt enable
#define  _SDMMC1_MASK_RXACTIE                                (0x1 << 13)    // Data receive acting interrupt enable
#define  _SDMMC1_MASK_TXACTIE                                (0x1 << 12)    // Data transmit acting interrupt enable
#define  _SDMMC1_MASK_CMDACTIE                               (0x1 << 11)    // Command acting interrupt enable
#define  _SDMMC1_MASK_DBCKENDIE                              (0x1 << 10)    // Data block end interrupt enable
#define  _SDMMC1_MASK_STBITERRIE                             (0x1 << 9)    // Start bit error interrupt enable
#define  _SDMMC1_MASK_DATAENDIE                              (0x1 << 8)    // Data end interrupt enable
#define  _SDMMC1_MASK_CMDSENTIE                              (0x1 << 7)    // Command sent interrupt enable
#define  _SDMMC1_MASK_CMDRENDIE                              (0x1 << 6)    // Command response received interrupt enable
#define  _SDMMC1_MASK_RXOVERRIE                              (0x1 << 5)    // Rx FIFO overrun error interrupt enable
#define  _SDMMC1_MASK_TXUNDERRIE                             (0x1 << 4)    // Tx FIFO underrun error interrupt enable
#define  _SDMMC1_MASK_DTIMEOUTIE                             (0x1 << 3)    // Data timeout interrupt enable
#define  _SDMMC1_MASK_CTIMEOUTIE                             (0x1 << 2)    // Command timeout interrupt enable
#define  _SDMMC1_MASK_DCRCFAILIE                             (0x1 << 1)    // Data CRC fail interrupt enable
#define  _SDMMC1_MASK_CCRCFAILIE                             (0x1 << 0)    // Command CRC fail interrupt enable
#define  _SDMMC1_FIFOCNT_FIFOCOUNT                           (0xffffff << 0)    // Remaining number of words to be written to or read from the FIFO
#define  _SDMMC1_FIFO_FIFOData                               (0xffffffff << 0)    // Receive and transmit FIFO data

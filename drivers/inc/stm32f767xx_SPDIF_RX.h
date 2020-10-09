#define Get_SPDIFRX_CR(FLAG)                 (*(uint32_t*)0x40004000 |= FLAG)
#define Get_SPDIFRX_IMR(FLAG)                (*(uint32_t*)0x40004004 |= FLAG)
#define Get_SPDIFRX_SR(FLAG)                 (*(uint32_t*)0x40004008 |= FLAG)
#define Get_SPDIFRX_IFCR(FLAG)               (*(uint32_t*)0x4000400c |= FLAG)
#define Get_SPDIFRX_DR(FLAG)                 (*(uint32_t*)0x40004010 |= FLAG)
#define Get_SPDIFRX_CSR(FLAG)                (*(uint32_t*)0x40004014 |= FLAG)
#define Get_SPDIFRX_DIR(FLAG)                (*(uint32_t*)0x40004018 |= FLAG)
#define Set_SPDIFRX_CR(FLAG)                 (*(uint32_t*)0x40004000 &= FLAG)
#define Clr_SPDIFRX_CR(FLAG)                 (*(uint32_t*)0x40004000 |= ~FLAG)
#define Set_SPDIFRX_IMR(FLAG)                (*(uint32_t*)0x40004004 &= FLAG)
#define Clr_SPDIFRX_IMR(FLAG)                (*(uint32_t*)0x40004004 |= ~FLAG)
#define Set_SPDIFRX_SR(FLAG)                 (*(uint32_t*)0x40004008 &= FLAG)
#define Clr_SPDIFRX_SR(FLAG)                 (*(uint32_t*)0x40004008 |= ~FLAG)
#define Set_SPDIFRX_IFCR(FLAG)               (*(uint32_t*)0x4000400c &= FLAG)
#define Clr_SPDIFRX_IFCR(FLAG)               (*(uint32_t*)0x4000400c |= ~FLAG)
#define Set_SPDIFRX_DR(FLAG)                 (*(uint32_t*)0x40004010 &= FLAG)
#define Clr_SPDIFRX_DR(FLAG)                 (*(uint32_t*)0x40004010 |= ~FLAG)
#define Set_SPDIFRX_CSR(FLAG)                (*(uint32_t*)0x40004014 &= FLAG)
#define Clr_SPDIFRX_CSR(FLAG)                (*(uint32_t*)0x40004014 |= ~FLAG)
#define Set_SPDIFRX_DIR(FLAG)                (*(uint32_t*)0x40004018 &= FLAG)
#define Clr_SPDIFRX_DIR(FLAG)                (*(uint32_t*)0x40004018 |= ~FLAG)
#define  _SPDIFRX_CR_SPDIFEN                                 (0x3 << 0)    // Peripheral Block Enable
#define  _SPDIFRX_CR_RXDMAEN                                 (0x1 << 2)    // Receiver DMA ENable for data flow
#define  _SPDIFRX_CR_RXSTEO                                  (0x1 << 3)    // STerEO Mode
#define  _SPDIFRX_CR_DRFMT                                   (0x3 << 4)    // RX Data format
#define  _SPDIFRX_CR_PMSK                                    (0x1 << 6)    // Mask Parity error bit
#define  _SPDIFRX_CR_VMSK                                    (0x1 << 7)    // Mask of Validity bit
#define  _SPDIFRX_CR_CUMSK                                   (0x1 << 8)    // Mask of channel status and user bits
#define  _SPDIFRX_CR_PTMSK                                   (0x1 << 9)    // Mask of Preamble Type bits
#define  _SPDIFRX_CR_CBDMAEN                                 (0x1 << 10)    // Control Buffer DMA ENable for control flow
#define  _SPDIFRX_CR_CHSEL                                   (0x1 << 11)    // Channel Selection
#define  _SPDIFRX_CR_NBTR                                    (0x3 << 12)    // Maximum allowed re-tries during synchronization phase
#define  _SPDIFRX_CR_WFA                                     (0x1 << 14)    // Wait For Activity
#define  _SPDIFRX_CR_INSEL                                   (0x7 << 16)    // input selection
#define  _SPDIFRX_IMR_RXNEIE                                 (0x1 << 0)    // RXNE interrupt enable
#define  _SPDIFRX_IMR_CSRNEIE                                (0x1 << 1)    // Control Buffer Ready Interrupt Enable
#define  _SPDIFRX_IMR_PERRIE                                 (0x1 << 2)    // Parity error interrupt enable
#define  _SPDIFRX_IMR_OVRIE                                  (0x1 << 3)    // Overrun error Interrupt Enable
#define  _SPDIFRX_IMR_SBLKIE                                 (0x1 << 4)    // Synchronization Block Detected Interrupt Enable
#define  _SPDIFRX_IMR_SYNCDIE                                (0x1 << 5)    // Synchronization Done
#define  _SPDIFRX_IMR_IFEIE                                  (0x1 << 6)    // Serial Interface Error Interrupt Enable
#define  _SPDIFRX_SR_RXNE                                    (0x1 << 0)    // Read data register not empty
#define  _SPDIFRX_SR_CSRNE                                   (0x1 << 1)    // Control Buffer register is not empty
#define  _SPDIFRX_SR_PERR                                    (0x1 << 2)    // Parity error
#define  _SPDIFRX_SR_OVR                                     (0x1 << 3)    // Overrun error
#define  _SPDIFRX_SR_SBD                                     (0x1 << 4)    // Synchronization Block Detected
#define  _SPDIFRX_SR_SYNCD                                   (0x1 << 5)    // Synchronization Done
#define  _SPDIFRX_SR_FERR                                    (0x1 << 6)    // Framing error
#define  _SPDIFRX_SR_SERR                                    (0x1 << 7)    // Synchronization error
#define  _SPDIFRX_SR_TERR                                    (0x1 << 8)    // Time-out error
#define  _SPDIFRX_SR_WIDTH5                                  (0x7fff << 16)    // Duration of 5 symbols counted with SPDIF_CLK
#define  _SPDIFRX_IFCR_PERRCF                                (0x1 << 2)    // Clears the Parity error flag
#define  _SPDIFRX_IFCR_OVRCF                                 (0x1 << 3)    // Clears the Overrun error flag
#define  _SPDIFRX_IFCR_SBDCF                                 (0x1 << 4)    // Clears the Synchronization Block Detected flag
#define  _SPDIFRX_IFCR_SYNCDCF                               (0x1 << 5)    // Clears the Synchronization Done flag
#define  _SPDIFRX_DR_DR                                      (0xffffff << 0)    // Parity Error bit
#define  _SPDIFRX_DR_PE                                      (0x1 << 24)    // Parity Error bit
#define  _SPDIFRX_DR_V                                       (0x1 << 25)    // Validity bit
#define  _SPDIFRX_DR_U                                       (0x1 << 26)    // User bit
#define  _SPDIFRX_DR_C                                       (0x1 << 27)    // Channel Status bit
#define  _SPDIFRX_DR_PT                                      (0x3 << 28)    // Preamble Type
#define  _SPDIFRX_CSR_USR                                    (0xffff << 0)    // User data information
#define  _SPDIFRX_CSR_CS                                     (0xff << 16)    // Channel A status information
#define  _SPDIFRX_CSR_SOB                                    (0x1 << 24)    // Start Of Block
#define  _SPDIFRX_DIR_THI                                    (0x1fff << 0)    // Threshold HIGH
#define  _SPDIFRX_DIR_TLO                                    (0x1fff << 16)    // Threshold LOW

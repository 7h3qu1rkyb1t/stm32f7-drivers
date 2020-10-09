#define Get_QUADSPI_CR(FLAG)                 (*(uint32_t*)0xa0001000 |= FLAG)
#define Get_QUADSPI_DCR(FLAG)                (*(uint32_t*)0xa0001004 |= FLAG)
#define Get_QUADSPI_SR(FLAG)                 (*(uint32_t*)0xa0001008 |= FLAG)
#define Get_QUADSPI_FCR(FLAG)                (*(uint32_t*)0xa000100c |= FLAG)
#define Get_QUADSPI_DLR(FLAG)                (*(uint32_t*)0xa0001010 |= FLAG)
#define Get_QUADSPI_CCR(FLAG)                (*(uint32_t*)0xa0001014 |= FLAG)
#define Get_QUADSPI_AR(FLAG)                 (*(uint32_t*)0xa0001018 |= FLAG)
#define Get_QUADSPI_ABR(FLAG)                (*(uint32_t*)0xa000101c |= FLAG)
#define Get_QUADSPI_DR(FLAG)                 (*(uint32_t*)0xa0001020 |= FLAG)
#define Get_QUADSPI_PSMKR(FLAG)              (*(uint32_t*)0xa0001024 |= FLAG)
#define Get_QUADSPI_PSMAR(FLAG)              (*(uint32_t*)0xa0001028 |= FLAG)
#define Get_QUADSPI_PIR(FLAG)                (*(uint32_t*)0xa000102c |= FLAG)
#define Get_QUADSPI_LPTR(FLAG)               (*(uint32_t*)0xa0001030 |= FLAG)
#define Set_QUADSPI_CR(FLAG)                 (*(uint32_t*)0xa0001000 &= FLAG)
#define Clr_QUADSPI_CR(FLAG)                 (*(uint32_t*)0xa0001000 |= ~FLAG)
#define Set_QUADSPI_DCR(FLAG)                (*(uint32_t*)0xa0001004 &= FLAG)
#define Clr_QUADSPI_DCR(FLAG)                (*(uint32_t*)0xa0001004 |= ~FLAG)
#define Set_QUADSPI_SR(FLAG)                 (*(uint32_t*)0xa0001008 &= FLAG)
#define Clr_QUADSPI_SR(FLAG)                 (*(uint32_t*)0xa0001008 |= ~FLAG)
#define Set_QUADSPI_FCR(FLAG)                (*(uint32_t*)0xa000100c &= FLAG)
#define Clr_QUADSPI_FCR(FLAG)                (*(uint32_t*)0xa000100c |= ~FLAG)
#define Set_QUADSPI_DLR(FLAG)                (*(uint32_t*)0xa0001010 &= FLAG)
#define Clr_QUADSPI_DLR(FLAG)                (*(uint32_t*)0xa0001010 |= ~FLAG)
#define Set_QUADSPI_CCR(FLAG)                (*(uint32_t*)0xa0001014 &= FLAG)
#define Clr_QUADSPI_CCR(FLAG)                (*(uint32_t*)0xa0001014 |= ~FLAG)
#define Set_QUADSPI_AR(FLAG)                 (*(uint32_t*)0xa0001018 &= FLAG)
#define Clr_QUADSPI_AR(FLAG)                 (*(uint32_t*)0xa0001018 |= ~FLAG)
#define Set_QUADSPI_ABR(FLAG)                (*(uint32_t*)0xa000101c &= FLAG)
#define Clr_QUADSPI_ABR(FLAG)                (*(uint32_t*)0xa000101c |= ~FLAG)
#define Set_QUADSPI_DR(FLAG)                 (*(uint32_t*)0xa0001020 &= FLAG)
#define Clr_QUADSPI_DR(FLAG)                 (*(uint32_t*)0xa0001020 |= ~FLAG)
#define Set_QUADSPI_PSMKR(FLAG)              (*(uint32_t*)0xa0001024 &= FLAG)
#define Clr_QUADSPI_PSMKR(FLAG)              (*(uint32_t*)0xa0001024 |= ~FLAG)
#define Set_QUADSPI_PSMAR(FLAG)              (*(uint32_t*)0xa0001028 &= FLAG)
#define Clr_QUADSPI_PSMAR(FLAG)              (*(uint32_t*)0xa0001028 |= ~FLAG)
#define Set_QUADSPI_PIR(FLAG)                (*(uint32_t*)0xa000102c &= FLAG)
#define Clr_QUADSPI_PIR(FLAG)                (*(uint32_t*)0xa000102c |= ~FLAG)
#define Set_QUADSPI_LPTR(FLAG)               (*(uint32_t*)0xa0001030 &= FLAG)
#define Clr_QUADSPI_LPTR(FLAG)               (*(uint32_t*)0xa0001030 |= ~FLAG)
#define  _QUADSPI_CR_PRESCALER                               (0xff << 24)    // Clock prescaler
#define  _QUADSPI_CR_PMM                                     (0x1 << 23)    // Polling match mode
#define  _QUADSPI_CR_APMS                                    (0x1 << 22)    // Automatic poll mode stop
#define  _QUADSPI_CR_TOIE                                    (0x1 << 20)    // TimeOut interrupt enable
#define  _QUADSPI_CR_SMIE                                    (0x1 << 19)    // Status match interrupt enable
#define  _QUADSPI_CR_FTIE                                    (0x1 << 18)    // FIFO threshold interrupt enable
#define  _QUADSPI_CR_TCIE                                    (0x1 << 17)    // Transfer complete interrupt enable
#define  _QUADSPI_CR_TEIE                                    (0x1 << 16)    // Transfer error interrupt enable
#define  _QUADSPI_CR_FTHRES                                  (0x1f << 8)    // IFO threshold level
#define  _QUADSPI_CR_FSEL                                    (0x1 << 7)    // FLASH memory selection
#define  _QUADSPI_CR_DFM                                     (0x1 << 6)    // Dual-flash mode
#define  _QUADSPI_CR_SSHIFT                                  (0x1 << 4)    // Sample shift
#define  _QUADSPI_CR_TCEN                                    (0x1 << 3)    // Timeout counter enable
#define  _QUADSPI_CR_DMAEN                                   (0x1 << 2)    // DMA enable
#define  _QUADSPI_CR_ABORT                                   (0x1 << 1)    // Abort request
#define  _QUADSPI_CR_EN                                      (0x1 << 0)    // Enable
#define  _QUADSPI_DCR_FSIZE                                  (0x1f << 16)    // FLASH memory size
#define  _QUADSPI_DCR_CSHT                                   (0x7 << 8)    // Chip select high time
#define  _QUADSPI_DCR_CKMODE                                 (0x1 << 0)    // Mode 0 / mode 3
#define  _QUADSPI_SR_FLEVEL                                  (0x7f << 8)    // FIFO level
#define  _QUADSPI_SR_BUSY                                    (0x1 << 5)    // Busy
#define  _QUADSPI_SR_TOF                                     (0x1 << 4)    // Timeout flag
#define  _QUADSPI_SR_SMF                                     (0x1 << 3)    // Status match flag
#define  _QUADSPI_SR_FTF                                     (0x1 << 2)    // FIFO threshold flag
#define  _QUADSPI_SR_TCF                                     (0x1 << 1)    // Transfer complete flag
#define  _QUADSPI_SR_TEF                                     (0x1 << 0)    // Transfer error flag
#define  _QUADSPI_FCR_CTOF                                   (0x1 << 4)    // Clear timeout flag
#define  _QUADSPI_FCR_CSMF                                   (0x1 << 3)    // Clear status match flag
#define  _QUADSPI_FCR_CTCF                                   (0x1 << 1)    // Clear transfer complete flag
#define  _QUADSPI_FCR_CTEF                                   (0x1 << 0)    // Clear transfer error flag
#define  _QUADSPI_DLR_DL                                     (0xffffffff << 0)    // Data length
#define  _QUADSPI_CCR_DDRM                                   (0x1 << 31)    // Double data rate mode
#define  _QUADSPI_CCR_DHHC                                   (0x1 << 30)    // DDR hold half cycle
#define  _QUADSPI_CCR_SIOO                                   (0x1 << 28)    // Send instruction only once mode
#define  _QUADSPI_CCR_FMODE                                  (0x3 << 26)    // Functional mode
#define  _QUADSPI_CCR_DMODE                                  (0x3 << 24)    // Data mode
#define  _QUADSPI_CCR_DCYC                                   (0x1f << 18)    // Number of dummy cycles
#define  _QUADSPI_CCR_ABSIZE                                 (0x3 << 16)    // Alternate bytes size
#define  _QUADSPI_CCR_ABMODE                                 (0x3 << 14)    // Alternate bytes mode
#define  _QUADSPI_CCR_ADSIZE                                 (0x3 << 12)    // Address size
#define  _QUADSPI_CCR_ADMODE                                 (0x3 << 10)    // Address mode
#define  _QUADSPI_CCR_IMODE                                  (0x3 << 8)    // Instruction mode
#define  _QUADSPI_CCR_INSTRUCTION                            (0xff << 0)    // Instruction
#define  _QUADSPI_AR_ADDRESS                                 (0xffffffff << 0)    // Address
#define  _QUADSPI_ABR_ALTERNATE                              (0xffffffff << 0)    // ALTERNATE
#define  _QUADSPI_DR_DATA                                    (0xffffffff << 0)    // Data
#define  _QUADSPI_PSMKR_MASK                                 (0xffffffff << 0)    // Status mask
#define  _QUADSPI_PSMAR_MATCH                                (0xffffffff << 0)    // Status match
#define  _QUADSPI_PIR_INTERVAL                               (0xffff << 0)    // Polling interval
#define  _QUADSPI_LPTR_TIMEOUT                               (0xffff << 0)    // Timeout period

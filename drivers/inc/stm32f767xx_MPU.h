#define Get_MPU_MPU_TYPER(FLAG)              (*(uint32_t*)0xe000ed90 & FLAG)
#define Get_MPU_MPU_CTRL(FLAG)               (*(uint32_t*)0xe000ed94 & FLAG)
#define Get_MPU_MPU_RNR(FLAG)                (*(uint32_t*)0xe000ed98 & FLAG)
#define Get_MPU_MPU_RBAR(FLAG)               (*(uint32_t*)0xe000ed9c & FLAG)
#define Get_MPU_MPU_RASR(FLAG)               (*(uint32_t*)0xe000eda0 & FLAG)
#define Set_MPU_MPU_TYPER(FLAG)              (*(uint32_t*)0xe000ed90 |= FLAG)
#define Clr_MPU_MPU_TYPER(FLAG)              (*(uint32_t*)0xe000ed90 &= ~FLAG)
#define Set_MPU_MPU_CTRL(FLAG)               (*(uint32_t*)0xe000ed94 |= FLAG)
#define Clr_MPU_MPU_CTRL(FLAG)               (*(uint32_t*)0xe000ed94 &= ~FLAG)
#define Set_MPU_MPU_RNR(FLAG)                (*(uint32_t*)0xe000ed98 |= FLAG)
#define Clr_MPU_MPU_RNR(FLAG)                (*(uint32_t*)0xe000ed98 &= ~FLAG)
#define Set_MPU_MPU_RBAR(FLAG)               (*(uint32_t*)0xe000ed9c |= FLAG)
#define Clr_MPU_MPU_RBAR(FLAG)               (*(uint32_t*)0xe000ed9c &= ~FLAG)
#define Set_MPU_MPU_RASR(FLAG)               (*(uint32_t*)0xe000eda0 |= FLAG)
#define Clr_MPU_MPU_RASR(FLAG)               (*(uint32_t*)0xe000eda0 &= ~FLAG)
#define  _MPU_MPU_TYPER_SEPARATE                             (0x1 << 0)    // Separate flag
#define  _MPU_MPU_TYPER_DREGION                              (0xff << 8)    // Number of MPU data regions
#define  _MPU_MPU_TYPER_IREGION                              (0xff << 16)    // Number of MPU instruction regions
#define  _MPU_MPU_CTRL_ENABLE                                (0x1 << 0)    // Enables the MPU
#define  _MPU_MPU_CTRL_HFNMIENA                              (0x1 << 1)    // Enables the operation of MPU during hard fault
#define  _MPU_MPU_CTRL_PRIVDEFENA                            (0x1 << 2)    // Enable priviliged software access to default memory map
#define  _MPU_MPU_RNR_REGION                                 (0xff << 0)    // MPU region
#define  _MPU_MPU_RBAR_REGION                                (0xf << 0)    // MPU region field
#define  _MPU_MPU_RBAR_VALID                                 (0x1 << 4)    // MPU region number valid
#define  _MPU_MPU_RBAR_ADDR                                  (0x7ffffff << 5)    // Region base address field
#define  _MPU_MPU_RASR_ENABLE                                (0x1 << 0)    // Region enable bit.
#define  _MPU_MPU_RASR_SIZE                                  (0x1f << 1)    // Size of the MPU protection region
#define  _MPU_MPU_RASR_SRD                                   (0xff << 8)    // Subregion disable bits
#define  _MPU_MPU_RASR_B                                     (0x1 << 16)    // memory attribute
#define  _MPU_MPU_RASR_C                                     (0x1 << 17)    // memory attribute
#define  _MPU_MPU_RASR_S                                     (0x1 << 18)    // Shareable memory attribute
#define  _MPU_MPU_RASR_TEX                                   (0x7 << 19)    // memory attribute
#define  _MPU_MPU_RASR_AP                                    (0x7 << 24)    // Access permission
#define  _MPU_MPU_RASR_XN                                    (0x1 << 28)    // Instruction access disable bit

#define Get_PWR_CR1(FLAG)                    (*(uint32_t*)0x40007000 & FLAG)
#define Get_PWR_CSR1(FLAG)                   (*(uint32_t*)0x40007004 & FLAG)
#define Get_PWR_CR2(FLAG)                    (*(uint32_t*)0x40007008 & FLAG)
#define Get_PWR_CSR2(FLAG)                   (*(uint32_t*)0x4000700c & FLAG)
#define Set_PWR_CR1(FLAG)                    (*(uint32_t*)0x40007000 |= FLAG)
#define Clr_PWR_CR1(FLAG)                    (*(uint32_t*)0x40007000 &= ~FLAG)
#define Set_PWR_CSR1(FLAG)                   (*(uint32_t*)0x40007004 |= FLAG)
#define Clr_PWR_CSR1(FLAG)                   (*(uint32_t*)0x40007004 &= ~FLAG)
#define Set_PWR_CR2(FLAG)                    (*(uint32_t*)0x40007008 |= FLAG)
#define Clr_PWR_CR2(FLAG)                    (*(uint32_t*)0x40007008 &= ~FLAG)
#define Set_PWR_CSR2(FLAG)                   (*(uint32_t*)0x4000700c |= FLAG)
#define Clr_PWR_CSR2(FLAG)                   (*(uint32_t*)0x4000700c &= ~FLAG)
#define  _PWR_CR1_LPDS                                       (0x1 << 0)    // Low-power deep sleep
#define  _PWR_CR1_PDDS                                       (0x1 << 1)    // Power down deepsleep
#define  _PWR_CR1_CSBF                                       (0x1 << 3)    // Clear standby flag
#define  _PWR_CR1_PVDE                                       (0x1 << 4)    // Power voltage detector enable
#define  _PWR_CR1_PLS                                        (0x7 << 5)    // PVD level selection
#define  _PWR_CR1_DBP                                        (0x1 << 8)    // Disable backup domain write protection
#define  _PWR_CR1_FPDS                                       (0x1 << 9)    // Flash power down in Stop mode
#define  _PWR_CR1_LPUDS                                      (0x1 << 10)    // Low-power regulator in deepsleep under-drive mode
#define  _PWR_CR1_MRUDS                                      (0x1 << 11)    // Main regulator in deepsleep under-drive mode
#define  _PWR_CR1_ADCDC1                                     (0x1 << 13)    // ADCDC1
#define  _PWR_CR1_VOS                                        (0x3 << 14)    // Regulator voltage scaling output selection
#define  _PWR_CR1_ODEN                                       (0x1 << 16)    // Over-drive enable
#define  _PWR_CR1_ODSWEN                                     (0x1 << 17)    // Over-drive switching enabled
#define  _PWR_CR1_UDEN                                       (0x3 << 18)    // Under-drive enable in stop mode
#define  _PWR_CSR1_WUIF                                      (0x1 << 0)    // Wakeup internal flag
#define  _PWR_CSR1_SBF                                       (0x1 << 1)    // Standby flag
#define  _PWR_CSR1_PVDO                                      (0x1 << 2)    // PVD output
#define  _PWR_CSR1_BRR                                       (0x1 << 3)    // Backup regulator ready
#define  _PWR_CSR1_BRE                                       (0x1 << 9)    // Backup regulator enable
#define  _PWR_CSR1_VOSRDY                                    (0x1 << 14)    // Regulator voltage scaling output selection ready bit
#define  _PWR_CSR1_ODRDY                                     (0x1 << 16)    // Over-drive mode ready
#define  _PWR_CSR1_ODSWRDY                                   (0x1 << 17)    // Over-drive mode switching ready
#define  _PWR_CSR1_UDRDY                                     (0x3 << 18)    // Under-drive ready flag
#define  _PWR_CR2_CWUPF1                                     (0x1 << 0)    // Clear Wakeup Pin flag for PA0
#define  _PWR_CR2_CWUPF2                                     (0x1 << 1)    // Clear Wakeup Pin flag for PA2
#define  _PWR_CR2_CWUPF3                                     (0x1 << 2)    // Clear Wakeup Pin flag for PC1
#define  _PWR_CR2_CWUPF4                                     (0x1 << 3)    // Clear Wakeup Pin flag for PC13
#define  _PWR_CR2_CWUPF5                                     (0x1 << 4)    // Clear Wakeup Pin flag for PI8
#define  _PWR_CR2_CWUPF6                                     (0x1 << 5)    // Clear Wakeup Pin flag for PI11
#define  _PWR_CR2_WUPP1                                      (0x1 << 8)    // Wakeup pin polarity bit for PA0
#define  _PWR_CR2_WUPP2                                      (0x1 << 9)    // Wakeup pin polarity bit for PA2
#define  _PWR_CR2_WUPP3                                      (0x1 << 10)    // Wakeup pin polarity bit for PC1
#define  _PWR_CR2_WUPP4                                      (0x1 << 11)    // Wakeup pin polarity bit for PC13
#define  _PWR_CR2_WUPP5                                      (0x1 << 12)    // Wakeup pin polarity bit for PI8
#define  _PWR_CR2_WUPP6                                      (0x1 << 13)    // Wakeup pin polarity bit for PI11
#define  _PWR_CSR2_WUPF1                                     (0x1 << 0)    // Wakeup Pin flag for PA0
#define  _PWR_CSR2_WUPF2                                     (0x1 << 1)    // Wakeup Pin flag for PA2
#define  _PWR_CSR2_WUPF3                                     (0x1 << 2)    // Wakeup Pin flag for PC1
#define  _PWR_CSR2_WUPF4                                     (0x1 << 3)    // Wakeup Pin flag for PC13
#define  _PWR_CSR2_WUPF5                                     (0x1 << 4)    // Wakeup Pin flag for PI8
#define  _PWR_CSR2_WUPF6                                     (0x1 << 5)    // Wakeup Pin flag for PI11
#define  _PWR_CSR2_EWUP1                                     (0x1 << 8)    // Enable Wakeup pin for PA0
#define  _PWR_CSR2_EWUP2                                     (0x1 << 9)    // Enable Wakeup pin for PA2
#define  _PWR_CSR2_EWUP3                                     (0x1 << 10)    // Enable Wakeup pin for PC1
#define  _PWR_CSR2_EWUP4                                     (0x1 << 11)    // Enable Wakeup pin for PC13
#define  _PWR_CSR2_EWUP5                                     (0x1 << 12)    // Enable Wakeup pin for PI8
#define  _PWR_CSR2_EWUP6                                     (0x1 << 13)    // Enable Wakeup pin for PI11

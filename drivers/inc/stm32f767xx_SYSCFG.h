#define Get_SYSCFG_MEMRM(FLAG)               (*(uint32_t*)0x40013800 & FLAG)
#define Get_SYSCFG_PMC(FLAG)                 (*(uint32_t*)0x40013804 & FLAG)
#define Get_SYSCFG_EXTICR1(FLAG)             (*(uint32_t*)0x40013808 & FLAG)
#define Get_SYSCFG_EXTICR2(FLAG)             (*(uint32_t*)0x4001380c & FLAG)
#define Get_SYSCFG_EXTICR3(FLAG)             (*(uint32_t*)0x40013810 & FLAG)
#define Get_SYSCFG_EXTICR4(FLAG)             (*(uint32_t*)0x40013814 & FLAG)
#define Get_SYSCFG_CMPCR(FLAG)               (*(uint32_t*)0x40013820 & FLAG)
#define Set_SYSCFG_MEMRM(FLAG)               (*(uint32_t*)0x40013800 |= FLAG)
#define Clr_SYSCFG_MEMRM(FLAG)               (*(uint32_t*)0x40013800 &= ~FLAG)
#define Set_SYSCFG_PMC(FLAG)                 (*(uint32_t*)0x40013804 |= FLAG)
#define Clr_SYSCFG_PMC(FLAG)                 (*(uint32_t*)0x40013804 &= ~FLAG)
#define Set_SYSCFG_EXTICR1(FLAG)             (*(uint32_t*)0x40013808 |= FLAG)
#define Clr_SYSCFG_EXTICR1(FLAG)             (*(uint32_t*)0x40013808 &= ~FLAG)
#define Set_SYSCFG_EXTICR2(FLAG)             (*(uint32_t*)0x4001380c |= FLAG)
#define Clr_SYSCFG_EXTICR2(FLAG)             (*(uint32_t*)0x4001380c &= ~FLAG)
#define Set_SYSCFG_EXTICR3(FLAG)             (*(uint32_t*)0x40013810 |= FLAG)
#define Clr_SYSCFG_EXTICR3(FLAG)             (*(uint32_t*)0x40013810 &= ~FLAG)
#define Set_SYSCFG_EXTICR4(FLAG)             (*(uint32_t*)0x40013814 |= FLAG)
#define Clr_SYSCFG_EXTICR4(FLAG)             (*(uint32_t*)0x40013814 &= ~FLAG)
#define Set_SYSCFG_CMPCR(FLAG)               (*(uint32_t*)0x40013820 |= FLAG)
#define Clr_SYSCFG_CMPCR(FLAG)               (*(uint32_t*)0x40013820 &= ~FLAG)
#define  _SYSCFG_MEMRM_MEM_MODE                              (0x7 << 0)    // Memory mapping selection
#define  _SYSCFG_MEMRM_FB_MODE                               (0x1 << 8)    // Flash bank mode selection
#define  _SYSCFG_MEMRM_SWP_FMC                               (0x3 << 10)    // FMC memory mapping swap
#define  _SYSCFG_PMC_MII_RMII_SEL                            (0x1 << 23)    // Ethernet PHY interface selection
#define  _SYSCFG_PMC_ADC1DC2                                 (0x1 << 16)    // ADC1DC2
#define  _SYSCFG_PMC_ADC2DC2                                 (0x1 << 17)    // ADC2DC2
#define  _SYSCFG_PMC_ADC3DC2                                 (0x1 << 18)    // ADC3DC2
#define  _SYSCFG_EXTICR1_EXTI3                               (0xf << 12)    // EXTI x configuration (x = 0 to 3)
#define  _SYSCFG_EXTICR1_EXTI2                               (0xf << 8)    // EXTI x configuration (x = 0 to 3)
#define  _SYSCFG_EXTICR1_EXTI1                               (0xf << 4)    // EXTI x configuration (x = 0 to 3)
#define  _SYSCFG_EXTICR1_EXTI0                               (0xf << 0)    // EXTI x configuration (x = 0 to 3)
#define  _SYSCFG_EXTICR2_EXTI7                               (0xf << 12)    // EXTI x configuration (x = 4 to 7)
#define  _SYSCFG_EXTICR2_EXTI6                               (0xf << 8)    // EXTI x configuration (x = 4 to 7)
#define  _SYSCFG_EXTICR2_EXTI5                               (0xf << 4)    // EXTI x configuration (x = 4 to 7)
#define  _SYSCFG_EXTICR2_EXTI4                               (0xf << 0)    // EXTI x configuration (x = 4 to 7)
#define  _SYSCFG_EXTICR3_EXTI11                              (0xf << 12)    // EXTI x configuration (x = 8 to 11)
#define  _SYSCFG_EXTICR3_EXTI10                              (0xf << 8)    // EXTI10
#define  _SYSCFG_EXTICR3_EXTI9                               (0xf << 4)    // EXTI x configuration (x = 8 to 11)
#define  _SYSCFG_EXTICR3_EXTI8                               (0xf << 0)    // EXTI x configuration (x = 8 to 11)
#define  _SYSCFG_EXTICR4_EXTI15                              (0xf << 12)    // EXTI x configuration (x = 12 to 15)
#define  _SYSCFG_EXTICR4_EXTI14                              (0xf << 8)    // EXTI x configuration (x = 12 to 15)
#define  _SYSCFG_EXTICR4_EXTI13                              (0xf << 4)    // EXTI x configuration (x = 12 to 15)
#define  _SYSCFG_EXTICR4_EXTI12                              (0xf << 0)    // EXTI x configuration (x = 12 to 15)
#define  _SYSCFG_CMPCR_READY                                 (0x1 << 8)    // READY
#define  _SYSCFG_CMPCR_CMP_PD                                (0x1 << 0)    // Compensation cell power-down

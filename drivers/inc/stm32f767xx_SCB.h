#define Get_SCB_ACTRL_ACTRL(FLAG)            (*(uint32_t*)0xe000e008 & FLAG)
#define Get_SCB_CPUID(FLAG)                  (*(uint32_t*)0xe000ed00 & FLAG)
#define Get_SCB_ICSR(FLAG)                   (*(uint32_t*)0xe000ed04 & FLAG)
#define Get_SCB_VTOR(FLAG)                   (*(uint32_t*)0xe000ed08 & FLAG)
#define Get_SCB_AIRCR(FLAG)                  (*(uint32_t*)0xe000ed0c & FLAG)
#define Get_SCB_SCR(FLAG)                    (*(uint32_t*)0xe000ed10 & FLAG)
#define Get_SCB_CCR(FLAG)                    (*(uint32_t*)0xe000ed14 & FLAG)
#define Get_SCB_SHPR1(FLAG)                  (*(uint32_t*)0xe000ed18 & FLAG)
#define Get_SCB_SHPR2(FLAG)                  (*(uint32_t*)0xe000ed1c & FLAG)
#define Get_SCB_SHPR3(FLAG)                  (*(uint32_t*)0xe000ed20 & FLAG)
#define Get_SCB_SHCSR(FLAG)                  (*(uint32_t*)0xe000ed24 & FLAG)
#define Get_SCB_CFSR_UFSR_BFSR_MMFSR(FLAG)   (*(uint32_t*)0xe000ed28 & FLAG)
#define Get_SCB_HFSR(FLAG)                   (*(uint32_t*)0xe000ed2c & FLAG)
#define Get_SCB_MMFAR(FLAG)                  (*(uint32_t*)0xe000ed34 & FLAG)
#define Get_SCB_BFAR(FLAG)                   (*(uint32_t*)0xe000ed38 & FLAG)
#define Set_SCB_ACTRL_ACTRL(FLAG)            (*(uint32_t*)0xe000e008 |= FLAG)
#define Clr_SCB_ACTRL_ACTRL(FLAG)            (*(uint32_t*)0xe000e008 &= ~FLAG)
#define Set_SCB_CPUID(FLAG)                  (*(uint32_t*)0xe000ed00 |= FLAG)
#define Clr_SCB_CPUID(FLAG)                  (*(uint32_t*)0xe000ed00 &= ~FLAG)
#define Set_SCB_ICSR(FLAG)                   (*(uint32_t*)0xe000ed04 |= FLAG)
#define Clr_SCB_ICSR(FLAG)                   (*(uint32_t*)0xe000ed04 &= ~FLAG)
#define Set_SCB_VTOR(FLAG)                   (*(uint32_t*)0xe000ed08 |= FLAG)
#define Clr_SCB_VTOR(FLAG)                   (*(uint32_t*)0xe000ed08 &= ~FLAG)
#define Set_SCB_AIRCR(FLAG)                  (*(uint32_t*)0xe000ed0c |= FLAG)
#define Clr_SCB_AIRCR(FLAG)                  (*(uint32_t*)0xe000ed0c &= ~FLAG)
#define Set_SCB_SCR(FLAG)                    (*(uint32_t*)0xe000ed10 |= FLAG)
#define Clr_SCB_SCR(FLAG)                    (*(uint32_t*)0xe000ed10 &= ~FLAG)
#define Set_SCB_CCR(FLAG)                    (*(uint32_t*)0xe000ed14 |= FLAG)
#define Clr_SCB_CCR(FLAG)                    (*(uint32_t*)0xe000ed14 &= ~FLAG)
#define Set_SCB_SHPR1(FLAG)                  (*(uint32_t*)0xe000ed18 |= FLAG)
#define Clr_SCB_SHPR1(FLAG)                  (*(uint32_t*)0xe000ed18 &= ~FLAG)
#define Set_SCB_SHPR2(FLAG)                  (*(uint32_t*)0xe000ed1c |= FLAG)
#define Clr_SCB_SHPR2(FLAG)                  (*(uint32_t*)0xe000ed1c &= ~FLAG)
#define Set_SCB_SHPR3(FLAG)                  (*(uint32_t*)0xe000ed20 |= FLAG)
#define Clr_SCB_SHPR3(FLAG)                  (*(uint32_t*)0xe000ed20 &= ~FLAG)
#define Set_SCB_SHCSR(FLAG)                  (*(uint32_t*)0xe000ed24 |= FLAG)
#define Clr_SCB_SHCSR(FLAG)                  (*(uint32_t*)0xe000ed24 &= ~FLAG)
#define Set_SCB_CFSR_UFSR_BFSR_MMFSR(FLAG)   (*(uint32_t*)0xe000ed28 |= FLAG)
#define Clr_SCB_CFSR_UFSR_BFSR_MMFSR(FLAG)   (*(uint32_t*)0xe000ed28 &= ~FLAG)
#define Set_SCB_HFSR(FLAG)                   (*(uint32_t*)0xe000ed2c |= FLAG)
#define Clr_SCB_HFSR(FLAG)                   (*(uint32_t*)0xe000ed2c &= ~FLAG)
#define Set_SCB_MMFAR(FLAG)                  (*(uint32_t*)0xe000ed34 |= FLAG)
#define Clr_SCB_MMFAR(FLAG)                  (*(uint32_t*)0xe000ed34 &= ~FLAG)
#define Set_SCB_BFAR(FLAG)                   (*(uint32_t*)0xe000ed38 |= FLAG)
#define Clr_SCB_BFAR(FLAG)                   (*(uint32_t*)0xe000ed38 &= ~FLAG)
#define  _SCB_ACTRL_ACTRL_DISFOLD                            (0x1 << 2)    // DISFOLD
#define  _SCB_ACTRL_ACTRL_FPEXCODIS                          (0x1 << 10)    // FPEXCODIS
#define  _SCB_ACTRL_ACTRL_DISRAMODE                          (0x1 << 11)    // DISRAMODE
#define  _SCB_ACTRL_ACTRL_DISITMATBFLUSH                     (0x1 << 12)    // DISITMATBFLUSH
#define  _SCB_CPUID_Revision                                 (0xf << 0)    // Revision number
#define  _SCB_CPUID_PartNo                                   (0xfff << 4)    // Part number of the processor
#define  _SCB_CPUID_Constant                                 (0xf << 16)    // Reads as 0xF
#define  _SCB_CPUID_Variant                                  (0xf << 20)    // Variant number
#define  _SCB_CPUID_Implementer                              (0xff << 24)    // Implementer code
#define  _SCB_ICSR_VECTACTIVE                                (0x1ff << 0)    // Active vector
#define  _SCB_ICSR_RETTOBASE                                 (0x1 << 11)    // Return to base level
#define  _SCB_ICSR_VECTPENDING                               (0x7f << 12)    // Pending vector
#define  _SCB_ICSR_ISRPENDING                                (0x1 << 22)    // Interrupt pending flag
#define  _SCB_ICSR_PENDSTCLR                                 (0x1 << 25)    // SysTick exception clear-pending bit
#define  _SCB_ICSR_PENDSTSET                                 (0x1 << 26)    // SysTick exception set-pending bit
#define  _SCB_ICSR_PENDSVCLR                                 (0x1 << 27)    // PendSV clear-pending bit
#define  _SCB_ICSR_PENDSVSET                                 (0x1 << 28)    // PendSV set-pending bit
#define  _SCB_ICSR_NMIPENDSET                                (0x1 << 31)    // NMI set-pending bit.
#define  _SCB_VTOR_TBLOFF                                    (0x1fffff << 9)    // Vector table base offset field
#define  _SCB_AIRCR_VECTRESET                                (0x1 << 0)    // VECTRESET
#define  _SCB_AIRCR_VECTCLRACTIVE                            (0x1 << 1)    // VECTCLRACTIVE
#define  _SCB_AIRCR_SYSRESETREQ                              (0x1 << 2)    // SYSRESETREQ
#define  _SCB_AIRCR_PRIGROUP                                 (0x7 << 8)    // PRIGROUP
#define  _SCB_AIRCR_ENDIANESS                                (0x1 << 15)    // ENDIANESS
#define  _SCB_AIRCR_VECTKEYSTAT                              (0xffff << 16)    // Register key
#define  _SCB_SCR_SLEEPONEXIT                                (0x1 << 1)    // SLEEPONEXIT
#define  _SCB_SCR_SLEEPDEEP                                  (0x1 << 2)    // SLEEPDEEP
#define  _SCB_SCR_SEVEONPEND                                 (0x1 << 4)    // Send Event on Pending bit
#define  _SCB_CCR_NONBASETHRDENA                             (0x1 << 0)    // Configures how the processor enters Thread mode
#define  _SCB_CCR_USERSETMPEND                               (0x1 << 1)    // USERSETMPEND
#define  _SCB_CCR_UNALIGN__TRP                               (0x1 << 3)    // UNALIGN_ TRP
#define  _SCB_CCR_DIV_0_TRP                                  (0x1 << 4)    // DIV_0_TRP
#define  _SCB_CCR_BFHFNMIGN                                  (0x1 << 8)    // BFHFNMIGN
#define  _SCB_CCR_STKALIGN                                   (0x1 << 9)    // STKALIGN
#define  _SCB_CCR_DC                                         (0x1 << 16)    // DC
#define  _SCB_CCR_IC                                         (0x1 << 17)    // IC
#define  _SCB_CCR_BP                                         (0x1 << 18)    // BP
#define  _SCB_SHPR1_PRI_4                                    (0xff << 0)    // Priority of system handler 4
#define  _SCB_SHPR1_PRI_5                                    (0xff << 8)    // Priority of system handler 5
#define  _SCB_SHPR1_PRI_6                                    (0xff << 16)    // Priority of system handler 6
#define  _SCB_SHPR2_PRI_11                                   (0xff << 24)    // Priority of system handler 11
#define  _SCB_SHPR3_PRI_14                                   (0xff << 16)    // Priority of system handler 14
#define  _SCB_SHPR3_PRI_15                                   (0xff << 24)    // Priority of system handler 15
#define  _SCB_SHCSR_MEMFAULTACT                              (0x1 << 0)    // Memory management fault exception active bit
#define  _SCB_SHCSR_BUSFAULTACT                              (0x1 << 1)    // Bus fault exception active bit
#define  _SCB_SHCSR_USGFAULTACT                              (0x1 << 3)    // Usage fault exception active bit
#define  _SCB_SHCSR_SVCALLACT                                (0x1 << 7)    // SVC call active bit
#define  _SCB_SHCSR_MONITORACT                               (0x1 << 8)    // Debug monitor active bit
#define  _SCB_SHCSR_PENDSVACT                                (0x1 << 10)    // PendSV exception active bit
#define  _SCB_SHCSR_SYSTICKACT                               (0x1 << 11)    // SysTick exception active bit
#define  _SCB_SHCSR_USGFAULTPENDED                           (0x1 << 12)    // Usage fault exception pending bit
#define  _SCB_SHCSR_MEMFAULTPENDED                           (0x1 << 13)    // Memory management fault exception pending bit
#define  _SCB_SHCSR_BUSFAULTPENDED                           (0x1 << 14)    // Bus fault exception pending bit
#define  _SCB_SHCSR_SVCALLPENDED                             (0x1 << 15)    // SVC call pending bit
#define  _SCB_SHCSR_MEMFAULTENA                              (0x1 << 16)    // Memory management fault enable bit
#define  _SCB_SHCSR_BUSFAULTENA                              (0x1 << 17)    // Bus fault enable bit
#define  _SCB_SHCSR_USGFAULTENA                              (0x1 << 18)    // Usage fault enable bit
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL                  (0x1 << 0)    // IACCVIOL
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_DACCVIOL                  (0x1 << 1)    // DACCVIOL
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR                 (0x1 << 3)    // MUNSTKERR
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR                   (0x1 << 4)    // MSTKERR
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR                   (0x1 << 5)    // MLSPERR
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID                 (0x1 << 7)    // MMARVALID
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR                   (0x1 << 8)    // Instruction bus error
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR                 (0x1 << 9)    // Precise data bus error
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR               (0x1 << 10)    // Imprecise data bus error
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR                  (0x1 << 11)    // Bus fault on unstacking for a return from exception
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_STKERR                    (0x1 << 12)    // Bus fault on stacking for exception entry
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR                    (0x1 << 13)    // Bus fault on floating-point lazy state preservation
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID                 (0x1 << 15)    // Bus Fault Address Register (BFAR) valid flag
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR                (0x1 << 16)    // Undefined instruction usage fault
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE                  (0x1 << 17)    // Invalid state usage fault
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_INVPC                     (0x1 << 18)    // Invalid PC load usage fault
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_NOCP                      (0x1 << 19)    // No coprocessor usage fault.
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED                 (0x1 << 24)    // Unaligned access usage fault
#define  _SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO                 (0x1 << 25)    // Divide by zero usage fault
#define  _SCB_HFSR_VECTTBL                                   (0x1 << 1)    // Vector table hard fault
#define  _SCB_HFSR_FORCED                                    (0x1 << 30)    // Forced hard fault
#define  _SCB_HFSR_DEBUG_VT                                  (0x1 << 31)    // Reserved for Debug use
#define  _SCB_MMFAR_ADDRESS                                  (0xffffffff << 0)    // Memory management fault address
#define  _SCB_BFAR_ADDRESS                                   (0xffffffff << 0)    // Bus fault address

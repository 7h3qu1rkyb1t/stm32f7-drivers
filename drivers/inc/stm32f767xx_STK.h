#define Get_STK_CSR(FLAG)                    (*(uint32_t*)0xe000e010 & FLAG)
#define Get_STK_RVR(FLAG)                    (*(uint32_t*)0xe000e014 & FLAG)
#define Get_STK_CVR(FLAG)                    (*(uint32_t*)0xe000e018 & FLAG)
#define Get_STK_CALIB(FLAG)                  (*(uint32_t*)0xe000e01c & FLAG)
#define Set_STK_CSR(FLAG)                    (*(uint32_t*)0xe000e010 |= FLAG)
#define Clr_STK_CSR(FLAG)                    (*(uint32_t*)0xe000e010 &= ~FLAG)
#define Set_STK_RVR(FLAG)                    (*(uint32_t*)0xe000e014 |= FLAG)
#define Clr_STK_RVR(FLAG)                    (*(uint32_t*)0xe000e014 &= ~FLAG)
#define Set_STK_CVR(FLAG)                    (*(uint32_t*)0xe000e018 |= FLAG)
#define Clr_STK_CVR(FLAG)                    (*(uint32_t*)0xe000e018 &= ~FLAG)
#define Set_STK_CALIB(FLAG)                  (*(uint32_t*)0xe000e01c |= FLAG)
#define Clr_STK_CALIB(FLAG)                  (*(uint32_t*)0xe000e01c &= ~FLAG)
#define  _STK_CSR_ENABLE                                     (0x1 << 0)    // Counter enable
#define  _STK_CSR_TICKINT                                    (0x1 << 1)    // SysTick exception request enable
#define  _STK_CSR_CLKSOURCE                                  (0x1 << 2)    // Clock source selection
#define  _STK_CSR_COUNTFLAG                                  (0x1 << 16)    // COUNTFLAG
#define  _STK_RVR_RELOAD                                     (0xffffff << 0)    // RELOAD value
#define  _STK_CVR_CURRENT                                    (0xffffff << 0)    // Current counter value
#define  _STK_CALIB_TENMS                                    (0xffffff << 0)    // Calibration value
#define  _STK_CALIB_SKEW                                     (0x1 << 30)    // SKEW flag: Indicates whether the TENMS value is exact
#define  _STK_CALIB_NOREF                                    (0x1 << 31)    // NOREF flag. Reads as zero

#define Get_FPU_CPACR_CPACR(FLAG)            (*(uint32_t*)0xe000ed88 & FLAG)
#define Get_FPU_FPCCR(FLAG)                  (*(uint32_t*)0xe000ef34 & FLAG)
#define Get_FPU_FPCAR(FLAG)                  (*(uint32_t*)0xe000ef38 & FLAG)
#define Get_FPU_FPSCR(FLAG)                  (*(uint32_t*)0xe000ef3c & FLAG)
#define Set_FPU_CPACR_CPACR(FLAG)            (*(uint32_t*)0xe000ed88 |= FLAG)
#define Clr_FPU_CPACR_CPACR(FLAG)            (*(uint32_t*)0xe000ed88 &= ~FLAG)
#define Set_FPU_FPCCR(FLAG)                  (*(uint32_t*)0xe000ef34 |= FLAG)
#define Clr_FPU_FPCCR(FLAG)                  (*(uint32_t*)0xe000ef34 &= ~FLAG)
#define Set_FPU_FPCAR(FLAG)                  (*(uint32_t*)0xe000ef38 |= FLAG)
#define Clr_FPU_FPCAR(FLAG)                  (*(uint32_t*)0xe000ef38 &= ~FLAG)
#define Set_FPU_FPSCR(FLAG)                  (*(uint32_t*)0xe000ef3c |= FLAG)
#define Clr_FPU_FPSCR(FLAG)                  (*(uint32_t*)0xe000ef3c &= ~FLAG)
#define  _FPU_CPACR_CPACR_CP                                 (0xf << 20)    // CP
#define  _FPU_FPCCR_LSPACT                                   (0x1 << 0)    // LSPACT
#define  _FPU_FPCCR_USER                                     (0x1 << 1)    // USER
#define  _FPU_FPCCR_THREAD                                   (0x1 << 3)    // THREAD
#define  _FPU_FPCCR_HFRDY                                    (0x1 << 4)    // HFRDY
#define  _FPU_FPCCR_MMRDY                                    (0x1 << 5)    // MMRDY
#define  _FPU_FPCCR_BFRDY                                    (0x1 << 6)    // BFRDY
#define  _FPU_FPCCR_MONRDY                                   (0x1 << 8)    // MONRDY
#define  _FPU_FPCCR_LSPEN                                    (0x1 << 30)    // LSPEN
#define  _FPU_FPCCR_ASPEN                                    (0x1 << 31)    // ASPEN
#define  _FPU_FPCAR_ADDRESS                                  (0x1fffffff << 3)    // Location of unpopulated floating-point
#define  _FPU_FPSCR_IOC                                      (0x1 << 0)    // Invalid operation cumulative exception bit
#define  _FPU_FPSCR_DZC                                      (0x1 << 1)    // Division by zero cumulative exception bit.
#define  _FPU_FPSCR_OFC                                      (0x1 << 2)    // Overflow cumulative exception bit
#define  _FPU_FPSCR_UFC                                      (0x1 << 3)    // Underflow cumulative exception bit
#define  _FPU_FPSCR_IXC                                      (0x1 << 4)    // Inexact cumulative exception bit
#define  _FPU_FPSCR_IDC                                      (0x1 << 7)    // Input denormal cumulative exception bit.
#define  _FPU_FPSCR_RMode                                    (0x3 << 22)    // Rounding Mode control field
#define  _FPU_FPSCR_FZ                                       (0x1 << 24)    // Flush-to-zero mode control bit:
#define  _FPU_FPSCR_DN                                       (0x1 << 25)    // Default NaN mode control bit
#define  _FPU_FPSCR_AHP                                      (0x1 << 26)    // Alternative half-precision control bit
#define  _FPU_FPSCR_V                                        (0x1 << 28)    // Overflow condition code flag
#define  _FPU_FPSCR_C                                        (0x1 << 29)    // Carry condition code flag
#define  _FPU_FPSCR_Z                                        (0x1 << 30)    // Zero condition code flag
#define  _FPU_FPSCR_N                                        (0x1 << 31)    // Negative condition code flag

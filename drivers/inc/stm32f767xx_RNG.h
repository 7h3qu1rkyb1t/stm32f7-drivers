#define Get_RNG_CR(FLAG)                     (*(uint32_t*)0x50060800 & FLAG)
#define Get_RNG_SR(FLAG)                     (*(uint32_t*)0x50060804 & FLAG)
#define Get_RNG_DR(FLAG)                     (*(uint32_t*)0x50060808 & FLAG)
#define Set_RNG_CR(FLAG)                     (*(uint32_t*)0x50060800 |= FLAG)
#define Clr_RNG_CR(FLAG)                     (*(uint32_t*)0x50060800 &= ~FLAG)
#define Set_RNG_SR(FLAG)                     (*(uint32_t*)0x50060804 |= FLAG)
#define Clr_RNG_SR(FLAG)                     (*(uint32_t*)0x50060804 &= ~FLAG)
#define Set_RNG_DR(FLAG)                     (*(uint32_t*)0x50060808 |= FLAG)
#define Clr_RNG_DR(FLAG)                     (*(uint32_t*)0x50060808 &= ~FLAG)
#define  _RNG_CR_IE                                          (0x1 << 3)    // Interrupt enable
#define  _RNG_CR_RNGEN                                       (0x1 << 2)    // Random number generator enable
#define  _RNG_SR_SEIS                                        (0x1 << 6)    // Seed error interrupt status
#define  _RNG_SR_CEIS                                        (0x1 << 5)    // Clock error interrupt status
#define  _RNG_SR_SECS                                        (0x1 << 2)    // Seed error current status
#define  _RNG_SR_CECS                                        (0x1 << 1)    // Clock error current status
#define  _RNG_SR_DRDY                                        (0x1 << 0)    // Data ready
#define  _RNG_DR_RNDATA                                      (0xffffffff << 0)    // Random data

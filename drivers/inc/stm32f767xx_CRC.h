#define Get_CRC_DR(FLAG)                     (*(uint32_t*)0x40023000 & FLAG)
#define Get_CRC_IDR(FLAG)                    (*(uint32_t*)0x40023004 & FLAG)
#define Get_CRC_CR(FLAG)                     (*(uint32_t*)0x40023008 & FLAG)
#define Get_CRC_INIT(FLAG)                   (*(uint32_t*)0x4002300c & FLAG)
#define Get_CRC_POL(FLAG)                    (*(uint32_t*)0x40023010 & FLAG)
#define Set_CRC_DR(FLAG)                     (*(uint32_t*)0x40023000 |= FLAG)
#define Clr_CRC_DR(FLAG)                     (*(uint32_t*)0x40023000 &= ~FLAG)
#define Set_CRC_IDR(FLAG)                    (*(uint32_t*)0x40023004 |= FLAG)
#define Clr_CRC_IDR(FLAG)                    (*(uint32_t*)0x40023004 &= ~FLAG)
#define Set_CRC_CR(FLAG)                     (*(uint32_t*)0x40023008 |= FLAG)
#define Clr_CRC_CR(FLAG)                     (*(uint32_t*)0x40023008 &= ~FLAG)
#define Set_CRC_INIT(FLAG)                   (*(uint32_t*)0x4002300c |= FLAG)
#define Clr_CRC_INIT(FLAG)                   (*(uint32_t*)0x4002300c &= ~FLAG)
#define Set_CRC_POL(FLAG)                    (*(uint32_t*)0x40023010 |= FLAG)
#define Clr_CRC_POL(FLAG)                    (*(uint32_t*)0x40023010 &= ~FLAG)
#define  _CRC_DR_DR                                          (0xffffffff << 0)    // Data Register
#define  _CRC_IDR_IDR                                        (0xff << 0)    // Independent Data register
#define  _CRC_CR_CR                                          (0x1 << 0)    // Control regidter
#define  _CRC_INIT_CRC_INIT                                  (0xffffffff << 0)    // Programmable initial CRC value
#define  _CRC_POL_POL                                        (0xffffffff << 0)    // Programmable polynomial

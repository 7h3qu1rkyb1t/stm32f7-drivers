#define Get_WWDG_CR(FLAG)                    (*(uint32_t*)0x40002c00 & FLAG)
#define Get_WWDG_CFR(FLAG)                   (*(uint32_t*)0x40002c04 & FLAG)
#define Get_WWDG_SR(FLAG)                    (*(uint32_t*)0x40002c08 & FLAG)
#define Set_WWDG_CR(FLAG)                    (*(uint32_t*)0x40002c00 |= FLAG)
#define Clr_WWDG_CR(FLAG)                    (*(uint32_t*)0x40002c00 &= ~FLAG)
#define Set_WWDG_CFR(FLAG)                   (*(uint32_t*)0x40002c04 |= FLAG)
#define Clr_WWDG_CFR(FLAG)                   (*(uint32_t*)0x40002c04 &= ~FLAG)
#define Set_WWDG_SR(FLAG)                    (*(uint32_t*)0x40002c08 |= FLAG)
#define Clr_WWDG_SR(FLAG)                    (*(uint32_t*)0x40002c08 &= ~FLAG)
#define  _WWDG_CR_WDGA                                       (0x1 << 7)    // Activation bit
#define  _WWDG_CR_T                                          (0x7f << 0)    // 7-bit counter (MSB to LSB)
#define  _WWDG_CFR_EWI                                       (0x1 << 9)    // Early wakeup interrupt
#define  _WWDG_CFR_WDGTB1                                    (0x1 << 8)    // Timer base
#define  _WWDG_CFR_WDGTB0                                    (0x1 << 7)    // Timer base
#define  _WWDG_CFR_W                                         (0x7f << 0)    // 7-bit window value
#define  _WWDG_SR_EWIF                                       (0x1 << 0)    // Early wakeup interrupt flag

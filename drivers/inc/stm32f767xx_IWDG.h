#define Get_IWDG_KR(FLAG)                    (*(uint32_t*)0x40003000 & FLAG)
#define Get_IWDG_PR(FLAG)                    (*(uint32_t*)0x40003004 & FLAG)
#define Get_IWDG_RLR(FLAG)                   (*(uint32_t*)0x40003008 & FLAG)
#define Get_IWDG_SR(FLAG)                    (*(uint32_t*)0x4000300c & FLAG)
#define Get_IWDG_WINR(FLAG)                  (*(uint32_t*)0x40003010 & FLAG)
#define Set_IWDG_KR(FLAG)                    (*(uint32_t*)0x40003000 |= FLAG)
#define Clr_IWDG_KR(FLAG)                    (*(uint32_t*)0x40003000 &= ~FLAG)
#define Set_IWDG_PR(FLAG)                    (*(uint32_t*)0x40003004 |= FLAG)
#define Clr_IWDG_PR(FLAG)                    (*(uint32_t*)0x40003004 &= ~FLAG)
#define Set_IWDG_RLR(FLAG)                   (*(uint32_t*)0x40003008 |= FLAG)
#define Clr_IWDG_RLR(FLAG)                   (*(uint32_t*)0x40003008 &= ~FLAG)
#define Set_IWDG_SR(FLAG)                    (*(uint32_t*)0x4000300c |= FLAG)
#define Clr_IWDG_SR(FLAG)                    (*(uint32_t*)0x4000300c &= ~FLAG)
#define Set_IWDG_WINR(FLAG)                  (*(uint32_t*)0x40003010 |= FLAG)
#define Clr_IWDG_WINR(FLAG)                  (*(uint32_t*)0x40003010 &= ~FLAG)
#define  _IWDG_KR_KEY                                        (0xffff << 0)    // Key value (write only, read 0000h)
#define  _IWDG_PR_PR                                         (0x7 << 0)    // Prescaler divider
#define  _IWDG_RLR_RL                                        (0xfff << 0)    // Watchdog counter reload value
#define  _IWDG_SR_RVU                                        (0x1 << 1)    // Watchdog counter reload value update
#define  _IWDG_SR_PVU                                        (0x1 << 0)    // Watchdog prescaler value update
#define  _IWDG_WINR_WIN                                      (0xfff << 0)    // Watchdog counter window value

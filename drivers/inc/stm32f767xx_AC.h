#define Get_AC_ITCMCR(FLAG)                  (*(uint32_t*)0xe000ef90 |= FLAG)
#define Get_AC_DTCMCR(FLAG)                  (*(uint32_t*)0xe000ef94 |= FLAG)
#define Get_AC_AHBPCR(FLAG)                  (*(uint32_t*)0xe000ef98 |= FLAG)
#define Get_AC_CACR(FLAG)                    (*(uint32_t*)0xe000ef9c |= FLAG)
#define Get_AC_AHBSCR(FLAG)                  (*(uint32_t*)0xe000efa0 |= FLAG)
#define Get_AC_ABFSR(FLAG)                   (*(uint32_t*)0xe000efa8 |= FLAG)
#define Set_AC_ITCMCR(FLAG)                  (*(uint32_t*)0xe000ef90 &= FLAG)
#define Clr_AC_ITCMCR(FLAG)                  (*(uint32_t*)0xe000ef90 |= ~FLAG)
#define Set_AC_DTCMCR(FLAG)                  (*(uint32_t*)0xe000ef94 &= FLAG)
#define Clr_AC_DTCMCR(FLAG)                  (*(uint32_t*)0xe000ef94 |= ~FLAG)
#define Set_AC_AHBPCR(FLAG)                  (*(uint32_t*)0xe000ef98 &= FLAG)
#define Clr_AC_AHBPCR(FLAG)                  (*(uint32_t*)0xe000ef98 |= ~FLAG)
#define Set_AC_CACR(FLAG)                    (*(uint32_t*)0xe000ef9c &= FLAG)
#define Clr_AC_CACR(FLAG)                    (*(uint32_t*)0xe000ef9c |= ~FLAG)
#define Set_AC_AHBSCR(FLAG)                  (*(uint32_t*)0xe000efa0 &= FLAG)
#define Clr_AC_AHBSCR(FLAG)                  (*(uint32_t*)0xe000efa0 |= ~FLAG)
#define Set_AC_ABFSR(FLAG)                   (*(uint32_t*)0xe000efa8 &= FLAG)
#define Clr_AC_ABFSR(FLAG)                   (*(uint32_t*)0xe000efa8 |= ~FLAG)
#define  _AC_ITCMCR_EN                                       (0x1 << 0)    // EN
#define  _AC_ITCMCR_RMW                                      (0x1 << 1)    // RMW
#define  _AC_ITCMCR_RETEN                                    (0x1 << 2)    // RETEN
#define  _AC_ITCMCR_SZ                                       (0xf << 3)    // SZ
#define  _AC_DTCMCR_EN                                       (0x1 << 0)    // EN
#define  _AC_DTCMCR_RMW                                      (0x1 << 1)    // RMW
#define  _AC_DTCMCR_RETEN                                    (0x1 << 2)    // RETEN
#define  _AC_DTCMCR_SZ                                       (0xf << 3)    // SZ
#define  _AC_AHBPCR_EN                                       (0x1 << 0)    // EN
#define  _AC_AHBPCR_SZ                                       (0x7 << 1)    // SZ
#define  _AC_CACR_SIWT                                       (0x1 << 0)    // SIWT
#define  _AC_CACR_ECCEN                                      (0x1 << 1)    // ECCEN
#define  _AC_CACR_FORCEWT                                    (0x1 << 2)    // FORCEWT
#define  _AC_AHBSCR_CTL                                      (0x3 << 0)    // CTL
#define  _AC_AHBSCR_TPRI                                     (0x1ff << 2)    // TPRI
#define  _AC_AHBSCR_INITCOUNT                                (0x1f << 11)    // INITCOUNT
#define  _AC_ABFSR_ITCM                                      (0x1 << 0)    // ITCM
#define  _AC_ABFSR_DTCM                                      (0x1 << 1)    // DTCM
#define  _AC_ABFSR_AHBP                                      (0x1 << 2)    // AHBP
#define  _AC_ABFSR_AXIM                                      (0x1 << 3)    // AXIM
#define  _AC_ABFSR_EPPB                                      (0x1 << 4)    // EPPB
#define  _AC_ABFSR_AXIMTYPE                                  (0x3 << 8)    // AXIMTYPE

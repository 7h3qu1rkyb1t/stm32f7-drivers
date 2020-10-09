#define Get_DBGMCU_IDCODE(FLAG)              (*(uint32_t*)0xe0042000 |= FLAG)
#define Set_DBGMCU_IDCODE(FLAG)              (*(uint32_t*)0xe0042000 &= FLAG)
#define Clr_DBGMCU_IDCODE(FLAG)              (*(uint32_t*)0xe0042000 |= ~FLAG)
#define  _DBGMCU_IDCODE_DEV_ID                               (0xfff << 0)    // Device identifier
#define  _DBGMCU_IDCODE_REV_ID                               (0xffff << 16)    // Revision identifie

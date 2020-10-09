#define Get_Flash_ACR(FLAG)                  (*(uint32_t*)0x40023c00 |= FLAG)
#define Get_Flash_KEYR(FLAG)                 (*(uint32_t*)0x40023c04 |= FLAG)
#define Get_Flash_OPTKEYR(FLAG)              (*(uint32_t*)0x40023c08 |= FLAG)
#define Get_Flash_SR(FLAG)                   (*(uint32_t*)0x40023c0c |= FLAG)
#define Get_Flash_CR(FLAG)                   (*(uint32_t*)0x40023c10 |= FLAG)
#define Get_Flash_OPTCR(FLAG)                (*(uint32_t*)0x40023c14 |= FLAG)
#define Get_Flash_OPTCR1(FLAG)               (*(uint32_t*)0x40023c18 |= FLAG)
#define Set_Flash_ACR(FLAG)                  (*(uint32_t*)0x40023c00 &= FLAG)
#define Clr_Flash_ACR(FLAG)                  (*(uint32_t*)0x40023c00 |= ~FLAG)
#define Set_Flash_KEYR(FLAG)                 (*(uint32_t*)0x40023c04 &= FLAG)
#define Clr_Flash_KEYR(FLAG)                 (*(uint32_t*)0x40023c04 |= ~FLAG)
#define Set_Flash_OPTKEYR(FLAG)              (*(uint32_t*)0x40023c08 &= FLAG)
#define Clr_Flash_OPTKEYR(FLAG)              (*(uint32_t*)0x40023c08 |= ~FLAG)
#define Set_Flash_SR(FLAG)                   (*(uint32_t*)0x40023c0c &= FLAG)
#define Clr_Flash_SR(FLAG)                   (*(uint32_t*)0x40023c0c |= ~FLAG)
#define Set_Flash_CR(FLAG)                   (*(uint32_t*)0x40023c10 &= FLAG)
#define Clr_Flash_CR(FLAG)                   (*(uint32_t*)0x40023c10 |= ~FLAG)
#define Set_Flash_OPTCR(FLAG)                (*(uint32_t*)0x40023c14 &= FLAG)
#define Clr_Flash_OPTCR(FLAG)                (*(uint32_t*)0x40023c14 |= ~FLAG)
#define Set_Flash_OPTCR1(FLAG)               (*(uint32_t*)0x40023c18 &= FLAG)
#define Clr_Flash_OPTCR1(FLAG)               (*(uint32_t*)0x40023c18 |= ~FLAG)
#define  _Flash_ACR_LATENCY                                  (0xf << 0)    // Latency
#define  _Flash_ACR_PRFTEN                                   (0x1 << 8)    // Prefetch enable
#define  _Flash_ACR_ARTEN                                    (0x1 << 9)    // ART Accelerator Enable
#define  _Flash_ACR_ARTRST                                   (0x1 << 11)    // ART Accelerator reset
#define  _Flash_KEYR_KEY                                     (0xffffffff << 0)    // FPEC key
#define  _Flash_OPTKEYR_OPTKEY                               (0xffffffff << 0)    // Option byte key
#define  _Flash_SR_EOP                                       (0x1 << 0)    // End of operation
#define  _Flash_SR_OPERR                                     (0x1 << 1)    // Operation error
#define  _Flash_SR_WRPERR                                    (0x1 << 4)    // Write protection error
#define  _Flash_SR_PGAERR                                    (0x1 << 5)    // Programming alignment error
#define  _Flash_SR_PGPERR                                    (0x1 << 6)    // Programming parallelism error
#define  _Flash_SR_PGSERR                                    (0x1 << 7)    // Programming sequence error
#define  _Flash_SR_BSY                                       (0x1 << 16)    // Busy
#define  _Flash_CR_PG                                        (0x1 << 0)    // Programming
#define  _Flash_CR_SER                                       (0x1 << 1)    // Sector Erase
#define  _Flash_CR_MER                                       (0x1 << 2)    // Mass Erase of sectors 0 to 11
#define  _Flash_CR_SNB                                       (0x1f << 3)    // Sector number
#define  _Flash_CR_PSIZE                                     (0x3 << 8)    // Program size
#define  _Flash_CR_MER1                                      (0x1 << 15)    // Mass Erase of sectors 12 to 23
#define  _Flash_CR_STRT                                      (0x1 << 16)    // Start
#define  _Flash_CR_EOPIE                                     (0x1 << 24)    // End of operation interrupt enable
#define  _Flash_CR_ERRIE                                     (0x1 << 25)    // Error interrupt enable
#define  _Flash_CR_LOCK                                      (0x1 << 31)    // Lock
#define  _Flash_OPTCR_OPTLOCK                                (0x1 << 0)    // Option lock
#define  _Flash_OPTCR_OPTSTRT                                (0x1 << 1)    // Option start
#define  _Flash_OPTCR_BOR_LEV                                (0x3 << 2)    // BOR reset Level
#define  _Flash_OPTCR_WWDG_SW                                (0x1 << 4)    // User option bytes
#define  _Flash_OPTCR_IWDG_SW                                (0x1 << 5)    // User option bytes
#define  _Flash_OPTCR_nRST_STOP                              (0x1 << 6)    // User option bytes
#define  _Flash_OPTCR_nRST_STDBY                             (0x1 << 7)    // User option bytes
#define  _Flash_OPTCR_RDP                                    (0xff << 8)    // Read protect
#define  _Flash_OPTCR_nWRP                                   (0xfff << 16)    // Not write protect
#define  _Flash_OPTCR_nDBOOT                                 (0x1 << 28)    // Dual Boot mode (valid only when nDBANK=0)
#define  _Flash_OPTCR_nDBANK                                 (0x1 << 29)    // Not dual bank mode
#define  _Flash_OPTCR_IWDG_STDBY                             (0x1 << 30)    // Independent watchdog counter freeze in standby mode
#define  _Flash_OPTCR_IWDG_STOP                              (0x1 << 31)    // Independent watchdog counter freeze in Stop mode
#define  _Flash_OPTCR1_BOOT_ADD0                             (0xffff << 0)    // Boot base address when Boot pin =0
#define  _Flash_OPTCR1_BOOT_ADD1                             (0xffff << 16)    // Boot base address when Boot pin =1

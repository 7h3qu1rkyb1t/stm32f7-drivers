#define Get_RTC_TR(FLAG)                     (*(uint32_t*)0x40002800 |= FLAG)
#define Get_RTC_DR(FLAG)                     (*(uint32_t*)0x40002804 |= FLAG)
#define Get_RTC_CR(FLAG)                     (*(uint32_t*)0x40002808 |= FLAG)
#define Get_RTC_ISR(FLAG)                    (*(uint32_t*)0x4000280c |= FLAG)
#define Get_RTC_PRER(FLAG)                   (*(uint32_t*)0x40002810 |= FLAG)
#define Get_RTC_WUTR(FLAG)                   (*(uint32_t*)0x40002814 |= FLAG)
#define Get_RTC_ALRMAR(FLAG)                 (*(uint32_t*)0x4000281c |= FLAG)
#define Get_RTC_ALRMBR(FLAG)                 (*(uint32_t*)0x40002820 |= FLAG)
#define Get_RTC_WPR(FLAG)                    (*(uint32_t*)0x40002824 |= FLAG)
#define Get_RTC_SSR(FLAG)                    (*(uint32_t*)0x40002828 |= FLAG)
#define Get_RTC_SHIFTR(FLAG)                 (*(uint32_t*)0x4000282c |= FLAG)
#define Get_RTC_TSTR(FLAG)                   (*(uint32_t*)0x40002830 |= FLAG)
#define Get_RTC_TSDR(FLAG)                   (*(uint32_t*)0x40002834 |= FLAG)
#define Get_RTC_TSSSR(FLAG)                  (*(uint32_t*)0x40002838 |= FLAG)
#define Get_RTC_CALR(FLAG)                   (*(uint32_t*)0x4000283c |= FLAG)
#define Get_RTC_TAMPCR(FLAG)                 (*(uint32_t*)0x40002840 |= FLAG)
#define Get_RTC_ALRMASSR(FLAG)               (*(uint32_t*)0x40002844 |= FLAG)
#define Get_RTC_ALRMBSSR(FLAG)               (*(uint32_t*)0x40002848 |= FLAG)
#define Get_RTC_OR(FLAG)                     (*(uint32_t*)0x4000284c |= FLAG)
#define Get_RTC_BKP0R(FLAG)                  (*(uint32_t*)0x40002850 |= FLAG)
#define Get_RTC_BKP1R(FLAG)                  (*(uint32_t*)0x40002854 |= FLAG)
#define Get_RTC_BKP2R(FLAG)                  (*(uint32_t*)0x40002858 |= FLAG)
#define Get_RTC_BKP3R(FLAG)                  (*(uint32_t*)0x4000285c |= FLAG)
#define Get_RTC_BKP4R(FLAG)                  (*(uint32_t*)0x40002860 |= FLAG)
#define Get_RTC_BKP5R(FLAG)                  (*(uint32_t*)0x40002864 |= FLAG)
#define Get_RTC_BKP6R(FLAG)                  (*(uint32_t*)0x40002868 |= FLAG)
#define Get_RTC_BKP7R(FLAG)                  (*(uint32_t*)0x4000286c |= FLAG)
#define Get_RTC_BKP8R(FLAG)                  (*(uint32_t*)0x40002870 |= FLAG)
#define Get_RTC_BKP9R(FLAG)                  (*(uint32_t*)0x40002874 |= FLAG)
#define Get_RTC_BKP10R(FLAG)                 (*(uint32_t*)0x40002878 |= FLAG)
#define Get_RTC_BKP11R(FLAG)                 (*(uint32_t*)0x4000287c |= FLAG)
#define Get_RTC_BKP12R(FLAG)                 (*(uint32_t*)0x40002880 |= FLAG)
#define Get_RTC_BKP13R(FLAG)                 (*(uint32_t*)0x40002884 |= FLAG)
#define Get_RTC_BKP14R(FLAG)                 (*(uint32_t*)0x40002888 |= FLAG)
#define Get_RTC_BKP15R(FLAG)                 (*(uint32_t*)0x4000288c |= FLAG)
#define Get_RTC_BKP16R(FLAG)                 (*(uint32_t*)0x40002890 |= FLAG)
#define Get_RTC_BKP17R(FLAG)                 (*(uint32_t*)0x40002894 |= FLAG)
#define Get_RTC_BKP18R(FLAG)                 (*(uint32_t*)0x40002898 |= FLAG)
#define Get_RTC_BKP19R(FLAG)                 (*(uint32_t*)0x4000289c |= FLAG)
#define Get_RTC_BKP20R(FLAG)                 (*(uint32_t*)0x400028a0 |= FLAG)
#define Get_RTC_BKP21R(FLAG)                 (*(uint32_t*)0x400028a4 |= FLAG)
#define Get_RTC_BKP22R(FLAG)                 (*(uint32_t*)0x400028a8 |= FLAG)
#define Get_RTC_BKP23R(FLAG)                 (*(uint32_t*)0x400028ac |= FLAG)
#define Get_RTC_BKP24R(FLAG)                 (*(uint32_t*)0x400028b0 |= FLAG)
#define Get_RTC_BKP25R(FLAG)                 (*(uint32_t*)0x400028b4 |= FLAG)
#define Get_RTC_BKP26R(FLAG)                 (*(uint32_t*)0x400028b8 |= FLAG)
#define Get_RTC_BKP27R(FLAG)                 (*(uint32_t*)0x400028bc |= FLAG)
#define Get_RTC_BKP28R(FLAG)                 (*(uint32_t*)0x400028c0 |= FLAG)
#define Get_RTC_BKP29R(FLAG)                 (*(uint32_t*)0x400028c4 |= FLAG)
#define Get_RTC_BKP30R(FLAG)                 (*(uint32_t*)0x400028c8 |= FLAG)
#define Get_RTC_BKP31R(FLAG)                 (*(uint32_t*)0x400028cc |= FLAG)
#define Set_RTC_TR(FLAG)                     (*(uint32_t*)0x40002800 &= FLAG)
#define Clr_RTC_TR(FLAG)                     (*(uint32_t*)0x40002800 |= ~FLAG)
#define Set_RTC_DR(FLAG)                     (*(uint32_t*)0x40002804 &= FLAG)
#define Clr_RTC_DR(FLAG)                     (*(uint32_t*)0x40002804 |= ~FLAG)
#define Set_RTC_CR(FLAG)                     (*(uint32_t*)0x40002808 &= FLAG)
#define Clr_RTC_CR(FLAG)                     (*(uint32_t*)0x40002808 |= ~FLAG)
#define Set_RTC_ISR(FLAG)                    (*(uint32_t*)0x4000280c &= FLAG)
#define Clr_RTC_ISR(FLAG)                    (*(uint32_t*)0x4000280c |= ~FLAG)
#define Set_RTC_PRER(FLAG)                   (*(uint32_t*)0x40002810 &= FLAG)
#define Clr_RTC_PRER(FLAG)                   (*(uint32_t*)0x40002810 |= ~FLAG)
#define Set_RTC_WUTR(FLAG)                   (*(uint32_t*)0x40002814 &= FLAG)
#define Clr_RTC_WUTR(FLAG)                   (*(uint32_t*)0x40002814 |= ~FLAG)
#define Set_RTC_ALRMAR(FLAG)                 (*(uint32_t*)0x4000281c &= FLAG)
#define Clr_RTC_ALRMAR(FLAG)                 (*(uint32_t*)0x4000281c |= ~FLAG)
#define Set_RTC_ALRMBR(FLAG)                 (*(uint32_t*)0x40002820 &= FLAG)
#define Clr_RTC_ALRMBR(FLAG)                 (*(uint32_t*)0x40002820 |= ~FLAG)
#define Set_RTC_WPR(FLAG)                    (*(uint32_t*)0x40002824 &= FLAG)
#define Clr_RTC_WPR(FLAG)                    (*(uint32_t*)0x40002824 |= ~FLAG)
#define Set_RTC_SSR(FLAG)                    (*(uint32_t*)0x40002828 &= FLAG)
#define Clr_RTC_SSR(FLAG)                    (*(uint32_t*)0x40002828 |= ~FLAG)
#define Set_RTC_SHIFTR(FLAG)                 (*(uint32_t*)0x4000282c &= FLAG)
#define Clr_RTC_SHIFTR(FLAG)                 (*(uint32_t*)0x4000282c |= ~FLAG)
#define Set_RTC_TSTR(FLAG)                   (*(uint32_t*)0x40002830 &= FLAG)
#define Clr_RTC_TSTR(FLAG)                   (*(uint32_t*)0x40002830 |= ~FLAG)
#define Set_RTC_TSDR(FLAG)                   (*(uint32_t*)0x40002834 &= FLAG)
#define Clr_RTC_TSDR(FLAG)                   (*(uint32_t*)0x40002834 |= ~FLAG)
#define Set_RTC_TSSSR(FLAG)                  (*(uint32_t*)0x40002838 &= FLAG)
#define Clr_RTC_TSSSR(FLAG)                  (*(uint32_t*)0x40002838 |= ~FLAG)
#define Set_RTC_CALR(FLAG)                   (*(uint32_t*)0x4000283c &= FLAG)
#define Clr_RTC_CALR(FLAG)                   (*(uint32_t*)0x4000283c |= ~FLAG)
#define Set_RTC_TAMPCR(FLAG)                 (*(uint32_t*)0x40002840 &= FLAG)
#define Clr_RTC_TAMPCR(FLAG)                 (*(uint32_t*)0x40002840 |= ~FLAG)
#define Set_RTC_ALRMASSR(FLAG)               (*(uint32_t*)0x40002844 &= FLAG)
#define Clr_RTC_ALRMASSR(FLAG)               (*(uint32_t*)0x40002844 |= ~FLAG)
#define Set_RTC_ALRMBSSR(FLAG)               (*(uint32_t*)0x40002848 &= FLAG)
#define Clr_RTC_ALRMBSSR(FLAG)               (*(uint32_t*)0x40002848 |= ~FLAG)
#define Set_RTC_OR(FLAG)                     (*(uint32_t*)0x4000284c &= FLAG)
#define Clr_RTC_OR(FLAG)                     (*(uint32_t*)0x4000284c |= ~FLAG)
#define Set_RTC_BKP0R(FLAG)                  (*(uint32_t*)0x40002850 &= FLAG)
#define Clr_RTC_BKP0R(FLAG)                  (*(uint32_t*)0x40002850 |= ~FLAG)
#define Set_RTC_BKP1R(FLAG)                  (*(uint32_t*)0x40002854 &= FLAG)
#define Clr_RTC_BKP1R(FLAG)                  (*(uint32_t*)0x40002854 |= ~FLAG)
#define Set_RTC_BKP2R(FLAG)                  (*(uint32_t*)0x40002858 &= FLAG)
#define Clr_RTC_BKP2R(FLAG)                  (*(uint32_t*)0x40002858 |= ~FLAG)
#define Set_RTC_BKP3R(FLAG)                  (*(uint32_t*)0x4000285c &= FLAG)
#define Clr_RTC_BKP3R(FLAG)                  (*(uint32_t*)0x4000285c |= ~FLAG)
#define Set_RTC_BKP4R(FLAG)                  (*(uint32_t*)0x40002860 &= FLAG)
#define Clr_RTC_BKP4R(FLAG)                  (*(uint32_t*)0x40002860 |= ~FLAG)
#define Set_RTC_BKP5R(FLAG)                  (*(uint32_t*)0x40002864 &= FLAG)
#define Clr_RTC_BKP5R(FLAG)                  (*(uint32_t*)0x40002864 |= ~FLAG)
#define Set_RTC_BKP6R(FLAG)                  (*(uint32_t*)0x40002868 &= FLAG)
#define Clr_RTC_BKP6R(FLAG)                  (*(uint32_t*)0x40002868 |= ~FLAG)
#define Set_RTC_BKP7R(FLAG)                  (*(uint32_t*)0x4000286c &= FLAG)
#define Clr_RTC_BKP7R(FLAG)                  (*(uint32_t*)0x4000286c |= ~FLAG)
#define Set_RTC_BKP8R(FLAG)                  (*(uint32_t*)0x40002870 &= FLAG)
#define Clr_RTC_BKP8R(FLAG)                  (*(uint32_t*)0x40002870 |= ~FLAG)
#define Set_RTC_BKP9R(FLAG)                  (*(uint32_t*)0x40002874 &= FLAG)
#define Clr_RTC_BKP9R(FLAG)                  (*(uint32_t*)0x40002874 |= ~FLAG)
#define Set_RTC_BKP10R(FLAG)                 (*(uint32_t*)0x40002878 &= FLAG)
#define Clr_RTC_BKP10R(FLAG)                 (*(uint32_t*)0x40002878 |= ~FLAG)
#define Set_RTC_BKP11R(FLAG)                 (*(uint32_t*)0x4000287c &= FLAG)
#define Clr_RTC_BKP11R(FLAG)                 (*(uint32_t*)0x4000287c |= ~FLAG)
#define Set_RTC_BKP12R(FLAG)                 (*(uint32_t*)0x40002880 &= FLAG)
#define Clr_RTC_BKP12R(FLAG)                 (*(uint32_t*)0x40002880 |= ~FLAG)
#define Set_RTC_BKP13R(FLAG)                 (*(uint32_t*)0x40002884 &= FLAG)
#define Clr_RTC_BKP13R(FLAG)                 (*(uint32_t*)0x40002884 |= ~FLAG)
#define Set_RTC_BKP14R(FLAG)                 (*(uint32_t*)0x40002888 &= FLAG)
#define Clr_RTC_BKP14R(FLAG)                 (*(uint32_t*)0x40002888 |= ~FLAG)
#define Set_RTC_BKP15R(FLAG)                 (*(uint32_t*)0x4000288c &= FLAG)
#define Clr_RTC_BKP15R(FLAG)                 (*(uint32_t*)0x4000288c |= ~FLAG)
#define Set_RTC_BKP16R(FLAG)                 (*(uint32_t*)0x40002890 &= FLAG)
#define Clr_RTC_BKP16R(FLAG)                 (*(uint32_t*)0x40002890 |= ~FLAG)
#define Set_RTC_BKP17R(FLAG)                 (*(uint32_t*)0x40002894 &= FLAG)
#define Clr_RTC_BKP17R(FLAG)                 (*(uint32_t*)0x40002894 |= ~FLAG)
#define Set_RTC_BKP18R(FLAG)                 (*(uint32_t*)0x40002898 &= FLAG)
#define Clr_RTC_BKP18R(FLAG)                 (*(uint32_t*)0x40002898 |= ~FLAG)
#define Set_RTC_BKP19R(FLAG)                 (*(uint32_t*)0x4000289c &= FLAG)
#define Clr_RTC_BKP19R(FLAG)                 (*(uint32_t*)0x4000289c |= ~FLAG)
#define Set_RTC_BKP20R(FLAG)                 (*(uint32_t*)0x400028a0 &= FLAG)
#define Clr_RTC_BKP20R(FLAG)                 (*(uint32_t*)0x400028a0 |= ~FLAG)
#define Set_RTC_BKP21R(FLAG)                 (*(uint32_t*)0x400028a4 &= FLAG)
#define Clr_RTC_BKP21R(FLAG)                 (*(uint32_t*)0x400028a4 |= ~FLAG)
#define Set_RTC_BKP22R(FLAG)                 (*(uint32_t*)0x400028a8 &= FLAG)
#define Clr_RTC_BKP22R(FLAG)                 (*(uint32_t*)0x400028a8 |= ~FLAG)
#define Set_RTC_BKP23R(FLAG)                 (*(uint32_t*)0x400028ac &= FLAG)
#define Clr_RTC_BKP23R(FLAG)                 (*(uint32_t*)0x400028ac |= ~FLAG)
#define Set_RTC_BKP24R(FLAG)                 (*(uint32_t*)0x400028b0 &= FLAG)
#define Clr_RTC_BKP24R(FLAG)                 (*(uint32_t*)0x400028b0 |= ~FLAG)
#define Set_RTC_BKP25R(FLAG)                 (*(uint32_t*)0x400028b4 &= FLAG)
#define Clr_RTC_BKP25R(FLAG)                 (*(uint32_t*)0x400028b4 |= ~FLAG)
#define Set_RTC_BKP26R(FLAG)                 (*(uint32_t*)0x400028b8 &= FLAG)
#define Clr_RTC_BKP26R(FLAG)                 (*(uint32_t*)0x400028b8 |= ~FLAG)
#define Set_RTC_BKP27R(FLAG)                 (*(uint32_t*)0x400028bc &= FLAG)
#define Clr_RTC_BKP27R(FLAG)                 (*(uint32_t*)0x400028bc |= ~FLAG)
#define Set_RTC_BKP28R(FLAG)                 (*(uint32_t*)0x400028c0 &= FLAG)
#define Clr_RTC_BKP28R(FLAG)                 (*(uint32_t*)0x400028c0 |= ~FLAG)
#define Set_RTC_BKP29R(FLAG)                 (*(uint32_t*)0x400028c4 &= FLAG)
#define Clr_RTC_BKP29R(FLAG)                 (*(uint32_t*)0x400028c4 |= ~FLAG)
#define Set_RTC_BKP30R(FLAG)                 (*(uint32_t*)0x400028c8 &= FLAG)
#define Clr_RTC_BKP30R(FLAG)                 (*(uint32_t*)0x400028c8 |= ~FLAG)
#define Set_RTC_BKP31R(FLAG)                 (*(uint32_t*)0x400028cc &= FLAG)
#define Clr_RTC_BKP31R(FLAG)                 (*(uint32_t*)0x400028cc |= ~FLAG)
#define  _RTC_TR_PM                                          (0x1 << 22)    // AM/PM notation
#define  _RTC_TR_HT                                          (0x3 << 20)    // Hour tens in BCD format
#define  _RTC_TR_HU                                          (0xf << 16)    // Hour units in BCD format
#define  _RTC_TR_MNT                                         (0x7 << 12)    // Minute tens in BCD format
#define  _RTC_TR_MNU                                         (0xf << 8)    // Minute units in BCD format
#define  _RTC_TR_ST                                          (0x7 << 4)    // Second tens in BCD format
#define  _RTC_TR_SU                                          (0xf << 0)    // Second units in BCD format
#define  _RTC_DR_YT                                          (0xf << 20)    // Year tens in BCD format
#define  _RTC_DR_YU                                          (0xf << 16)    // Year units in BCD format
#define  _RTC_DR_WDU                                         (0x7 << 13)    // Week day units
#define  _RTC_DR_MT                                          (0x1 << 12)    // Month tens in BCD format
#define  _RTC_DR_MU                                          (0xf << 8)    // Month units in BCD format
#define  _RTC_DR_DT                                          (0x3 << 4)    // Date tens in BCD format
#define  _RTC_DR_DU                                          (0xf << 0)    // Date units in BCD format
#define  _RTC_CR_WCKSEL                                      (0x7 << 0)    // Wakeup clock selection
#define  _RTC_CR_TSEDGE                                      (0x1 << 3)    // Time-stamp event active edge
#define  _RTC_CR_REFCKON                                     (0x1 << 4)    // Reference clock detection enable (50 or 60 Hz)
#define  _RTC_CR_BYPSHAD                                     (0x1 << 5)    // Bypass the shadow registers
#define  _RTC_CR_FMT                                         (0x1 << 6)    // Hour format
#define  _RTC_CR_ALRAE                                       (0x1 << 8)    // Alarm A enable
#define  _RTC_CR_ALRBE                                       (0x1 << 9)    // Alarm B enable
#define  _RTC_CR_WUTE                                        (0x1 << 10)    // Wakeup timer enable
#define  _RTC_CR_TSE                                         (0x1 << 11)    // Time stamp enable
#define  _RTC_CR_ALRAIE                                      (0x1 << 12)    // Alarm A interrupt enable
#define  _RTC_CR_ALRBIE                                      (0x1 << 13)    // Alarm B interrupt enable
#define  _RTC_CR_WUTIE                                       (0x1 << 14)    // Wakeup timer interrupt enable
#define  _RTC_CR_TSIE                                        (0x1 << 15)    // Time-stamp interrupt enable
#define  _RTC_CR_ADD1H                                       (0x1 << 16)    // Add 1 hour (summer time change)
#define  _RTC_CR_SUB1H                                       (0x1 << 17)    // Subtract 1 hour (winter time change)
#define  _RTC_CR_BKP                                         (0x1 << 18)    // Backup
#define  _RTC_CR_COSEL                                       (0x1 << 19)    // Calibration output selection
#define  _RTC_CR_POL                                         (0x1 << 20)    // Output polarity
#define  _RTC_CR_OSEL                                        (0x3 << 21)    // Output selection
#define  _RTC_CR_COE                                         (0x1 << 23)    // Calibration output enable
#define  _RTC_CR_ITSE                                        (0x1 << 24)    // timestamp on internal event enable
#define  _RTC_ISR_ALRAWF                                     (0x1 << 0)    // Alarm A write flag
#define  _RTC_ISR_ALRBWF                                     (0x1 << 1)    // Alarm B write flag
#define  _RTC_ISR_WUTWF                                      (0x1 << 2)    // Wakeup timer write flag
#define  _RTC_ISR_SHPF                                       (0x1 << 3)    // Shift operation pending
#define  _RTC_ISR_INITS                                      (0x1 << 4)    // Initialization status flag
#define  _RTC_ISR_RSF                                        (0x1 << 5)    // Registers synchronization flag
#define  _RTC_ISR_INITF                                      (0x1 << 6)    // Initialization flag
#define  _RTC_ISR_INIT                                       (0x1 << 7)    // Initialization mode
#define  _RTC_ISR_ALRAF                                      (0x1 << 8)    // Alarm A flag
#define  _RTC_ISR_ALRBF                                      (0x1 << 9)    // Alarm B flag
#define  _RTC_ISR_WUTF                                       (0x1 << 10)    // Wakeup timer flag
#define  _RTC_ISR_TSF                                        (0x1 << 11)    // Time-stamp flag
#define  _RTC_ISR_TSOVF                                      (0x1 << 12)    // Time-stamp overflow flag
#define  _RTC_ISR_TAMP1F                                     (0x1 << 13)    // Tamper detection flag
#define  _RTC_ISR_TAMP2F                                     (0x1 << 14)    // RTC_TAMP2 detection flag
#define  _RTC_ISR_TAMP3F                                     (0x1 << 15)    // RTC_TAMP3 detection flag
#define  _RTC_ISR_RECALPF                                    (0x1 << 16)    // Recalibration pending Flag
#define  _RTC_PRER_PREDIV_A                                  (0x7f << 16)    // Asynchronous prescaler factor
#define  _RTC_PRER_PREDIV_S                                  (0x7fff << 0)    // Synchronous prescaler factor
#define  _RTC_WUTR_WUT                                       (0xffff << 0)    // Wakeup auto-reload value bits
#define  _RTC_ALRMAR_MSK4                                    (0x1 << 31)    // Alarm A date mask
#define  _RTC_ALRMAR_WDSEL                                   (0x1 << 30)    // Week day selection
#define  _RTC_ALRMAR_DT                                      (0x3 << 28)    // Date tens in BCD format
#define  _RTC_ALRMAR_DU                                      (0xf << 24)    // Date units or day in BCD format
#define  _RTC_ALRMAR_MSK3                                    (0x1 << 23)    // Alarm A hours mask
#define  _RTC_ALRMAR_PM                                      (0x1 << 22)    // AM/PM notation
#define  _RTC_ALRMAR_HT                                      (0x3 << 20)    // Hour tens in BCD format
#define  _RTC_ALRMAR_HU                                      (0xf << 16)    // Hour units in BCD format
#define  _RTC_ALRMAR_MSK2                                    (0x1 << 15)    // Alarm A minutes mask
#define  _RTC_ALRMAR_MNT                                     (0x7 << 12)    // Minute tens in BCD format
#define  _RTC_ALRMAR_MNU                                     (0xf << 8)    // Minute units in BCD format
#define  _RTC_ALRMAR_MSK1                                    (0x1 << 7)    // Alarm A seconds mask
#define  _RTC_ALRMAR_ST                                      (0x7 << 4)    // Second tens in BCD format
#define  _RTC_ALRMAR_SU                                      (0xf << 0)    // Second units in BCD format
#define  _RTC_ALRMBR_MSK4                                    (0x1 << 31)    // Alarm B date mask
#define  _RTC_ALRMBR_WDSEL                                   (0x1 << 30)    // Week day selection
#define  _RTC_ALRMBR_DT                                      (0x3 << 28)    // Date tens in BCD format
#define  _RTC_ALRMBR_DU                                      (0xf << 24)    // Date units or day in BCD format
#define  _RTC_ALRMBR_MSK3                                    (0x1 << 23)    // Alarm B hours mask
#define  _RTC_ALRMBR_PM                                      (0x1 << 22)    // AM/PM notation
#define  _RTC_ALRMBR_HT                                      (0x3 << 20)    // Hour tens in BCD format
#define  _RTC_ALRMBR_HU                                      (0xf << 16)    // Hour units in BCD format
#define  _RTC_ALRMBR_MSK2                                    (0x1 << 15)    // Alarm B minutes mask
#define  _RTC_ALRMBR_MNT                                     (0x7 << 12)    // Minute tens in BCD format
#define  _RTC_ALRMBR_MNU                                     (0xf << 8)    // Minute units in BCD format
#define  _RTC_ALRMBR_MSK1                                    (0x1 << 7)    // Alarm B seconds mask
#define  _RTC_ALRMBR_ST                                      (0x7 << 4)    // Second tens in BCD format
#define  _RTC_ALRMBR_SU                                      (0xf << 0)    // Second units in BCD format
#define  _RTC_WPR_KEY                                        (0xff << 0)    // Write protection key
#define  _RTC_SSR_SS                                         (0xffff << 0)    // Sub second value
#define  _RTC_SHIFTR_ADD1S                                   (0x1 << 31)    // Add one second
#define  _RTC_SHIFTR_SUBFS                                   (0x7fff << 0)    // Subtract a fraction of a second
#define  _RTC_TSTR_SU                                        (0xf << 0)    // Second units in BCD format
#define  _RTC_TSTR_ST                                        (0x7 << 4)    // Second tens in BCD format
#define  _RTC_TSTR_MNU                                       (0xf << 8)    // Minute units in BCD format
#define  _RTC_TSTR_MNT                                       (0x7 << 12)    // Minute tens in BCD format
#define  _RTC_TSTR_HU                                        (0xf << 16)    // Hour units in BCD format
#define  _RTC_TSTR_HT                                        (0x3 << 20)    // Hour tens in BCD format
#define  _RTC_TSTR_PM                                        (0x1 << 22)    // AM/PM notation
#define  _RTC_TSDR_WDU                                       (0x7 << 13)    // Week day units
#define  _RTC_TSDR_MT                                        (0x1 << 12)    // Month tens in BCD format
#define  _RTC_TSDR_MU                                        (0xf << 8)    // Month units in BCD format
#define  _RTC_TSDR_DT                                        (0x3 << 4)    // Date tens in BCD format
#define  _RTC_TSDR_DU                                        (0xf << 0)    // Date units in BCD format
#define  _RTC_TSSSR_SS                                       (0xffff << 0)    // Sub second value
#define  _RTC_CALR_CALP                                      (0x1 << 15)    // Increase frequency of RTC by 488.5 ppm
#define  _RTC_CALR_CALW8                                     (0x1 << 14)    // Use an 8-second calibration cycle period
#define  _RTC_CALR_CALW16                                    (0x1 << 13)    // Use a 16-second calibration cycle period
#define  _RTC_CALR_CALM                                      (0x1ff << 0)    // Calibration minus
#define  _RTC_TAMPCR_TAMP1E                                  (0x1 << 0)    // Tamper 1 detection enable
#define  _RTC_TAMPCR_TAMP1TRG                                (0x1 << 1)    // Active level for tamper 1
#define  _RTC_TAMPCR_TAMPIE                                  (0x1 << 2)    // Tamper interrupt enable
#define  _RTC_TAMPCR_TAMP2E                                  (0x1 << 3)    // Tamper 2 detection enable
#define  _RTC_TAMPCR_TAMP2TRG                                (0x1 << 4)    // Active level for tamper 2
#define  _RTC_TAMPCR_TAMP3E                                  (0x1 << 5)    // Tamper 3 detection enable
#define  _RTC_TAMPCR_TAMP3TRG                                (0x1 << 6)    // Active level for tamper 3
#define  _RTC_TAMPCR_TAMPTS                                  (0x1 << 7)    // Activate timestamp on tamper detection event
#define  _RTC_TAMPCR_TAMPFREQ                                (0x7 << 8)    // Tamper sampling frequency
#define  _RTC_TAMPCR_TAMPFLT                                 (0x3 << 11)    // Tamper filter count
#define  _RTC_TAMPCR_TAMPPRCH                                (0x3 << 13)    // Tamper precharge duration
#define  _RTC_TAMPCR_TAMPPUDIS                               (0x1 << 15)    // TAMPER pull-up disable
#define  _RTC_TAMPCR_TAMP1IE                                 (0x1 << 16)    // Tamper 1 interrupt enable
#define  _RTC_TAMPCR_TAMP1NOERASE                            (0x1 << 17)    // Tamper 1 no erase
#define  _RTC_TAMPCR_TAMP1MF                                 (0x1 << 18)    // Tamper 1 mask flag
#define  _RTC_TAMPCR_TAMP2IE                                 (0x1 << 19)    // Tamper 2 interrupt enable
#define  _RTC_TAMPCR_TAMP2NOERASE                            (0x1 << 20)    // Tamper 2 no erase
#define  _RTC_TAMPCR_TAMP2MF                                 (0x1 << 21)    // Tamper 2 mask flag
#define  _RTC_TAMPCR_TAMP3IE                                 (0x1 << 22)    // Tamper 3 interrupt enable
#define  _RTC_TAMPCR_TAMP3NOERASE                            (0x1 << 23)    // Tamper 3 no erase
#define  _RTC_TAMPCR_TAMP3MF                                 (0x1 << 24)    // Tamper 3 mask flag
#define  _RTC_ALRMASSR_MASKSS                                (0xf << 24)    // Mask the most-significant bits starting at this bit
#define  _RTC_ALRMASSR_SS                                    (0x7fff << 0)    // Sub seconds value
#define  _RTC_ALRMBSSR_MASKSS                                (0xf << 24)    // Mask the most-significant bits starting at this bit
#define  _RTC_ALRMBSSR_SS                                    (0x7fff << 0)    // Sub seconds value
#define  _RTC_OR_RTC_ALARM_TYPE                              (0x1 << 0)    // RTC_ALARM on PC13 output type
#define  _RTC_OR_RTC_OUT_RMP                                 (0x1 << 1)    // RTC_OUT remap
#define  _RTC_BKP0R_BKP                                      (0xffffffff << 0)    // BKP
#define  _RTC_BKP1R_BKP                                      (0xffffffff << 0)    // BKP
#define  _RTC_BKP2R_BKP                                      (0xffffffff << 0)    // BKP
#define  _RTC_BKP3R_BKP                                      (0xffffffff << 0)    // BKP
#define  _RTC_BKP4R_BKP                                      (0xffffffff << 0)    // BKP
#define  _RTC_BKP5R_BKP                                      (0xffffffff << 0)    // BKP
#define  _RTC_BKP6R_BKP                                      (0xffffffff << 0)    // BKP
#define  _RTC_BKP7R_BKP                                      (0xffffffff << 0)    // BKP
#define  _RTC_BKP8R_BKP                                      (0xffffffff << 0)    // BKP
#define  _RTC_BKP9R_BKP                                      (0xffffffff << 0)    // BKP
#define  _RTC_BKP10R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP11R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP12R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP13R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP14R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP15R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP16R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP17R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP18R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP19R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP20R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP21R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP22R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP23R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP24R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP25R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP26R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP27R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP28R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP29R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP30R_BKP                                     (0xffffffff << 0)    // BKP
#define  _RTC_BKP31R_BKP                                     (0xffffffff << 0)    // BKP

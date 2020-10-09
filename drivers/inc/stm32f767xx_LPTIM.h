#define Get_LPTIM1_ISR(FLAG)                 (*(uint32_t*)0x40002400 |= FLAG)
#define Get_LPTIM1_ICR(FLAG)                 (*(uint32_t*)0x40002404 |= FLAG)
#define Get_LPTIM1_IER(FLAG)                 (*(uint32_t*)0x40002408 |= FLAG)
#define Get_LPTIM1_CFGR(FLAG)                (*(uint32_t*)0x4000240c |= FLAG)
#define Get_LPTIM1_CR(FLAG)                  (*(uint32_t*)0x40002410 |= FLAG)
#define Get_LPTIM1_CMP(FLAG)                 (*(uint32_t*)0x40002414 |= FLAG)
#define Get_LPTIM1_ARR(FLAG)                 (*(uint32_t*)0x40002418 |= FLAG)
#define Get_LPTIM1_CNT(FLAG)                 (*(uint32_t*)0x4000241c |= FLAG)
#define Set_LPTIM1_ISR(FLAG)                 (*(uint32_t*)0x40002400 &= FLAG)
#define Clr_LPTIM1_ISR(FLAG)                 (*(uint32_t*)0x40002400 |= ~FLAG)
#define Set_LPTIM1_ICR(FLAG)                 (*(uint32_t*)0x40002404 &= FLAG)
#define Clr_LPTIM1_ICR(FLAG)                 (*(uint32_t*)0x40002404 |= ~FLAG)
#define Set_LPTIM1_IER(FLAG)                 (*(uint32_t*)0x40002408 &= FLAG)
#define Clr_LPTIM1_IER(FLAG)                 (*(uint32_t*)0x40002408 |= ~FLAG)
#define Set_LPTIM1_CFGR(FLAG)                (*(uint32_t*)0x4000240c &= FLAG)
#define Clr_LPTIM1_CFGR(FLAG)                (*(uint32_t*)0x4000240c |= ~FLAG)
#define Set_LPTIM1_CR(FLAG)                  (*(uint32_t*)0x40002410 &= FLAG)
#define Clr_LPTIM1_CR(FLAG)                  (*(uint32_t*)0x40002410 |= ~FLAG)
#define Set_LPTIM1_CMP(FLAG)                 (*(uint32_t*)0x40002414 &= FLAG)
#define Clr_LPTIM1_CMP(FLAG)                 (*(uint32_t*)0x40002414 |= ~FLAG)
#define Set_LPTIM1_ARR(FLAG)                 (*(uint32_t*)0x40002418 &= FLAG)
#define Clr_LPTIM1_ARR(FLAG)                 (*(uint32_t*)0x40002418 |= ~FLAG)
#define Set_LPTIM1_CNT(FLAG)                 (*(uint32_t*)0x4000241c &= FLAG)
#define Clr_LPTIM1_CNT(FLAG)                 (*(uint32_t*)0x4000241c |= ~FLAG)
#define  _LPTIM1_ISR_DOWN                                    (0x1 << 6)    // Counter direction change up to down
#define  _LPTIM1_ISR_UP                                      (0x1 << 5)    // Counter direction change down to up
#define  _LPTIM1_ISR_ARROK                                   (0x1 << 4)    // Autoreload register update OK
#define  _LPTIM1_ISR_CMPOK                                   (0x1 << 3)    // Compare register update OK
#define  _LPTIM1_ISR_EXTTRIG                                 (0x1 << 2)    // External trigger edge event
#define  _LPTIM1_ISR_ARRM                                    (0x1 << 1)    // Autoreload match
#define  _LPTIM1_ISR_CMPM                                    (0x1 << 0)    // Compare match
#define  _LPTIM1_ICR_DOWNCF                                  (0x1 << 6)    // Direction change to down Clear Flag
#define  _LPTIM1_ICR_UPCF                                    (0x1 << 5)    // Direction change to UP Clear Flag
#define  _LPTIM1_ICR_ARROKCF                                 (0x1 << 4)    // Autoreload register update OK Clear Flag
#define  _LPTIM1_ICR_CMPOKCF                                 (0x1 << 3)    // Compare register update OK Clear Flag
#define  _LPTIM1_ICR_EXTTRIGCF                               (0x1 << 2)    // External trigger valid edge Clear Flag
#define  _LPTIM1_ICR_ARRMCF                                  (0x1 << 1)    // Autoreload match Clear Flag
#define  _LPTIM1_ICR_CMPMCF                                  (0x1 << 0)    // compare match Clear Flag
#define  _LPTIM1_IER_DOWNIE                                  (0x1 << 6)    // Direction change to down Interrupt Enable
#define  _LPTIM1_IER_UPIE                                    (0x1 << 5)    // Direction change to UP Interrupt Enable
#define  _LPTIM1_IER_ARROKIE                                 (0x1 << 4)    // Autoreload register update OK Interrupt Enable
#define  _LPTIM1_IER_CMPOKIE                                 (0x1 << 3)    // Compare register update OK Interrupt Enable
#define  _LPTIM1_IER_EXTTRIGIE                               (0x1 << 2)    // External trigger valid edge Interrupt Enable
#define  _LPTIM1_IER_ARRMIE                                  (0x1 << 1)    // Autoreload match Interrupt Enable
#define  _LPTIM1_IER_CMPMIE                                  (0x1 << 0)    // Compare match Interrupt Enable
#define  _LPTIM1_CFGR_ENC                                    (0x1 << 24)    // Encoder mode enable
#define  _LPTIM1_CFGR_COUNTMODE                              (0x1 << 23)    // counter mode enabled
#define  _LPTIM1_CFGR_PRELOAD                                (0x1 << 22)    // Registers update mode
#define  _LPTIM1_CFGR_WAVPOL                                 (0x1 << 21)    // Waveform shape polarity
#define  _LPTIM1_CFGR_WAVE                                   (0x1 << 20)    // Waveform shape
#define  _LPTIM1_CFGR_TIMOUT                                 (0x1 << 19)    // Timeout enable
#define  _LPTIM1_CFGR_TRIGEN                                 (0x3 << 17)    // Trigger enable and polarity
#define  _LPTIM1_CFGR_TRIGSEL                                (0x7 << 13)    // Trigger selector
#define  _LPTIM1_CFGR_PRESC                                  (0x7 << 9)    // Clock prescaler
#define  _LPTIM1_CFGR_TRGFLT                                 (0x3 << 6)    // Configurable digital filter for trigger
#define  _LPTIM1_CFGR_CKFLT                                  (0x3 << 3)    // Configurable digital filter for external clock
#define  _LPTIM1_CFGR_CKPOL                                  (0x3 << 1)    // Clock Polarity
#define  _LPTIM1_CFGR_CKSEL                                  (0x1 << 0)    // Clock selector
#define  _LPTIM1_CR_CNTSTRT                                  (0x1 << 2)    // Timer start in continuous mode
#define  _LPTIM1_CR_SNGSTRT                                  (0x1 << 1)    // LPTIM start in single mode
#define  _LPTIM1_CR_ENABLE                                   (0x1 << 0)    // LPTIM Enable
#define  _LPTIM1_CMP_CMP                                     (0xffff << 0)    // Compare value
#define  _LPTIM1_ARR_ARR                                     (0xffff << 0)    // Auto reload value
#define  _LPTIM1_CNT_CNT                                     (0xffff << 0)    // Counter value

#define Get_ADC1_SR(FLAG)                    (*(uint32_t*)0x40012000 |= FLAG)
#define Get_ADC1_CR1(FLAG)                   (*(uint32_t*)0x40012004 |= FLAG)
#define Get_ADC1_CR2(FLAG)                   (*(uint32_t*)0x40012008 |= FLAG)
#define Get_ADC1_SMPR1(FLAG)                 (*(uint32_t*)0x4001200c |= FLAG)
#define Get_ADC1_SMPR2(FLAG)                 (*(uint32_t*)0x40012010 |= FLAG)
#define Get_ADC1_JOFR1(FLAG)                 (*(uint32_t*)0x40012014 |= FLAG)
#define Get_ADC1_JOFR2(FLAG)                 (*(uint32_t*)0x40012018 |= FLAG)
#define Get_ADC1_JOFR3(FLAG)                 (*(uint32_t*)0x4001201c |= FLAG)
#define Get_ADC1_JOFR4(FLAG)                 (*(uint32_t*)0x40012020 |= FLAG)
#define Get_ADC1_HTR(FLAG)                   (*(uint32_t*)0x40012024 |= FLAG)
#define Get_ADC1_LTR(FLAG)                   (*(uint32_t*)0x40012028 |= FLAG)
#define Get_ADC1_SQR1(FLAG)                  (*(uint32_t*)0x4001202c |= FLAG)
#define Get_ADC1_SQR2(FLAG)                  (*(uint32_t*)0x40012030 |= FLAG)
#define Get_ADC1_SQR3(FLAG)                  (*(uint32_t*)0x40012034 |= FLAG)
#define Get_ADC1_JSQR(FLAG)                  (*(uint32_t*)0x40012038 |= FLAG)
#define Get_ADC1_JDR1(FLAG)                  (*(uint32_t*)0x4001203c |= FLAG)
#define Get_ADC1_JDR2(FLAG)                  (*(uint32_t*)0x40012040 |= FLAG)
#define Get_ADC1_JDR3(FLAG)                  (*(uint32_t*)0x40012044 |= FLAG)
#define Get_ADC1_JDR4(FLAG)                  (*(uint32_t*)0x40012048 |= FLAG)
#define Get_ADC1_DR(FLAG)                    (*(uint32_t*)0x4001204c |= FLAG)
#define Get_ADC2_SR(FLAG)                    (*(uint32_t*)0x40012100 |= FLAG)
#define Get_ADC2_CR1(FLAG)                   (*(uint32_t*)0x40012104 |= FLAG)
#define Get_ADC2_CR2(FLAG)                   (*(uint32_t*)0x40012108 |= FLAG)
#define Get_ADC2_SMPR1(FLAG)                 (*(uint32_t*)0x4001210c |= FLAG)
#define Get_ADC2_SMPR2(FLAG)                 (*(uint32_t*)0x40012110 |= FLAG)
#define Get_ADC2_JOFR1(FLAG)                 (*(uint32_t*)0x40012114 |= FLAG)
#define Get_ADC2_JOFR2(FLAG)                 (*(uint32_t*)0x40012118 |= FLAG)
#define Get_ADC2_JOFR3(FLAG)                 (*(uint32_t*)0x4001211c |= FLAG)
#define Get_ADC2_JOFR4(FLAG)                 (*(uint32_t*)0x40012120 |= FLAG)
#define Get_ADC2_HTR(FLAG)                   (*(uint32_t*)0x40012124 |= FLAG)
#define Get_ADC2_LTR(FLAG)                   (*(uint32_t*)0x40012128 |= FLAG)
#define Get_ADC2_SQR1(FLAG)                  (*(uint32_t*)0x4001212c |= FLAG)
#define Get_ADC2_SQR2(FLAG)                  (*(uint32_t*)0x40012130 |= FLAG)
#define Get_ADC2_SQR3(FLAG)                  (*(uint32_t*)0x40012134 |= FLAG)
#define Get_ADC2_JSQR(FLAG)                  (*(uint32_t*)0x40012138 |= FLAG)
#define Get_ADC2_JDR1(FLAG)                  (*(uint32_t*)0x4001213c |= FLAG)
#define Get_ADC2_JDR2(FLAG)                  (*(uint32_t*)0x40012140 |= FLAG)
#define Get_ADC2_JDR3(FLAG)                  (*(uint32_t*)0x40012144 |= FLAG)
#define Get_ADC2_JDR4(FLAG)                  (*(uint32_t*)0x40012148 |= FLAG)
#define Get_ADC2_DR(FLAG)                    (*(uint32_t*)0x4001214c |= FLAG)
#define Get_ADC3_SR(FLAG)                    (*(uint32_t*)0x40012200 |= FLAG)
#define Get_ADC3_CR1(FLAG)                   (*(uint32_t*)0x40012204 |= FLAG)
#define Get_ADC3_CR2(FLAG)                   (*(uint32_t*)0x40012208 |= FLAG)
#define Get_ADC3_SMPR1(FLAG)                 (*(uint32_t*)0x4001220c |= FLAG)
#define Get_ADC3_SMPR2(FLAG)                 (*(uint32_t*)0x40012210 |= FLAG)
#define Get_ADC3_JOFR1(FLAG)                 (*(uint32_t*)0x40012214 |= FLAG)
#define Get_ADC3_JOFR2(FLAG)                 (*(uint32_t*)0x40012218 |= FLAG)
#define Get_ADC3_JOFR3(FLAG)                 (*(uint32_t*)0x4001221c |= FLAG)
#define Get_ADC3_JOFR4(FLAG)                 (*(uint32_t*)0x40012220 |= FLAG)
#define Get_ADC3_HTR(FLAG)                   (*(uint32_t*)0x40012224 |= FLAG)
#define Get_ADC3_LTR(FLAG)                   (*(uint32_t*)0x40012228 |= FLAG)
#define Get_ADC3_SQR1(FLAG)                  (*(uint32_t*)0x4001222c |= FLAG)
#define Get_ADC3_SQR2(FLAG)                  (*(uint32_t*)0x40012230 |= FLAG)
#define Get_ADC3_SQR3(FLAG)                  (*(uint32_t*)0x40012234 |= FLAG)
#define Get_ADC3_JSQR(FLAG)                  (*(uint32_t*)0x40012238 |= FLAG)
#define Get_ADC3_JDR1(FLAG)                  (*(uint32_t*)0x4001223c |= FLAG)
#define Get_ADC3_JDR2(FLAG)                  (*(uint32_t*)0x40012240 |= FLAG)
#define Get_ADC3_JDR3(FLAG)                  (*(uint32_t*)0x40012244 |= FLAG)
#define Get_ADC3_JDR4(FLAG)                  (*(uint32_t*)0x40012248 |= FLAG)
#define Get_ADC3_DR(FLAG)                    (*(uint32_t*)0x4001224c |= FLAG)
#define Set_ADC1_SR(FLAG)                    (*(uint32_t*)0x40012000 &= FLAG)
#define Clr_ADC1_SR(FLAG)                    (*(uint32_t*)0x40012000 |= ~FLAG)
#define Set_ADC1_CR1(FLAG)                   (*(uint32_t*)0x40012004 &= FLAG)
#define Clr_ADC1_CR1(FLAG)                   (*(uint32_t*)0x40012004 |= ~FLAG)
#define Set_ADC1_CR2(FLAG)                   (*(uint32_t*)0x40012008 &= FLAG)
#define Clr_ADC1_CR2(FLAG)                   (*(uint32_t*)0x40012008 |= ~FLAG)
#define Set_ADC1_SMPR1(FLAG)                 (*(uint32_t*)0x4001200c &= FLAG)
#define Clr_ADC1_SMPR1(FLAG)                 (*(uint32_t*)0x4001200c |= ~FLAG)
#define Set_ADC1_SMPR2(FLAG)                 (*(uint32_t*)0x40012010 &= FLAG)
#define Clr_ADC1_SMPR2(FLAG)                 (*(uint32_t*)0x40012010 |= ~FLAG)
#define Set_ADC1_JOFR1(FLAG)                 (*(uint32_t*)0x40012014 &= FLAG)
#define Clr_ADC1_JOFR1(FLAG)                 (*(uint32_t*)0x40012014 |= ~FLAG)
#define Set_ADC1_JOFR2(FLAG)                 (*(uint32_t*)0x40012018 &= FLAG)
#define Clr_ADC1_JOFR2(FLAG)                 (*(uint32_t*)0x40012018 |= ~FLAG)
#define Set_ADC1_JOFR3(FLAG)                 (*(uint32_t*)0x4001201c &= FLAG)
#define Clr_ADC1_JOFR3(FLAG)                 (*(uint32_t*)0x4001201c |= ~FLAG)
#define Set_ADC1_JOFR4(FLAG)                 (*(uint32_t*)0x40012020 &= FLAG)
#define Clr_ADC1_JOFR4(FLAG)                 (*(uint32_t*)0x40012020 |= ~FLAG)
#define Set_ADC1_HTR(FLAG)                   (*(uint32_t*)0x40012024 &= FLAG)
#define Clr_ADC1_HTR(FLAG)                   (*(uint32_t*)0x40012024 |= ~FLAG)
#define Set_ADC1_LTR(FLAG)                   (*(uint32_t*)0x40012028 &= FLAG)
#define Clr_ADC1_LTR(FLAG)                   (*(uint32_t*)0x40012028 |= ~FLAG)
#define Set_ADC1_SQR1(FLAG)                  (*(uint32_t*)0x4001202c &= FLAG)
#define Clr_ADC1_SQR1(FLAG)                  (*(uint32_t*)0x4001202c |= ~FLAG)
#define Set_ADC1_SQR2(FLAG)                  (*(uint32_t*)0x40012030 &= FLAG)
#define Clr_ADC1_SQR2(FLAG)                  (*(uint32_t*)0x40012030 |= ~FLAG)
#define Set_ADC1_SQR3(FLAG)                  (*(uint32_t*)0x40012034 &= FLAG)
#define Clr_ADC1_SQR3(FLAG)                  (*(uint32_t*)0x40012034 |= ~FLAG)
#define Set_ADC1_JSQR(FLAG)                  (*(uint32_t*)0x40012038 &= FLAG)
#define Clr_ADC1_JSQR(FLAG)                  (*(uint32_t*)0x40012038 |= ~FLAG)
#define Set_ADC1_JDR1(FLAG)                  (*(uint32_t*)0x4001203c &= FLAG)
#define Clr_ADC1_JDR1(FLAG)                  (*(uint32_t*)0x4001203c |= ~FLAG)
#define Set_ADC1_JDR2(FLAG)                  (*(uint32_t*)0x40012040 &= FLAG)
#define Clr_ADC1_JDR2(FLAG)                  (*(uint32_t*)0x40012040 |= ~FLAG)
#define Set_ADC1_JDR3(FLAG)                  (*(uint32_t*)0x40012044 &= FLAG)
#define Clr_ADC1_JDR3(FLAG)                  (*(uint32_t*)0x40012044 |= ~FLAG)
#define Set_ADC1_JDR4(FLAG)                  (*(uint32_t*)0x40012048 &= FLAG)
#define Clr_ADC1_JDR4(FLAG)                  (*(uint32_t*)0x40012048 |= ~FLAG)
#define Set_ADC1_DR(FLAG)                    (*(uint32_t*)0x4001204c &= FLAG)
#define Clr_ADC1_DR(FLAG)                    (*(uint32_t*)0x4001204c |= ~FLAG)
#define Set_ADC2_SR(FLAG)                    (*(uint32_t*)0x40012100 &= FLAG)
#define Clr_ADC2_SR(FLAG)                    (*(uint32_t*)0x40012100 |= ~FLAG)
#define Set_ADC2_CR1(FLAG)                   (*(uint32_t*)0x40012104 &= FLAG)
#define Clr_ADC2_CR1(FLAG)                   (*(uint32_t*)0x40012104 |= ~FLAG)
#define Set_ADC2_CR2(FLAG)                   (*(uint32_t*)0x40012108 &= FLAG)
#define Clr_ADC2_CR2(FLAG)                   (*(uint32_t*)0x40012108 |= ~FLAG)
#define Set_ADC2_SMPR1(FLAG)                 (*(uint32_t*)0x4001210c &= FLAG)
#define Clr_ADC2_SMPR1(FLAG)                 (*(uint32_t*)0x4001210c |= ~FLAG)
#define Set_ADC2_SMPR2(FLAG)                 (*(uint32_t*)0x40012110 &= FLAG)
#define Clr_ADC2_SMPR2(FLAG)                 (*(uint32_t*)0x40012110 |= ~FLAG)
#define Set_ADC2_JOFR1(FLAG)                 (*(uint32_t*)0x40012114 &= FLAG)
#define Clr_ADC2_JOFR1(FLAG)                 (*(uint32_t*)0x40012114 |= ~FLAG)
#define Set_ADC2_JOFR2(FLAG)                 (*(uint32_t*)0x40012118 &= FLAG)
#define Clr_ADC2_JOFR2(FLAG)                 (*(uint32_t*)0x40012118 |= ~FLAG)
#define Set_ADC2_JOFR3(FLAG)                 (*(uint32_t*)0x4001211c &= FLAG)
#define Clr_ADC2_JOFR3(FLAG)                 (*(uint32_t*)0x4001211c |= ~FLAG)
#define Set_ADC2_JOFR4(FLAG)                 (*(uint32_t*)0x40012120 &= FLAG)
#define Clr_ADC2_JOFR4(FLAG)                 (*(uint32_t*)0x40012120 |= ~FLAG)
#define Set_ADC2_HTR(FLAG)                   (*(uint32_t*)0x40012124 &= FLAG)
#define Clr_ADC2_HTR(FLAG)                   (*(uint32_t*)0x40012124 |= ~FLAG)
#define Set_ADC2_LTR(FLAG)                   (*(uint32_t*)0x40012128 &= FLAG)
#define Clr_ADC2_LTR(FLAG)                   (*(uint32_t*)0x40012128 |= ~FLAG)
#define Set_ADC2_SQR1(FLAG)                  (*(uint32_t*)0x4001212c &= FLAG)
#define Clr_ADC2_SQR1(FLAG)                  (*(uint32_t*)0x4001212c |= ~FLAG)
#define Set_ADC2_SQR2(FLAG)                  (*(uint32_t*)0x40012130 &= FLAG)
#define Clr_ADC2_SQR2(FLAG)                  (*(uint32_t*)0x40012130 |= ~FLAG)
#define Set_ADC2_SQR3(FLAG)                  (*(uint32_t*)0x40012134 &= FLAG)
#define Clr_ADC2_SQR3(FLAG)                  (*(uint32_t*)0x40012134 |= ~FLAG)
#define Set_ADC2_JSQR(FLAG)                  (*(uint32_t*)0x40012138 &= FLAG)
#define Clr_ADC2_JSQR(FLAG)                  (*(uint32_t*)0x40012138 |= ~FLAG)
#define Set_ADC2_JDR1(FLAG)                  (*(uint32_t*)0x4001213c &= FLAG)
#define Clr_ADC2_JDR1(FLAG)                  (*(uint32_t*)0x4001213c |= ~FLAG)
#define Set_ADC2_JDR2(FLAG)                  (*(uint32_t*)0x40012140 &= FLAG)
#define Clr_ADC2_JDR2(FLAG)                  (*(uint32_t*)0x40012140 |= ~FLAG)
#define Set_ADC2_JDR3(FLAG)                  (*(uint32_t*)0x40012144 &= FLAG)
#define Clr_ADC2_JDR3(FLAG)                  (*(uint32_t*)0x40012144 |= ~FLAG)
#define Set_ADC2_JDR4(FLAG)                  (*(uint32_t*)0x40012148 &= FLAG)
#define Clr_ADC2_JDR4(FLAG)                  (*(uint32_t*)0x40012148 |= ~FLAG)
#define Set_ADC2_DR(FLAG)                    (*(uint32_t*)0x4001214c &= FLAG)
#define Clr_ADC2_DR(FLAG)                    (*(uint32_t*)0x4001214c |= ~FLAG)
#define Set_ADC3_SR(FLAG)                    (*(uint32_t*)0x40012200 &= FLAG)
#define Clr_ADC3_SR(FLAG)                    (*(uint32_t*)0x40012200 |= ~FLAG)
#define Set_ADC3_CR1(FLAG)                   (*(uint32_t*)0x40012204 &= FLAG)
#define Clr_ADC3_CR1(FLAG)                   (*(uint32_t*)0x40012204 |= ~FLAG)
#define Set_ADC3_CR2(FLAG)                   (*(uint32_t*)0x40012208 &= FLAG)
#define Clr_ADC3_CR2(FLAG)                   (*(uint32_t*)0x40012208 |= ~FLAG)
#define Set_ADC3_SMPR1(FLAG)                 (*(uint32_t*)0x4001220c &= FLAG)
#define Clr_ADC3_SMPR1(FLAG)                 (*(uint32_t*)0x4001220c |= ~FLAG)
#define Set_ADC3_SMPR2(FLAG)                 (*(uint32_t*)0x40012210 &= FLAG)
#define Clr_ADC3_SMPR2(FLAG)                 (*(uint32_t*)0x40012210 |= ~FLAG)
#define Set_ADC3_JOFR1(FLAG)                 (*(uint32_t*)0x40012214 &= FLAG)
#define Clr_ADC3_JOFR1(FLAG)                 (*(uint32_t*)0x40012214 |= ~FLAG)
#define Set_ADC3_JOFR2(FLAG)                 (*(uint32_t*)0x40012218 &= FLAG)
#define Clr_ADC3_JOFR2(FLAG)                 (*(uint32_t*)0x40012218 |= ~FLAG)
#define Set_ADC3_JOFR3(FLAG)                 (*(uint32_t*)0x4001221c &= FLAG)
#define Clr_ADC3_JOFR3(FLAG)                 (*(uint32_t*)0x4001221c |= ~FLAG)
#define Set_ADC3_JOFR4(FLAG)                 (*(uint32_t*)0x40012220 &= FLAG)
#define Clr_ADC3_JOFR4(FLAG)                 (*(uint32_t*)0x40012220 |= ~FLAG)
#define Set_ADC3_HTR(FLAG)                   (*(uint32_t*)0x40012224 &= FLAG)
#define Clr_ADC3_HTR(FLAG)                   (*(uint32_t*)0x40012224 |= ~FLAG)
#define Set_ADC3_LTR(FLAG)                   (*(uint32_t*)0x40012228 &= FLAG)
#define Clr_ADC3_LTR(FLAG)                   (*(uint32_t*)0x40012228 |= ~FLAG)
#define Set_ADC3_SQR1(FLAG)                  (*(uint32_t*)0x4001222c &= FLAG)
#define Clr_ADC3_SQR1(FLAG)                  (*(uint32_t*)0x4001222c |= ~FLAG)
#define Set_ADC3_SQR2(FLAG)                  (*(uint32_t*)0x40012230 &= FLAG)
#define Clr_ADC3_SQR2(FLAG)                  (*(uint32_t*)0x40012230 |= ~FLAG)
#define Set_ADC3_SQR3(FLAG)                  (*(uint32_t*)0x40012234 &= FLAG)
#define Clr_ADC3_SQR3(FLAG)                  (*(uint32_t*)0x40012234 |= ~FLAG)
#define Set_ADC3_JSQR(FLAG)                  (*(uint32_t*)0x40012238 &= FLAG)
#define Clr_ADC3_JSQR(FLAG)                  (*(uint32_t*)0x40012238 |= ~FLAG)
#define Set_ADC3_JDR1(FLAG)                  (*(uint32_t*)0x4001223c &= FLAG)
#define Clr_ADC3_JDR1(FLAG)                  (*(uint32_t*)0x4001223c |= ~FLAG)
#define Set_ADC3_JDR2(FLAG)                  (*(uint32_t*)0x40012240 &= FLAG)
#define Clr_ADC3_JDR2(FLAG)                  (*(uint32_t*)0x40012240 |= ~FLAG)
#define Set_ADC3_JDR3(FLAG)                  (*(uint32_t*)0x40012244 &= FLAG)
#define Clr_ADC3_JDR3(FLAG)                  (*(uint32_t*)0x40012244 |= ~FLAG)
#define Set_ADC3_JDR4(FLAG)                  (*(uint32_t*)0x40012248 &= FLAG)
#define Clr_ADC3_JDR4(FLAG)                  (*(uint32_t*)0x40012248 |= ~FLAG)
#define Set_ADC3_DR(FLAG)                    (*(uint32_t*)0x4001224c &= FLAG)
#define Clr_ADC3_DR(FLAG)                    (*(uint32_t*)0x4001224c |= ~FLAG)
#define  _ADC1_SR_OVR                                        (0x1 << 5)    // Overrun
#define  _ADC1_SR_STRT                                       (0x1 << 4)    // Regular channel start flag
#define  _ADC1_SR_JSTRT                                      (0x1 << 3)    // Injected channel start flag
#define  _ADC1_SR_JEOC                                       (0x1 << 2)    // Injected channel end of conversion
#define  _ADC1_SR_EOC                                        (0x1 << 1)    // Regular channel end of conversion
#define  _ADC1_SR_AWD                                        (0x1 << 0)    // Analog watchdog flag
#define  _ADC1_CR1_OVRIE                                     (0x1 << 26)    // Overrun interrupt enable
#define  _ADC1_CR1_RES                                       (0x3 << 24)    // Resolution
#define  _ADC1_CR1_AWDEN                                     (0x1 << 23)    // Analog watchdog enable on regular channels
#define  _ADC1_CR1_JAWDEN                                    (0x1 << 22)    // Analog watchdog enable on injected channels
#define  _ADC1_CR1_DISCNUM                                   (0x7 << 13)    // Discontinuous mode channel count
#define  _ADC1_CR1_JDISCEN                                   (0x1 << 12)    // Discontinuous mode on injected channels
#define  _ADC1_CR1_DISCEN                                    (0x1 << 11)    // Discontinuous mode on regular channels
#define  _ADC1_CR1_JAUTO                                     (0x1 << 10)    // Automatic injected group conversion
#define  _ADC1_CR1_AWDSGL                                    (0x1 << 9)    // Enable the watchdog on a single channel in scan mode
#define  _ADC1_CR1_SCAN                                      (0x1 << 8)    // Scan mode
#define  _ADC1_CR1_JEOCIE                                    (0x1 << 7)    // Interrupt enable for injected channels
#define  _ADC1_CR1_AWDIE                                     (0x1 << 6)    // Analog watchdog interrupt enable
#define  _ADC1_CR1_EOCIE                                     (0x1 << 5)    // Interrupt enable for EOC
#define  _ADC1_CR1_AWDCH                                     (0x1f << 0)    // Analog watchdog channel select bits
#define  _ADC1_CR2_SWSTART                                   (0x1 << 30)    // Start conversion of regular channels
#define  _ADC1_CR2_EXTEN                                     (0x3 << 28)    // External trigger enable for regular channels
#define  _ADC1_CR2_EXTSEL                                    (0xf << 24)    // External event select for regular group
#define  _ADC1_CR2_JSWSTART                                  (0x1 << 22)    // Start conversion of injected channels
#define  _ADC1_CR2_JEXTEN                                    (0x3 << 20)    // External trigger enable for injected channels
#define  _ADC1_CR2_JEXTSEL                                   (0xf << 16)    // External event select for injected group
#define  _ADC1_CR2_ALIGN                                     (0x1 << 11)    // Data alignment
#define  _ADC1_CR2_EOCS                                      (0x1 << 10)    // End of conversion selection
#define  _ADC1_CR2_DDS                                       (0x1 << 9)    // DMA disable selection (for single ADC mode)
#define  _ADC1_CR2_DMA                                       (0x1 << 8)    // Direct memory access mode (for single ADC mode)
#define  _ADC1_CR2_CONT                                      (0x1 << 1)    // Continuous conversion
#define  _ADC1_CR2_ADON                                      (0x1 << 0)    // A/D Converter ON / OFF
#define  _ADC1_SMPR1_SMPx_x                                  (0xffffffff << 0)    // Sample time bits
#define  _ADC1_SMPR2_SMPx_x                                  (0xffffffff << 0)    // Sample time bits
#define  _ADC1_JOFR1_JOFFSET1                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC1_JOFR2_JOFFSET2                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC1_JOFR3_JOFFSET3                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC1_JOFR4_JOFFSET4                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC1_HTR_HT                                        (0xfff << 0)    // Analog watchdog higher threshold
#define  _ADC1_LTR_LT                                        (0xfff << 0)    // Analog watchdog lower threshold
#define  _ADC1_SQR1_L                                        (0xf << 20)    // Regular channel sequence length
#define  _ADC1_SQR1_SQ16                                     (0x1f << 15)    // 16th conversion in regular sequence
#define  _ADC1_SQR1_SQ15                                     (0x1f << 10)    // 15th conversion in regular sequence
#define  _ADC1_SQR1_SQ14                                     (0x1f << 5)    // 14th conversion in regular sequence
#define  _ADC1_SQR1_SQ13                                     (0x1f << 0)    // 13th conversion in regular sequence
#define  _ADC1_SQR2_SQ12                                     (0x1f << 25)    // 12th conversion in regular sequence
#define  _ADC1_SQR2_SQ11                                     (0x1f << 20)    // 11th conversion in regular sequence
#define  _ADC1_SQR2_SQ10                                     (0x1f << 15)    // 10th conversion in regular sequence
#define  _ADC1_SQR2_SQ9                                      (0x1f << 10)    // 9th conversion in regular sequence
#define  _ADC1_SQR2_SQ8                                      (0x1f << 5)    // 8th conversion in regular sequence
#define  _ADC1_SQR2_SQ7                                      (0x1f << 0)    // 7th conversion in regular sequence
#define  _ADC1_SQR3_SQ6                                      (0x1f << 25)    // 6th conversion in regular sequence
#define  _ADC1_SQR3_SQ5                                      (0x1f << 20)    // 5th conversion in regular sequence
#define  _ADC1_SQR3_SQ4                                      (0x1f << 15)    // 4th conversion in regular sequence
#define  _ADC1_SQR3_SQ3                                      (0x1f << 10)    // 3rd conversion in regular sequence
#define  _ADC1_SQR3_SQ2                                      (0x1f << 5)    // 2nd conversion in regular sequence
#define  _ADC1_SQR3_SQ1                                      (0x1f << 0)    // 1st conversion in regular sequence
#define  _ADC1_JSQR_JL                                       (0x3 << 20)    // Injected sequence length
#define  _ADC1_JSQR_JSQ4                                     (0x1f << 15)    // 4th conversion in injected sequence
#define  _ADC1_JSQR_JSQ3                                     (0x1f << 10)    // 3rd conversion in injected sequence
#define  _ADC1_JSQR_JSQ2                                     (0x1f << 5)    // 2nd conversion in injected sequence
#define  _ADC1_JSQR_JSQ1                                     (0x1f << 0)    // 1st conversion in injected sequence
#define  _ADC1_JDR1_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC1_JDR2_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC1_JDR3_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC1_JDR4_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC1_DR_DATA                                       (0xffff << 0)    // Regular data
#define  _ADC2_SR_OVR                                        (0x1 << 5)    // Overrun
#define  _ADC2_SR_STRT                                       (0x1 << 4)    // Regular channel start flag
#define  _ADC2_SR_JSTRT                                      (0x1 << 3)    // Injected channel start flag
#define  _ADC2_SR_JEOC                                       (0x1 << 2)    // Injected channel end of conversion
#define  _ADC2_SR_EOC                                        (0x1 << 1)    // Regular channel end of conversion
#define  _ADC2_SR_AWD                                        (0x1 << 0)    // Analog watchdog flag
#define  _ADC2_CR1_OVRIE                                     (0x1 << 26)    // Overrun interrupt enable
#define  _ADC2_CR1_RES                                       (0x3 << 24)    // Resolution
#define  _ADC2_CR1_AWDEN                                     (0x1 << 23)    // Analog watchdog enable on regular channels
#define  _ADC2_CR1_JAWDEN                                    (0x1 << 22)    // Analog watchdog enable on injected channels
#define  _ADC2_CR1_DISCNUM                                   (0x7 << 13)    // Discontinuous mode channel count
#define  _ADC2_CR1_JDISCEN                                   (0x1 << 12)    // Discontinuous mode on injected channels
#define  _ADC2_CR1_DISCEN                                    (0x1 << 11)    // Discontinuous mode on regular channels
#define  _ADC2_CR1_JAUTO                                     (0x1 << 10)    // Automatic injected group conversion
#define  _ADC2_CR1_AWDSGL                                    (0x1 << 9)    // Enable the watchdog on a single channel in scan mode
#define  _ADC2_CR1_SCAN                                      (0x1 << 8)    // Scan mode
#define  _ADC2_CR1_JEOCIE                                    (0x1 << 7)    // Interrupt enable for injected channels
#define  _ADC2_CR1_AWDIE                                     (0x1 << 6)    // Analog watchdog interrupt enable
#define  _ADC2_CR1_EOCIE                                     (0x1 << 5)    // Interrupt enable for EOC
#define  _ADC2_CR1_AWDCH                                     (0x1f << 0)    // Analog watchdog channel select bits
#define  _ADC2_CR2_SWSTART                                   (0x1 << 30)    // Start conversion of regular channels
#define  _ADC2_CR2_EXTEN                                     (0x3 << 28)    // External trigger enable for regular channels
#define  _ADC2_CR2_EXTSEL                                    (0xf << 24)    // External event select for regular group
#define  _ADC2_CR2_JSWSTART                                  (0x1 << 22)    // Start conversion of injected channels
#define  _ADC2_CR2_JEXTEN                                    (0x3 << 20)    // External trigger enable for injected channels
#define  _ADC2_CR2_JEXTSEL                                   (0xf << 16)    // External event select for injected group
#define  _ADC2_CR2_ALIGN                                     (0x1 << 11)    // Data alignment
#define  _ADC2_CR2_EOCS                                      (0x1 << 10)    // End of conversion selection
#define  _ADC2_CR2_DDS                                       (0x1 << 9)    // DMA disable selection (for single ADC mode)
#define  _ADC2_CR2_DMA                                       (0x1 << 8)    // Direct memory access mode (for single ADC mode)
#define  _ADC2_CR2_CONT                                      (0x1 << 1)    // Continuous conversion
#define  _ADC2_CR2_ADON                                      (0x1 << 0)    // A/D Converter ON / OFF
#define  _ADC2_SMPR1_SMPx_x                                  (0xffffffff << 0)    // Sample time bits
#define  _ADC2_SMPR2_SMPx_x                                  (0xffffffff << 0)    // Sample time bits
#define  _ADC2_JOFR1_JOFFSET1                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC2_JOFR2_JOFFSET2                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC2_JOFR3_JOFFSET3                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC2_JOFR4_JOFFSET4                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC2_HTR_HT                                        (0xfff << 0)    // Analog watchdog higher threshold
#define  _ADC2_LTR_LT                                        (0xfff << 0)    // Analog watchdog lower threshold
#define  _ADC2_SQR1_L                                        (0xf << 20)    // Regular channel sequence length
#define  _ADC2_SQR1_SQ16                                     (0x1f << 15)    // 16th conversion in regular sequence
#define  _ADC2_SQR1_SQ15                                     (0x1f << 10)    // 15th conversion in regular sequence
#define  _ADC2_SQR1_SQ14                                     (0x1f << 5)    // 14th conversion in regular sequence
#define  _ADC2_SQR1_SQ13                                     (0x1f << 0)    // 13th conversion in regular sequence
#define  _ADC2_SQR2_SQ12                                     (0x1f << 25)    // 12th conversion in regular sequence
#define  _ADC2_SQR2_SQ11                                     (0x1f << 20)    // 11th conversion in regular sequence
#define  _ADC2_SQR2_SQ10                                     (0x1f << 15)    // 10th conversion in regular sequence
#define  _ADC2_SQR2_SQ9                                      (0x1f << 10)    // 9th conversion in regular sequence
#define  _ADC2_SQR2_SQ8                                      (0x1f << 5)    // 8th conversion in regular sequence
#define  _ADC2_SQR2_SQ7                                      (0x1f << 0)    // 7th conversion in regular sequence
#define  _ADC2_SQR3_SQ6                                      (0x1f << 25)    // 6th conversion in regular sequence
#define  _ADC2_SQR3_SQ5                                      (0x1f << 20)    // 5th conversion in regular sequence
#define  _ADC2_SQR3_SQ4                                      (0x1f << 15)    // 4th conversion in regular sequence
#define  _ADC2_SQR3_SQ3                                      (0x1f << 10)    // 3rd conversion in regular sequence
#define  _ADC2_SQR3_SQ2                                      (0x1f << 5)    // 2nd conversion in regular sequence
#define  _ADC2_SQR3_SQ1                                      (0x1f << 0)    // 1st conversion in regular sequence
#define  _ADC2_JSQR_JL                                       (0x3 << 20)    // Injected sequence length
#define  _ADC2_JSQR_JSQ4                                     (0x1f << 15)    // 4th conversion in injected sequence
#define  _ADC2_JSQR_JSQ3                                     (0x1f << 10)    // 3rd conversion in injected sequence
#define  _ADC2_JSQR_JSQ2                                     (0x1f << 5)    // 2nd conversion in injected sequence
#define  _ADC2_JSQR_JSQ1                                     (0x1f << 0)    // 1st conversion in injected sequence
#define  _ADC2_JDR1_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC2_JDR2_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC2_JDR3_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC2_JDR4_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC2_DR_DATA                                       (0xffff << 0)    // Regular data
#define  _ADC3_SR_OVR                                        (0x1 << 5)    // Overrun
#define  _ADC3_SR_STRT                                       (0x1 << 4)    // Regular channel start flag
#define  _ADC3_SR_JSTRT                                      (0x1 << 3)    // Injected channel start flag
#define  _ADC3_SR_JEOC                                       (0x1 << 2)    // Injected channel end of conversion
#define  _ADC3_SR_EOC                                        (0x1 << 1)    // Regular channel end of conversion
#define  _ADC3_SR_AWD                                        (0x1 << 0)    // Analog watchdog flag
#define  _ADC3_CR1_OVRIE                                     (0x1 << 26)    // Overrun interrupt enable
#define  _ADC3_CR1_RES                                       (0x3 << 24)    // Resolution
#define  _ADC3_CR1_AWDEN                                     (0x1 << 23)    // Analog watchdog enable on regular channels
#define  _ADC3_CR1_JAWDEN                                    (0x1 << 22)    // Analog watchdog enable on injected channels
#define  _ADC3_CR1_DISCNUM                                   (0x7 << 13)    // Discontinuous mode channel count
#define  _ADC3_CR1_JDISCEN                                   (0x1 << 12)    // Discontinuous mode on injected channels
#define  _ADC3_CR1_DISCEN                                    (0x1 << 11)    // Discontinuous mode on regular channels
#define  _ADC3_CR1_JAUTO                                     (0x1 << 10)    // Automatic injected group conversion
#define  _ADC3_CR1_AWDSGL                                    (0x1 << 9)    // Enable the watchdog on a single channel in scan mode
#define  _ADC3_CR1_SCAN                                      (0x1 << 8)    // Scan mode
#define  _ADC3_CR1_JEOCIE                                    (0x1 << 7)    // Interrupt enable for injected channels
#define  _ADC3_CR1_AWDIE                                     (0x1 << 6)    // Analog watchdog interrupt enable
#define  _ADC3_CR1_EOCIE                                     (0x1 << 5)    // Interrupt enable for EOC
#define  _ADC3_CR1_AWDCH                                     (0x1f << 0)    // Analog watchdog channel select bits
#define  _ADC3_CR2_SWSTART                                   (0x1 << 30)    // Start conversion of regular channels
#define  _ADC3_CR2_EXTEN                                     (0x3 << 28)    // External trigger enable for regular channels
#define  _ADC3_CR2_EXTSEL                                    (0xf << 24)    // External event select for regular group
#define  _ADC3_CR2_JSWSTART                                  (0x1 << 22)    // Start conversion of injected channels
#define  _ADC3_CR2_JEXTEN                                    (0x3 << 20)    // External trigger enable for injected channels
#define  _ADC3_CR2_JEXTSEL                                   (0xf << 16)    // External event select for injected group
#define  _ADC3_CR2_ALIGN                                     (0x1 << 11)    // Data alignment
#define  _ADC3_CR2_EOCS                                      (0x1 << 10)    // End of conversion selection
#define  _ADC3_CR2_DDS                                       (0x1 << 9)    // DMA disable selection (for single ADC mode)
#define  _ADC3_CR2_DMA                                       (0x1 << 8)    // Direct memory access mode (for single ADC mode)
#define  _ADC3_CR2_CONT                                      (0x1 << 1)    // Continuous conversion
#define  _ADC3_CR2_ADON                                      (0x1 << 0)    // A/D Converter ON / OFF
#define  _ADC3_SMPR1_SMPx_x                                  (0xffffffff << 0)    // Sample time bits
#define  _ADC3_SMPR2_SMPx_x                                  (0xffffffff << 0)    // Sample time bits
#define  _ADC3_JOFR1_JOFFSET1                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC3_JOFR2_JOFFSET2                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC3_JOFR3_JOFFSET3                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC3_JOFR4_JOFFSET4                                (0xfff << 0)    // Data offset for injected channel x
#define  _ADC3_HTR_HT                                        (0xfff << 0)    // Analog watchdog higher threshold
#define  _ADC3_LTR_LT                                        (0xfff << 0)    // Analog watchdog lower threshold
#define  _ADC3_SQR1_L                                        (0xf << 20)    // Regular channel sequence length
#define  _ADC3_SQR1_SQ16                                     (0x1f << 15)    // 16th conversion in regular sequence
#define  _ADC3_SQR1_SQ15                                     (0x1f << 10)    // 15th conversion in regular sequence
#define  _ADC3_SQR1_SQ14                                     (0x1f << 5)    // 14th conversion in regular sequence
#define  _ADC3_SQR1_SQ13                                     (0x1f << 0)    // 13th conversion in regular sequence
#define  _ADC3_SQR2_SQ12                                     (0x1f << 25)    // 12th conversion in regular sequence
#define  _ADC3_SQR2_SQ11                                     (0x1f << 20)    // 11th conversion in regular sequence
#define  _ADC3_SQR2_SQ10                                     (0x1f << 15)    // 10th conversion in regular sequence
#define  _ADC3_SQR2_SQ9                                      (0x1f << 10)    // 9th conversion in regular sequence
#define  _ADC3_SQR2_SQ8                                      (0x1f << 5)    // 8th conversion in regular sequence
#define  _ADC3_SQR2_SQ7                                      (0x1f << 0)    // 7th conversion in regular sequence
#define  _ADC3_SQR3_SQ6                                      (0x1f << 25)    // 6th conversion in regular sequence
#define  _ADC3_SQR3_SQ5                                      (0x1f << 20)    // 5th conversion in regular sequence
#define  _ADC3_SQR3_SQ4                                      (0x1f << 15)    // 4th conversion in regular sequence
#define  _ADC3_SQR3_SQ3                                      (0x1f << 10)    // 3rd conversion in regular sequence
#define  _ADC3_SQR3_SQ2                                      (0x1f << 5)    // 2nd conversion in regular sequence
#define  _ADC3_SQR3_SQ1                                      (0x1f << 0)    // 1st conversion in regular sequence
#define  _ADC3_JSQR_JL                                       (0x3 << 20)    // Injected sequence length
#define  _ADC3_JSQR_JSQ4                                     (0x1f << 15)    // 4th conversion in injected sequence
#define  _ADC3_JSQR_JSQ3                                     (0x1f << 10)    // 3rd conversion in injected sequence
#define  _ADC3_JSQR_JSQ2                                     (0x1f << 5)    // 2nd conversion in injected sequence
#define  _ADC3_JSQR_JSQ1                                     (0x1f << 0)    // 1st conversion in injected sequence
#define  _ADC3_JDR1_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC3_JDR2_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC3_JDR3_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC3_JDR4_JDATA                                    (0xffff << 0)    // Injected data
#define  _ADC3_DR_DATA                                       (0xffff << 0)    // Regular data

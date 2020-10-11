#define Get_DAC_CR(FLAG)                     (*(uint32_t*)0x40007400 & FLAG)
#define Get_DAC_SWTRIGR(FLAG)                (*(uint32_t*)0x40007404 & FLAG)
#define Get_DAC_DHR12R1(FLAG)                (*(uint32_t*)0x40007408 & FLAG)
#define Get_DAC_DHR12L1(FLAG)                (*(uint32_t*)0x4000740c & FLAG)
#define Get_DAC_DHR8R1(FLAG)                 (*(uint32_t*)0x40007410 & FLAG)
#define Get_DAC_DHR12R2(FLAG)                (*(uint32_t*)0x40007414 & FLAG)
#define Get_DAC_DHR12L2(FLAG)                (*(uint32_t*)0x40007418 & FLAG)
#define Get_DAC_DHR8R2(FLAG)                 (*(uint32_t*)0x4000741c & FLAG)
#define Get_DAC_DHR12RD(FLAG)                (*(uint32_t*)0x40007420 & FLAG)
#define Get_DAC_DHR12LD(FLAG)                (*(uint32_t*)0x40007424 & FLAG)
#define Get_DAC_DHR8RD(FLAG)                 (*(uint32_t*)0x40007428 & FLAG)
#define Get_DAC_DOR1(FLAG)                   (*(uint32_t*)0x4000742c & FLAG)
#define Get_DAC_DOR2(FLAG)                   (*(uint32_t*)0x40007430 & FLAG)
#define Get_DAC_SR(FLAG)                     (*(uint32_t*)0x40007434 & FLAG)
#define Set_DAC_CR(FLAG)                     (*(uint32_t*)0x40007400 |= FLAG)
#define Clr_DAC_CR(FLAG)                     (*(uint32_t*)0x40007400 &= ~FLAG)
#define Set_DAC_SWTRIGR(FLAG)                (*(uint32_t*)0x40007404 |= FLAG)
#define Clr_DAC_SWTRIGR(FLAG)                (*(uint32_t*)0x40007404 &= ~FLAG)
#define Set_DAC_DHR12R1(FLAG)                (*(uint32_t*)0x40007408 |= FLAG)
#define Clr_DAC_DHR12R1(FLAG)                (*(uint32_t*)0x40007408 &= ~FLAG)
#define Set_DAC_DHR12L1(FLAG)                (*(uint32_t*)0x4000740c |= FLAG)
#define Clr_DAC_DHR12L1(FLAG)                (*(uint32_t*)0x4000740c &= ~FLAG)
#define Set_DAC_DHR8R1(FLAG)                 (*(uint32_t*)0x40007410 |= FLAG)
#define Clr_DAC_DHR8R1(FLAG)                 (*(uint32_t*)0x40007410 &= ~FLAG)
#define Set_DAC_DHR12R2(FLAG)                (*(uint32_t*)0x40007414 |= FLAG)
#define Clr_DAC_DHR12R2(FLAG)                (*(uint32_t*)0x40007414 &= ~FLAG)
#define Set_DAC_DHR12L2(FLAG)                (*(uint32_t*)0x40007418 |= FLAG)
#define Clr_DAC_DHR12L2(FLAG)                (*(uint32_t*)0x40007418 &= ~FLAG)
#define Set_DAC_DHR8R2(FLAG)                 (*(uint32_t*)0x4000741c |= FLAG)
#define Clr_DAC_DHR8R2(FLAG)                 (*(uint32_t*)0x4000741c &= ~FLAG)
#define Set_DAC_DHR12RD(FLAG)                (*(uint32_t*)0x40007420 |= FLAG)
#define Clr_DAC_DHR12RD(FLAG)                (*(uint32_t*)0x40007420 &= ~FLAG)
#define Set_DAC_DHR12LD(FLAG)                (*(uint32_t*)0x40007424 |= FLAG)
#define Clr_DAC_DHR12LD(FLAG)                (*(uint32_t*)0x40007424 &= ~FLAG)
#define Set_DAC_DHR8RD(FLAG)                 (*(uint32_t*)0x40007428 |= FLAG)
#define Clr_DAC_DHR8RD(FLAG)                 (*(uint32_t*)0x40007428 &= ~FLAG)
#define Set_DAC_DOR1(FLAG)                   (*(uint32_t*)0x4000742c |= FLAG)
#define Clr_DAC_DOR1(FLAG)                   (*(uint32_t*)0x4000742c &= ~FLAG)
#define Set_DAC_DOR2(FLAG)                   (*(uint32_t*)0x40007430 |= FLAG)
#define Clr_DAC_DOR2(FLAG)                   (*(uint32_t*)0x40007430 &= ~FLAG)
#define Set_DAC_SR(FLAG)                     (*(uint32_t*)0x40007434 |= FLAG)
#define Clr_DAC_SR(FLAG)                     (*(uint32_t*)0x40007434 &= ~FLAG)
#define  _DAC_CR_DMAUDRIE2                                   (0x1 << 29)    // DAC channel2 DMA underrun interrupt enable
#define  _DAC_CR_DMAEN2                                      (0x1 << 28)    // DAC channel2 DMA enable
#define  _DAC_CR_MAMP2                                       (0xf << 24)    // DAC channel2 mask/amplitude selector
#define  _DAC_CR_WAVE2                                       (0x3 << 22)    // DAC channel2 noise/triangle wave generation enable
#define  _DAC_CR_TSEL2                                       (0x7 << 19)    // DAC channel2 trigger selection
#define  _DAC_CR_TEN2                                        (0x1 << 18)    // DAC channel2 trigger enable
#define  _DAC_CR_BOFF2                                       (0x1 << 17)    // DAC channel2 output buffer disable
#define  _DAC_CR_EN2                                         (0x1 << 16)    // DAC channel2 enable
#define  _DAC_CR_DMAUDRIE1                                   (0x1 << 13)    // DAC channel1 DMA Underrun Interrupt enable
#define  _DAC_CR_DMAEN1                                      (0x1 << 12)    // DAC channel1 DMA enable
#define  _DAC_CR_MAMP1                                       (0xf << 8)    // DAC channel1 mask/amplitude selector
#define  _DAC_CR_WAVE1                                       (0x3 << 6)    // DAC channel1 noise/triangle wave generation enable
#define  _DAC_CR_TSEL1                                       (0x7 << 3)    // DAC channel1 trigger selection
#define  _DAC_CR_TEN1                                        (0x1 << 2)    // DAC channel1 trigger enable
#define  _DAC_CR_BOFF1                                       (0x1 << 1)    // DAC channel1 output buffer disable
#define  _DAC_CR_EN1                                         (0x1 << 0)    // DAC channel1 enable
#define  _DAC_SWTRIGR_SWTRIG2                                (0x1 << 1)    // DAC channel2 software trigger
#define  _DAC_SWTRIGR_SWTRIG1                                (0x1 << 0)    // DAC channel1 software trigger
#define  _DAC_DHR12R1_DACC1DHR                               (0xfff << 0)    // DAC channel1 12-bit right-aligned data
#define  _DAC_DHR12L1_DACC1DHR                               (0xfff << 4)    // DAC channel1 12-bit left-aligned data
#define  _DAC_DHR8R1_DACC1DHR                                (0xff << 0)    // DAC channel1 8-bit right-aligned data
#define  _DAC_DHR12R2_DACC2DHR                               (0xfff << 0)    // DAC channel2 12-bit right-aligned data
#define  _DAC_DHR12L2_DACC2DHR                               (0xfff << 4)    // DAC channel2 12-bit left-aligned data
#define  _DAC_DHR8R2_DACC2DHR                                (0xff << 0)    // DAC channel2 8-bit right-aligned data
#define  _DAC_DHR12RD_DACC2DHR                               (0xfff << 16)    // DAC channel2 12-bit right-aligned data
#define  _DAC_DHR12RD_DACC1DHR                               (0xfff << 0)    // DAC channel1 12-bit right-aligned data
#define  _DAC_DHR12LD_DACC2DHR                               (0xfff << 20)    // DAC channel2 12-bit left-aligned data
#define  _DAC_DHR12LD_DACC1DHR                               (0xfff << 4)    // DAC channel1 12-bit left-aligned data
#define  _DAC_DHR8RD_DACC2DHR                                (0xff << 8)    // DAC channel2 8-bit right-aligned data
#define  _DAC_DHR8RD_DACC1DHR                                (0xff << 0)    // DAC channel1 8-bit right-aligned data
#define  _DAC_DOR1_DACC1DOR                                  (0xfff << 0)    // DAC channel1 data output
#define  _DAC_DOR2_DACC2DOR                                  (0xfff << 0)    // DAC channel2 data output
#define  _DAC_SR_DMAUDR2                                     (0x1 << 29)    // DAC channel2 DMA underrun flag
#define  _DAC_SR_DMAUDR1                                     (0x1 << 13)    // DAC channel1 DMA underrun flag

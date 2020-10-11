#define Get_TIM2_CR1(FLAG)                   (*(uint32_t*)0x40000000 & FLAG)
#define Get_TIM2_CR2(FLAG)                   (*(uint32_t*)0x40000004 & FLAG)
#define Get_TIM2_SMCR(FLAG)                  (*(uint32_t*)0x40000008 & FLAG)
#define Get_TIM2_DIER(FLAG)                  (*(uint32_t*)0x4000000c & FLAG)
#define Get_TIM2_SR(FLAG)                    (*(uint32_t*)0x40000010 & FLAG)
#define Get_TIM2_EGR(FLAG)                   (*(uint32_t*)0x40000014 & FLAG)
#define Get_TIM2_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000018 & FLAG)
#define Get_TIM2_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000018 & FLAG)
#define Get_TIM2_CCMR2_Output(FLAG)          (*(uint32_t*)0x4000001c & FLAG)
#define Get_TIM2_CCMR2_Input(FLAG)           (*(uint32_t*)0x4000001c & FLAG)
#define Get_TIM2_CCER(FLAG)                  (*(uint32_t*)0x40000020 & FLAG)
#define Get_TIM2_CNT(FLAG)                   (*(uint32_t*)0x40000024 & FLAG)
#define Get_TIM2_PSC(FLAG)                   (*(uint32_t*)0x40000028 & FLAG)
#define Get_TIM2_ARR(FLAG)                   (*(uint32_t*)0x4000002c & FLAG)
#define Get_TIM2_CCR1(FLAG)                  (*(uint32_t*)0x40000034 & FLAG)
#define Get_TIM2_CCR2(FLAG)                  (*(uint32_t*)0x40000038 & FLAG)
#define Get_TIM2_CCR3(FLAG)                  (*(uint32_t*)0x4000003c & FLAG)
#define Get_TIM2_CCR4(FLAG)                  (*(uint32_t*)0x40000040 & FLAG)
#define Get_TIM2_DCR(FLAG)                   (*(uint32_t*)0x40000048 & FLAG)
#define Get_TIM2_DMAR(FLAG)                  (*(uint32_t*)0x4000004c & FLAG)
#define Get_TIM2_OR1(FLAG)                   (*(uint32_t*)0x40000050 & FLAG)
#define Get_TIM2_OR2(FLAG)                   (*(uint32_t*)0x40000060 & FLAG)
#define Get_TIM3_CR1(FLAG)                   (*(uint32_t*)0x40000400 & FLAG)
#define Get_TIM3_CR2(FLAG)                   (*(uint32_t*)0x40000404 & FLAG)
#define Get_TIM3_SMCR(FLAG)                  (*(uint32_t*)0x40000408 & FLAG)
#define Get_TIM3_DIER(FLAG)                  (*(uint32_t*)0x4000040c & FLAG)
#define Get_TIM3_SR(FLAG)                    (*(uint32_t*)0x40000410 & FLAG)
#define Get_TIM3_EGR(FLAG)                   (*(uint32_t*)0x40000414 & FLAG)
#define Get_TIM3_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000418 & FLAG)
#define Get_TIM3_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000418 & FLAG)
#define Get_TIM3_CCMR2_Output(FLAG)          (*(uint32_t*)0x4000041c & FLAG)
#define Get_TIM3_CCMR2_Input(FLAG)           (*(uint32_t*)0x4000041c & FLAG)
#define Get_TIM3_CCER(FLAG)                  (*(uint32_t*)0x40000420 & FLAG)
#define Get_TIM3_CNT(FLAG)                   (*(uint32_t*)0x40000424 & FLAG)
#define Get_TIM3_PSC(FLAG)                   (*(uint32_t*)0x40000428 & FLAG)
#define Get_TIM3_ARR(FLAG)                   (*(uint32_t*)0x4000042c & FLAG)
#define Get_TIM3_CCR1(FLAG)                  (*(uint32_t*)0x40000434 & FLAG)
#define Get_TIM3_CCR2(FLAG)                  (*(uint32_t*)0x40000438 & FLAG)
#define Get_TIM3_CCR3(FLAG)                  (*(uint32_t*)0x4000043c & FLAG)
#define Get_TIM3_CCR4(FLAG)                  (*(uint32_t*)0x40000440 & FLAG)
#define Get_TIM3_DCR(FLAG)                   (*(uint32_t*)0x40000448 & FLAG)
#define Get_TIM3_DMAR(FLAG)                  (*(uint32_t*)0x4000044c & FLAG)
#define Get_TIM3_OR1(FLAG)                   (*(uint32_t*)0x40000450 & FLAG)
#define Get_TIM3_OR2(FLAG)                   (*(uint32_t*)0x40000460 & FLAG)
#define Get_TIM4_CR1(FLAG)                   (*(uint32_t*)0x40000800 & FLAG)
#define Get_TIM4_CR2(FLAG)                   (*(uint32_t*)0x40000804 & FLAG)
#define Get_TIM4_SMCR(FLAG)                  (*(uint32_t*)0x40000808 & FLAG)
#define Get_TIM4_DIER(FLAG)                  (*(uint32_t*)0x4000080c & FLAG)
#define Get_TIM4_SR(FLAG)                    (*(uint32_t*)0x40000810 & FLAG)
#define Get_TIM4_EGR(FLAG)                   (*(uint32_t*)0x40000814 & FLAG)
#define Get_TIM4_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000818 & FLAG)
#define Get_TIM4_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000818 & FLAG)
#define Get_TIM4_CCMR2_Output(FLAG)          (*(uint32_t*)0x4000081c & FLAG)
#define Get_TIM4_CCMR2_Input(FLAG)           (*(uint32_t*)0x4000081c & FLAG)
#define Get_TIM4_CCER(FLAG)                  (*(uint32_t*)0x40000820 & FLAG)
#define Get_TIM4_CNT(FLAG)                   (*(uint32_t*)0x40000824 & FLAG)
#define Get_TIM4_PSC(FLAG)                   (*(uint32_t*)0x40000828 & FLAG)
#define Get_TIM4_ARR(FLAG)                   (*(uint32_t*)0x4000082c & FLAG)
#define Get_TIM4_CCR1(FLAG)                  (*(uint32_t*)0x40000834 & FLAG)
#define Get_TIM4_CCR2(FLAG)                  (*(uint32_t*)0x40000838 & FLAG)
#define Get_TIM4_CCR3(FLAG)                  (*(uint32_t*)0x4000083c & FLAG)
#define Get_TIM4_CCR4(FLAG)                  (*(uint32_t*)0x40000840 & FLAG)
#define Get_TIM4_DCR(FLAG)                   (*(uint32_t*)0x40000848 & FLAG)
#define Get_TIM4_DMAR(FLAG)                  (*(uint32_t*)0x4000084c & FLAG)
#define Get_TIM5_CR1(FLAG)                   (*(uint32_t*)0x40000c00 & FLAG)
#define Get_TIM5_CR2(FLAG)                   (*(uint32_t*)0x40000c04 & FLAG)
#define Get_TIM5_SMCR(FLAG)                  (*(uint32_t*)0x40000c08 & FLAG)
#define Get_TIM5_DIER(FLAG)                  (*(uint32_t*)0x40000c0c & FLAG)
#define Get_TIM5_SR(FLAG)                    (*(uint32_t*)0x40000c10 & FLAG)
#define Get_TIM5_EGR(FLAG)                   (*(uint32_t*)0x40000c14 & FLAG)
#define Get_TIM5_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000c18 & FLAG)
#define Get_TIM5_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000c18 & FLAG)
#define Get_TIM5_CCMR2_Output(FLAG)          (*(uint32_t*)0x40000c1c & FLAG)
#define Get_TIM5_CCMR2_Input(FLAG)           (*(uint32_t*)0x40000c1c & FLAG)
#define Get_TIM5_CCER(FLAG)                  (*(uint32_t*)0x40000c20 & FLAG)
#define Get_TIM5_CNT(FLAG)                   (*(uint32_t*)0x40000c24 & FLAG)
#define Get_TIM5_PSC(FLAG)                   (*(uint32_t*)0x40000c28 & FLAG)
#define Get_TIM5_ARR(FLAG)                   (*(uint32_t*)0x40000c2c & FLAG)
#define Get_TIM5_CCR1(FLAG)                  (*(uint32_t*)0x40000c34 & FLAG)
#define Get_TIM5_CCR2(FLAG)                  (*(uint32_t*)0x40000c38 & FLAG)
#define Get_TIM5_CCR3(FLAG)                  (*(uint32_t*)0x40000c3c & FLAG)
#define Get_TIM5_CCR4(FLAG)                  (*(uint32_t*)0x40000c40 & FLAG)
#define Get_TIM5_DCR(FLAG)                   (*(uint32_t*)0x40000c48 & FLAG)
#define Get_TIM5_DMAR(FLAG)                  (*(uint32_t*)0x40000c4c & FLAG)
#define Get_TIM6_CR1(FLAG)                   (*(uint32_t*)0x40001000 & FLAG)
#define Get_TIM6_CR2(FLAG)                   (*(uint32_t*)0x40001004 & FLAG)
#define Get_TIM6_DIER(FLAG)                  (*(uint32_t*)0x4000100c & FLAG)
#define Get_TIM6_SR(FLAG)                    (*(uint32_t*)0x40001010 & FLAG)
#define Get_TIM6_EGR(FLAG)                   (*(uint32_t*)0x40001014 & FLAG)
#define Get_TIM6_CNT(FLAG)                   (*(uint32_t*)0x40001024 & FLAG)
#define Get_TIM6_PSC(FLAG)                   (*(uint32_t*)0x40001028 & FLAG)
#define Get_TIM6_ARR(FLAG)                   (*(uint32_t*)0x4000102c & FLAG)
#define Get_TIM7_CR1(FLAG)                   (*(uint32_t*)0x40001400 & FLAG)
#define Get_TIM7_CR2(FLAG)                   (*(uint32_t*)0x40001404 & FLAG)
#define Get_TIM7_DIER(FLAG)                  (*(uint32_t*)0x4000140c & FLAG)
#define Get_TIM7_SR(FLAG)                    (*(uint32_t*)0x40001410 & FLAG)
#define Get_TIM7_EGR(FLAG)                   (*(uint32_t*)0x40001414 & FLAG)
#define Get_TIM7_CNT(FLAG)                   (*(uint32_t*)0x40001424 & FLAG)
#define Get_TIM7_PSC(FLAG)                   (*(uint32_t*)0x40001428 & FLAG)
#define Get_TIM7_ARR(FLAG)                   (*(uint32_t*)0x4000142c & FLAG)
#define Get_TIM12_CR1(FLAG)                  (*(uint32_t*)0x40001800 & FLAG)
#define Get_TIM12_SMCR(FLAG)                 (*(uint32_t*)0x40001808 & FLAG)
#define Get_TIM12_DIER(FLAG)                 (*(uint32_t*)0x4000180c & FLAG)
#define Get_TIM12_SR(FLAG)                   (*(uint32_t*)0x40001810 & FLAG)
#define Get_TIM12_EGR(FLAG)                  (*(uint32_t*)0x40001814 & FLAG)
#define Get_TIM12_CCMR1_Output(FLAG)         (*(uint32_t*)0x40001818 & FLAG)
#define Get_TIM12_CCMR1_Input(FLAG)          (*(uint32_t*)0x40001818 & FLAG)
#define Get_TIM12_CCER(FLAG)                 (*(uint32_t*)0x40001820 & FLAG)
#define Get_TIM12_CNT(FLAG)                  (*(uint32_t*)0x40001824 & FLAG)
#define Get_TIM12_PSC(FLAG)                  (*(uint32_t*)0x40001828 & FLAG)
#define Get_TIM12_ARR(FLAG)                  (*(uint32_t*)0x4000182c & FLAG)
#define Get_TIM12_CCR1(FLAG)                 (*(uint32_t*)0x40001834 & FLAG)
#define Get_TIM12_CCR2(FLAG)                 (*(uint32_t*)0x40001838 & FLAG)
#define Get_TIM13_CR1(FLAG)                  (*(uint32_t*)0x40001c00 & FLAG)
#define Get_TIM13_DIER(FLAG)                 (*(uint32_t*)0x40001c0c & FLAG)
#define Get_TIM13_SR(FLAG)                   (*(uint32_t*)0x40001c10 & FLAG)
#define Get_TIM13_EGR(FLAG)                  (*(uint32_t*)0x40001c14 & FLAG)
#define Get_TIM13_CCMR1_Output(FLAG)         (*(uint32_t*)0x40001c18 & FLAG)
#define Get_TIM13_CCMR1_Input(FLAG)          (*(uint32_t*)0x40001c18 & FLAG)
#define Get_TIM13_CCER(FLAG)                 (*(uint32_t*)0x40001c20 & FLAG)
#define Get_TIM13_CNT(FLAG)                  (*(uint32_t*)0x40001c24 & FLAG)
#define Get_TIM13_PSC(FLAG)                  (*(uint32_t*)0x40001c28 & FLAG)
#define Get_TIM13_ARR(FLAG)                  (*(uint32_t*)0x40001c2c & FLAG)
#define Get_TIM13_CCR1(FLAG)                 (*(uint32_t*)0x40001c34 & FLAG)
#define Get_TIM13_SMCR(FLAG)                 (*(uint32_t*)0x40001c08 & FLAG)
#define Get_TIM13_OR(FLAG)                   (*(uint32_t*)0x40001c50 & FLAG)
#define Get_TIM14_CR1(FLAG)                  (*(uint32_t*)0x40002000 & FLAG)
#define Get_TIM14_DIER(FLAG)                 (*(uint32_t*)0x4000200c & FLAG)
#define Get_TIM14_SR(FLAG)                   (*(uint32_t*)0x40002010 & FLAG)
#define Get_TIM14_EGR(FLAG)                  (*(uint32_t*)0x40002014 & FLAG)
#define Get_TIM14_CCMR1_Output(FLAG)         (*(uint32_t*)0x40002018 & FLAG)
#define Get_TIM14_CCMR1_Input(FLAG)          (*(uint32_t*)0x40002018 & FLAG)
#define Get_TIM14_CCER(FLAG)                 (*(uint32_t*)0x40002020 & FLAG)
#define Get_TIM14_CNT(FLAG)                  (*(uint32_t*)0x40002024 & FLAG)
#define Get_TIM14_PSC(FLAG)                  (*(uint32_t*)0x40002028 & FLAG)
#define Get_TIM14_ARR(FLAG)                  (*(uint32_t*)0x4000202c & FLAG)
#define Get_TIM14_CCR1(FLAG)                 (*(uint32_t*)0x40002034 & FLAG)
#define Get_TIM14_SMCR(FLAG)                 (*(uint32_t*)0x40002008 & FLAG)
#define Get_TIM14_OR(FLAG)                   (*(uint32_t*)0x40002050 & FLAG)
#define Get_TIM1_CR1(FLAG)                   (*(uint32_t*)0x40010000 & FLAG)
#define Get_TIM1_CR2(FLAG)                   (*(uint32_t*)0x40010004 & FLAG)
#define Get_TIM1_SMCR(FLAG)                  (*(uint32_t*)0x40010008 & FLAG)
#define Get_TIM1_DIER(FLAG)                  (*(uint32_t*)0x4001000c & FLAG)
#define Get_TIM1_SR(FLAG)                    (*(uint32_t*)0x40010010 & FLAG)
#define Get_TIM1_EGR(FLAG)                   (*(uint32_t*)0x40010014 & FLAG)
#define Get_TIM1_CCMR1_Output(FLAG)          (*(uint32_t*)0x40010018 & FLAG)
#define Get_TIM1_CCMR1_Input(FLAG)           (*(uint32_t*)0x40010018 & FLAG)
#define Get_TIM1_CCMR2_Output(FLAG)          (*(uint32_t*)0x4001001c & FLAG)
#define Get_TIM1_CCMR2_Input(FLAG)           (*(uint32_t*)0x4001001c & FLAG)
#define Get_TIM1_CCER(FLAG)                  (*(uint32_t*)0x40010020 & FLAG)
#define Get_TIM1_CNT(FLAG)                   (*(uint32_t*)0x40010024 & FLAG)
#define Get_TIM1_PSC(FLAG)                   (*(uint32_t*)0x40010028 & FLAG)
#define Get_TIM1_ARR(FLAG)                   (*(uint32_t*)0x4001002c & FLAG)
#define Get_TIM1_CCR1(FLAG)                  (*(uint32_t*)0x40010034 & FLAG)
#define Get_TIM1_CCR2(FLAG)                  (*(uint32_t*)0x40010038 & FLAG)
#define Get_TIM1_CCR3(FLAG)                  (*(uint32_t*)0x4001003c & FLAG)
#define Get_TIM1_CCR4(FLAG)                  (*(uint32_t*)0x40010040 & FLAG)
#define Get_TIM1_DCR(FLAG)                   (*(uint32_t*)0x40010048 & FLAG)
#define Get_TIM1_DMAR(FLAG)                  (*(uint32_t*)0x4001004c & FLAG)
#define Get_TIM1_RCR(FLAG)                   (*(uint32_t*)0x40010030 & FLAG)
#define Get_TIM1_BDTR(FLAG)                  (*(uint32_t*)0x40010044 & FLAG)
#define Get_TIM1_CCMR3_Output(FLAG)          (*(uint32_t*)0x40010054 & FLAG)
#define Get_TIM1_CCR5(FLAG)                  (*(uint32_t*)0x40010058 & FLAG)
#define Get_TIM1_CRR6(FLAG)                  (*(uint32_t*)0x4001005c & FLAG)
#define Get_TIM1_AF1(FLAG)                   (*(uint32_t*)0x40010060 & FLAG)
#define Get_TIM1_AF2(FLAG)                   (*(uint32_t*)0x40010064 & FLAG)
#define Get_TIM8_CR1(FLAG)                   (*(uint32_t*)0x40010400 & FLAG)
#define Get_TIM8_CR2(FLAG)                   (*(uint32_t*)0x40010404 & FLAG)
#define Get_TIM8_SMCR(FLAG)                  (*(uint32_t*)0x40010408 & FLAG)
#define Get_TIM8_DIER(FLAG)                  (*(uint32_t*)0x4001040c & FLAG)
#define Get_TIM8_SR(FLAG)                    (*(uint32_t*)0x40010410 & FLAG)
#define Get_TIM8_EGR(FLAG)                   (*(uint32_t*)0x40010414 & FLAG)
#define Get_TIM8_CCMR1_Output(FLAG)          (*(uint32_t*)0x40010418 & FLAG)
#define Get_TIM8_CCMR1_Input(FLAG)           (*(uint32_t*)0x40010418 & FLAG)
#define Get_TIM8_CCMR2_Output(FLAG)          (*(uint32_t*)0x4001041c & FLAG)
#define Get_TIM8_CCMR2_Input(FLAG)           (*(uint32_t*)0x4001041c & FLAG)
#define Get_TIM8_CCER(FLAG)                  (*(uint32_t*)0x40010420 & FLAG)
#define Get_TIM8_CNT(FLAG)                   (*(uint32_t*)0x40010424 & FLAG)
#define Get_TIM8_PSC(FLAG)                   (*(uint32_t*)0x40010428 & FLAG)
#define Get_TIM8_ARR(FLAG)                   (*(uint32_t*)0x4001042c & FLAG)
#define Get_TIM8_CCR1(FLAG)                  (*(uint32_t*)0x40010434 & FLAG)
#define Get_TIM8_CCR2(FLAG)                  (*(uint32_t*)0x40010438 & FLAG)
#define Get_TIM8_CCR3(FLAG)                  (*(uint32_t*)0x4001043c & FLAG)
#define Get_TIM8_CCR4(FLAG)                  (*(uint32_t*)0x40010440 & FLAG)
#define Get_TIM8_DCR(FLAG)                   (*(uint32_t*)0x40010448 & FLAG)
#define Get_TIM8_DMAR(FLAG)                  (*(uint32_t*)0x4001044c & FLAG)
#define Get_TIM8_RCR(FLAG)                   (*(uint32_t*)0x40010430 & FLAG)
#define Get_TIM8_BDTR(FLAG)                  (*(uint32_t*)0x40010444 & FLAG)
#define Get_TIM8_CCMR3_Output(FLAG)          (*(uint32_t*)0x40010454 & FLAG)
#define Get_TIM8_CCR5(FLAG)                  (*(uint32_t*)0x40010458 & FLAG)
#define Get_TIM8_CRR6(FLAG)                  (*(uint32_t*)0x4001045c & FLAG)
#define Get_TIM8_AF1(FLAG)                   (*(uint32_t*)0x40010460 & FLAG)
#define Get_TIM8_AF2(FLAG)                   (*(uint32_t*)0x40010464 & FLAG)
#define Get_TIM9_CR1(FLAG)                   (*(uint32_t*)0x40014000 & FLAG)
#define Get_TIM9_SMCR(FLAG)                  (*(uint32_t*)0x40014008 & FLAG)
#define Get_TIM9_DIER(FLAG)                  (*(uint32_t*)0x4001400c & FLAG)
#define Get_TIM9_SR(FLAG)                    (*(uint32_t*)0x40014010 & FLAG)
#define Get_TIM9_EGR(FLAG)                   (*(uint32_t*)0x40014014 & FLAG)
#define Get_TIM9_CCMR1_Output(FLAG)          (*(uint32_t*)0x40014018 & FLAG)
#define Get_TIM9_CCMR1_Input(FLAG)           (*(uint32_t*)0x40014018 & FLAG)
#define Get_TIM9_CCER(FLAG)                  (*(uint32_t*)0x40014020 & FLAG)
#define Get_TIM9_CNT(FLAG)                   (*(uint32_t*)0x40014024 & FLAG)
#define Get_TIM9_PSC(FLAG)                   (*(uint32_t*)0x40014028 & FLAG)
#define Get_TIM9_ARR(FLAG)                   (*(uint32_t*)0x4001402c & FLAG)
#define Get_TIM9_CCR1(FLAG)                  (*(uint32_t*)0x40014034 & FLAG)
#define Get_TIM9_CCR2(FLAG)                  (*(uint32_t*)0x40014038 & FLAG)
#define Get_TIM10_CR1(FLAG)                  (*(uint32_t*)0x40014400 & FLAG)
#define Get_TIM10_DIER(FLAG)                 (*(uint32_t*)0x4001440c & FLAG)
#define Get_TIM10_SR(FLAG)                   (*(uint32_t*)0x40014410 & FLAG)
#define Get_TIM10_EGR(FLAG)                  (*(uint32_t*)0x40014414 & FLAG)
#define Get_TIM10_CCMR1_Output(FLAG)         (*(uint32_t*)0x40014418 & FLAG)
#define Get_TIM10_CCMR1_Input(FLAG)          (*(uint32_t*)0x40014418 & FLAG)
#define Get_TIM10_CCER(FLAG)                 (*(uint32_t*)0x40014420 & FLAG)
#define Get_TIM10_CNT(FLAG)                  (*(uint32_t*)0x40014424 & FLAG)
#define Get_TIM10_PSC(FLAG)                  (*(uint32_t*)0x40014428 & FLAG)
#define Get_TIM10_ARR(FLAG)                  (*(uint32_t*)0x4001442c & FLAG)
#define Get_TIM10_CCR1(FLAG)                 (*(uint32_t*)0x40014434 & FLAG)
#define Get_TIM10_SMCR(FLAG)                 (*(uint32_t*)0x40014408 & FLAG)
#define Get_TIM10_OR(FLAG)                   (*(uint32_t*)0x40014450 & FLAG)
#define Get_TIM11_CR1(FLAG)                  (*(uint32_t*)0x40014800 & FLAG)
#define Get_TIM11_DIER(FLAG)                 (*(uint32_t*)0x4001480c & FLAG)
#define Get_TIM11_SR(FLAG)                   (*(uint32_t*)0x40014810 & FLAG)
#define Get_TIM11_EGR(FLAG)                  (*(uint32_t*)0x40014814 & FLAG)
#define Get_TIM11_CCMR1_Output(FLAG)         (*(uint32_t*)0x40014818 & FLAG)
#define Get_TIM11_CCMR1_Input(FLAG)          (*(uint32_t*)0x40014818 & FLAG)
#define Get_TIM11_CCER(FLAG)                 (*(uint32_t*)0x40014820 & FLAG)
#define Get_TIM11_CNT(FLAG)                  (*(uint32_t*)0x40014824 & FLAG)
#define Get_TIM11_PSC(FLAG)                  (*(uint32_t*)0x40014828 & FLAG)
#define Get_TIM11_ARR(FLAG)                  (*(uint32_t*)0x4001482c & FLAG)
#define Get_TIM11_CCR1(FLAG)                 (*(uint32_t*)0x40014834 & FLAG)
#define Get_TIM11_SMCR(FLAG)                 (*(uint32_t*)0x40014808 & FLAG)
#define Get_TIM11_OR(FLAG)                   (*(uint32_t*)0x40014850 & FLAG)
#define Set_TIM2_CR1(FLAG)                   (*(uint32_t*)0x40000000 |= FLAG)
#define Clr_TIM2_CR1(FLAG)                   (*(uint32_t*)0x40000000 &= ~FLAG)
#define Set_TIM2_CR2(FLAG)                   (*(uint32_t*)0x40000004 |= FLAG)
#define Clr_TIM2_CR2(FLAG)                   (*(uint32_t*)0x40000004 &= ~FLAG)
#define Set_TIM2_SMCR(FLAG)                  (*(uint32_t*)0x40000008 |= FLAG)
#define Clr_TIM2_SMCR(FLAG)                  (*(uint32_t*)0x40000008 &= ~FLAG)
#define Set_TIM2_DIER(FLAG)                  (*(uint32_t*)0x4000000c |= FLAG)
#define Clr_TIM2_DIER(FLAG)                  (*(uint32_t*)0x4000000c &= ~FLAG)
#define Set_TIM2_SR(FLAG)                    (*(uint32_t*)0x40000010 |= FLAG)
#define Clr_TIM2_SR(FLAG)                    (*(uint32_t*)0x40000010 &= ~FLAG)
#define Set_TIM2_EGR(FLAG)                   (*(uint32_t*)0x40000014 |= FLAG)
#define Clr_TIM2_EGR(FLAG)                   (*(uint32_t*)0x40000014 &= ~FLAG)
#define Set_TIM2_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000018 |= FLAG)
#define Clr_TIM2_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000018 &= ~FLAG)
#define Set_TIM2_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000018 |= FLAG)
#define Clr_TIM2_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000018 &= ~FLAG)
#define Set_TIM2_CCMR2_Output(FLAG)          (*(uint32_t*)0x4000001c |= FLAG)
#define Clr_TIM2_CCMR2_Output(FLAG)          (*(uint32_t*)0x4000001c &= ~FLAG)
#define Set_TIM2_CCMR2_Input(FLAG)           (*(uint32_t*)0x4000001c |= FLAG)
#define Clr_TIM2_CCMR2_Input(FLAG)           (*(uint32_t*)0x4000001c &= ~FLAG)
#define Set_TIM2_CCER(FLAG)                  (*(uint32_t*)0x40000020 |= FLAG)
#define Clr_TIM2_CCER(FLAG)                  (*(uint32_t*)0x40000020 &= ~FLAG)
#define Set_TIM2_CNT(FLAG)                   (*(uint32_t*)0x40000024 |= FLAG)
#define Clr_TIM2_CNT(FLAG)                   (*(uint32_t*)0x40000024 &= ~FLAG)
#define Set_TIM2_PSC(FLAG)                   (*(uint32_t*)0x40000028 |= FLAG)
#define Clr_TIM2_PSC(FLAG)                   (*(uint32_t*)0x40000028 &= ~FLAG)
#define Set_TIM2_ARR(FLAG)                   (*(uint32_t*)0x4000002c |= FLAG)
#define Clr_TIM2_ARR(FLAG)                   (*(uint32_t*)0x4000002c &= ~FLAG)
#define Set_TIM2_CCR1(FLAG)                  (*(uint32_t*)0x40000034 |= FLAG)
#define Clr_TIM2_CCR1(FLAG)                  (*(uint32_t*)0x40000034 &= ~FLAG)
#define Set_TIM2_CCR2(FLAG)                  (*(uint32_t*)0x40000038 |= FLAG)
#define Clr_TIM2_CCR2(FLAG)                  (*(uint32_t*)0x40000038 &= ~FLAG)
#define Set_TIM2_CCR3(FLAG)                  (*(uint32_t*)0x4000003c |= FLAG)
#define Clr_TIM2_CCR3(FLAG)                  (*(uint32_t*)0x4000003c &= ~FLAG)
#define Set_TIM2_CCR4(FLAG)                  (*(uint32_t*)0x40000040 |= FLAG)
#define Clr_TIM2_CCR4(FLAG)                  (*(uint32_t*)0x40000040 &= ~FLAG)
#define Set_TIM2_DCR(FLAG)                   (*(uint32_t*)0x40000048 |= FLAG)
#define Clr_TIM2_DCR(FLAG)                   (*(uint32_t*)0x40000048 &= ~FLAG)
#define Set_TIM2_DMAR(FLAG)                  (*(uint32_t*)0x4000004c |= FLAG)
#define Clr_TIM2_DMAR(FLAG)                  (*(uint32_t*)0x4000004c &= ~FLAG)
#define Set_TIM2_OR1(FLAG)                   (*(uint32_t*)0x40000050 |= FLAG)
#define Clr_TIM2_OR1(FLAG)                   (*(uint32_t*)0x40000050 &= ~FLAG)
#define Set_TIM2_OR2(FLAG)                   (*(uint32_t*)0x40000060 |= FLAG)
#define Clr_TIM2_OR2(FLAG)                   (*(uint32_t*)0x40000060 &= ~FLAG)
#define Set_TIM3_CR1(FLAG)                   (*(uint32_t*)0x40000400 |= FLAG)
#define Clr_TIM3_CR1(FLAG)                   (*(uint32_t*)0x40000400 &= ~FLAG)
#define Set_TIM3_CR2(FLAG)                   (*(uint32_t*)0x40000404 |= FLAG)
#define Clr_TIM3_CR2(FLAG)                   (*(uint32_t*)0x40000404 &= ~FLAG)
#define Set_TIM3_SMCR(FLAG)                  (*(uint32_t*)0x40000408 |= FLAG)
#define Clr_TIM3_SMCR(FLAG)                  (*(uint32_t*)0x40000408 &= ~FLAG)
#define Set_TIM3_DIER(FLAG)                  (*(uint32_t*)0x4000040c |= FLAG)
#define Clr_TIM3_DIER(FLAG)                  (*(uint32_t*)0x4000040c &= ~FLAG)
#define Set_TIM3_SR(FLAG)                    (*(uint32_t*)0x40000410 |= FLAG)
#define Clr_TIM3_SR(FLAG)                    (*(uint32_t*)0x40000410 &= ~FLAG)
#define Set_TIM3_EGR(FLAG)                   (*(uint32_t*)0x40000414 |= FLAG)
#define Clr_TIM3_EGR(FLAG)                   (*(uint32_t*)0x40000414 &= ~FLAG)
#define Set_TIM3_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000418 |= FLAG)
#define Clr_TIM3_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000418 &= ~FLAG)
#define Set_TIM3_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000418 |= FLAG)
#define Clr_TIM3_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000418 &= ~FLAG)
#define Set_TIM3_CCMR2_Output(FLAG)          (*(uint32_t*)0x4000041c |= FLAG)
#define Clr_TIM3_CCMR2_Output(FLAG)          (*(uint32_t*)0x4000041c &= ~FLAG)
#define Set_TIM3_CCMR2_Input(FLAG)           (*(uint32_t*)0x4000041c |= FLAG)
#define Clr_TIM3_CCMR2_Input(FLAG)           (*(uint32_t*)0x4000041c &= ~FLAG)
#define Set_TIM3_CCER(FLAG)                  (*(uint32_t*)0x40000420 |= FLAG)
#define Clr_TIM3_CCER(FLAG)                  (*(uint32_t*)0x40000420 &= ~FLAG)
#define Set_TIM3_CNT(FLAG)                   (*(uint32_t*)0x40000424 |= FLAG)
#define Clr_TIM3_CNT(FLAG)                   (*(uint32_t*)0x40000424 &= ~FLAG)
#define Set_TIM3_PSC(FLAG)                   (*(uint32_t*)0x40000428 |= FLAG)
#define Clr_TIM3_PSC(FLAG)                   (*(uint32_t*)0x40000428 &= ~FLAG)
#define Set_TIM3_ARR(FLAG)                   (*(uint32_t*)0x4000042c |= FLAG)
#define Clr_TIM3_ARR(FLAG)                   (*(uint32_t*)0x4000042c &= ~FLAG)
#define Set_TIM3_CCR1(FLAG)                  (*(uint32_t*)0x40000434 |= FLAG)
#define Clr_TIM3_CCR1(FLAG)                  (*(uint32_t*)0x40000434 &= ~FLAG)
#define Set_TIM3_CCR2(FLAG)                  (*(uint32_t*)0x40000438 |= FLAG)
#define Clr_TIM3_CCR2(FLAG)                  (*(uint32_t*)0x40000438 &= ~FLAG)
#define Set_TIM3_CCR3(FLAG)                  (*(uint32_t*)0x4000043c |= FLAG)
#define Clr_TIM3_CCR3(FLAG)                  (*(uint32_t*)0x4000043c &= ~FLAG)
#define Set_TIM3_CCR4(FLAG)                  (*(uint32_t*)0x40000440 |= FLAG)
#define Clr_TIM3_CCR4(FLAG)                  (*(uint32_t*)0x40000440 &= ~FLAG)
#define Set_TIM3_DCR(FLAG)                   (*(uint32_t*)0x40000448 |= FLAG)
#define Clr_TIM3_DCR(FLAG)                   (*(uint32_t*)0x40000448 &= ~FLAG)
#define Set_TIM3_DMAR(FLAG)                  (*(uint32_t*)0x4000044c |= FLAG)
#define Clr_TIM3_DMAR(FLAG)                  (*(uint32_t*)0x4000044c &= ~FLAG)
#define Set_TIM3_OR1(FLAG)                   (*(uint32_t*)0x40000450 |= FLAG)
#define Clr_TIM3_OR1(FLAG)                   (*(uint32_t*)0x40000450 &= ~FLAG)
#define Set_TIM3_OR2(FLAG)                   (*(uint32_t*)0x40000460 |= FLAG)
#define Clr_TIM3_OR2(FLAG)                   (*(uint32_t*)0x40000460 &= ~FLAG)
#define Set_TIM4_CR1(FLAG)                   (*(uint32_t*)0x40000800 |= FLAG)
#define Clr_TIM4_CR1(FLAG)                   (*(uint32_t*)0x40000800 &= ~FLAG)
#define Set_TIM4_CR2(FLAG)                   (*(uint32_t*)0x40000804 |= FLAG)
#define Clr_TIM4_CR2(FLAG)                   (*(uint32_t*)0x40000804 &= ~FLAG)
#define Set_TIM4_SMCR(FLAG)                  (*(uint32_t*)0x40000808 |= FLAG)
#define Clr_TIM4_SMCR(FLAG)                  (*(uint32_t*)0x40000808 &= ~FLAG)
#define Set_TIM4_DIER(FLAG)                  (*(uint32_t*)0x4000080c |= FLAG)
#define Clr_TIM4_DIER(FLAG)                  (*(uint32_t*)0x4000080c &= ~FLAG)
#define Set_TIM4_SR(FLAG)                    (*(uint32_t*)0x40000810 |= FLAG)
#define Clr_TIM4_SR(FLAG)                    (*(uint32_t*)0x40000810 &= ~FLAG)
#define Set_TIM4_EGR(FLAG)                   (*(uint32_t*)0x40000814 |= FLAG)
#define Clr_TIM4_EGR(FLAG)                   (*(uint32_t*)0x40000814 &= ~FLAG)
#define Set_TIM4_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000818 |= FLAG)
#define Clr_TIM4_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000818 &= ~FLAG)
#define Set_TIM4_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000818 |= FLAG)
#define Clr_TIM4_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000818 &= ~FLAG)
#define Set_TIM4_CCMR2_Output(FLAG)          (*(uint32_t*)0x4000081c |= FLAG)
#define Clr_TIM4_CCMR2_Output(FLAG)          (*(uint32_t*)0x4000081c &= ~FLAG)
#define Set_TIM4_CCMR2_Input(FLAG)           (*(uint32_t*)0x4000081c |= FLAG)
#define Clr_TIM4_CCMR2_Input(FLAG)           (*(uint32_t*)0x4000081c &= ~FLAG)
#define Set_TIM4_CCER(FLAG)                  (*(uint32_t*)0x40000820 |= FLAG)
#define Clr_TIM4_CCER(FLAG)                  (*(uint32_t*)0x40000820 &= ~FLAG)
#define Set_TIM4_CNT(FLAG)                   (*(uint32_t*)0x40000824 |= FLAG)
#define Clr_TIM4_CNT(FLAG)                   (*(uint32_t*)0x40000824 &= ~FLAG)
#define Set_TIM4_PSC(FLAG)                   (*(uint32_t*)0x40000828 |= FLAG)
#define Clr_TIM4_PSC(FLAG)                   (*(uint32_t*)0x40000828 &= ~FLAG)
#define Set_TIM4_ARR(FLAG)                   (*(uint32_t*)0x4000082c |= FLAG)
#define Clr_TIM4_ARR(FLAG)                   (*(uint32_t*)0x4000082c &= ~FLAG)
#define Set_TIM4_CCR1(FLAG)                  (*(uint32_t*)0x40000834 |= FLAG)
#define Clr_TIM4_CCR1(FLAG)                  (*(uint32_t*)0x40000834 &= ~FLAG)
#define Set_TIM4_CCR2(FLAG)                  (*(uint32_t*)0x40000838 |= FLAG)
#define Clr_TIM4_CCR2(FLAG)                  (*(uint32_t*)0x40000838 &= ~FLAG)
#define Set_TIM4_CCR3(FLAG)                  (*(uint32_t*)0x4000083c |= FLAG)
#define Clr_TIM4_CCR3(FLAG)                  (*(uint32_t*)0x4000083c &= ~FLAG)
#define Set_TIM4_CCR4(FLAG)                  (*(uint32_t*)0x40000840 |= FLAG)
#define Clr_TIM4_CCR4(FLAG)                  (*(uint32_t*)0x40000840 &= ~FLAG)
#define Set_TIM4_DCR(FLAG)                   (*(uint32_t*)0x40000848 |= FLAG)
#define Clr_TIM4_DCR(FLAG)                   (*(uint32_t*)0x40000848 &= ~FLAG)
#define Set_TIM4_DMAR(FLAG)                  (*(uint32_t*)0x4000084c |= FLAG)
#define Clr_TIM4_DMAR(FLAG)                  (*(uint32_t*)0x4000084c &= ~FLAG)
#define Set_TIM5_CR1(FLAG)                   (*(uint32_t*)0x40000c00 |= FLAG)
#define Clr_TIM5_CR1(FLAG)                   (*(uint32_t*)0x40000c00 &= ~FLAG)
#define Set_TIM5_CR2(FLAG)                   (*(uint32_t*)0x40000c04 |= FLAG)
#define Clr_TIM5_CR2(FLAG)                   (*(uint32_t*)0x40000c04 &= ~FLAG)
#define Set_TIM5_SMCR(FLAG)                  (*(uint32_t*)0x40000c08 |= FLAG)
#define Clr_TIM5_SMCR(FLAG)                  (*(uint32_t*)0x40000c08 &= ~FLAG)
#define Set_TIM5_DIER(FLAG)                  (*(uint32_t*)0x40000c0c |= FLAG)
#define Clr_TIM5_DIER(FLAG)                  (*(uint32_t*)0x40000c0c &= ~FLAG)
#define Set_TIM5_SR(FLAG)                    (*(uint32_t*)0x40000c10 |= FLAG)
#define Clr_TIM5_SR(FLAG)                    (*(uint32_t*)0x40000c10 &= ~FLAG)
#define Set_TIM5_EGR(FLAG)                   (*(uint32_t*)0x40000c14 |= FLAG)
#define Clr_TIM5_EGR(FLAG)                   (*(uint32_t*)0x40000c14 &= ~FLAG)
#define Set_TIM5_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000c18 |= FLAG)
#define Clr_TIM5_CCMR1_Output(FLAG)          (*(uint32_t*)0x40000c18 &= ~FLAG)
#define Set_TIM5_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000c18 |= FLAG)
#define Clr_TIM5_CCMR1_Input(FLAG)           (*(uint32_t*)0x40000c18 &= ~FLAG)
#define Set_TIM5_CCMR2_Output(FLAG)          (*(uint32_t*)0x40000c1c |= FLAG)
#define Clr_TIM5_CCMR2_Output(FLAG)          (*(uint32_t*)0x40000c1c &= ~FLAG)
#define Set_TIM5_CCMR2_Input(FLAG)           (*(uint32_t*)0x40000c1c |= FLAG)
#define Clr_TIM5_CCMR2_Input(FLAG)           (*(uint32_t*)0x40000c1c &= ~FLAG)
#define Set_TIM5_CCER(FLAG)                  (*(uint32_t*)0x40000c20 |= FLAG)
#define Clr_TIM5_CCER(FLAG)                  (*(uint32_t*)0x40000c20 &= ~FLAG)
#define Set_TIM5_CNT(FLAG)                   (*(uint32_t*)0x40000c24 |= FLAG)
#define Clr_TIM5_CNT(FLAG)                   (*(uint32_t*)0x40000c24 &= ~FLAG)
#define Set_TIM5_PSC(FLAG)                   (*(uint32_t*)0x40000c28 |= FLAG)
#define Clr_TIM5_PSC(FLAG)                   (*(uint32_t*)0x40000c28 &= ~FLAG)
#define Set_TIM5_ARR(FLAG)                   (*(uint32_t*)0x40000c2c |= FLAG)
#define Clr_TIM5_ARR(FLAG)                   (*(uint32_t*)0x40000c2c &= ~FLAG)
#define Set_TIM5_CCR1(FLAG)                  (*(uint32_t*)0x40000c34 |= FLAG)
#define Clr_TIM5_CCR1(FLAG)                  (*(uint32_t*)0x40000c34 &= ~FLAG)
#define Set_TIM5_CCR2(FLAG)                  (*(uint32_t*)0x40000c38 |= FLAG)
#define Clr_TIM5_CCR2(FLAG)                  (*(uint32_t*)0x40000c38 &= ~FLAG)
#define Set_TIM5_CCR3(FLAG)                  (*(uint32_t*)0x40000c3c |= FLAG)
#define Clr_TIM5_CCR3(FLAG)                  (*(uint32_t*)0x40000c3c &= ~FLAG)
#define Set_TIM5_CCR4(FLAG)                  (*(uint32_t*)0x40000c40 |= FLAG)
#define Clr_TIM5_CCR4(FLAG)                  (*(uint32_t*)0x40000c40 &= ~FLAG)
#define Set_TIM5_DCR(FLAG)                   (*(uint32_t*)0x40000c48 |= FLAG)
#define Clr_TIM5_DCR(FLAG)                   (*(uint32_t*)0x40000c48 &= ~FLAG)
#define Set_TIM5_DMAR(FLAG)                  (*(uint32_t*)0x40000c4c |= FLAG)
#define Clr_TIM5_DMAR(FLAG)                  (*(uint32_t*)0x40000c4c &= ~FLAG)
#define Set_TIM6_CR1(FLAG)                   (*(uint32_t*)0x40001000 |= FLAG)
#define Clr_TIM6_CR1(FLAG)                   (*(uint32_t*)0x40001000 &= ~FLAG)
#define Set_TIM6_CR2(FLAG)                   (*(uint32_t*)0x40001004 |= FLAG)
#define Clr_TIM6_CR2(FLAG)                   (*(uint32_t*)0x40001004 &= ~FLAG)
#define Set_TIM6_DIER(FLAG)                  (*(uint32_t*)0x4000100c |= FLAG)
#define Clr_TIM6_DIER(FLAG)                  (*(uint32_t*)0x4000100c &= ~FLAG)
#define Set_TIM6_SR(FLAG)                    (*(uint32_t*)0x40001010 |= FLAG)
#define Clr_TIM6_SR(FLAG)                    (*(uint32_t*)0x40001010 &= ~FLAG)
#define Set_TIM6_EGR(FLAG)                   (*(uint32_t*)0x40001014 |= FLAG)
#define Clr_TIM6_EGR(FLAG)                   (*(uint32_t*)0x40001014 &= ~FLAG)
#define Set_TIM6_CNT(FLAG)                   (*(uint32_t*)0x40001024 |= FLAG)
#define Clr_TIM6_CNT(FLAG)                   (*(uint32_t*)0x40001024 &= ~FLAG)
#define Set_TIM6_PSC(FLAG)                   (*(uint32_t*)0x40001028 |= FLAG)
#define Clr_TIM6_PSC(FLAG)                   (*(uint32_t*)0x40001028 &= ~FLAG)
#define Set_TIM6_ARR(FLAG)                   (*(uint32_t*)0x4000102c |= FLAG)
#define Clr_TIM6_ARR(FLAG)                   (*(uint32_t*)0x4000102c &= ~FLAG)
#define Set_TIM7_CR1(FLAG)                   (*(uint32_t*)0x40001400 |= FLAG)
#define Clr_TIM7_CR1(FLAG)                   (*(uint32_t*)0x40001400 &= ~FLAG)
#define Set_TIM7_CR2(FLAG)                   (*(uint32_t*)0x40001404 |= FLAG)
#define Clr_TIM7_CR2(FLAG)                   (*(uint32_t*)0x40001404 &= ~FLAG)
#define Set_TIM7_DIER(FLAG)                  (*(uint32_t*)0x4000140c |= FLAG)
#define Clr_TIM7_DIER(FLAG)                  (*(uint32_t*)0x4000140c &= ~FLAG)
#define Set_TIM7_SR(FLAG)                    (*(uint32_t*)0x40001410 |= FLAG)
#define Clr_TIM7_SR(FLAG)                    (*(uint32_t*)0x40001410 &= ~FLAG)
#define Set_TIM7_EGR(FLAG)                   (*(uint32_t*)0x40001414 |= FLAG)
#define Clr_TIM7_EGR(FLAG)                   (*(uint32_t*)0x40001414 &= ~FLAG)
#define Set_TIM7_CNT(FLAG)                   (*(uint32_t*)0x40001424 |= FLAG)
#define Clr_TIM7_CNT(FLAG)                   (*(uint32_t*)0x40001424 &= ~FLAG)
#define Set_TIM7_PSC(FLAG)                   (*(uint32_t*)0x40001428 |= FLAG)
#define Clr_TIM7_PSC(FLAG)                   (*(uint32_t*)0x40001428 &= ~FLAG)
#define Set_TIM7_ARR(FLAG)                   (*(uint32_t*)0x4000142c |= FLAG)
#define Clr_TIM7_ARR(FLAG)                   (*(uint32_t*)0x4000142c &= ~FLAG)
#define Set_TIM12_CR1(FLAG)                  (*(uint32_t*)0x40001800 |= FLAG)
#define Clr_TIM12_CR1(FLAG)                  (*(uint32_t*)0x40001800 &= ~FLAG)
#define Set_TIM12_SMCR(FLAG)                 (*(uint32_t*)0x40001808 |= FLAG)
#define Clr_TIM12_SMCR(FLAG)                 (*(uint32_t*)0x40001808 &= ~FLAG)
#define Set_TIM12_DIER(FLAG)                 (*(uint32_t*)0x4000180c |= FLAG)
#define Clr_TIM12_DIER(FLAG)                 (*(uint32_t*)0x4000180c &= ~FLAG)
#define Set_TIM12_SR(FLAG)                   (*(uint32_t*)0x40001810 |= FLAG)
#define Clr_TIM12_SR(FLAG)                   (*(uint32_t*)0x40001810 &= ~FLAG)
#define Set_TIM12_EGR(FLAG)                  (*(uint32_t*)0x40001814 |= FLAG)
#define Clr_TIM12_EGR(FLAG)                  (*(uint32_t*)0x40001814 &= ~FLAG)
#define Set_TIM12_CCMR1_Output(FLAG)         (*(uint32_t*)0x40001818 |= FLAG)
#define Clr_TIM12_CCMR1_Output(FLAG)         (*(uint32_t*)0x40001818 &= ~FLAG)
#define Set_TIM12_CCMR1_Input(FLAG)          (*(uint32_t*)0x40001818 |= FLAG)
#define Clr_TIM12_CCMR1_Input(FLAG)          (*(uint32_t*)0x40001818 &= ~FLAG)
#define Set_TIM12_CCER(FLAG)                 (*(uint32_t*)0x40001820 |= FLAG)
#define Clr_TIM12_CCER(FLAG)                 (*(uint32_t*)0x40001820 &= ~FLAG)
#define Set_TIM12_CNT(FLAG)                  (*(uint32_t*)0x40001824 |= FLAG)
#define Clr_TIM12_CNT(FLAG)                  (*(uint32_t*)0x40001824 &= ~FLAG)
#define Set_TIM12_PSC(FLAG)                  (*(uint32_t*)0x40001828 |= FLAG)
#define Clr_TIM12_PSC(FLAG)                  (*(uint32_t*)0x40001828 &= ~FLAG)
#define Set_TIM12_ARR(FLAG)                  (*(uint32_t*)0x4000182c |= FLAG)
#define Clr_TIM12_ARR(FLAG)                  (*(uint32_t*)0x4000182c &= ~FLAG)
#define Set_TIM12_CCR1(FLAG)                 (*(uint32_t*)0x40001834 |= FLAG)
#define Clr_TIM12_CCR1(FLAG)                 (*(uint32_t*)0x40001834 &= ~FLAG)
#define Set_TIM12_CCR2(FLAG)                 (*(uint32_t*)0x40001838 |= FLAG)
#define Clr_TIM12_CCR2(FLAG)                 (*(uint32_t*)0x40001838 &= ~FLAG)
#define Set_TIM13_CR1(FLAG)                  (*(uint32_t*)0x40001c00 |= FLAG)
#define Clr_TIM13_CR1(FLAG)                  (*(uint32_t*)0x40001c00 &= ~FLAG)
#define Set_TIM13_DIER(FLAG)                 (*(uint32_t*)0x40001c0c |= FLAG)
#define Clr_TIM13_DIER(FLAG)                 (*(uint32_t*)0x40001c0c &= ~FLAG)
#define Set_TIM13_SR(FLAG)                   (*(uint32_t*)0x40001c10 |= FLAG)
#define Clr_TIM13_SR(FLAG)                   (*(uint32_t*)0x40001c10 &= ~FLAG)
#define Set_TIM13_EGR(FLAG)                  (*(uint32_t*)0x40001c14 |= FLAG)
#define Clr_TIM13_EGR(FLAG)                  (*(uint32_t*)0x40001c14 &= ~FLAG)
#define Set_TIM13_CCMR1_Output(FLAG)         (*(uint32_t*)0x40001c18 |= FLAG)
#define Clr_TIM13_CCMR1_Output(FLAG)         (*(uint32_t*)0x40001c18 &= ~FLAG)
#define Set_TIM13_CCMR1_Input(FLAG)          (*(uint32_t*)0x40001c18 |= FLAG)
#define Clr_TIM13_CCMR1_Input(FLAG)          (*(uint32_t*)0x40001c18 &= ~FLAG)
#define Set_TIM13_CCER(FLAG)                 (*(uint32_t*)0x40001c20 |= FLAG)
#define Clr_TIM13_CCER(FLAG)                 (*(uint32_t*)0x40001c20 &= ~FLAG)
#define Set_TIM13_CNT(FLAG)                  (*(uint32_t*)0x40001c24 |= FLAG)
#define Clr_TIM13_CNT(FLAG)                  (*(uint32_t*)0x40001c24 &= ~FLAG)
#define Set_TIM13_PSC(FLAG)                  (*(uint32_t*)0x40001c28 |= FLAG)
#define Clr_TIM13_PSC(FLAG)                  (*(uint32_t*)0x40001c28 &= ~FLAG)
#define Set_TIM13_ARR(FLAG)                  (*(uint32_t*)0x40001c2c |= FLAG)
#define Clr_TIM13_ARR(FLAG)                  (*(uint32_t*)0x40001c2c &= ~FLAG)
#define Set_TIM13_CCR1(FLAG)                 (*(uint32_t*)0x40001c34 |= FLAG)
#define Clr_TIM13_CCR1(FLAG)                 (*(uint32_t*)0x40001c34 &= ~FLAG)
#define Set_TIM13_SMCR(FLAG)                 (*(uint32_t*)0x40001c08 |= FLAG)
#define Clr_TIM13_SMCR(FLAG)                 (*(uint32_t*)0x40001c08 &= ~FLAG)
#define Set_TIM13_OR(FLAG)                   (*(uint32_t*)0x40001c50 |= FLAG)
#define Clr_TIM13_OR(FLAG)                   (*(uint32_t*)0x40001c50 &= ~FLAG)
#define Set_TIM14_CR1(FLAG)                  (*(uint32_t*)0x40002000 |= FLAG)
#define Clr_TIM14_CR1(FLAG)                  (*(uint32_t*)0x40002000 &= ~FLAG)
#define Set_TIM14_DIER(FLAG)                 (*(uint32_t*)0x4000200c |= FLAG)
#define Clr_TIM14_DIER(FLAG)                 (*(uint32_t*)0x4000200c &= ~FLAG)
#define Set_TIM14_SR(FLAG)                   (*(uint32_t*)0x40002010 |= FLAG)
#define Clr_TIM14_SR(FLAG)                   (*(uint32_t*)0x40002010 &= ~FLAG)
#define Set_TIM14_EGR(FLAG)                  (*(uint32_t*)0x40002014 |= FLAG)
#define Clr_TIM14_EGR(FLAG)                  (*(uint32_t*)0x40002014 &= ~FLAG)
#define Set_TIM14_CCMR1_Output(FLAG)         (*(uint32_t*)0x40002018 |= FLAG)
#define Clr_TIM14_CCMR1_Output(FLAG)         (*(uint32_t*)0x40002018 &= ~FLAG)
#define Set_TIM14_CCMR1_Input(FLAG)          (*(uint32_t*)0x40002018 |= FLAG)
#define Clr_TIM14_CCMR1_Input(FLAG)          (*(uint32_t*)0x40002018 &= ~FLAG)
#define Set_TIM14_CCER(FLAG)                 (*(uint32_t*)0x40002020 |= FLAG)
#define Clr_TIM14_CCER(FLAG)                 (*(uint32_t*)0x40002020 &= ~FLAG)
#define Set_TIM14_CNT(FLAG)                  (*(uint32_t*)0x40002024 |= FLAG)
#define Clr_TIM14_CNT(FLAG)                  (*(uint32_t*)0x40002024 &= ~FLAG)
#define Set_TIM14_PSC(FLAG)                  (*(uint32_t*)0x40002028 |= FLAG)
#define Clr_TIM14_PSC(FLAG)                  (*(uint32_t*)0x40002028 &= ~FLAG)
#define Set_TIM14_ARR(FLAG)                  (*(uint32_t*)0x4000202c |= FLAG)
#define Clr_TIM14_ARR(FLAG)                  (*(uint32_t*)0x4000202c &= ~FLAG)
#define Set_TIM14_CCR1(FLAG)                 (*(uint32_t*)0x40002034 |= FLAG)
#define Clr_TIM14_CCR1(FLAG)                 (*(uint32_t*)0x40002034 &= ~FLAG)
#define Set_TIM14_SMCR(FLAG)                 (*(uint32_t*)0x40002008 |= FLAG)
#define Clr_TIM14_SMCR(FLAG)                 (*(uint32_t*)0x40002008 &= ~FLAG)
#define Set_TIM14_OR(FLAG)                   (*(uint32_t*)0x40002050 |= FLAG)
#define Clr_TIM14_OR(FLAG)                   (*(uint32_t*)0x40002050 &= ~FLAG)
#define Set_TIM1_CR1(FLAG)                   (*(uint32_t*)0x40010000 |= FLAG)
#define Clr_TIM1_CR1(FLAG)                   (*(uint32_t*)0x40010000 &= ~FLAG)
#define Set_TIM1_CR2(FLAG)                   (*(uint32_t*)0x40010004 |= FLAG)
#define Clr_TIM1_CR2(FLAG)                   (*(uint32_t*)0x40010004 &= ~FLAG)
#define Set_TIM1_SMCR(FLAG)                  (*(uint32_t*)0x40010008 |= FLAG)
#define Clr_TIM1_SMCR(FLAG)                  (*(uint32_t*)0x40010008 &= ~FLAG)
#define Set_TIM1_DIER(FLAG)                  (*(uint32_t*)0x4001000c |= FLAG)
#define Clr_TIM1_DIER(FLAG)                  (*(uint32_t*)0x4001000c &= ~FLAG)
#define Set_TIM1_SR(FLAG)                    (*(uint32_t*)0x40010010 |= FLAG)
#define Clr_TIM1_SR(FLAG)                    (*(uint32_t*)0x40010010 &= ~FLAG)
#define Set_TIM1_EGR(FLAG)                   (*(uint32_t*)0x40010014 |= FLAG)
#define Clr_TIM1_EGR(FLAG)                   (*(uint32_t*)0x40010014 &= ~FLAG)
#define Set_TIM1_CCMR1_Output(FLAG)          (*(uint32_t*)0x40010018 |= FLAG)
#define Clr_TIM1_CCMR1_Output(FLAG)          (*(uint32_t*)0x40010018 &= ~FLAG)
#define Set_TIM1_CCMR1_Input(FLAG)           (*(uint32_t*)0x40010018 |= FLAG)
#define Clr_TIM1_CCMR1_Input(FLAG)           (*(uint32_t*)0x40010018 &= ~FLAG)
#define Set_TIM1_CCMR2_Output(FLAG)          (*(uint32_t*)0x4001001c |= FLAG)
#define Clr_TIM1_CCMR2_Output(FLAG)          (*(uint32_t*)0x4001001c &= ~FLAG)
#define Set_TIM1_CCMR2_Input(FLAG)           (*(uint32_t*)0x4001001c |= FLAG)
#define Clr_TIM1_CCMR2_Input(FLAG)           (*(uint32_t*)0x4001001c &= ~FLAG)
#define Set_TIM1_CCER(FLAG)                  (*(uint32_t*)0x40010020 |= FLAG)
#define Clr_TIM1_CCER(FLAG)                  (*(uint32_t*)0x40010020 &= ~FLAG)
#define Set_TIM1_CNT(FLAG)                   (*(uint32_t*)0x40010024 |= FLAG)
#define Clr_TIM1_CNT(FLAG)                   (*(uint32_t*)0x40010024 &= ~FLAG)
#define Set_TIM1_PSC(FLAG)                   (*(uint32_t*)0x40010028 |= FLAG)
#define Clr_TIM1_PSC(FLAG)                   (*(uint32_t*)0x40010028 &= ~FLAG)
#define Set_TIM1_ARR(FLAG)                   (*(uint32_t*)0x4001002c |= FLAG)
#define Clr_TIM1_ARR(FLAG)                   (*(uint32_t*)0x4001002c &= ~FLAG)
#define Set_TIM1_CCR1(FLAG)                  (*(uint32_t*)0x40010034 |= FLAG)
#define Clr_TIM1_CCR1(FLAG)                  (*(uint32_t*)0x40010034 &= ~FLAG)
#define Set_TIM1_CCR2(FLAG)                  (*(uint32_t*)0x40010038 |= FLAG)
#define Clr_TIM1_CCR2(FLAG)                  (*(uint32_t*)0x40010038 &= ~FLAG)
#define Set_TIM1_CCR3(FLAG)                  (*(uint32_t*)0x4001003c |= FLAG)
#define Clr_TIM1_CCR3(FLAG)                  (*(uint32_t*)0x4001003c &= ~FLAG)
#define Set_TIM1_CCR4(FLAG)                  (*(uint32_t*)0x40010040 |= FLAG)
#define Clr_TIM1_CCR4(FLAG)                  (*(uint32_t*)0x40010040 &= ~FLAG)
#define Set_TIM1_DCR(FLAG)                   (*(uint32_t*)0x40010048 |= FLAG)
#define Clr_TIM1_DCR(FLAG)                   (*(uint32_t*)0x40010048 &= ~FLAG)
#define Set_TIM1_DMAR(FLAG)                  (*(uint32_t*)0x4001004c |= FLAG)
#define Clr_TIM1_DMAR(FLAG)                  (*(uint32_t*)0x4001004c &= ~FLAG)
#define Set_TIM1_RCR(FLAG)                   (*(uint32_t*)0x40010030 |= FLAG)
#define Clr_TIM1_RCR(FLAG)                   (*(uint32_t*)0x40010030 &= ~FLAG)
#define Set_TIM1_BDTR(FLAG)                  (*(uint32_t*)0x40010044 |= FLAG)
#define Clr_TIM1_BDTR(FLAG)                  (*(uint32_t*)0x40010044 &= ~FLAG)
#define Set_TIM1_CCMR3_Output(FLAG)          (*(uint32_t*)0x40010054 |= FLAG)
#define Clr_TIM1_CCMR3_Output(FLAG)          (*(uint32_t*)0x40010054 &= ~FLAG)
#define Set_TIM1_CCR5(FLAG)                  (*(uint32_t*)0x40010058 |= FLAG)
#define Clr_TIM1_CCR5(FLAG)                  (*(uint32_t*)0x40010058 &= ~FLAG)
#define Set_TIM1_CRR6(FLAG)                  (*(uint32_t*)0x4001005c |= FLAG)
#define Clr_TIM1_CRR6(FLAG)                  (*(uint32_t*)0x4001005c &= ~FLAG)
#define Set_TIM1_AF1(FLAG)                   (*(uint32_t*)0x40010060 |= FLAG)
#define Clr_TIM1_AF1(FLAG)                   (*(uint32_t*)0x40010060 &= ~FLAG)
#define Set_TIM1_AF2(FLAG)                   (*(uint32_t*)0x40010064 |= FLAG)
#define Clr_TIM1_AF2(FLAG)                   (*(uint32_t*)0x40010064 &= ~FLAG)
#define Set_TIM8_CR1(FLAG)                   (*(uint32_t*)0x40010400 |= FLAG)
#define Clr_TIM8_CR1(FLAG)                   (*(uint32_t*)0x40010400 &= ~FLAG)
#define Set_TIM8_CR2(FLAG)                   (*(uint32_t*)0x40010404 |= FLAG)
#define Clr_TIM8_CR2(FLAG)                   (*(uint32_t*)0x40010404 &= ~FLAG)
#define Set_TIM8_SMCR(FLAG)                  (*(uint32_t*)0x40010408 |= FLAG)
#define Clr_TIM8_SMCR(FLAG)                  (*(uint32_t*)0x40010408 &= ~FLAG)
#define Set_TIM8_DIER(FLAG)                  (*(uint32_t*)0x4001040c |= FLAG)
#define Clr_TIM8_DIER(FLAG)                  (*(uint32_t*)0x4001040c &= ~FLAG)
#define Set_TIM8_SR(FLAG)                    (*(uint32_t*)0x40010410 |= FLAG)
#define Clr_TIM8_SR(FLAG)                    (*(uint32_t*)0x40010410 &= ~FLAG)
#define Set_TIM8_EGR(FLAG)                   (*(uint32_t*)0x40010414 |= FLAG)
#define Clr_TIM8_EGR(FLAG)                   (*(uint32_t*)0x40010414 &= ~FLAG)
#define Set_TIM8_CCMR1_Output(FLAG)          (*(uint32_t*)0x40010418 |= FLAG)
#define Clr_TIM8_CCMR1_Output(FLAG)          (*(uint32_t*)0x40010418 &= ~FLAG)
#define Set_TIM8_CCMR1_Input(FLAG)           (*(uint32_t*)0x40010418 |= FLAG)
#define Clr_TIM8_CCMR1_Input(FLAG)           (*(uint32_t*)0x40010418 &= ~FLAG)
#define Set_TIM8_CCMR2_Output(FLAG)          (*(uint32_t*)0x4001041c |= FLAG)
#define Clr_TIM8_CCMR2_Output(FLAG)          (*(uint32_t*)0x4001041c &= ~FLAG)
#define Set_TIM8_CCMR2_Input(FLAG)           (*(uint32_t*)0x4001041c |= FLAG)
#define Clr_TIM8_CCMR2_Input(FLAG)           (*(uint32_t*)0x4001041c &= ~FLAG)
#define Set_TIM8_CCER(FLAG)                  (*(uint32_t*)0x40010420 |= FLAG)
#define Clr_TIM8_CCER(FLAG)                  (*(uint32_t*)0x40010420 &= ~FLAG)
#define Set_TIM8_CNT(FLAG)                   (*(uint32_t*)0x40010424 |= FLAG)
#define Clr_TIM8_CNT(FLAG)                   (*(uint32_t*)0x40010424 &= ~FLAG)
#define Set_TIM8_PSC(FLAG)                   (*(uint32_t*)0x40010428 |= FLAG)
#define Clr_TIM8_PSC(FLAG)                   (*(uint32_t*)0x40010428 &= ~FLAG)
#define Set_TIM8_ARR(FLAG)                   (*(uint32_t*)0x4001042c |= FLAG)
#define Clr_TIM8_ARR(FLAG)                   (*(uint32_t*)0x4001042c &= ~FLAG)
#define Set_TIM8_CCR1(FLAG)                  (*(uint32_t*)0x40010434 |= FLAG)
#define Clr_TIM8_CCR1(FLAG)                  (*(uint32_t*)0x40010434 &= ~FLAG)
#define Set_TIM8_CCR2(FLAG)                  (*(uint32_t*)0x40010438 |= FLAG)
#define Clr_TIM8_CCR2(FLAG)                  (*(uint32_t*)0x40010438 &= ~FLAG)
#define Set_TIM8_CCR3(FLAG)                  (*(uint32_t*)0x4001043c |= FLAG)
#define Clr_TIM8_CCR3(FLAG)                  (*(uint32_t*)0x4001043c &= ~FLAG)
#define Set_TIM8_CCR4(FLAG)                  (*(uint32_t*)0x40010440 |= FLAG)
#define Clr_TIM8_CCR4(FLAG)                  (*(uint32_t*)0x40010440 &= ~FLAG)
#define Set_TIM8_DCR(FLAG)                   (*(uint32_t*)0x40010448 |= FLAG)
#define Clr_TIM8_DCR(FLAG)                   (*(uint32_t*)0x40010448 &= ~FLAG)
#define Set_TIM8_DMAR(FLAG)                  (*(uint32_t*)0x4001044c |= FLAG)
#define Clr_TIM8_DMAR(FLAG)                  (*(uint32_t*)0x4001044c &= ~FLAG)
#define Set_TIM8_RCR(FLAG)                   (*(uint32_t*)0x40010430 |= FLAG)
#define Clr_TIM8_RCR(FLAG)                   (*(uint32_t*)0x40010430 &= ~FLAG)
#define Set_TIM8_BDTR(FLAG)                  (*(uint32_t*)0x40010444 |= FLAG)
#define Clr_TIM8_BDTR(FLAG)                  (*(uint32_t*)0x40010444 &= ~FLAG)
#define Set_TIM8_CCMR3_Output(FLAG)          (*(uint32_t*)0x40010454 |= FLAG)
#define Clr_TIM8_CCMR3_Output(FLAG)          (*(uint32_t*)0x40010454 &= ~FLAG)
#define Set_TIM8_CCR5(FLAG)                  (*(uint32_t*)0x40010458 |= FLAG)
#define Clr_TIM8_CCR5(FLAG)                  (*(uint32_t*)0x40010458 &= ~FLAG)
#define Set_TIM8_CRR6(FLAG)                  (*(uint32_t*)0x4001045c |= FLAG)
#define Clr_TIM8_CRR6(FLAG)                  (*(uint32_t*)0x4001045c &= ~FLAG)
#define Set_TIM8_AF1(FLAG)                   (*(uint32_t*)0x40010460 |= FLAG)
#define Clr_TIM8_AF1(FLAG)                   (*(uint32_t*)0x40010460 &= ~FLAG)
#define Set_TIM8_AF2(FLAG)                   (*(uint32_t*)0x40010464 |= FLAG)
#define Clr_TIM8_AF2(FLAG)                   (*(uint32_t*)0x40010464 &= ~FLAG)
#define Set_TIM9_CR1(FLAG)                   (*(uint32_t*)0x40014000 |= FLAG)
#define Clr_TIM9_CR1(FLAG)                   (*(uint32_t*)0x40014000 &= ~FLAG)
#define Set_TIM9_SMCR(FLAG)                  (*(uint32_t*)0x40014008 |= FLAG)
#define Clr_TIM9_SMCR(FLAG)                  (*(uint32_t*)0x40014008 &= ~FLAG)
#define Set_TIM9_DIER(FLAG)                  (*(uint32_t*)0x4001400c |= FLAG)
#define Clr_TIM9_DIER(FLAG)                  (*(uint32_t*)0x4001400c &= ~FLAG)
#define Set_TIM9_SR(FLAG)                    (*(uint32_t*)0x40014010 |= FLAG)
#define Clr_TIM9_SR(FLAG)                    (*(uint32_t*)0x40014010 &= ~FLAG)
#define Set_TIM9_EGR(FLAG)                   (*(uint32_t*)0x40014014 |= FLAG)
#define Clr_TIM9_EGR(FLAG)                   (*(uint32_t*)0x40014014 &= ~FLAG)
#define Set_TIM9_CCMR1_Output(FLAG)          (*(uint32_t*)0x40014018 |= FLAG)
#define Clr_TIM9_CCMR1_Output(FLAG)          (*(uint32_t*)0x40014018 &= ~FLAG)
#define Set_TIM9_CCMR1_Input(FLAG)           (*(uint32_t*)0x40014018 |= FLAG)
#define Clr_TIM9_CCMR1_Input(FLAG)           (*(uint32_t*)0x40014018 &= ~FLAG)
#define Set_TIM9_CCER(FLAG)                  (*(uint32_t*)0x40014020 |= FLAG)
#define Clr_TIM9_CCER(FLAG)                  (*(uint32_t*)0x40014020 &= ~FLAG)
#define Set_TIM9_CNT(FLAG)                   (*(uint32_t*)0x40014024 |= FLAG)
#define Clr_TIM9_CNT(FLAG)                   (*(uint32_t*)0x40014024 &= ~FLAG)
#define Set_TIM9_PSC(FLAG)                   (*(uint32_t*)0x40014028 |= FLAG)
#define Clr_TIM9_PSC(FLAG)                   (*(uint32_t*)0x40014028 &= ~FLAG)
#define Set_TIM9_ARR(FLAG)                   (*(uint32_t*)0x4001402c |= FLAG)
#define Clr_TIM9_ARR(FLAG)                   (*(uint32_t*)0x4001402c &= ~FLAG)
#define Set_TIM9_CCR1(FLAG)                  (*(uint32_t*)0x40014034 |= FLAG)
#define Clr_TIM9_CCR1(FLAG)                  (*(uint32_t*)0x40014034 &= ~FLAG)
#define Set_TIM9_CCR2(FLAG)                  (*(uint32_t*)0x40014038 |= FLAG)
#define Clr_TIM9_CCR2(FLAG)                  (*(uint32_t*)0x40014038 &= ~FLAG)
#define Set_TIM10_CR1(FLAG)                  (*(uint32_t*)0x40014400 |= FLAG)
#define Clr_TIM10_CR1(FLAG)                  (*(uint32_t*)0x40014400 &= ~FLAG)
#define Set_TIM10_DIER(FLAG)                 (*(uint32_t*)0x4001440c |= FLAG)
#define Clr_TIM10_DIER(FLAG)                 (*(uint32_t*)0x4001440c &= ~FLAG)
#define Set_TIM10_SR(FLAG)                   (*(uint32_t*)0x40014410 |= FLAG)
#define Clr_TIM10_SR(FLAG)                   (*(uint32_t*)0x40014410 &= ~FLAG)
#define Set_TIM10_EGR(FLAG)                  (*(uint32_t*)0x40014414 |= FLAG)
#define Clr_TIM10_EGR(FLAG)                  (*(uint32_t*)0x40014414 &= ~FLAG)
#define Set_TIM10_CCMR1_Output(FLAG)         (*(uint32_t*)0x40014418 |= FLAG)
#define Clr_TIM10_CCMR1_Output(FLAG)         (*(uint32_t*)0x40014418 &= ~FLAG)
#define Set_TIM10_CCMR1_Input(FLAG)          (*(uint32_t*)0x40014418 |= FLAG)
#define Clr_TIM10_CCMR1_Input(FLAG)          (*(uint32_t*)0x40014418 &= ~FLAG)
#define Set_TIM10_CCER(FLAG)                 (*(uint32_t*)0x40014420 |= FLAG)
#define Clr_TIM10_CCER(FLAG)                 (*(uint32_t*)0x40014420 &= ~FLAG)
#define Set_TIM10_CNT(FLAG)                  (*(uint32_t*)0x40014424 |= FLAG)
#define Clr_TIM10_CNT(FLAG)                  (*(uint32_t*)0x40014424 &= ~FLAG)
#define Set_TIM10_PSC(FLAG)                  (*(uint32_t*)0x40014428 |= FLAG)
#define Clr_TIM10_PSC(FLAG)                  (*(uint32_t*)0x40014428 &= ~FLAG)
#define Set_TIM10_ARR(FLAG)                  (*(uint32_t*)0x4001442c |= FLAG)
#define Clr_TIM10_ARR(FLAG)                  (*(uint32_t*)0x4001442c &= ~FLAG)
#define Set_TIM10_CCR1(FLAG)                 (*(uint32_t*)0x40014434 |= FLAG)
#define Clr_TIM10_CCR1(FLAG)                 (*(uint32_t*)0x40014434 &= ~FLAG)
#define Set_TIM10_SMCR(FLAG)                 (*(uint32_t*)0x40014408 |= FLAG)
#define Clr_TIM10_SMCR(FLAG)                 (*(uint32_t*)0x40014408 &= ~FLAG)
#define Set_TIM10_OR(FLAG)                   (*(uint32_t*)0x40014450 |= FLAG)
#define Clr_TIM10_OR(FLAG)                   (*(uint32_t*)0x40014450 &= ~FLAG)
#define Set_TIM11_CR1(FLAG)                  (*(uint32_t*)0x40014800 |= FLAG)
#define Clr_TIM11_CR1(FLAG)                  (*(uint32_t*)0x40014800 &= ~FLAG)
#define Set_TIM11_DIER(FLAG)                 (*(uint32_t*)0x4001480c |= FLAG)
#define Clr_TIM11_DIER(FLAG)                 (*(uint32_t*)0x4001480c &= ~FLAG)
#define Set_TIM11_SR(FLAG)                   (*(uint32_t*)0x40014810 |= FLAG)
#define Clr_TIM11_SR(FLAG)                   (*(uint32_t*)0x40014810 &= ~FLAG)
#define Set_TIM11_EGR(FLAG)                  (*(uint32_t*)0x40014814 |= FLAG)
#define Clr_TIM11_EGR(FLAG)                  (*(uint32_t*)0x40014814 &= ~FLAG)
#define Set_TIM11_CCMR1_Output(FLAG)         (*(uint32_t*)0x40014818 |= FLAG)
#define Clr_TIM11_CCMR1_Output(FLAG)         (*(uint32_t*)0x40014818 &= ~FLAG)
#define Set_TIM11_CCMR1_Input(FLAG)          (*(uint32_t*)0x40014818 |= FLAG)
#define Clr_TIM11_CCMR1_Input(FLAG)          (*(uint32_t*)0x40014818 &= ~FLAG)
#define Set_TIM11_CCER(FLAG)                 (*(uint32_t*)0x40014820 |= FLAG)
#define Clr_TIM11_CCER(FLAG)                 (*(uint32_t*)0x40014820 &= ~FLAG)
#define Set_TIM11_CNT(FLAG)                  (*(uint32_t*)0x40014824 |= FLAG)
#define Clr_TIM11_CNT(FLAG)                  (*(uint32_t*)0x40014824 &= ~FLAG)
#define Set_TIM11_PSC(FLAG)                  (*(uint32_t*)0x40014828 |= FLAG)
#define Clr_TIM11_PSC(FLAG)                  (*(uint32_t*)0x40014828 &= ~FLAG)
#define Set_TIM11_ARR(FLAG)                  (*(uint32_t*)0x4001482c |= FLAG)
#define Clr_TIM11_ARR(FLAG)                  (*(uint32_t*)0x4001482c &= ~FLAG)
#define Set_TIM11_CCR1(FLAG)                 (*(uint32_t*)0x40014834 |= FLAG)
#define Clr_TIM11_CCR1(FLAG)                 (*(uint32_t*)0x40014834 &= ~FLAG)
#define Set_TIM11_SMCR(FLAG)                 (*(uint32_t*)0x40014808 |= FLAG)
#define Clr_TIM11_SMCR(FLAG)                 (*(uint32_t*)0x40014808 &= ~FLAG)
#define Set_TIM11_OR(FLAG)                   (*(uint32_t*)0x40014850 |= FLAG)
#define Clr_TIM11_OR(FLAG)                   (*(uint32_t*)0x40014850 &= ~FLAG)
#define  _TIM2_CR1_CKD                                       (0x3 << 8)    // Clock division
#define  _TIM2_CR1_ARPE                                      (0x1 << 7)    // Auto-reload preload enable
#define  _TIM2_CR1_CMS                                       (0x3 << 5)    // Center-aligned mode selection
#define  _TIM2_CR1_DIR                                       (0x1 << 4)    // Direction
#define  _TIM2_CR1_OPM                                       (0x1 << 3)    // One-pulse mode
#define  _TIM2_CR1_URS                                       (0x1 << 2)    // Update request source
#define  _TIM2_CR1_UDIS                                      (0x1 << 1)    // Update disable
#define  _TIM2_CR1_CEN                                       (0x1 << 0)    // Counter enable
#define  _TIM2_CR2_TI1S                                      (0x1 << 7)    // TI1 selection
#define  _TIM2_CR2_MMS                                       (0x7 << 4)    // Master mode selection
#define  _TIM2_CR2_CCDS                                      (0x1 << 3)    // Capture/compare DMA selection
#define  _TIM2_SMCR_ETP                                      (0x1 << 15)    // External trigger polarity
#define  _TIM2_SMCR_ECE                                      (0x1 << 14)    // External clock enable
#define  _TIM2_SMCR_ETPS                                     (0x3 << 12)    // External trigger prescaler
#define  _TIM2_SMCR_ETF                                      (0xf << 8)    // External trigger filter
#define  _TIM2_SMCR_MSM                                      (0x1 << 7)    // Master/Slave mode
#define  _TIM2_SMCR_TS                                       (0x7 << 4)    // Trigger selection
#define  _TIM2_SMCR_SMS                                      (0x7 << 0)    // Slave mode selection
#define  _TIM2_DIER_TDE                                      (0x1 << 14)    // Trigger DMA request enable
#define  _TIM2_DIER_CC4DE                                    (0x1 << 12)    // Capture/Compare 4 DMA request enable
#define  _TIM2_DIER_CC3DE                                    (0x1 << 11)    // Capture/Compare 3 DMA request enable
#define  _TIM2_DIER_CC2DE                                    (0x1 << 10)    // Capture/Compare 2 DMA request enable
#define  _TIM2_DIER_CC1DE                                    (0x1 << 9)    // Capture/Compare 1 DMA request enable
#define  _TIM2_DIER_UDE                                      (0x1 << 8)    // Update DMA request enable
#define  _TIM2_DIER_TIE                                      (0x1 << 6)    // Trigger interrupt enable
#define  _TIM2_DIER_CC4IE                                    (0x1 << 4)    // Capture/Compare 4 interrupt enable
#define  _TIM2_DIER_CC3IE                                    (0x1 << 3)    // Capture/Compare 3 interrupt enable
#define  _TIM2_DIER_CC2IE                                    (0x1 << 2)    // Capture/Compare 2 interrupt enable
#define  _TIM2_DIER_CC1IE                                    (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM2_DIER_UIE                                      (0x1 << 0)    // Update interrupt enable
#define  _TIM2_SR_CC4OF                                      (0x1 << 12)    // Capture/Compare 4 overcapture flag
#define  _TIM2_SR_CC3OF                                      (0x1 << 11)    // Capture/Compare 3 overcapture flag
#define  _TIM2_SR_CC2OF                                      (0x1 << 10)    // Capture/compare 2 overcapture flag
#define  _TIM2_SR_CC1OF                                      (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM2_SR_TIF                                        (0x1 << 6)    // Trigger interrupt flag
#define  _TIM2_SR_CC4IF                                      (0x1 << 4)    // Capture/Compare 4 interrupt flag
#define  _TIM2_SR_CC3IF                                      (0x1 << 3)    // Capture/Compare 3 interrupt flag
#define  _TIM2_SR_CC2IF                                      (0x1 << 2)    // Capture/Compare 2 interrupt flag
#define  _TIM2_SR_CC1IF                                      (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM2_SR_UIF                                        (0x1 << 0)    // Update interrupt flag
#define  _TIM2_EGR_TG                                        (0x1 << 6)    // Trigger generation
#define  _TIM2_EGR_CC4G                                      (0x1 << 4)    // Capture/compare 4 generation
#define  _TIM2_EGR_CC3G                                      (0x1 << 3)    // Capture/compare 3 generation
#define  _TIM2_EGR_CC2G                                      (0x1 << 2)    // Capture/compare 2 generation
#define  _TIM2_EGR_CC1G                                      (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM2_EGR_UG                                        (0x1 << 0)    // Update generation
#define  _TIM2_CCMR1_Output_OC2CE                            (0x1 << 15)    // OC2CE
#define  _TIM2_CCMR1_Output_OC2M                             (0x7 << 12)    // OC2M
#define  _TIM2_CCMR1_Output_OC2PE                            (0x1 << 11)    // OC2PE
#define  _TIM2_CCMR1_Output_OC2FE                            (0x1 << 10)    // OC2FE
#define  _TIM2_CCMR1_Output_CC2S                             (0x3 << 8)    // CC2S
#define  _TIM2_CCMR1_Output_OC1CE                            (0x1 << 7)    // OC1CE
#define  _TIM2_CCMR1_Output_OC1M                             (0x7 << 4)    // OC1M
#define  _TIM2_CCMR1_Output_OC1PE                            (0x1 << 3)    // OC1PE
#define  _TIM2_CCMR1_Output_OC1FE                            (0x1 << 2)    // OC1FE
#define  _TIM2_CCMR1_Output_CC1S                             (0x3 << 0)    // CC1S
#define  _TIM2_CCMR1_Input_IC2F                              (0xf << 12)    // Input capture 2 filter
#define  _TIM2_CCMR1_Input_IC2PCS                            (0x3 << 10)    // Input capture 2 prescaler
#define  _TIM2_CCMR1_Input_CC2S                              (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM2_CCMR1_Input_IC1F                              (0xf << 4)    // Input capture 1 filter
#define  _TIM2_CCMR1_Input_ICPCS                             (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM2_CCMR1_Input_CC1S                              (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM2_CCMR2_Output_O24CE                            (0x1 << 15)    // O24CE
#define  _TIM2_CCMR2_Output_OC4M                             (0x7 << 12)    // OC4M
#define  _TIM2_CCMR2_Output_OC4PE                            (0x1 << 11)    // OC4PE
#define  _TIM2_CCMR2_Output_OC4FE                            (0x1 << 10)    // OC4FE
#define  _TIM2_CCMR2_Output_CC4S                             (0x3 << 8)    // CC4S
#define  _TIM2_CCMR2_Output_OC3CE                            (0x1 << 7)    // OC3CE
#define  _TIM2_CCMR2_Output_OC3M                             (0x7 << 4)    // OC3M
#define  _TIM2_CCMR2_Output_OC3PE                            (0x1 << 3)    // OC3PE
#define  _TIM2_CCMR2_Output_OC3FE                            (0x1 << 2)    // OC3FE
#define  _TIM2_CCMR2_Output_CC3S                             (0x3 << 0)    // CC3S
#define  _TIM2_CCMR2_Input_IC4F                              (0xf << 12)    // Input capture 4 filter
#define  _TIM2_CCMR2_Input_IC4PSC                            (0x3 << 10)    // Input capture 4 prescaler
#define  _TIM2_CCMR2_Input_CC4S                              (0x3 << 8)    // Capture/Compare 4 selection
#define  _TIM2_CCMR2_Input_IC3F                              (0xf << 4)    // Input capture 3 filter
#define  _TIM2_CCMR2_Input_IC3PSC                            (0x3 << 2)    // Input capture 3 prescaler
#define  _TIM2_CCMR2_Input_CC3S                              (0x3 << 0)    // Capture/compare 3 selection
#define  _TIM2_CCER_CC4NP                                    (0x1 << 15)    // Capture/Compare 4 output Polarity
#define  _TIM2_CCER_CC4P                                     (0x1 << 13)    // Capture/Compare 3 output Polarity
#define  _TIM2_CCER_CC4E                                     (0x1 << 12)    // Capture/Compare 4 output enable
#define  _TIM2_CCER_CC3NP                                    (0x1 << 11)    // Capture/Compare 3 output Polarity
#define  _TIM2_CCER_CC3P                                     (0x1 << 9)    // Capture/Compare 3 output Polarity
#define  _TIM2_CCER_CC3E                                     (0x1 << 8)    // Capture/Compare 3 output enable
#define  _TIM2_CCER_CC2NP                                    (0x1 << 7)    // Capture/Compare 2 output Polarity
#define  _TIM2_CCER_CC2P                                     (0x1 << 5)    // Capture/Compare 2 output Polarity
#define  _TIM2_CCER_CC2E                                     (0x1 << 4)    // Capture/Compare 2 output enable
#define  _TIM2_CCER_CC1NP                                    (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM2_CCER_CC1P                                     (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM2_CCER_CC1E                                     (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM2_CNT_CNT_H                                     (0xffff << 16)    // High counter value
#define  _TIM2_CNT_CNT_L                                     (0xffff << 0)    // Low counter value
#define  _TIM2_PSC_PSC                                       (0xffff << 0)    // Prescaler value
#define  _TIM2_ARR_ARR_H                                     (0xffff << 16)    // High Auto-reload value
#define  _TIM2_ARR_ARR_L                                     (0xffff << 0)    // Low Auto-reload value
#define  _TIM2_CCR1_CCR1_H                                   (0xffff << 16)    // High Capture/Compare 1 value
#define  _TIM2_CCR1_CCR1_L                                   (0xffff << 0)    // Low Capture/Compare 1 value
#define  _TIM2_CCR2_CCR2_H                                   (0xffff << 16)    // High Capture/Compare 2 value
#define  _TIM2_CCR2_CCR2_L                                   (0xffff << 0)    // Low Capture/Compare 2 value
#define  _TIM2_CCR3_CCR3_H                                   (0xffff << 16)    // High Capture/Compare value
#define  _TIM2_CCR3_CCR3_L                                   (0xffff << 0)    // Low Capture/Compare value
#define  _TIM2_CCR4_CCR4_H                                   (0xffff << 16)    // High Capture/Compare value
#define  _TIM2_CCR4_CCR4_L                                   (0xffff << 0)    // Low Capture/Compare value
#define  _TIM2_DCR_DBL                                       (0x1f << 8)    // DMA burst length
#define  _TIM2_DCR_DBA                                       (0x1f << 0)    // DMA base address
#define  _TIM2_DMAR_DMAB                                     (0xffff << 0)    // DMA register for burst accesses
#define  _TIM2_OR1_TI4_RMP                                   (0x3 << 2)    // Input Capture 4 remap
#define  _TIM2_OR1_ETR1_RMP                                  (0x1 << 1)    // External trigger remap
#define  _TIM2_OR1_ITR1_RMP                                  (0x1 << 0)    // Internal trigger 1 remap
#define  _TIM2_OR2_ETRSEL                                    (0x7 << 14)    // ETR source selection
#define  _TIM3_CR1_CKD                                       (0x3 << 8)    // Clock division
#define  _TIM3_CR1_ARPE                                      (0x1 << 7)    // Auto-reload preload enable
#define  _TIM3_CR1_CMS                                       (0x3 << 5)    // Center-aligned mode selection
#define  _TIM3_CR1_DIR                                       (0x1 << 4)    // Direction
#define  _TIM3_CR1_OPM                                       (0x1 << 3)    // One-pulse mode
#define  _TIM3_CR1_URS                                       (0x1 << 2)    // Update request source
#define  _TIM3_CR1_UDIS                                      (0x1 << 1)    // Update disable
#define  _TIM3_CR1_CEN                                       (0x1 << 0)    // Counter enable
#define  _TIM3_CR2_TI1S                                      (0x1 << 7)    // TI1 selection
#define  _TIM3_CR2_MMS                                       (0x7 << 4)    // Master mode selection
#define  _TIM3_CR2_CCDS                                      (0x1 << 3)    // Capture/compare DMA selection
#define  _TIM3_SMCR_ETP                                      (0x1 << 15)    // External trigger polarity
#define  _TIM3_SMCR_ECE                                      (0x1 << 14)    // External clock enable
#define  _TIM3_SMCR_ETPS                                     (0x3 << 12)    // External trigger prescaler
#define  _TIM3_SMCR_ETF                                      (0xf << 8)    // External trigger filter
#define  _TIM3_SMCR_MSM                                      (0x1 << 7)    // Master/Slave mode
#define  _TIM3_SMCR_TS                                       (0x7 << 4)    // Trigger selection
#define  _TIM3_SMCR_SMS                                      (0x7 << 0)    // Slave mode selection
#define  _TIM3_DIER_TDE                                      (0x1 << 14)    // Trigger DMA request enable
#define  _TIM3_DIER_CC4DE                                    (0x1 << 12)    // Capture/Compare 4 DMA request enable
#define  _TIM3_DIER_CC3DE                                    (0x1 << 11)    // Capture/Compare 3 DMA request enable
#define  _TIM3_DIER_CC2DE                                    (0x1 << 10)    // Capture/Compare 2 DMA request enable
#define  _TIM3_DIER_CC1DE                                    (0x1 << 9)    // Capture/Compare 1 DMA request enable
#define  _TIM3_DIER_UDE                                      (0x1 << 8)    // Update DMA request enable
#define  _TIM3_DIER_TIE                                      (0x1 << 6)    // Trigger interrupt enable
#define  _TIM3_DIER_CC4IE                                    (0x1 << 4)    // Capture/Compare 4 interrupt enable
#define  _TIM3_DIER_CC3IE                                    (0x1 << 3)    // Capture/Compare 3 interrupt enable
#define  _TIM3_DIER_CC2IE                                    (0x1 << 2)    // Capture/Compare 2 interrupt enable
#define  _TIM3_DIER_CC1IE                                    (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM3_DIER_UIE                                      (0x1 << 0)    // Update interrupt enable
#define  _TIM3_SR_CC4OF                                      (0x1 << 12)    // Capture/Compare 4 overcapture flag
#define  _TIM3_SR_CC3OF                                      (0x1 << 11)    // Capture/Compare 3 overcapture flag
#define  _TIM3_SR_CC2OF                                      (0x1 << 10)    // Capture/compare 2 overcapture flag
#define  _TIM3_SR_CC1OF                                      (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM3_SR_TIF                                        (0x1 << 6)    // Trigger interrupt flag
#define  _TIM3_SR_CC4IF                                      (0x1 << 4)    // Capture/Compare 4 interrupt flag
#define  _TIM3_SR_CC3IF                                      (0x1 << 3)    // Capture/Compare 3 interrupt flag
#define  _TIM3_SR_CC2IF                                      (0x1 << 2)    // Capture/Compare 2 interrupt flag
#define  _TIM3_SR_CC1IF                                      (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM3_SR_UIF                                        (0x1 << 0)    // Update interrupt flag
#define  _TIM3_EGR_TG                                        (0x1 << 6)    // Trigger generation
#define  _TIM3_EGR_CC4G                                      (0x1 << 4)    // Capture/compare 4 generation
#define  _TIM3_EGR_CC3G                                      (0x1 << 3)    // Capture/compare 3 generation
#define  _TIM3_EGR_CC2G                                      (0x1 << 2)    // Capture/compare 2 generation
#define  _TIM3_EGR_CC1G                                      (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM3_EGR_UG                                        (0x1 << 0)    // Update generation
#define  _TIM3_CCMR1_Output_OC2CE                            (0x1 << 15)    // OC2CE
#define  _TIM3_CCMR1_Output_OC2M                             (0x7 << 12)    // OC2M
#define  _TIM3_CCMR1_Output_OC2PE                            (0x1 << 11)    // OC2PE
#define  _TIM3_CCMR1_Output_OC2FE                            (0x1 << 10)    // OC2FE
#define  _TIM3_CCMR1_Output_CC2S                             (0x3 << 8)    // CC2S
#define  _TIM3_CCMR1_Output_OC1CE                            (0x1 << 7)    // OC1CE
#define  _TIM3_CCMR1_Output_OC1M                             (0x7 << 4)    // OC1M
#define  _TIM3_CCMR1_Output_OC1PE                            (0x1 << 3)    // OC1PE
#define  _TIM3_CCMR1_Output_OC1FE                            (0x1 << 2)    // OC1FE
#define  _TIM3_CCMR1_Output_CC1S                             (0x3 << 0)    // CC1S
#define  _TIM3_CCMR1_Input_IC2F                              (0xf << 12)    // Input capture 2 filter
#define  _TIM3_CCMR1_Input_IC2PCS                            (0x3 << 10)    // Input capture 2 prescaler
#define  _TIM3_CCMR1_Input_CC2S                              (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM3_CCMR1_Input_IC1F                              (0xf << 4)    // Input capture 1 filter
#define  _TIM3_CCMR1_Input_ICPCS                             (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM3_CCMR1_Input_CC1S                              (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM3_CCMR2_Output_O24CE                            (0x1 << 15)    // O24CE
#define  _TIM3_CCMR2_Output_OC4M                             (0x7 << 12)    // OC4M
#define  _TIM3_CCMR2_Output_OC4PE                            (0x1 << 11)    // OC4PE
#define  _TIM3_CCMR2_Output_OC4FE                            (0x1 << 10)    // OC4FE
#define  _TIM3_CCMR2_Output_CC4S                             (0x3 << 8)    // CC4S
#define  _TIM3_CCMR2_Output_OC3CE                            (0x1 << 7)    // OC3CE
#define  _TIM3_CCMR2_Output_OC3M                             (0x7 << 4)    // OC3M
#define  _TIM3_CCMR2_Output_OC3PE                            (0x1 << 3)    // OC3PE
#define  _TIM3_CCMR2_Output_OC3FE                            (0x1 << 2)    // OC3FE
#define  _TIM3_CCMR2_Output_CC3S                             (0x3 << 0)    // CC3S
#define  _TIM3_CCMR2_Input_IC4F                              (0xf << 12)    // Input capture 4 filter
#define  _TIM3_CCMR2_Input_IC4PSC                            (0x3 << 10)    // Input capture 4 prescaler
#define  _TIM3_CCMR2_Input_CC4S                              (0x3 << 8)    // Capture/Compare 4 selection
#define  _TIM3_CCMR2_Input_IC3F                              (0xf << 4)    // Input capture 3 filter
#define  _TIM3_CCMR2_Input_IC3PSC                            (0x3 << 2)    // Input capture 3 prescaler
#define  _TIM3_CCMR2_Input_CC3S                              (0x3 << 0)    // Capture/compare 3 selection
#define  _TIM3_CCER_CC4NP                                    (0x1 << 15)    // Capture/Compare 4 output Polarity
#define  _TIM3_CCER_CC4P                                     (0x1 << 13)    // Capture/Compare 3 output Polarity
#define  _TIM3_CCER_CC4E                                     (0x1 << 12)    // Capture/Compare 4 output enable
#define  _TIM3_CCER_CC3NP                                    (0x1 << 11)    // Capture/Compare 3 output Polarity
#define  _TIM3_CCER_CC3P                                     (0x1 << 9)    // Capture/Compare 3 output Polarity
#define  _TIM3_CCER_CC3E                                     (0x1 << 8)    // Capture/Compare 3 output enable
#define  _TIM3_CCER_CC2NP                                    (0x1 << 7)    // Capture/Compare 2 output Polarity
#define  _TIM3_CCER_CC2P                                     (0x1 << 5)    // Capture/Compare 2 output Polarity
#define  _TIM3_CCER_CC2E                                     (0x1 << 4)    // Capture/Compare 2 output enable
#define  _TIM3_CCER_CC1NP                                    (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM3_CCER_CC1P                                     (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM3_CCER_CC1E                                     (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM3_CNT_CNT_H                                     (0xffff << 16)    // High counter value
#define  _TIM3_CNT_CNT_L                                     (0xffff << 0)    // Low counter value
#define  _TIM3_PSC_PSC                                       (0xffff << 0)    // Prescaler value
#define  _TIM3_ARR_ARR_H                                     (0xffff << 16)    // High Auto-reload value
#define  _TIM3_ARR_ARR_L                                     (0xffff << 0)    // Low Auto-reload value
#define  _TIM3_CCR1_CCR1_H                                   (0xffff << 16)    // High Capture/Compare 1 value
#define  _TIM3_CCR1_CCR1_L                                   (0xffff << 0)    // Low Capture/Compare 1 value
#define  _TIM3_CCR2_CCR2_H                                   (0xffff << 16)    // High Capture/Compare 2 value
#define  _TIM3_CCR2_CCR2_L                                   (0xffff << 0)    // Low Capture/Compare 2 value
#define  _TIM3_CCR3_CCR3_H                                   (0xffff << 16)    // High Capture/Compare value
#define  _TIM3_CCR3_CCR3_L                                   (0xffff << 0)    // Low Capture/Compare value
#define  _TIM3_CCR4_CCR4_H                                   (0xffff << 16)    // High Capture/Compare value
#define  _TIM3_CCR4_CCR4_L                                   (0xffff << 0)    // Low Capture/Compare value
#define  _TIM3_DCR_DBL                                       (0x1f << 8)    // DMA burst length
#define  _TIM3_DCR_DBA                                       (0x1f << 0)    // DMA base address
#define  _TIM3_DMAR_DMAB                                     (0xffff << 0)    // DMA register for burst accesses
#define  _TIM3_OR1_TI1_RMP                                   (0x3 << 0)    // Input Capture 1 remap
#define  _TIM3_OR2_ETRSEL                                    (0x7 << 14)    // ETR source selection
#define  _TIM4_CR1_CKD                                       (0x3 << 8)    // Clock division
#define  _TIM4_CR1_ARPE                                      (0x1 << 7)    // Auto-reload preload enable
#define  _TIM4_CR1_CMS                                       (0x3 << 5)    // Center-aligned mode selection
#define  _TIM4_CR1_DIR                                       (0x1 << 4)    // Direction
#define  _TIM4_CR1_OPM                                       (0x1 << 3)    // One-pulse mode
#define  _TIM4_CR1_URS                                       (0x1 << 2)    // Update request source
#define  _TIM4_CR1_UDIS                                      (0x1 << 1)    // Update disable
#define  _TIM4_CR1_CEN                                       (0x1 << 0)    // Counter enable
#define  _TIM4_CR2_TI1S                                      (0x1 << 7)    // TI1 selection
#define  _TIM4_CR2_MMS                                       (0x7 << 4)    // Master mode selection
#define  _TIM4_CR2_CCDS                                      (0x1 << 3)    // Capture/compare DMA selection
#define  _TIM4_SMCR_ETP                                      (0x1 << 15)    // External trigger polarity
#define  _TIM4_SMCR_ECE                                      (0x1 << 14)    // External clock enable
#define  _TIM4_SMCR_ETPS                                     (0x3 << 12)    // External trigger prescaler
#define  _TIM4_SMCR_ETF                                      (0xf << 8)    // External trigger filter
#define  _TIM4_SMCR_MSM                                      (0x1 << 7)    // Master/Slave mode
#define  _TIM4_SMCR_TS                                       (0x7 << 4)    // Trigger selection
#define  _TIM4_SMCR_SMS                                      (0x7 << 0)    // Slave mode selection
#define  _TIM4_DIER_TDE                                      (0x1 << 14)    // Trigger DMA request enable
#define  _TIM4_DIER_CC4DE                                    (0x1 << 12)    // Capture/Compare 4 DMA request enable
#define  _TIM4_DIER_CC3DE                                    (0x1 << 11)    // Capture/Compare 3 DMA request enable
#define  _TIM4_DIER_CC2DE                                    (0x1 << 10)    // Capture/Compare 2 DMA request enable
#define  _TIM4_DIER_CC1DE                                    (0x1 << 9)    // Capture/Compare 1 DMA request enable
#define  _TIM4_DIER_UDE                                      (0x1 << 8)    // Update DMA request enable
#define  _TIM4_DIER_TIE                                      (0x1 << 6)    // Trigger interrupt enable
#define  _TIM4_DIER_CC4IE                                    (0x1 << 4)    // Capture/Compare 4 interrupt enable
#define  _TIM4_DIER_CC3IE                                    (0x1 << 3)    // Capture/Compare 3 interrupt enable
#define  _TIM4_DIER_CC2IE                                    (0x1 << 2)    // Capture/Compare 2 interrupt enable
#define  _TIM4_DIER_CC1IE                                    (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM4_DIER_UIE                                      (0x1 << 0)    // Update interrupt enable
#define  _TIM4_SR_CC4OF                                      (0x1 << 12)    // Capture/Compare 4 overcapture flag
#define  _TIM4_SR_CC3OF                                      (0x1 << 11)    // Capture/Compare 3 overcapture flag
#define  _TIM4_SR_CC2OF                                      (0x1 << 10)    // Capture/compare 2 overcapture flag
#define  _TIM4_SR_CC1OF                                      (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM4_SR_TIF                                        (0x1 << 6)    // Trigger interrupt flag
#define  _TIM4_SR_CC4IF                                      (0x1 << 4)    // Capture/Compare 4 interrupt flag
#define  _TIM4_SR_CC3IF                                      (0x1 << 3)    // Capture/Compare 3 interrupt flag
#define  _TIM4_SR_CC2IF                                      (0x1 << 2)    // Capture/Compare 2 interrupt flag
#define  _TIM4_SR_CC1IF                                      (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM4_SR_UIF                                        (0x1 << 0)    // Update interrupt flag
#define  _TIM4_EGR_TG                                        (0x1 << 6)    // Trigger generation
#define  _TIM4_EGR_CC4G                                      (0x1 << 4)    // Capture/compare 4 generation
#define  _TIM4_EGR_CC3G                                      (0x1 << 3)    // Capture/compare 3 generation
#define  _TIM4_EGR_CC2G                                      (0x1 << 2)    // Capture/compare 2 generation
#define  _TIM4_EGR_CC1G                                      (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM4_EGR_UG                                        (0x1 << 0)    // Update generation
#define  _TIM4_CCMR1_Output_OC2CE                            (0x1 << 15)    // OC2CE
#define  _TIM4_CCMR1_Output_OC2M                             (0x7 << 12)    // OC2M
#define  _TIM4_CCMR1_Output_OC2PE                            (0x1 << 11)    // OC2PE
#define  _TIM4_CCMR1_Output_OC2FE                            (0x1 << 10)    // OC2FE
#define  _TIM4_CCMR1_Output_CC2S                             (0x3 << 8)    // CC2S
#define  _TIM4_CCMR1_Output_OC1CE                            (0x1 << 7)    // OC1CE
#define  _TIM4_CCMR1_Output_OC1M                             (0x7 << 4)    // OC1M
#define  _TIM4_CCMR1_Output_OC1PE                            (0x1 << 3)    // OC1PE
#define  _TIM4_CCMR1_Output_OC1FE                            (0x1 << 2)    // OC1FE
#define  _TIM4_CCMR1_Output_CC1S                             (0x3 << 0)    // CC1S
#define  _TIM4_CCMR1_Input_IC2F                              (0xf << 12)    // Input capture 2 filter
#define  _TIM4_CCMR1_Input_IC2PCS                            (0x3 << 10)    // Input capture 2 prescaler
#define  _TIM4_CCMR1_Input_CC2S                              (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM4_CCMR1_Input_IC1F                              (0xf << 4)    // Input capture 1 filter
#define  _TIM4_CCMR1_Input_ICPCS                             (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM4_CCMR1_Input_CC1S                              (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM4_CCMR2_Output_O24CE                            (0x1 << 15)    // O24CE
#define  _TIM4_CCMR2_Output_OC4M                             (0x7 << 12)    // OC4M
#define  _TIM4_CCMR2_Output_OC4PE                            (0x1 << 11)    // OC4PE
#define  _TIM4_CCMR2_Output_OC4FE                            (0x1 << 10)    // OC4FE
#define  _TIM4_CCMR2_Output_CC4S                             (0x3 << 8)    // CC4S
#define  _TIM4_CCMR2_Output_OC3CE                            (0x1 << 7)    // OC3CE
#define  _TIM4_CCMR2_Output_OC3M                             (0x7 << 4)    // OC3M
#define  _TIM4_CCMR2_Output_OC3PE                            (0x1 << 3)    // OC3PE
#define  _TIM4_CCMR2_Output_OC3FE                            (0x1 << 2)    // OC3FE
#define  _TIM4_CCMR2_Output_CC3S                             (0x3 << 0)    // CC3S
#define  _TIM4_CCMR2_Input_IC4F                              (0xf << 12)    // Input capture 4 filter
#define  _TIM4_CCMR2_Input_IC4PSC                            (0x3 << 10)    // Input capture 4 prescaler
#define  _TIM4_CCMR2_Input_CC4S                              (0x3 << 8)    // Capture/Compare 4 selection
#define  _TIM4_CCMR2_Input_IC3F                              (0xf << 4)    // Input capture 3 filter
#define  _TIM4_CCMR2_Input_IC3PSC                            (0x3 << 2)    // Input capture 3 prescaler
#define  _TIM4_CCMR2_Input_CC3S                              (0x3 << 0)    // Capture/compare 3 selection
#define  _TIM4_CCER_CC4NP                                    (0x1 << 15)    // Capture/Compare 4 output Polarity
#define  _TIM4_CCER_CC4P                                     (0x1 << 13)    // Capture/Compare 3 output Polarity
#define  _TIM4_CCER_CC4E                                     (0x1 << 12)    // Capture/Compare 4 output enable
#define  _TIM4_CCER_CC3NP                                    (0x1 << 11)    // Capture/Compare 3 output Polarity
#define  _TIM4_CCER_CC3P                                     (0x1 << 9)    // Capture/Compare 3 output Polarity
#define  _TIM4_CCER_CC3E                                     (0x1 << 8)    // Capture/Compare 3 output enable
#define  _TIM4_CCER_CC2NP                                    (0x1 << 7)    // Capture/Compare 2 output Polarity
#define  _TIM4_CCER_CC2P                                     (0x1 << 5)    // Capture/Compare 2 output Polarity
#define  _TIM4_CCER_CC2E                                     (0x1 << 4)    // Capture/Compare 2 output enable
#define  _TIM4_CCER_CC1NP                                    (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM4_CCER_CC1P                                     (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM4_CCER_CC1E                                     (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM4_CNT_CNT_H                                     (0xffff << 16)    // High counter value
#define  _TIM4_CNT_CNT_L                                     (0xffff << 0)    // Low counter value
#define  _TIM4_PSC_PSC                                       (0xffff << 0)    // Prescaler value
#define  _TIM4_ARR_ARR_H                                     (0xffff << 16)    // High Auto-reload value
#define  _TIM4_ARR_ARR_L                                     (0xffff << 0)    // Low Auto-reload value
#define  _TIM4_CCR1_CCR1_H                                   (0xffff << 16)    // High Capture/Compare 1 value
#define  _TIM4_CCR1_CCR1_L                                   (0xffff << 0)    // Low Capture/Compare 1 value
#define  _TIM4_CCR2_CCR2_H                                   (0xffff << 16)    // High Capture/Compare 2 value
#define  _TIM4_CCR2_CCR2_L                                   (0xffff << 0)    // Low Capture/Compare 2 value
#define  _TIM4_CCR3_CCR3_H                                   (0xffff << 16)    // High Capture/Compare value
#define  _TIM4_CCR3_CCR3_L                                   (0xffff << 0)    // Low Capture/Compare value
#define  _TIM4_CCR4_CCR4_H                                   (0xffff << 16)    // High Capture/Compare value
#define  _TIM4_CCR4_CCR4_L                                   (0xffff << 0)    // Low Capture/Compare value
#define  _TIM4_DCR_DBL                                       (0x1f << 8)    // DMA burst length
#define  _TIM4_DCR_DBA                                       (0x1f << 0)    // DMA base address
#define  _TIM4_DMAR_DMAB                                     (0xffff << 0)    // DMA register for burst accesses
#define  _TIM5_CR1_CKD                                       (0x3 << 8)    // Clock division
#define  _TIM5_CR1_ARPE                                      (0x1 << 7)    // Auto-reload preload enable
#define  _TIM5_CR1_CMS                                       (0x3 << 5)    // Center-aligned mode selection
#define  _TIM5_CR1_DIR                                       (0x1 << 4)    // Direction
#define  _TIM5_CR1_OPM                                       (0x1 << 3)    // One-pulse mode
#define  _TIM5_CR1_URS                                       (0x1 << 2)    // Update request source
#define  _TIM5_CR1_UDIS                                      (0x1 << 1)    // Update disable
#define  _TIM5_CR1_CEN                                       (0x1 << 0)    // Counter enable
#define  _TIM5_CR2_TI1S                                      (0x1 << 7)    // TI1 selection
#define  _TIM5_CR2_MMS                                       (0x7 << 4)    // Master mode selection
#define  _TIM5_CR2_CCDS                                      (0x1 << 3)    // Capture/compare DMA selection
#define  _TIM5_SMCR_ETP                                      (0x1 << 15)    // External trigger polarity
#define  _TIM5_SMCR_ECE                                      (0x1 << 14)    // External clock enable
#define  _TIM5_SMCR_ETPS                                     (0x3 << 12)    // External trigger prescaler
#define  _TIM5_SMCR_ETF                                      (0xf << 8)    // External trigger filter
#define  _TIM5_SMCR_MSM                                      (0x1 << 7)    // Master/Slave mode
#define  _TIM5_SMCR_TS                                       (0x7 << 4)    // Trigger selection
#define  _TIM5_SMCR_SMS                                      (0x7 << 0)    // Slave mode selection
#define  _TIM5_DIER_TDE                                      (0x1 << 14)    // Trigger DMA request enable
#define  _TIM5_DIER_CC4DE                                    (0x1 << 12)    // Capture/Compare 4 DMA request enable
#define  _TIM5_DIER_CC3DE                                    (0x1 << 11)    // Capture/Compare 3 DMA request enable
#define  _TIM5_DIER_CC2DE                                    (0x1 << 10)    // Capture/Compare 2 DMA request enable
#define  _TIM5_DIER_CC1DE                                    (0x1 << 9)    // Capture/Compare 1 DMA request enable
#define  _TIM5_DIER_UDE                                      (0x1 << 8)    // Update DMA request enable
#define  _TIM5_DIER_TIE                                      (0x1 << 6)    // Trigger interrupt enable
#define  _TIM5_DIER_CC4IE                                    (0x1 << 4)    // Capture/Compare 4 interrupt enable
#define  _TIM5_DIER_CC3IE                                    (0x1 << 3)    // Capture/Compare 3 interrupt enable
#define  _TIM5_DIER_CC2IE                                    (0x1 << 2)    // Capture/Compare 2 interrupt enable
#define  _TIM5_DIER_CC1IE                                    (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM5_DIER_UIE                                      (0x1 << 0)    // Update interrupt enable
#define  _TIM5_SR_CC4OF                                      (0x1 << 12)    // Capture/Compare 4 overcapture flag
#define  _TIM5_SR_CC3OF                                      (0x1 << 11)    // Capture/Compare 3 overcapture flag
#define  _TIM5_SR_CC2OF                                      (0x1 << 10)    // Capture/compare 2 overcapture flag
#define  _TIM5_SR_CC1OF                                      (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM5_SR_TIF                                        (0x1 << 6)    // Trigger interrupt flag
#define  _TIM5_SR_CC4IF                                      (0x1 << 4)    // Capture/Compare 4 interrupt flag
#define  _TIM5_SR_CC3IF                                      (0x1 << 3)    // Capture/Compare 3 interrupt flag
#define  _TIM5_SR_CC2IF                                      (0x1 << 2)    // Capture/Compare 2 interrupt flag
#define  _TIM5_SR_CC1IF                                      (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM5_SR_UIF                                        (0x1 << 0)    // Update interrupt flag
#define  _TIM5_EGR_TG                                        (0x1 << 6)    // Trigger generation
#define  _TIM5_EGR_CC4G                                      (0x1 << 4)    // Capture/compare 4 generation
#define  _TIM5_EGR_CC3G                                      (0x1 << 3)    // Capture/compare 3 generation
#define  _TIM5_EGR_CC2G                                      (0x1 << 2)    // Capture/compare 2 generation
#define  _TIM5_EGR_CC1G                                      (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM5_EGR_UG                                        (0x1 << 0)    // Update generation
#define  _TIM5_CCMR1_Output_OC2CE                            (0x1 << 15)    // OC2CE
#define  _TIM5_CCMR1_Output_OC2M                             (0x7 << 12)    // OC2M
#define  _TIM5_CCMR1_Output_OC2PE                            (0x1 << 11)    // OC2PE
#define  _TIM5_CCMR1_Output_OC2FE                            (0x1 << 10)    // OC2FE
#define  _TIM5_CCMR1_Output_CC2S                             (0x3 << 8)    // CC2S
#define  _TIM5_CCMR1_Output_OC1CE                            (0x1 << 7)    // OC1CE
#define  _TIM5_CCMR1_Output_OC1M                             (0x7 << 4)    // OC1M
#define  _TIM5_CCMR1_Output_OC1PE                            (0x1 << 3)    // OC1PE
#define  _TIM5_CCMR1_Output_OC1FE                            (0x1 << 2)    // OC1FE
#define  _TIM5_CCMR1_Output_CC1S                             (0x3 << 0)    // CC1S
#define  _TIM5_CCMR1_Input_IC2F                              (0xf << 12)    // Input capture 2 filter
#define  _TIM5_CCMR1_Input_IC2PCS                            (0x3 << 10)    // Input capture 2 prescaler
#define  _TIM5_CCMR1_Input_CC2S                              (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM5_CCMR1_Input_IC1F                              (0xf << 4)    // Input capture 1 filter
#define  _TIM5_CCMR1_Input_ICPCS                             (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM5_CCMR1_Input_CC1S                              (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM5_CCMR2_Output_O24CE                            (0x1 << 15)    // O24CE
#define  _TIM5_CCMR2_Output_OC4M                             (0x7 << 12)    // OC4M
#define  _TIM5_CCMR2_Output_OC4PE                            (0x1 << 11)    // OC4PE
#define  _TIM5_CCMR2_Output_OC4FE                            (0x1 << 10)    // OC4FE
#define  _TIM5_CCMR2_Output_CC4S                             (0x3 << 8)    // CC4S
#define  _TIM5_CCMR2_Output_OC3CE                            (0x1 << 7)    // OC3CE
#define  _TIM5_CCMR2_Output_OC3M                             (0x7 << 4)    // OC3M
#define  _TIM5_CCMR2_Output_OC3PE                            (0x1 << 3)    // OC3PE
#define  _TIM5_CCMR2_Output_OC3FE                            (0x1 << 2)    // OC3FE
#define  _TIM5_CCMR2_Output_CC3S                             (0x3 << 0)    // CC3S
#define  _TIM5_CCMR2_Input_IC4F                              (0xf << 12)    // Input capture 4 filter
#define  _TIM5_CCMR2_Input_IC4PSC                            (0x3 << 10)    // Input capture 4 prescaler
#define  _TIM5_CCMR2_Input_CC4S                              (0x3 << 8)    // Capture/Compare 4 selection
#define  _TIM5_CCMR2_Input_IC3F                              (0xf << 4)    // Input capture 3 filter
#define  _TIM5_CCMR2_Input_IC3PSC                            (0x3 << 2)    // Input capture 3 prescaler
#define  _TIM5_CCMR2_Input_CC3S                              (0x3 << 0)    // Capture/compare 3 selection
#define  _TIM5_CCER_CC4NP                                    (0x1 << 15)    // Capture/Compare 4 output Polarity
#define  _TIM5_CCER_CC4P                                     (0x1 << 13)    // Capture/Compare 3 output Polarity
#define  _TIM5_CCER_CC4E                                     (0x1 << 12)    // Capture/Compare 4 output enable
#define  _TIM5_CCER_CC3NP                                    (0x1 << 11)    // Capture/Compare 3 output Polarity
#define  _TIM5_CCER_CC3P                                     (0x1 << 9)    // Capture/Compare 3 output Polarity
#define  _TIM5_CCER_CC3E                                     (0x1 << 8)    // Capture/Compare 3 output enable
#define  _TIM5_CCER_CC2NP                                    (0x1 << 7)    // Capture/Compare 2 output Polarity
#define  _TIM5_CCER_CC2P                                     (0x1 << 5)    // Capture/Compare 2 output Polarity
#define  _TIM5_CCER_CC2E                                     (0x1 << 4)    // Capture/Compare 2 output enable
#define  _TIM5_CCER_CC1NP                                    (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM5_CCER_CC1P                                     (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM5_CCER_CC1E                                     (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM5_CNT_CNT_H                                     (0xffff << 16)    // High counter value
#define  _TIM5_CNT_CNT_L                                     (0xffff << 0)    // Low counter value
#define  _TIM5_PSC_PSC                                       (0xffff << 0)    // Prescaler value
#define  _TIM5_ARR_ARR_H                                     (0xffff << 16)    // High Auto-reload value
#define  _TIM5_ARR_ARR_L                                     (0xffff << 0)    // Low Auto-reload value
#define  _TIM5_CCR1_CCR1_H                                   (0xffff << 16)    // High Capture/Compare 1 value
#define  _TIM5_CCR1_CCR1_L                                   (0xffff << 0)    // Low Capture/Compare 1 value
#define  _TIM5_CCR2_CCR2_H                                   (0xffff << 16)    // High Capture/Compare 2 value
#define  _TIM5_CCR2_CCR2_L                                   (0xffff << 0)    // Low Capture/Compare 2 value
#define  _TIM5_CCR3_CCR3_H                                   (0xffff << 16)    // High Capture/Compare value
#define  _TIM5_CCR3_CCR3_L                                   (0xffff << 0)    // Low Capture/Compare value
#define  _TIM5_CCR4_CCR4_H                                   (0xffff << 16)    // High Capture/Compare value
#define  _TIM5_CCR4_CCR4_L                                   (0xffff << 0)    // Low Capture/Compare value
#define  _TIM5_DCR_DBL                                       (0x1f << 8)    // DMA burst length
#define  _TIM5_DCR_DBA                                       (0x1f << 0)    // DMA base address
#define  _TIM5_DMAR_DMAB                                     (0xffff << 0)    // DMA register for burst accesses
#define  _TIM6_CR1_ARPE                                      (0x1 << 7)    // Auto-reload preload enable
#define  _TIM6_CR1_OPM                                       (0x1 << 3)    // One-pulse mode
#define  _TIM6_CR1_URS                                       (0x1 << 2)    // Update request source
#define  _TIM6_CR1_UDIS                                      (0x1 << 1)    // Update disable
#define  _TIM6_CR1_CEN                                       (0x1 << 0)    // Counter enable
#define  _TIM6_CR2_MMS                                       (0x7 << 4)    // Master mode selection
#define  _TIM6_DIER_UDE                                      (0x1 << 8)    // Update DMA request enable
#define  _TIM6_DIER_UIE                                      (0x1 << 0)    // Update interrupt enable
#define  _TIM6_SR_UIF                                        (0x1 << 0)    // Update interrupt flag
#define  _TIM6_EGR_UG                                        (0x1 << 0)    // Update generation
#define  _TIM6_CNT_CNT                                       (0xffff << 0)    // Low counter value
#define  _TIM6_PSC_PSC                                       (0xffff << 0)    // Prescaler value
#define  _TIM6_ARR_ARR                                       (0xffff << 0)    // Low Auto-reload value
#define  _TIM7_CR1_ARPE                                      (0x1 << 7)    // Auto-reload preload enable
#define  _TIM7_CR1_OPM                                       (0x1 << 3)    // One-pulse mode
#define  _TIM7_CR1_URS                                       (0x1 << 2)    // Update request source
#define  _TIM7_CR1_UDIS                                      (0x1 << 1)    // Update disable
#define  _TIM7_CR1_CEN                                       (0x1 << 0)    // Counter enable
#define  _TIM7_CR2_MMS                                       (0x7 << 4)    // Master mode selection
#define  _TIM7_DIER_UDE                                      (0x1 << 8)    // Update DMA request enable
#define  _TIM7_DIER_UIE                                      (0x1 << 0)    // Update interrupt enable
#define  _TIM7_SR_UIF                                        (0x1 << 0)    // Update interrupt flag
#define  _TIM7_EGR_UG                                        (0x1 << 0)    // Update generation
#define  _TIM7_CNT_CNT                                       (0xffff << 0)    // Low counter value
#define  _TIM7_PSC_PSC                                       (0xffff << 0)    // Prescaler value
#define  _TIM7_ARR_ARR                                       (0xffff << 0)    // Low Auto-reload value
#define  _TIM12_CR1_CKD                                      (0x3 << 8)    // Clock division
#define  _TIM12_CR1_ARPE                                     (0x1 << 7)    // Auto-reload preload enable
#define  _TIM12_CR1_OPM                                      (0x1 << 3)    // One-pulse mode
#define  _TIM12_CR1_URS                                      (0x1 << 2)    // Update request source
#define  _TIM12_CR1_UDIS                                     (0x1 << 1)    // Update disable
#define  _TIM12_CR1_CEN                                      (0x1 << 0)    // Counter enable
#define  _TIM12_SMCR_MSM                                     (0x1 << 7)    // Master/Slave mode
#define  _TIM12_SMCR_TS                                      (0x7 << 4)    // Trigger selection
#define  _TIM12_SMCR_SMS                                     (0x7 << 0)    // Slave mode selection
#define  _TIM12_DIER_TIE                                     (0x1 << 6)    // Trigger interrupt enable
#define  _TIM12_DIER_CC2IE                                   (0x1 << 2)    // Capture/Compare 2 interrupt enable
#define  _TIM12_DIER_CC1IE                                   (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM12_DIER_UIE                                     (0x1 << 0)    // Update interrupt enable
#define  _TIM12_SR_CC2OF                                     (0x1 << 10)    // Capture/compare 2 overcapture flag
#define  _TIM12_SR_CC1OF                                     (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM12_SR_TIF                                       (0x1 << 6)    // Trigger interrupt flag
#define  _TIM12_SR_CC2IF                                     (0x1 << 2)    // Capture/Compare 2 interrupt flag
#define  _TIM12_SR_CC1IF                                     (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM12_SR_UIF                                       (0x1 << 0)    // Update interrupt flag
#define  _TIM12_EGR_TG                                       (0x1 << 6)    // Trigger generation
#define  _TIM12_EGR_CC2G                                     (0x1 << 2)    // Capture/compare 2 generation
#define  _TIM12_EGR_CC1G                                     (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM12_EGR_UG                                       (0x1 << 0)    // Update generation
#define  _TIM12_CCMR1_Output_OC2M                            (0x7 << 12)    // Output Compare 2 mode
#define  _TIM12_CCMR1_Output_OC2PE                           (0x1 << 11)    // Output Compare 2 preload enable
#define  _TIM12_CCMR1_Output_OC2FE                           (0x1 << 10)    // Output Compare 2 fast enable
#define  _TIM12_CCMR1_Output_CC2S                            (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM12_CCMR1_Output_OC1M                            (0x7 << 4)    // Output Compare 1 mode
#define  _TIM12_CCMR1_Output_OC1PE                           (0x1 << 3)    // Output Compare 1 preload enable
#define  _TIM12_CCMR1_Output_OC1FE                           (0x1 << 2)    // Output Compare 1 fast enable
#define  _TIM12_CCMR1_Output_CC1S                            (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM12_CCMR1_Input_IC2F                             (0x7 << 12)    // Input capture 2 filter
#define  _TIM12_CCMR1_Input_IC2PCS                           (0x3 << 10)    // Input capture 2 prescaler
#define  _TIM12_CCMR1_Input_CC2S                             (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM12_CCMR1_Input_IC1F                             (0x7 << 4)    // Input capture 1 filter
#define  _TIM12_CCMR1_Input_ICPCS                            (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM12_CCMR1_Input_CC1S                             (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM12_CCER_CC2NP                                   (0x1 << 7)    // Capture/Compare 2 output Polarity
#define  _TIM12_CCER_CC2P                                    (0x1 << 5)    // Capture/Compare 2 output Polarity
#define  _TIM12_CCER_CC2E                                    (0x1 << 4)    // Capture/Compare 2 output enable
#define  _TIM12_CCER_CC1NP                                   (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM12_CCER_CC1P                                    (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM12_CCER_CC1E                                    (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM12_CNT_CNT                                      (0xffff << 0)    // counter value
#define  _TIM12_PSC_PSC                                      (0xffff << 0)    // Prescaler value
#define  _TIM12_ARR_ARR                                      (0xffff << 0)    // Auto-reload value
#define  _TIM12_CCR1_CCR1                                    (0xffff << 0)    // Capture/Compare 1 value
#define  _TIM12_CCR2_CCR2                                    (0xffff << 0)    // Capture/Compare 2 value
#define  _TIM13_CR1_CKD                                      (0x3 << 8)    // Clock division
#define  _TIM13_CR1_ARPE                                     (0x1 << 7)    // Auto-reload preload enable
#define  _TIM13_CR1_URS                                      (0x1 << 2)    // Update request source
#define  _TIM13_CR1_UDIS                                     (0x1 << 1)    // Update disable
#define  _TIM13_CR1_CEN                                      (0x1 << 0)    // Counter enable
#define  _TIM13_DIER_CC1IE                                   (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM13_DIER_UIE                                     (0x1 << 0)    // Update interrupt enable
#define  _TIM13_SR_CC1OF                                     (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM13_SR_CC1IF                                     (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM13_SR_UIF                                       (0x1 << 0)    // Update interrupt flag
#define  _TIM13_EGR_CC1G                                     (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM13_EGR_UG                                       (0x1 << 0)    // Update generation
#define  _TIM13_CCMR1_Output_OC1M                            (0x7 << 4)    // Output Compare 1 mode
#define  _TIM13_CCMR1_Output_OC1PE                           (0x1 << 3)    // Output Compare 1 preload enable
#define  _TIM13_CCMR1_Output_OC1FE                           (0x1 << 2)    // Output Compare 1 fast enable
#define  _TIM13_CCMR1_Output_CC1S                            (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM13_CCMR1_Input_IC1F                             (0xf << 4)    // Input capture 1 filter
#define  _TIM13_CCMR1_Input_ICPCS                            (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM13_CCMR1_Input_CC1S                             (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM13_CCER_CC1NP                                   (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM13_CCER_CC1P                                    (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM13_CCER_CC1E                                    (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM13_CNT_CNT                                      (0xffff << 0)    // counter value
#define  _TIM13_PSC_PSC                                      (0xffff << 0)    // Prescaler value
#define  _TIM13_ARR_ARR                                      (0xffff << 0)    // Auto-reload value
#define  _TIM13_CCR1_CCR1                                    (0xffff << 0)    // Capture/Compare 1 value
#define  _TIM13_SMCR_SMS3                                    (0x1 << 16)    // Slave mode selection
#define  _TIM13_SMCR_ETP                                     (0x1 << 15)    // External trigger polarity
#define  _TIM13_SMCR_ECE                                     (0x1 << 14)    // External clock enable
#define  _TIM13_SMCR_ETPS                                    (0x3 << 12)    // External trigger prescaler
#define  _TIM13_SMCR_ETF                                     (0xf << 8)    // External trigger filter
#define  _TIM13_SMCR_MSM                                     (0x1 << 7)    // Master/slave mode
#define  _TIM13_SMCR_TS                                      (0x7 << 4)    // Trigger selection
#define  _TIM13_SMCR_SMS                                     (0x7 << 0)    // Slave mode selection
#define  _TIM13_OR_TI1_RMP                                   (0x3 << 0)    // TIM11 Input 1 remapping capability
#define  _TIM14_CR1_CKD                                      (0x3 << 8)    // Clock division
#define  _TIM14_CR1_ARPE                                     (0x1 << 7)    // Auto-reload preload enable
#define  _TIM14_CR1_URS                                      (0x1 << 2)    // Update request source
#define  _TIM14_CR1_UDIS                                     (0x1 << 1)    // Update disable
#define  _TIM14_CR1_CEN                                      (0x1 << 0)    // Counter enable
#define  _TIM14_DIER_CC1IE                                   (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM14_DIER_UIE                                     (0x1 << 0)    // Update interrupt enable
#define  _TIM14_SR_CC1OF                                     (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM14_SR_CC1IF                                     (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM14_SR_UIF                                       (0x1 << 0)    // Update interrupt flag
#define  _TIM14_EGR_CC1G                                     (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM14_EGR_UG                                       (0x1 << 0)    // Update generation
#define  _TIM14_CCMR1_Output_OC1M                            (0x7 << 4)    // Output Compare 1 mode
#define  _TIM14_CCMR1_Output_OC1PE                           (0x1 << 3)    // Output Compare 1 preload enable
#define  _TIM14_CCMR1_Output_OC1FE                           (0x1 << 2)    // Output Compare 1 fast enable
#define  _TIM14_CCMR1_Output_CC1S                            (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM14_CCMR1_Input_IC1F                             (0xf << 4)    // Input capture 1 filter
#define  _TIM14_CCMR1_Input_ICPCS                            (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM14_CCMR1_Input_CC1S                             (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM14_CCER_CC1NP                                   (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM14_CCER_CC1P                                    (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM14_CCER_CC1E                                    (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM14_CNT_CNT                                      (0xffff << 0)    // counter value
#define  _TIM14_PSC_PSC                                      (0xffff << 0)    // Prescaler value
#define  _TIM14_ARR_ARR                                      (0xffff << 0)    // Auto-reload value
#define  _TIM14_CCR1_CCR1                                    (0xffff << 0)    // Capture/Compare 1 value
#define  _TIM14_SMCR_SMS3                                    (0x1 << 16)    // Slave mode selection
#define  _TIM14_SMCR_ETP                                     (0x1 << 15)    // External trigger polarity
#define  _TIM14_SMCR_ECE                                     (0x1 << 14)    // External clock enable
#define  _TIM14_SMCR_ETPS                                    (0x3 << 12)    // External trigger prescaler
#define  _TIM14_SMCR_ETF                                     (0xf << 8)    // External trigger filter
#define  _TIM14_SMCR_MSM                                     (0x1 << 7)    // Master/slave mode
#define  _TIM14_SMCR_TS                                      (0x7 << 4)    // Trigger selection
#define  _TIM14_SMCR_SMS                                     (0x7 << 0)    // Slave mode selection
#define  _TIM14_OR_TI1_RMP                                   (0x3 << 0)    // TIM11 Input 1 remapping capability
#define  _TIM1_CR1_CKD                                       (0x3 << 8)    // Clock division
#define  _TIM1_CR1_ARPE                                      (0x1 << 7)    // Auto-reload preload enable
#define  _TIM1_CR1_CMS                                       (0x3 << 5)    // Center-aligned mode selection
#define  _TIM1_CR1_DIR                                       (0x1 << 4)    // Direction
#define  _TIM1_CR1_OPM                                       (0x1 << 3)    // One-pulse mode
#define  _TIM1_CR1_URS                                       (0x1 << 2)    // Update request source
#define  _TIM1_CR1_UDIS                                      (0x1 << 1)    // Update disable
#define  _TIM1_CR1_CEN                                       (0x1 << 0)    // Counter enable
#define  _TIM1_CR2_OIS4                                      (0x1 << 14)    // Output Idle state 4
#define  _TIM1_CR2_OIS3N                                     (0x1 << 13)    // Output Idle state 3
#define  _TIM1_CR2_OIS3                                      (0x1 << 12)    // Output Idle state 3
#define  _TIM1_CR2_OIS2N                                     (0x1 << 11)    // Output Idle state 2
#define  _TIM1_CR2_OIS2                                      (0x1 << 10)    // Output Idle state 2
#define  _TIM1_CR2_OIS1N                                     (0x1 << 9)    // Output Idle state 1
#define  _TIM1_CR2_OIS1                                      (0x1 << 8)    // Output Idle state 1
#define  _TIM1_CR2_TI1S                                      (0x1 << 7)    // TI1 selection
#define  _TIM1_CR2_MMS                                       (0x7 << 4)    // Master mode selection
#define  _TIM1_CR2_CCDS                                      (0x1 << 3)    // Capture/compare DMA selection
#define  _TIM1_CR2_CCUS                                      (0x1 << 2)    // Capture/compare control update selection
#define  _TIM1_CR2_CCPC                                      (0x1 << 0)    // Capture/compare preloaded control
#define  _TIM1_SMCR_ETP                                      (0x1 << 15)    // External trigger polarity
#define  _TIM1_SMCR_ECE                                      (0x1 << 14)    // External clock enable
#define  _TIM1_SMCR_ETPS                                     (0x3 << 12)    // External trigger prescaler
#define  _TIM1_SMCR_ETF                                      (0xf << 8)    // External trigger filter
#define  _TIM1_SMCR_MSM                                      (0x1 << 7)    // Master/Slave mode
#define  _TIM1_SMCR_TS                                       (0x7 << 4)    // Trigger selection
#define  _TIM1_SMCR_SMS                                      (0x7 << 0)    // Slave mode selection
#define  _TIM1_DIER_TDE                                      (0x1 << 14)    // Trigger DMA request enable
#define  _TIM1_DIER_COMDE                                    (0x1 << 13)    // COM DMA request enable
#define  _TIM1_DIER_CC4DE                                    (0x1 << 12)    // Capture/Compare 4 DMA request enable
#define  _TIM1_DIER_CC3DE                                    (0x1 << 11)    // Capture/Compare 3 DMA request enable
#define  _TIM1_DIER_CC2DE                                    (0x1 << 10)    // Capture/Compare 2 DMA request enable
#define  _TIM1_DIER_CC1DE                                    (0x1 << 9)    // Capture/Compare 1 DMA request enable
#define  _TIM1_DIER_UDE                                      (0x1 << 8)    // Update DMA request enable
#define  _TIM1_DIER_TIE                                      (0x1 << 6)    // Trigger interrupt enable
#define  _TIM1_DIER_CC4IE                                    (0x1 << 4)    // Capture/Compare 4 interrupt enable
#define  _TIM1_DIER_CC3IE                                    (0x1 << 3)    // Capture/Compare 3 interrupt enable
#define  _TIM1_DIER_CC2IE                                    (0x1 << 2)    // Capture/Compare 2 interrupt enable
#define  _TIM1_DIER_CC1IE                                    (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM1_DIER_UIE                                      (0x1 << 0)    // Update interrupt enable
#define  _TIM1_DIER_BIE                                      (0x1 << 7)    // Break interrupt enable
#define  _TIM1_DIER_COMIE                                    (0x1 << 5)    // COM interrupt enable
#define  _TIM1_SR_CC4OF                                      (0x1 << 12)    // Capture/Compare 4 overcapture flag
#define  _TIM1_SR_CC3OF                                      (0x1 << 11)    // Capture/Compare 3 overcapture flag
#define  _TIM1_SR_CC2OF                                      (0x1 << 10)    // Capture/compare 2 overcapture flag
#define  _TIM1_SR_CC1OF                                      (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM1_SR_BIF                                        (0x1 << 7)    // Break interrupt flag
#define  _TIM1_SR_TIF                                        (0x1 << 6)    // Trigger interrupt flag
#define  _TIM1_SR_COMIF                                      (0x1 << 5)    // COM interrupt flag
#define  _TIM1_SR_CC4IF                                      (0x1 << 4)    // Capture/Compare 4 interrupt flag
#define  _TIM1_SR_CC3IF                                      (0x1 << 3)    // Capture/Compare 3 interrupt flag
#define  _TIM1_SR_CC2IF                                      (0x1 << 2)    // Capture/Compare 2 interrupt flag
#define  _TIM1_SR_CC1IF                                      (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM1_SR_UIF                                        (0x1 << 0)    // Update interrupt flag
#define  _TIM1_EGR_BG                                        (0x1 << 7)    // Break generation
#define  _TIM1_EGR_TG                                        (0x1 << 6)    // Trigger generation
#define  _TIM1_EGR_COMG                                      (0x1 << 5)    // Capture/Compare control update generation
#define  _TIM1_EGR_CC4G                                      (0x1 << 4)    // Capture/compare 4 generation
#define  _TIM1_EGR_CC3G                                      (0x1 << 3)    // Capture/compare 3 generation
#define  _TIM1_EGR_CC2G                                      (0x1 << 2)    // Capture/compare 2 generation
#define  _TIM1_EGR_CC1G                                      (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM1_EGR_UG                                        (0x1 << 0)    // Update generation
#define  _TIM1_CCMR1_Output_OC2CE                            (0x1 << 15)    // Output Compare 2 clear enable
#define  _TIM1_CCMR1_Output_OC2M                             (0x7 << 12)    // Output Compare 2 mode
#define  _TIM1_CCMR1_Output_OC2PE                            (0x1 << 11)    // Output Compare 2 preload enable
#define  _TIM1_CCMR1_Output_OC2FE                            (0x1 << 10)    // Output Compare 2 fast enable
#define  _TIM1_CCMR1_Output_CC2S                             (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM1_CCMR1_Output_OC1CE                            (0x1 << 7)    // Output Compare 1 clear enable
#define  _TIM1_CCMR1_Output_OC1M                             (0x7 << 4)    // Output Compare 1 mode
#define  _TIM1_CCMR1_Output_OC1PE                            (0x1 << 3)    // Output Compare 1 preload enable
#define  _TIM1_CCMR1_Output_OC1FE                            (0x1 << 2)    // Output Compare 1 fast enable
#define  _TIM1_CCMR1_Output_CC1S                             (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM1_CCMR1_Input_IC2F                              (0xf << 12)    // Input capture 2 filter
#define  _TIM1_CCMR1_Input_IC2PCS                            (0x3 << 10)    // Input capture 2 prescaler
#define  _TIM1_CCMR1_Input_CC2S                              (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM1_CCMR1_Input_IC1F                              (0xf << 4)    // Input capture 1 filter
#define  _TIM1_CCMR1_Input_ICPCS                             (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM1_CCMR1_Input_CC1S                              (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM1_CCMR2_Output_OC4CE                            (0x1 << 15)    // Output compare 4 clear enable
#define  _TIM1_CCMR2_Output_OC4M                             (0x7 << 12)    // Output compare 4 mode
#define  _TIM1_CCMR2_Output_OC4PE                            (0x1 << 11)    // Output compare 4 preload enable
#define  _TIM1_CCMR2_Output_OC4FE                            (0x1 << 10)    // Output compare 4 fast enable
#define  _TIM1_CCMR2_Output_CC4S                             (0x3 << 8)    // Capture/Compare 4 selection
#define  _TIM1_CCMR2_Output_OC3CE                            (0x1 << 7)    // Output compare 3 clear enable
#define  _TIM1_CCMR2_Output_OC3M                             (0x7 << 4)    // Output compare 3 mode
#define  _TIM1_CCMR2_Output_OC3PE                            (0x1 << 3)    // Output compare 3 preload enable
#define  _TIM1_CCMR2_Output_OC3FE                            (0x1 << 2)    // Output compare 3 fast enable
#define  _TIM1_CCMR2_Output_CC3S                             (0x3 << 0)    // Capture/Compare 3 selection
#define  _TIM1_CCMR2_Input_IC4F                              (0xf << 12)    // Input capture 4 filter
#define  _TIM1_CCMR2_Input_IC4PSC                            (0x3 << 10)    // Input capture 4 prescaler
#define  _TIM1_CCMR2_Input_CC4S                              (0x3 << 8)    // Capture/Compare 4 selection
#define  _TIM1_CCMR2_Input_IC3F                              (0xf << 4)    // Input capture 3 filter
#define  _TIM1_CCMR2_Input_IC3PSC                            (0x3 << 2)    // Input capture 3 prescaler
#define  _TIM1_CCMR2_Input_CC3S                              (0x3 << 0)    // Capture/compare 3 selection
#define  _TIM1_CCER_CC4P                                     (0x1 << 13)    // Capture/Compare 3 output Polarity
#define  _TIM1_CCER_CC4E                                     (0x1 << 12)    // Capture/Compare 4 output enable
#define  _TIM1_CCER_CC3NP                                    (0x1 << 11)    // Capture/Compare 3 output Polarity
#define  _TIM1_CCER_CC3NE                                    (0x1 << 10)    // Capture/Compare 3 complementary output enable
#define  _TIM1_CCER_CC3P                                     (0x1 << 9)    // Capture/Compare 3 output Polarity
#define  _TIM1_CCER_CC3E                                     (0x1 << 8)    // Capture/Compare 3 output enable
#define  _TIM1_CCER_CC2NP                                    (0x1 << 7)    // Capture/Compare 2 output Polarity
#define  _TIM1_CCER_CC2NE                                    (0x1 << 6)    // Capture/Compare 2 complementary output enable
#define  _TIM1_CCER_CC2P                                     (0x1 << 5)    // Capture/Compare 2 output Polarity
#define  _TIM1_CCER_CC2E                                     (0x1 << 4)    // Capture/Compare 2 output enable
#define  _TIM1_CCER_CC1NP                                    (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM1_CCER_CC1NE                                    (0x1 << 2)    // Capture/Compare 1 complementary output enable
#define  _TIM1_CCER_CC1P                                     (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM1_CCER_CC1E                                     (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM1_CNT_CNT                                       (0xffff << 0)    // counter value
#define  _TIM1_PSC_PSC                                       (0xffff << 0)    // Prescaler value
#define  _TIM1_ARR_ARR                                       (0xffff << 0)    // Auto-reload value
#define  _TIM1_CCR1_CCR1                                     (0xffff << 0)    // Capture/Compare 1 value
#define  _TIM1_CCR2_CCR2                                     (0xffff << 0)    // Capture/Compare 2 value
#define  _TIM1_CCR3_CCR3                                     (0xffff << 0)    // Capture/Compare value
#define  _TIM1_CCR4_CCR4                                     (0xffff << 0)    // Capture/Compare value
#define  _TIM1_DCR_DBL                                       (0x1f << 8)    // DMA burst length
#define  _TIM1_DCR_DBA                                       (0x1f << 0)    // DMA base address
#define  _TIM1_DMAR_DMAB                                     (0xffff << 0)    // DMA register for burst accesses
#define  _TIM1_RCR_REP                                       (0xff << 0)    // Repetition counter value
#define  _TIM1_BDTR_DTG                                      (0xff << 0)    // Dead-time generator setup
#define  _TIM1_BDTR_LOCK                                     (0x3 << 8)    // Lock configuration
#define  _TIM1_BDTR_OSSI                                     (0x1 << 10)    // Off-state selection for Idle mode
#define  _TIM1_BDTR_OSSR                                     (0x1 << 11)    // Off-state selection for Run mode
#define  _TIM1_BDTR_BKE                                      (0x1 << 12)    // Break enable
#define  _TIM1_BDTR_BKP                                      (0x1 << 13)    // Break polarity
#define  _TIM1_BDTR_AOE                                      (0x1 << 14)    // Automatic output enable
#define  _TIM1_BDTR_MOE                                      (0x1 << 15)    // Main output enable
#define  _TIM1_BDTR_BKF                                      (0xf << 16)    // Break filter
#define  _TIM1_BDTR_BK2F                                     (0xf << 20)    // Break 2 filter
#define  _TIM1_BDTR_BK2E                                     (0x1 << 24)    // Break 2 enable
#define  _TIM1_BDTR_BK2P                                     (0x1 << 25)    // Break 2 polarity
#define  _TIM1_CCMR3_Output_OC5FE                            (0x1 << 2)    // Output compare 5 fast enable
#define  _TIM1_CCMR3_Output_OC5PE                            (0x1 << 3)    // Output compare 5 preload enable
#define  _TIM1_CCMR3_Output_OC5M                             (0x7 << 4)    // Output compare 5 mode
#define  _TIM1_CCMR3_Output_OC5CE                            (0x1 << 7)    // Output compare 5 clear enable
#define  _TIM1_CCMR3_Output_OC6FE                            (0x1 << 10)    // Output compare 6 fast enable
#define  _TIM1_CCMR3_Output_OC6PE                            (0x1 << 11)    // Output compare 6 preload enable
#define  _TIM1_CCMR3_Output_OC6M                             (0x7 << 12)    // Output compare 6 mode
#define  _TIM1_CCMR3_Output_OC6CE                            (0x1 << 15)    // Output compare 6 clear enable
#define  _TIM1_CCMR3_Output_OC5M3                            (0x1 << 16)    // Output Compare 5 mode
#define  _TIM1_CCMR3_Output_OC6M3                            (0x1 << 24)    // Output Compare 6 mode
#define  _TIM1_CCR5_CCR5                                     (0xffff << 0)    // Capture/Compare 5 value
#define  _TIM1_CCR5_GC5C1                                    (0x1 << 29)    // Group Channel 5 and Channel 1
#define  _TIM1_CCR5_GC5C2                                    (0x1 << 30)    // Group Channel 5 and Channel 2
#define  _TIM1_CCR5_GC5C3                                    (0x1 << 31)    // Group Channel 5 and Channel 3
#define  _TIM1_CRR6_CCR6                                     (0xffff << 0)    // Capture/Compare 6 value
#define  _TIM1_AF1_BKINE                                     (0x1 << 0)    // BRK BKIN input enable
#define  _TIM1_AF1_BKDFBKE                                   (0x1 << 8)    // BRK DFSDM_BREAK[0] enable
#define  _TIM1_AF1_BKINP                                     (0x1 << 9)    // BRK BKIN input polarity
#define  _TIM1_AF2_BK2INE                                    (0x1 << 0)    // BRK2 BKIN input enable
#define  _TIM1_AF2_BK2DFBKE                                  (0x1 << 8)    // BRK2 DFSDM_BREAK enable
#define  _TIM1_AF2_BK2INP                                    (0x1 << 9)    // BRK2 BKIN2 input polarity
#define  _TIM8_CR1_CKD                                       (0x3 << 8)    // Clock division
#define  _TIM8_CR1_ARPE                                      (0x1 << 7)    // Auto-reload preload enable
#define  _TIM8_CR1_CMS                                       (0x3 << 5)    // Center-aligned mode selection
#define  _TIM8_CR1_DIR                                       (0x1 << 4)    // Direction
#define  _TIM8_CR1_OPM                                       (0x1 << 3)    // One-pulse mode
#define  _TIM8_CR1_URS                                       (0x1 << 2)    // Update request source
#define  _TIM8_CR1_UDIS                                      (0x1 << 1)    // Update disable
#define  _TIM8_CR1_CEN                                       (0x1 << 0)    // Counter enable
#define  _TIM8_CR2_OIS4                                      (0x1 << 14)    // Output Idle state 4
#define  _TIM8_CR2_OIS3N                                     (0x1 << 13)    // Output Idle state 3
#define  _TIM8_CR2_OIS3                                      (0x1 << 12)    // Output Idle state 3
#define  _TIM8_CR2_OIS2N                                     (0x1 << 11)    // Output Idle state 2
#define  _TIM8_CR2_OIS2                                      (0x1 << 10)    // Output Idle state 2
#define  _TIM8_CR2_OIS1N                                     (0x1 << 9)    // Output Idle state 1
#define  _TIM8_CR2_OIS1                                      (0x1 << 8)    // Output Idle state 1
#define  _TIM8_CR2_TI1S                                      (0x1 << 7)    // TI1 selection
#define  _TIM8_CR2_MMS                                       (0x7 << 4)    // Master mode selection
#define  _TIM8_CR2_CCDS                                      (0x1 << 3)    // Capture/compare DMA selection
#define  _TIM8_CR2_CCUS                                      (0x1 << 2)    // Capture/compare control update selection
#define  _TIM8_CR2_CCPC                                      (0x1 << 0)    // Capture/compare preloaded control
#define  _TIM8_SMCR_ETP                                      (0x1 << 15)    // External trigger polarity
#define  _TIM8_SMCR_ECE                                      (0x1 << 14)    // External clock enable
#define  _TIM8_SMCR_ETPS                                     (0x3 << 12)    // External trigger prescaler
#define  _TIM8_SMCR_ETF                                      (0xf << 8)    // External trigger filter
#define  _TIM8_SMCR_MSM                                      (0x1 << 7)    // Master/Slave mode
#define  _TIM8_SMCR_TS                                       (0x7 << 4)    // Trigger selection
#define  _TIM8_SMCR_SMS                                      (0x7 << 0)    // Slave mode selection
#define  _TIM8_DIER_TDE                                      (0x1 << 14)    // Trigger DMA request enable
#define  _TIM8_DIER_COMDE                                    (0x1 << 13)    // COM DMA request enable
#define  _TIM8_DIER_CC4DE                                    (0x1 << 12)    // Capture/Compare 4 DMA request enable
#define  _TIM8_DIER_CC3DE                                    (0x1 << 11)    // Capture/Compare 3 DMA request enable
#define  _TIM8_DIER_CC2DE                                    (0x1 << 10)    // Capture/Compare 2 DMA request enable
#define  _TIM8_DIER_CC1DE                                    (0x1 << 9)    // Capture/Compare 1 DMA request enable
#define  _TIM8_DIER_UDE                                      (0x1 << 8)    // Update DMA request enable
#define  _TIM8_DIER_TIE                                      (0x1 << 6)    // Trigger interrupt enable
#define  _TIM8_DIER_CC4IE                                    (0x1 << 4)    // Capture/Compare 4 interrupt enable
#define  _TIM8_DIER_CC3IE                                    (0x1 << 3)    // Capture/Compare 3 interrupt enable
#define  _TIM8_DIER_CC2IE                                    (0x1 << 2)    // Capture/Compare 2 interrupt enable
#define  _TIM8_DIER_CC1IE                                    (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM8_DIER_UIE                                      (0x1 << 0)    // Update interrupt enable
#define  _TIM8_DIER_BIE                                      (0x1 << 7)    // Break interrupt enable
#define  _TIM8_DIER_COMIE                                    (0x1 << 5)    // COM interrupt enable
#define  _TIM8_SR_CC4OF                                      (0x1 << 12)    // Capture/Compare 4 overcapture flag
#define  _TIM8_SR_CC3OF                                      (0x1 << 11)    // Capture/Compare 3 overcapture flag
#define  _TIM8_SR_CC2OF                                      (0x1 << 10)    // Capture/compare 2 overcapture flag
#define  _TIM8_SR_CC1OF                                      (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM8_SR_BIF                                        (0x1 << 7)    // Break interrupt flag
#define  _TIM8_SR_TIF                                        (0x1 << 6)    // Trigger interrupt flag
#define  _TIM8_SR_COMIF                                      (0x1 << 5)    // COM interrupt flag
#define  _TIM8_SR_CC4IF                                      (0x1 << 4)    // Capture/Compare 4 interrupt flag
#define  _TIM8_SR_CC3IF                                      (0x1 << 3)    // Capture/Compare 3 interrupt flag
#define  _TIM8_SR_CC2IF                                      (0x1 << 2)    // Capture/Compare 2 interrupt flag
#define  _TIM8_SR_CC1IF                                      (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM8_SR_UIF                                        (0x1 << 0)    // Update interrupt flag
#define  _TIM8_EGR_BG                                        (0x1 << 7)    // Break generation
#define  _TIM8_EGR_TG                                        (0x1 << 6)    // Trigger generation
#define  _TIM8_EGR_COMG                                      (0x1 << 5)    // Capture/Compare control update generation
#define  _TIM8_EGR_CC4G                                      (0x1 << 4)    // Capture/compare 4 generation
#define  _TIM8_EGR_CC3G                                      (0x1 << 3)    // Capture/compare 3 generation
#define  _TIM8_EGR_CC2G                                      (0x1 << 2)    // Capture/compare 2 generation
#define  _TIM8_EGR_CC1G                                      (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM8_EGR_UG                                        (0x1 << 0)    // Update generation
#define  _TIM8_CCMR1_Output_OC2CE                            (0x1 << 15)    // Output Compare 2 clear enable
#define  _TIM8_CCMR1_Output_OC2M                             (0x7 << 12)    // Output Compare 2 mode
#define  _TIM8_CCMR1_Output_OC2PE                            (0x1 << 11)    // Output Compare 2 preload enable
#define  _TIM8_CCMR1_Output_OC2FE                            (0x1 << 10)    // Output Compare 2 fast enable
#define  _TIM8_CCMR1_Output_CC2S                             (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM8_CCMR1_Output_OC1CE                            (0x1 << 7)    // Output Compare 1 clear enable
#define  _TIM8_CCMR1_Output_OC1M                             (0x7 << 4)    // Output Compare 1 mode
#define  _TIM8_CCMR1_Output_OC1PE                            (0x1 << 3)    // Output Compare 1 preload enable
#define  _TIM8_CCMR1_Output_OC1FE                            (0x1 << 2)    // Output Compare 1 fast enable
#define  _TIM8_CCMR1_Output_CC1S                             (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM8_CCMR1_Input_IC2F                              (0xf << 12)    // Input capture 2 filter
#define  _TIM8_CCMR1_Input_IC2PCS                            (0x3 << 10)    // Input capture 2 prescaler
#define  _TIM8_CCMR1_Input_CC2S                              (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM8_CCMR1_Input_IC1F                              (0xf << 4)    // Input capture 1 filter
#define  _TIM8_CCMR1_Input_ICPCS                             (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM8_CCMR1_Input_CC1S                              (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM8_CCMR2_Output_OC4CE                            (0x1 << 15)    // Output compare 4 clear enable
#define  _TIM8_CCMR2_Output_OC4M                             (0x7 << 12)    // Output compare 4 mode
#define  _TIM8_CCMR2_Output_OC4PE                            (0x1 << 11)    // Output compare 4 preload enable
#define  _TIM8_CCMR2_Output_OC4FE                            (0x1 << 10)    // Output compare 4 fast enable
#define  _TIM8_CCMR2_Output_CC4S                             (0x3 << 8)    // Capture/Compare 4 selection
#define  _TIM8_CCMR2_Output_OC3CE                            (0x1 << 7)    // Output compare 3 clear enable
#define  _TIM8_CCMR2_Output_OC3M                             (0x7 << 4)    // Output compare 3 mode
#define  _TIM8_CCMR2_Output_OC3PE                            (0x1 << 3)    // Output compare 3 preload enable
#define  _TIM8_CCMR2_Output_OC3FE                            (0x1 << 2)    // Output compare 3 fast enable
#define  _TIM8_CCMR2_Output_CC3S                             (0x3 << 0)    // Capture/Compare 3 selection
#define  _TIM8_CCMR2_Input_IC4F                              (0xf << 12)    // Input capture 4 filter
#define  _TIM8_CCMR2_Input_IC4PSC                            (0x3 << 10)    // Input capture 4 prescaler
#define  _TIM8_CCMR2_Input_CC4S                              (0x3 << 8)    // Capture/Compare 4 selection
#define  _TIM8_CCMR2_Input_IC3F                              (0xf << 4)    // Input capture 3 filter
#define  _TIM8_CCMR2_Input_IC3PSC                            (0x3 << 2)    // Input capture 3 prescaler
#define  _TIM8_CCMR2_Input_CC3S                              (0x3 << 0)    // Capture/compare 3 selection
#define  _TIM8_CCER_CC4P                                     (0x1 << 13)    // Capture/Compare 3 output Polarity
#define  _TIM8_CCER_CC4E                                     (0x1 << 12)    // Capture/Compare 4 output enable
#define  _TIM8_CCER_CC3NP                                    (0x1 << 11)    // Capture/Compare 3 output Polarity
#define  _TIM8_CCER_CC3NE                                    (0x1 << 10)    // Capture/Compare 3 complementary output enable
#define  _TIM8_CCER_CC3P                                     (0x1 << 9)    // Capture/Compare 3 output Polarity
#define  _TIM8_CCER_CC3E                                     (0x1 << 8)    // Capture/Compare 3 output enable
#define  _TIM8_CCER_CC2NP                                    (0x1 << 7)    // Capture/Compare 2 output Polarity
#define  _TIM8_CCER_CC2NE                                    (0x1 << 6)    // Capture/Compare 2 complementary output enable
#define  _TIM8_CCER_CC2P                                     (0x1 << 5)    // Capture/Compare 2 output Polarity
#define  _TIM8_CCER_CC2E                                     (0x1 << 4)    // Capture/Compare 2 output enable
#define  _TIM8_CCER_CC1NP                                    (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM8_CCER_CC1NE                                    (0x1 << 2)    // Capture/Compare 1 complementary output enable
#define  _TIM8_CCER_CC1P                                     (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM8_CCER_CC1E                                     (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM8_CNT_CNT                                       (0xffff << 0)    // counter value
#define  _TIM8_PSC_PSC                                       (0xffff << 0)    // Prescaler value
#define  _TIM8_ARR_ARR                                       (0xffff << 0)    // Auto-reload value
#define  _TIM8_CCR1_CCR1                                     (0xffff << 0)    // Capture/Compare 1 value
#define  _TIM8_CCR2_CCR2                                     (0xffff << 0)    // Capture/Compare 2 value
#define  _TIM8_CCR3_CCR3                                     (0xffff << 0)    // Capture/Compare value
#define  _TIM8_CCR4_CCR4                                     (0xffff << 0)    // Capture/Compare value
#define  _TIM8_DCR_DBL                                       (0x1f << 8)    // DMA burst length
#define  _TIM8_DCR_DBA                                       (0x1f << 0)    // DMA base address
#define  _TIM8_DMAR_DMAB                                     (0xffff << 0)    // DMA register for burst accesses
#define  _TIM8_RCR_REP                                       (0xff << 0)    // Repetition counter value
#define  _TIM8_BDTR_DTG                                      (0xff << 0)    // Dead-time generator setup
#define  _TIM8_BDTR_LOCK                                     (0x3 << 8)    // Lock configuration
#define  _TIM8_BDTR_OSSI                                     (0x1 << 10)    // Off-state selection for Idle mode
#define  _TIM8_BDTR_OSSR                                     (0x1 << 11)    // Off-state selection for Run mode
#define  _TIM8_BDTR_BKE                                      (0x1 << 12)    // Break enable
#define  _TIM8_BDTR_BKP                                      (0x1 << 13)    // Break polarity
#define  _TIM8_BDTR_AOE                                      (0x1 << 14)    // Automatic output enable
#define  _TIM8_BDTR_MOE                                      (0x1 << 15)    // Main output enable
#define  _TIM8_BDTR_BKF                                      (0xf << 16)    // Break filter
#define  _TIM8_BDTR_BK2F                                     (0xf << 20)    // Break 2 filter
#define  _TIM8_BDTR_BK2E                                     (0x1 << 24)    // Break 2 enable
#define  _TIM8_BDTR_BK2P                                     (0x1 << 25)    // Break 2 polarity
#define  _TIM8_CCMR3_Output_OC5FE                            (0x1 << 2)    // Output compare 5 fast enable
#define  _TIM8_CCMR3_Output_OC5PE                            (0x1 << 3)    // Output compare 5 preload enable
#define  _TIM8_CCMR3_Output_OC5M                             (0x7 << 4)    // Output compare 5 mode
#define  _TIM8_CCMR3_Output_OC5CE                            (0x1 << 7)    // Output compare 5 clear enable
#define  _TIM8_CCMR3_Output_OC6FE                            (0x1 << 10)    // Output compare 6 fast enable
#define  _TIM8_CCMR3_Output_OC6PE                            (0x1 << 11)    // Output compare 6 preload enable
#define  _TIM8_CCMR3_Output_OC6M                             (0x7 << 12)    // Output compare 6 mode
#define  _TIM8_CCMR3_Output_OC6CE                            (0x1 << 15)    // Output compare 6 clear enable
#define  _TIM8_CCMR3_Output_OC5M3                            (0x1 << 16)    // Output Compare 5 mode
#define  _TIM8_CCMR3_Output_OC6M3                            (0x1 << 24)    // Output Compare 6 mode
#define  _TIM8_CCR5_CCR5                                     (0xffff << 0)    // Capture/Compare 5 value
#define  _TIM8_CCR5_GC5C1                                    (0x1 << 29)    // Group Channel 5 and Channel 1
#define  _TIM8_CCR5_GC5C2                                    (0x1 << 30)    // Group Channel 5 and Channel 2
#define  _TIM8_CCR5_GC5C3                                    (0x1 << 31)    // Group Channel 5 and Channel 3
#define  _TIM8_CRR6_CCR6                                     (0xffff << 0)    // Capture/Compare 6 value
#define  _TIM8_AF1_BKINE                                     (0x1 << 0)    // BRK BKIN input enable
#define  _TIM8_AF1_BKDFBKE                                   (0x1 << 8)    // BRK DFSDM_BREAK[0] enable
#define  _TIM8_AF1_BKINP                                     (0x1 << 9)    // BRK BKIN input polarity
#define  _TIM8_AF2_BK2INE                                    (0x1 << 0)    // BRK2 BKIN input enable
#define  _TIM8_AF2_BK2DFBKE                                  (0x1 << 8)    // BRK2 DFSDM_BREAK enable
#define  _TIM8_AF2_BK2INP                                    (0x1 << 9)    // BRK2 BKIN2 input polarity
#define  _TIM9_CR1_CKD                                       (0x3 << 8)    // Clock division
#define  _TIM9_CR1_ARPE                                      (0x1 << 7)    // Auto-reload preload enable
#define  _TIM9_CR1_OPM                                       (0x1 << 3)    // One-pulse mode
#define  _TIM9_CR1_URS                                       (0x1 << 2)    // Update request source
#define  _TIM9_CR1_UDIS                                      (0x1 << 1)    // Update disable
#define  _TIM9_CR1_CEN                                       (0x1 << 0)    // Counter enable
#define  _TIM9_SMCR_MSM                                      (0x1 << 7)    // Master/Slave mode
#define  _TIM9_SMCR_TS                                       (0x7 << 4)    // Trigger selection
#define  _TIM9_SMCR_SMS                                      (0x7 << 0)    // Slave mode selection
#define  _TIM9_DIER_TIE                                      (0x1 << 6)    // Trigger interrupt enable
#define  _TIM9_DIER_CC2IE                                    (0x1 << 2)    // Capture/Compare 2 interrupt enable
#define  _TIM9_DIER_CC1IE                                    (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM9_DIER_UIE                                      (0x1 << 0)    // Update interrupt enable
#define  _TIM9_SR_CC2OF                                      (0x1 << 10)    // Capture/compare 2 overcapture flag
#define  _TIM9_SR_CC1OF                                      (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM9_SR_TIF                                        (0x1 << 6)    // Trigger interrupt flag
#define  _TIM9_SR_CC2IF                                      (0x1 << 2)    // Capture/Compare 2 interrupt flag
#define  _TIM9_SR_CC1IF                                      (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM9_SR_UIF                                        (0x1 << 0)    // Update interrupt flag
#define  _TIM9_EGR_TG                                        (0x1 << 6)    // Trigger generation
#define  _TIM9_EGR_CC2G                                      (0x1 << 2)    // Capture/compare 2 generation
#define  _TIM9_EGR_CC1G                                      (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM9_EGR_UG                                        (0x1 << 0)    // Update generation
#define  _TIM9_CCMR1_Output_OC2M                             (0x7 << 12)    // Output Compare 2 mode
#define  _TIM9_CCMR1_Output_OC2PE                            (0x1 << 11)    // Output Compare 2 preload enable
#define  _TIM9_CCMR1_Output_OC2FE                            (0x1 << 10)    // Output Compare 2 fast enable
#define  _TIM9_CCMR1_Output_CC2S                             (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM9_CCMR1_Output_OC1M                             (0x7 << 4)    // Output Compare 1 mode
#define  _TIM9_CCMR1_Output_OC1PE                            (0x1 << 3)    // Output Compare 1 preload enable
#define  _TIM9_CCMR1_Output_OC1FE                            (0x1 << 2)    // Output Compare 1 fast enable
#define  _TIM9_CCMR1_Output_CC1S                             (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM9_CCMR1_Input_IC2F                              (0x7 << 12)    // Input capture 2 filter
#define  _TIM9_CCMR1_Input_IC2PCS                            (0x3 << 10)    // Input capture 2 prescaler
#define  _TIM9_CCMR1_Input_CC2S                              (0x3 << 8)    // Capture/Compare 2 selection
#define  _TIM9_CCMR1_Input_IC1F                              (0x7 << 4)    // Input capture 1 filter
#define  _TIM9_CCMR1_Input_ICPCS                             (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM9_CCMR1_Input_CC1S                              (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM9_CCER_CC2NP                                    (0x1 << 7)    // Capture/Compare 2 output Polarity
#define  _TIM9_CCER_CC2P                                     (0x1 << 5)    // Capture/Compare 2 output Polarity
#define  _TIM9_CCER_CC2E                                     (0x1 << 4)    // Capture/Compare 2 output enable
#define  _TIM9_CCER_CC1NP                                    (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM9_CCER_CC1P                                     (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM9_CCER_CC1E                                     (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM9_CNT_CNT                                       (0xffff << 0)    // counter value
#define  _TIM9_PSC_PSC                                       (0xffff << 0)    // Prescaler value
#define  _TIM9_ARR_ARR                                       (0xffff << 0)    // Auto-reload value
#define  _TIM9_CCR1_CCR1                                     (0xffff << 0)    // Capture/Compare 1 value
#define  _TIM9_CCR2_CCR2                                     (0xffff << 0)    // Capture/Compare 2 value
#define  _TIM10_CR1_CKD                                      (0x3 << 8)    // Clock division
#define  _TIM10_CR1_ARPE                                     (0x1 << 7)    // Auto-reload preload enable
#define  _TIM10_CR1_URS                                      (0x1 << 2)    // Update request source
#define  _TIM10_CR1_UDIS                                     (0x1 << 1)    // Update disable
#define  _TIM10_CR1_CEN                                      (0x1 << 0)    // Counter enable
#define  _TIM10_DIER_CC1IE                                   (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM10_DIER_UIE                                     (0x1 << 0)    // Update interrupt enable
#define  _TIM10_SR_CC1OF                                     (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM10_SR_CC1IF                                     (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM10_SR_UIF                                       (0x1 << 0)    // Update interrupt flag
#define  _TIM10_EGR_CC1G                                     (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM10_EGR_UG                                       (0x1 << 0)    // Update generation
#define  _TIM10_CCMR1_Output_OC1M                            (0x7 << 4)    // Output Compare 1 mode
#define  _TIM10_CCMR1_Output_OC1PE                           (0x1 << 3)    // Output Compare 1 preload enable
#define  _TIM10_CCMR1_Output_OC1FE                           (0x1 << 2)    // Output Compare 1 fast enable
#define  _TIM10_CCMR1_Output_CC1S                            (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM10_CCMR1_Input_IC1F                             (0xf << 4)    // Input capture 1 filter
#define  _TIM10_CCMR1_Input_ICPCS                            (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM10_CCMR1_Input_CC1S                             (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM10_CCER_CC1NP                                   (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM10_CCER_CC1P                                    (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM10_CCER_CC1E                                    (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM10_CNT_CNT                                      (0xffff << 0)    // counter value
#define  _TIM10_PSC_PSC                                      (0xffff << 0)    // Prescaler value
#define  _TIM10_ARR_ARR                                      (0xffff << 0)    // Auto-reload value
#define  _TIM10_CCR1_CCR1                                    (0xffff << 0)    // Capture/Compare 1 value
#define  _TIM10_SMCR_SMS3                                    (0x1 << 16)    // Slave mode selection
#define  _TIM10_SMCR_ETP                                     (0x1 << 15)    // External trigger polarity
#define  _TIM10_SMCR_ECE                                     (0x1 << 14)    // External clock enable
#define  _TIM10_SMCR_ETPS                                    (0x3 << 12)    // External trigger prescaler
#define  _TIM10_SMCR_ETF                                     (0xf << 8)    // External trigger filter
#define  _TIM10_SMCR_MSM                                     (0x1 << 7)    // Master/slave mode
#define  _TIM10_SMCR_TS                                      (0x7 << 4)    // Trigger selection
#define  _TIM10_SMCR_SMS                                     (0x7 << 0)    // Slave mode selection
#define  _TIM10_OR_TI1_RMP                                   (0x3 << 0)    // TIM11 Input 1 remapping capability
#define  _TIM11_CR1_CKD                                      (0x3 << 8)    // Clock division
#define  _TIM11_CR1_ARPE                                     (0x1 << 7)    // Auto-reload preload enable
#define  _TIM11_CR1_URS                                      (0x1 << 2)    // Update request source
#define  _TIM11_CR1_UDIS                                     (0x1 << 1)    // Update disable
#define  _TIM11_CR1_CEN                                      (0x1 << 0)    // Counter enable
#define  _TIM11_DIER_CC1IE                                   (0x1 << 1)    // Capture/Compare 1 interrupt enable
#define  _TIM11_DIER_UIE                                     (0x1 << 0)    // Update interrupt enable
#define  _TIM11_SR_CC1OF                                     (0x1 << 9)    // Capture/Compare 1 overcapture flag
#define  _TIM11_SR_CC1IF                                     (0x1 << 1)    // Capture/compare 1 interrupt flag
#define  _TIM11_SR_UIF                                       (0x1 << 0)    // Update interrupt flag
#define  _TIM11_EGR_CC1G                                     (0x1 << 1)    // Capture/compare 1 generation
#define  _TIM11_EGR_UG                                       (0x1 << 0)    // Update generation
#define  _TIM11_CCMR1_Output_OC1M                            (0x7 << 4)    // Output Compare 1 mode
#define  _TIM11_CCMR1_Output_OC1PE                           (0x1 << 3)    // Output Compare 1 preload enable
#define  _TIM11_CCMR1_Output_OC1FE                           (0x1 << 2)    // Output Compare 1 fast enable
#define  _TIM11_CCMR1_Output_CC1S                            (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM11_CCMR1_Input_IC1F                             (0xf << 4)    // Input capture 1 filter
#define  _TIM11_CCMR1_Input_ICPCS                            (0x3 << 2)    // Input capture 1 prescaler
#define  _TIM11_CCMR1_Input_CC1S                             (0x3 << 0)    // Capture/Compare 1 selection
#define  _TIM11_CCER_CC1NP                                   (0x1 << 3)    // Capture/Compare 1 output Polarity
#define  _TIM11_CCER_CC1P                                    (0x1 << 1)    // Capture/Compare 1 output Polarity
#define  _TIM11_CCER_CC1E                                    (0x1 << 0)    // Capture/Compare 1 output enable
#define  _TIM11_CNT_CNT                                      (0xffff << 0)    // counter value
#define  _TIM11_PSC_PSC                                      (0xffff << 0)    // Prescaler value
#define  _TIM11_ARR_ARR                                      (0xffff << 0)    // Auto-reload value
#define  _TIM11_CCR1_CCR1                                    (0xffff << 0)    // Capture/Compare 1 value
#define  _TIM11_SMCR_SMS3                                    (0x1 << 16)    // Slave mode selection
#define  _TIM11_SMCR_ETP                                     (0x1 << 15)    // External trigger polarity
#define  _TIM11_SMCR_ECE                                     (0x1 << 14)    // External clock enable
#define  _TIM11_SMCR_ETPS                                    (0x3 << 12)    // External trigger prescaler
#define  _TIM11_SMCR_ETF                                     (0xf << 8)    // External trigger filter
#define  _TIM11_SMCR_MSM                                     (0x1 << 7)    // Master/slave mode
#define  _TIM11_SMCR_TS                                      (0x7 << 4)    // Trigger selection
#define  _TIM11_SMCR_SMS                                     (0x7 << 0)    // Slave mode selection
#define  _TIM11_OR_TI1_RMP                                   (0x3 << 0)    // TIM11 Input 1 remapping capability

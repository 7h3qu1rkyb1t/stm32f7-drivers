#define Get_CAN3_MCR(FLAG)                   (*(uint32_t*)0x40003400 & FLAG)
#define Get_CAN3_MSR(FLAG)                   (*(uint32_t*)0x40003404 & FLAG)
#define Get_CAN3_TSR(FLAG)                   (*(uint32_t*)0x40003408 & FLAG)
#define Get_CAN3_RF0R(FLAG)                  (*(uint32_t*)0x4000340c & FLAG)
#define Get_CAN3_RF1R(FLAG)                  (*(uint32_t*)0x40003410 & FLAG)
#define Get_CAN3_IER(FLAG)                   (*(uint32_t*)0x40003414 & FLAG)
#define Get_CAN3_ESR(FLAG)                   (*(uint32_t*)0x40003418 & FLAG)
#define Get_CAN3_BTR(FLAG)                   (*(uint32_t*)0x4000341c & FLAG)
#define Get_CAN3_TI0R(FLAG)                  (*(uint32_t*)0x40003580 & FLAG)
#define Get_CAN3_TDT0R(FLAG)                 (*(uint32_t*)0x40003584 & FLAG)
#define Get_CAN3_TDL0R(FLAG)                 (*(uint32_t*)0x40003588 & FLAG)
#define Get_CAN3_TDH0R(FLAG)                 (*(uint32_t*)0x4000358c & FLAG)
#define Get_CAN3_TI1R(FLAG)                  (*(uint32_t*)0x40003590 & FLAG)
#define Get_CAN3_TDT1R(FLAG)                 (*(uint32_t*)0x40003594 & FLAG)
#define Get_CAN3_TDL1R(FLAG)                 (*(uint32_t*)0x40003598 & FLAG)
#define Get_CAN3_TDH1R(FLAG)                 (*(uint32_t*)0x4000359c & FLAG)
#define Get_CAN3_TI2R(FLAG)                  (*(uint32_t*)0x400035a0 & FLAG)
#define Get_CAN3_TDT2R(FLAG)                 (*(uint32_t*)0x400035a4 & FLAG)
#define Get_CAN3_TDL2R(FLAG)                 (*(uint32_t*)0x400035a8 & FLAG)
#define Get_CAN3_TDH2R(FLAG)                 (*(uint32_t*)0x400035ac & FLAG)
#define Get_CAN3_RI0R(FLAG)                  (*(uint32_t*)0x400035b0 & FLAG)
#define Get_CAN3_RDT0R(FLAG)                 (*(uint32_t*)0x400035b4 & FLAG)
#define Get_CAN3_RDL0R(FLAG)                 (*(uint32_t*)0x400035b8 & FLAG)
#define Get_CAN3_RDH0R(FLAG)                 (*(uint32_t*)0x400035bc & FLAG)
#define Get_CAN3_RI1R(FLAG)                  (*(uint32_t*)0x400035c0 & FLAG)
#define Get_CAN3_RDT1R(FLAG)                 (*(uint32_t*)0x400035c4 & FLAG)
#define Get_CAN3_RDL1R(FLAG)                 (*(uint32_t*)0x400035c8 & FLAG)
#define Get_CAN3_RDH1R(FLAG)                 (*(uint32_t*)0x400035cc & FLAG)
#define Get_CAN3_FMR(FLAG)                   (*(uint32_t*)0x40003600 & FLAG)
#define Get_CAN3_FM1R(FLAG)                  (*(uint32_t*)0x40003604 & FLAG)
#define Get_CAN3_FS1R(FLAG)                  (*(uint32_t*)0x4000360c & FLAG)
#define Get_CAN3_FFA1R(FLAG)                 (*(uint32_t*)0x40003614 & FLAG)
#define Get_CAN3_FA1R(FLAG)                  (*(uint32_t*)0x4000361c & FLAG)
#define Get_CAN3_F0R1(FLAG)                  (*(uint32_t*)0x40003640 & FLAG)
#define Get_CAN3_F0R2(FLAG)                  (*(uint32_t*)0x40003644 & FLAG)
#define Get_CAN3_F1R1(FLAG)                  (*(uint32_t*)0x40003648 & FLAG)
#define Get_CAN3_F1R2(FLAG)                  (*(uint32_t*)0x4000364c & FLAG)
#define Get_CAN3_F2R1(FLAG)                  (*(uint32_t*)0x40003650 & FLAG)
#define Get_CAN3_F2R2(FLAG)                  (*(uint32_t*)0x40003654 & FLAG)
#define Get_CAN3_F3R1(FLAG)                  (*(uint32_t*)0x40003658 & FLAG)
#define Get_CAN3_F3R2(FLAG)                  (*(uint32_t*)0x4000365c & FLAG)
#define Get_CAN3_F4R1(FLAG)                  (*(uint32_t*)0x40003660 & FLAG)
#define Get_CAN3_F4R2(FLAG)                  (*(uint32_t*)0x40003664 & FLAG)
#define Get_CAN3_F5R1(FLAG)                  (*(uint32_t*)0x40003668 & FLAG)
#define Get_CAN3_F5R2(FLAG)                  (*(uint32_t*)0x4000366c & FLAG)
#define Get_CAN3_F6R1(FLAG)                  (*(uint32_t*)0x40003670 & FLAG)
#define Get_CAN3_F6R2(FLAG)                  (*(uint32_t*)0x40003674 & FLAG)
#define Get_CAN3_F7R1(FLAG)                  (*(uint32_t*)0x40003678 & FLAG)
#define Get_CAN3_F7R2(FLAG)                  (*(uint32_t*)0x4000367c & FLAG)
#define Get_CAN3_F8R1(FLAG)                  (*(uint32_t*)0x40003680 & FLAG)
#define Get_CAN3_F8R2(FLAG)                  (*(uint32_t*)0x40003684 & FLAG)
#define Get_CAN3_F9R1(FLAG)                  (*(uint32_t*)0x40003688 & FLAG)
#define Get_CAN3_F9R2(FLAG)                  (*(uint32_t*)0x4000368c & FLAG)
#define Get_CAN3_F10R1(FLAG)                 (*(uint32_t*)0x40003690 & FLAG)
#define Get_CAN3_F10R2(FLAG)                 (*(uint32_t*)0x40003694 & FLAG)
#define Get_CAN3_F11R1(FLAG)                 (*(uint32_t*)0x40003698 & FLAG)
#define Get_CAN3_F11R2(FLAG)                 (*(uint32_t*)0x4000369c & FLAG)
#define Get_CAN3_F12R1(FLAG)                 (*(uint32_t*)0x400036a0 & FLAG)
#define Get_CAN3_F12R2(FLAG)                 (*(uint32_t*)0x400036a4 & FLAG)
#define Get_CAN3_F13R1(FLAG)                 (*(uint32_t*)0x400036a8 & FLAG)
#define Get_CAN3_F13R2(FLAG)                 (*(uint32_t*)0x400036ac & FLAG)
#define Get_CAN3_F14R1(FLAG)                 (*(uint32_t*)0x400036b0 & FLAG)
#define Get_CAN3_F14R2(FLAG)                 (*(uint32_t*)0x400036b4 & FLAG)
#define Get_CAN3_F15R1(FLAG)                 (*(uint32_t*)0x400036b8 & FLAG)
#define Get_CAN3_F15R2(FLAG)                 (*(uint32_t*)0x400036bc & FLAG)
#define Get_CAN3_F16R1(FLAG)                 (*(uint32_t*)0x400036c0 & FLAG)
#define Get_CAN3_F16R2(FLAG)                 (*(uint32_t*)0x400036c4 & FLAG)
#define Get_CAN3_F17R1(FLAG)                 (*(uint32_t*)0x400036c8 & FLAG)
#define Get_CAN3_F17R2(FLAG)                 (*(uint32_t*)0x400036cc & FLAG)
#define Get_CAN3_F18R1(FLAG)                 (*(uint32_t*)0x400036d0 & FLAG)
#define Get_CAN3_F18R2(FLAG)                 (*(uint32_t*)0x400036d4 & FLAG)
#define Get_CAN3_F19R1(FLAG)                 (*(uint32_t*)0x400036d8 & FLAG)
#define Get_CAN3_F19R2(FLAG)                 (*(uint32_t*)0x400036dc & FLAG)
#define Get_CAN3_F20R1(FLAG)                 (*(uint32_t*)0x400036e0 & FLAG)
#define Get_CAN3_F20R2(FLAG)                 (*(uint32_t*)0x400036e4 & FLAG)
#define Get_CAN3_F21R1(FLAG)                 (*(uint32_t*)0x400036e8 & FLAG)
#define Get_CAN3_F21R2(FLAG)                 (*(uint32_t*)0x400036ec & FLAG)
#define Get_CAN3_F22R1(FLAG)                 (*(uint32_t*)0x400036f0 & FLAG)
#define Get_CAN3_F22R2(FLAG)                 (*(uint32_t*)0x400036f4 & FLAG)
#define Get_CAN3_F23R1(FLAG)                 (*(uint32_t*)0x400036f8 & FLAG)
#define Get_CAN3_F23R2(FLAG)                 (*(uint32_t*)0x400036fc & FLAG)
#define Get_CAN3_F24R1(FLAG)                 (*(uint32_t*)0x40003700 & FLAG)
#define Get_CAN3_F24R2(FLAG)                 (*(uint32_t*)0x40003704 & FLAG)
#define Get_CAN3_F25R1(FLAG)                 (*(uint32_t*)0x40003708 & FLAG)
#define Get_CAN3_F25R2(FLAG)                 (*(uint32_t*)0x4000370c & FLAG)
#define Get_CAN3_F26R1(FLAG)                 (*(uint32_t*)0x40003710 & FLAG)
#define Get_CAN3_F26R2(FLAG)                 (*(uint32_t*)0x40003714 & FLAG)
#define Get_CAN3_F27R1(FLAG)                 (*(uint32_t*)0x40003718 & FLAG)
#define Get_CAN3_F27R2(FLAG)                 (*(uint32_t*)0x4000371c & FLAG)
#define Get_CAN1_MCR(FLAG)                   (*(uint32_t*)0x40006400 & FLAG)
#define Get_CAN1_MSR(FLAG)                   (*(uint32_t*)0x40006404 & FLAG)
#define Get_CAN1_TSR(FLAG)                   (*(uint32_t*)0x40006408 & FLAG)
#define Get_CAN1_RF0R(FLAG)                  (*(uint32_t*)0x4000640c & FLAG)
#define Get_CAN1_RF1R(FLAG)                  (*(uint32_t*)0x40006410 & FLAG)
#define Get_CAN1_IER(FLAG)                   (*(uint32_t*)0x40006414 & FLAG)
#define Get_CAN1_ESR(FLAG)                   (*(uint32_t*)0x40006418 & FLAG)
#define Get_CAN1_BTR(FLAG)                   (*(uint32_t*)0x4000641c & FLAG)
#define Get_CAN1_TI0R(FLAG)                  (*(uint32_t*)0x40006580 & FLAG)
#define Get_CAN1_TDT0R(FLAG)                 (*(uint32_t*)0x40006584 & FLAG)
#define Get_CAN1_TDL0R(FLAG)                 (*(uint32_t*)0x40006588 & FLAG)
#define Get_CAN1_TDH0R(FLAG)                 (*(uint32_t*)0x4000658c & FLAG)
#define Get_CAN1_TI1R(FLAG)                  (*(uint32_t*)0x40006590 & FLAG)
#define Get_CAN1_TDT1R(FLAG)                 (*(uint32_t*)0x40006594 & FLAG)
#define Get_CAN1_TDL1R(FLAG)                 (*(uint32_t*)0x40006598 & FLAG)
#define Get_CAN1_TDH1R(FLAG)                 (*(uint32_t*)0x4000659c & FLAG)
#define Get_CAN1_TI2R(FLAG)                  (*(uint32_t*)0x400065a0 & FLAG)
#define Get_CAN1_TDT2R(FLAG)                 (*(uint32_t*)0x400065a4 & FLAG)
#define Get_CAN1_TDL2R(FLAG)                 (*(uint32_t*)0x400065a8 & FLAG)
#define Get_CAN1_TDH2R(FLAG)                 (*(uint32_t*)0x400065ac & FLAG)
#define Get_CAN1_RI0R(FLAG)                  (*(uint32_t*)0x400065b0 & FLAG)
#define Get_CAN1_RDT0R(FLAG)                 (*(uint32_t*)0x400065b4 & FLAG)
#define Get_CAN1_RDL0R(FLAG)                 (*(uint32_t*)0x400065b8 & FLAG)
#define Get_CAN1_RDH0R(FLAG)                 (*(uint32_t*)0x400065bc & FLAG)
#define Get_CAN1_RI1R(FLAG)                  (*(uint32_t*)0x400065c0 & FLAG)
#define Get_CAN1_RDT1R(FLAG)                 (*(uint32_t*)0x400065c4 & FLAG)
#define Get_CAN1_RDL1R(FLAG)                 (*(uint32_t*)0x400065c8 & FLAG)
#define Get_CAN1_RDH1R(FLAG)                 (*(uint32_t*)0x400065cc & FLAG)
#define Get_CAN1_FMR(FLAG)                   (*(uint32_t*)0x40006600 & FLAG)
#define Get_CAN1_FM1R(FLAG)                  (*(uint32_t*)0x40006604 & FLAG)
#define Get_CAN1_FS1R(FLAG)                  (*(uint32_t*)0x4000660c & FLAG)
#define Get_CAN1_FFA1R(FLAG)                 (*(uint32_t*)0x40006614 & FLAG)
#define Get_CAN1_FA1R(FLAG)                  (*(uint32_t*)0x4000661c & FLAG)
#define Get_CAN1_F0R1(FLAG)                  (*(uint32_t*)0x40006640 & FLAG)
#define Get_CAN1_F0R2(FLAG)                  (*(uint32_t*)0x40006644 & FLAG)
#define Get_CAN1_F1R1(FLAG)                  (*(uint32_t*)0x40006648 & FLAG)
#define Get_CAN1_F1R2(FLAG)                  (*(uint32_t*)0x4000664c & FLAG)
#define Get_CAN1_F2R1(FLAG)                  (*(uint32_t*)0x40006650 & FLAG)
#define Get_CAN1_F2R2(FLAG)                  (*(uint32_t*)0x40006654 & FLAG)
#define Get_CAN1_F3R1(FLAG)                  (*(uint32_t*)0x40006658 & FLAG)
#define Get_CAN1_F3R2(FLAG)                  (*(uint32_t*)0x4000665c & FLAG)
#define Get_CAN1_F4R1(FLAG)                  (*(uint32_t*)0x40006660 & FLAG)
#define Get_CAN1_F4R2(FLAG)                  (*(uint32_t*)0x40006664 & FLAG)
#define Get_CAN1_F5R1(FLAG)                  (*(uint32_t*)0x40006668 & FLAG)
#define Get_CAN1_F5R2(FLAG)                  (*(uint32_t*)0x4000666c & FLAG)
#define Get_CAN1_F6R1(FLAG)                  (*(uint32_t*)0x40006670 & FLAG)
#define Get_CAN1_F6R2(FLAG)                  (*(uint32_t*)0x40006674 & FLAG)
#define Get_CAN1_F7R1(FLAG)                  (*(uint32_t*)0x40006678 & FLAG)
#define Get_CAN1_F7R2(FLAG)                  (*(uint32_t*)0x4000667c & FLAG)
#define Get_CAN1_F8R1(FLAG)                  (*(uint32_t*)0x40006680 & FLAG)
#define Get_CAN1_F8R2(FLAG)                  (*(uint32_t*)0x40006684 & FLAG)
#define Get_CAN1_F9R1(FLAG)                  (*(uint32_t*)0x40006688 & FLAG)
#define Get_CAN1_F9R2(FLAG)                  (*(uint32_t*)0x4000668c & FLAG)
#define Get_CAN1_F10R1(FLAG)                 (*(uint32_t*)0x40006690 & FLAG)
#define Get_CAN1_F10R2(FLAG)                 (*(uint32_t*)0x40006694 & FLAG)
#define Get_CAN1_F11R1(FLAG)                 (*(uint32_t*)0x40006698 & FLAG)
#define Get_CAN1_F11R2(FLAG)                 (*(uint32_t*)0x4000669c & FLAG)
#define Get_CAN1_F12R1(FLAG)                 (*(uint32_t*)0x400066a0 & FLAG)
#define Get_CAN1_F12R2(FLAG)                 (*(uint32_t*)0x400066a4 & FLAG)
#define Get_CAN1_F13R1(FLAG)                 (*(uint32_t*)0x400066a8 & FLAG)
#define Get_CAN1_F13R2(FLAG)                 (*(uint32_t*)0x400066ac & FLAG)
#define Get_CAN1_F14R1(FLAG)                 (*(uint32_t*)0x400066b0 & FLAG)
#define Get_CAN1_F14R2(FLAG)                 (*(uint32_t*)0x400066b4 & FLAG)
#define Get_CAN1_F15R1(FLAG)                 (*(uint32_t*)0x400066b8 & FLAG)
#define Get_CAN1_F15R2(FLAG)                 (*(uint32_t*)0x400066bc & FLAG)
#define Get_CAN1_F16R1(FLAG)                 (*(uint32_t*)0x400066c0 & FLAG)
#define Get_CAN1_F16R2(FLAG)                 (*(uint32_t*)0x400066c4 & FLAG)
#define Get_CAN1_F17R1(FLAG)                 (*(uint32_t*)0x400066c8 & FLAG)
#define Get_CAN1_F17R2(FLAG)                 (*(uint32_t*)0x400066cc & FLAG)
#define Get_CAN1_F18R1(FLAG)                 (*(uint32_t*)0x400066d0 & FLAG)
#define Get_CAN1_F18R2(FLAG)                 (*(uint32_t*)0x400066d4 & FLAG)
#define Get_CAN1_F19R1(FLAG)                 (*(uint32_t*)0x400066d8 & FLAG)
#define Get_CAN1_F19R2(FLAG)                 (*(uint32_t*)0x400066dc & FLAG)
#define Get_CAN1_F20R1(FLAG)                 (*(uint32_t*)0x400066e0 & FLAG)
#define Get_CAN1_F20R2(FLAG)                 (*(uint32_t*)0x400066e4 & FLAG)
#define Get_CAN1_F21R1(FLAG)                 (*(uint32_t*)0x400066e8 & FLAG)
#define Get_CAN1_F21R2(FLAG)                 (*(uint32_t*)0x400066ec & FLAG)
#define Get_CAN1_F22R1(FLAG)                 (*(uint32_t*)0x400066f0 & FLAG)
#define Get_CAN1_F22R2(FLAG)                 (*(uint32_t*)0x400066f4 & FLAG)
#define Get_CAN1_F23R1(FLAG)                 (*(uint32_t*)0x400066f8 & FLAG)
#define Get_CAN1_F23R2(FLAG)                 (*(uint32_t*)0x400066fc & FLAG)
#define Get_CAN1_F24R1(FLAG)                 (*(uint32_t*)0x40006700 & FLAG)
#define Get_CAN1_F24R2(FLAG)                 (*(uint32_t*)0x40006704 & FLAG)
#define Get_CAN1_F25R1(FLAG)                 (*(uint32_t*)0x40006708 & FLAG)
#define Get_CAN1_F25R2(FLAG)                 (*(uint32_t*)0x4000670c & FLAG)
#define Get_CAN1_F26R1(FLAG)                 (*(uint32_t*)0x40006710 & FLAG)
#define Get_CAN1_F26R2(FLAG)                 (*(uint32_t*)0x40006714 & FLAG)
#define Get_CAN1_F27R1(FLAG)                 (*(uint32_t*)0x40006718 & FLAG)
#define Get_CAN1_F27R2(FLAG)                 (*(uint32_t*)0x4000671c & FLAG)
#define Get_CAN2_MCR(FLAG)                   (*(uint32_t*)0x40006800 & FLAG)
#define Get_CAN2_MSR(FLAG)                   (*(uint32_t*)0x40006804 & FLAG)
#define Get_CAN2_TSR(FLAG)                   (*(uint32_t*)0x40006808 & FLAG)
#define Get_CAN2_RF0R(FLAG)                  (*(uint32_t*)0x4000680c & FLAG)
#define Get_CAN2_RF1R(FLAG)                  (*(uint32_t*)0x40006810 & FLAG)
#define Get_CAN2_IER(FLAG)                   (*(uint32_t*)0x40006814 & FLAG)
#define Get_CAN2_ESR(FLAG)                   (*(uint32_t*)0x40006818 & FLAG)
#define Get_CAN2_BTR(FLAG)                   (*(uint32_t*)0x4000681c & FLAG)
#define Get_CAN2_TI0R(FLAG)                  (*(uint32_t*)0x40006980 & FLAG)
#define Get_CAN2_TDT0R(FLAG)                 (*(uint32_t*)0x40006984 & FLAG)
#define Get_CAN2_TDL0R(FLAG)                 (*(uint32_t*)0x40006988 & FLAG)
#define Get_CAN2_TDH0R(FLAG)                 (*(uint32_t*)0x4000698c & FLAG)
#define Get_CAN2_TI1R(FLAG)                  (*(uint32_t*)0x40006990 & FLAG)
#define Get_CAN2_TDT1R(FLAG)                 (*(uint32_t*)0x40006994 & FLAG)
#define Get_CAN2_TDL1R(FLAG)                 (*(uint32_t*)0x40006998 & FLAG)
#define Get_CAN2_TDH1R(FLAG)                 (*(uint32_t*)0x4000699c & FLAG)
#define Get_CAN2_TI2R(FLAG)                  (*(uint32_t*)0x400069a0 & FLAG)
#define Get_CAN2_TDT2R(FLAG)                 (*(uint32_t*)0x400069a4 & FLAG)
#define Get_CAN2_TDL2R(FLAG)                 (*(uint32_t*)0x400069a8 & FLAG)
#define Get_CAN2_TDH2R(FLAG)                 (*(uint32_t*)0x400069ac & FLAG)
#define Get_CAN2_RI0R(FLAG)                  (*(uint32_t*)0x400069b0 & FLAG)
#define Get_CAN2_RDT0R(FLAG)                 (*(uint32_t*)0x400069b4 & FLAG)
#define Get_CAN2_RDL0R(FLAG)                 (*(uint32_t*)0x400069b8 & FLAG)
#define Get_CAN2_RDH0R(FLAG)                 (*(uint32_t*)0x400069bc & FLAG)
#define Get_CAN2_RI1R(FLAG)                  (*(uint32_t*)0x400069c0 & FLAG)
#define Get_CAN2_RDT1R(FLAG)                 (*(uint32_t*)0x400069c4 & FLAG)
#define Get_CAN2_RDL1R(FLAG)                 (*(uint32_t*)0x400069c8 & FLAG)
#define Get_CAN2_RDH1R(FLAG)                 (*(uint32_t*)0x400069cc & FLAG)
#define Get_CAN2_FMR(FLAG)                   (*(uint32_t*)0x40006a00 & FLAG)
#define Get_CAN2_FM1R(FLAG)                  (*(uint32_t*)0x40006a04 & FLAG)
#define Get_CAN2_FS1R(FLAG)                  (*(uint32_t*)0x40006a0c & FLAG)
#define Get_CAN2_FFA1R(FLAG)                 (*(uint32_t*)0x40006a14 & FLAG)
#define Get_CAN2_FA1R(FLAG)                  (*(uint32_t*)0x40006a1c & FLAG)
#define Get_CAN2_F0R1(FLAG)                  (*(uint32_t*)0x40006a40 & FLAG)
#define Get_CAN2_F0R2(FLAG)                  (*(uint32_t*)0x40006a44 & FLAG)
#define Get_CAN2_F1R1(FLAG)                  (*(uint32_t*)0x40006a48 & FLAG)
#define Get_CAN2_F1R2(FLAG)                  (*(uint32_t*)0x40006a4c & FLAG)
#define Get_CAN2_F2R1(FLAG)                  (*(uint32_t*)0x40006a50 & FLAG)
#define Get_CAN2_F2R2(FLAG)                  (*(uint32_t*)0x40006a54 & FLAG)
#define Get_CAN2_F3R1(FLAG)                  (*(uint32_t*)0x40006a58 & FLAG)
#define Get_CAN2_F3R2(FLAG)                  (*(uint32_t*)0x40006a5c & FLAG)
#define Get_CAN2_F4R1(FLAG)                  (*(uint32_t*)0x40006a60 & FLAG)
#define Get_CAN2_F4R2(FLAG)                  (*(uint32_t*)0x40006a64 & FLAG)
#define Get_CAN2_F5R1(FLAG)                  (*(uint32_t*)0x40006a68 & FLAG)
#define Get_CAN2_F5R2(FLAG)                  (*(uint32_t*)0x40006a6c & FLAG)
#define Get_CAN2_F6R1(FLAG)                  (*(uint32_t*)0x40006a70 & FLAG)
#define Get_CAN2_F6R2(FLAG)                  (*(uint32_t*)0x40006a74 & FLAG)
#define Get_CAN2_F7R1(FLAG)                  (*(uint32_t*)0x40006a78 & FLAG)
#define Get_CAN2_F7R2(FLAG)                  (*(uint32_t*)0x40006a7c & FLAG)
#define Get_CAN2_F8R1(FLAG)                  (*(uint32_t*)0x40006a80 & FLAG)
#define Get_CAN2_F8R2(FLAG)                  (*(uint32_t*)0x40006a84 & FLAG)
#define Get_CAN2_F9R1(FLAG)                  (*(uint32_t*)0x40006a88 & FLAG)
#define Get_CAN2_F9R2(FLAG)                  (*(uint32_t*)0x40006a8c & FLAG)
#define Get_CAN2_F10R1(FLAG)                 (*(uint32_t*)0x40006a90 & FLAG)
#define Get_CAN2_F10R2(FLAG)                 (*(uint32_t*)0x40006a94 & FLAG)
#define Get_CAN2_F11R1(FLAG)                 (*(uint32_t*)0x40006a98 & FLAG)
#define Get_CAN2_F11R2(FLAG)                 (*(uint32_t*)0x40006a9c & FLAG)
#define Get_CAN2_F12R1(FLAG)                 (*(uint32_t*)0x40006aa0 & FLAG)
#define Get_CAN2_F12R2(FLAG)                 (*(uint32_t*)0x40006aa4 & FLAG)
#define Get_CAN2_F13R1(FLAG)                 (*(uint32_t*)0x40006aa8 & FLAG)
#define Get_CAN2_F13R2(FLAG)                 (*(uint32_t*)0x40006aac & FLAG)
#define Get_CAN2_F14R1(FLAG)                 (*(uint32_t*)0x40006ab0 & FLAG)
#define Get_CAN2_F14R2(FLAG)                 (*(uint32_t*)0x40006ab4 & FLAG)
#define Get_CAN2_F15R1(FLAG)                 (*(uint32_t*)0x40006ab8 & FLAG)
#define Get_CAN2_F15R2(FLAG)                 (*(uint32_t*)0x40006abc & FLAG)
#define Get_CAN2_F16R1(FLAG)                 (*(uint32_t*)0x40006ac0 & FLAG)
#define Get_CAN2_F16R2(FLAG)                 (*(uint32_t*)0x40006ac4 & FLAG)
#define Get_CAN2_F17R1(FLAG)                 (*(uint32_t*)0x40006ac8 & FLAG)
#define Get_CAN2_F17R2(FLAG)                 (*(uint32_t*)0x40006acc & FLAG)
#define Get_CAN2_F18R1(FLAG)                 (*(uint32_t*)0x40006ad0 & FLAG)
#define Get_CAN2_F18R2(FLAG)                 (*(uint32_t*)0x40006ad4 & FLAG)
#define Get_CAN2_F19R1(FLAG)                 (*(uint32_t*)0x40006ad8 & FLAG)
#define Get_CAN2_F19R2(FLAG)                 (*(uint32_t*)0x40006adc & FLAG)
#define Get_CAN2_F20R1(FLAG)                 (*(uint32_t*)0x40006ae0 & FLAG)
#define Get_CAN2_F20R2(FLAG)                 (*(uint32_t*)0x40006ae4 & FLAG)
#define Get_CAN2_F21R1(FLAG)                 (*(uint32_t*)0x40006ae8 & FLAG)
#define Get_CAN2_F21R2(FLAG)                 (*(uint32_t*)0x40006aec & FLAG)
#define Get_CAN2_F22R1(FLAG)                 (*(uint32_t*)0x40006af0 & FLAG)
#define Get_CAN2_F22R2(FLAG)                 (*(uint32_t*)0x40006af4 & FLAG)
#define Get_CAN2_F23R1(FLAG)                 (*(uint32_t*)0x40006af8 & FLAG)
#define Get_CAN2_F23R2(FLAG)                 (*(uint32_t*)0x40006afc & FLAG)
#define Get_CAN2_F24R1(FLAG)                 (*(uint32_t*)0x40006b00 & FLAG)
#define Get_CAN2_F24R2(FLAG)                 (*(uint32_t*)0x40006b04 & FLAG)
#define Get_CAN2_F25R1(FLAG)                 (*(uint32_t*)0x40006b08 & FLAG)
#define Get_CAN2_F25R2(FLAG)                 (*(uint32_t*)0x40006b0c & FLAG)
#define Get_CAN2_F26R1(FLAG)                 (*(uint32_t*)0x40006b10 & FLAG)
#define Get_CAN2_F26R2(FLAG)                 (*(uint32_t*)0x40006b14 & FLAG)
#define Get_CAN2_F27R1(FLAG)                 (*(uint32_t*)0x40006b18 & FLAG)
#define Get_CAN2_F27R2(FLAG)                 (*(uint32_t*)0x40006b1c & FLAG)
#define Set_CAN3_MCR(FLAG)                   (*(uint32_t*)0x40003400 |= FLAG)
#define Clr_CAN3_MCR(FLAG)                   (*(uint32_t*)0x40003400 &= ~FLAG)
#define Set_CAN3_MSR(FLAG)                   (*(uint32_t*)0x40003404 |= FLAG)
#define Clr_CAN3_MSR(FLAG)                   (*(uint32_t*)0x40003404 &= ~FLAG)
#define Set_CAN3_TSR(FLAG)                   (*(uint32_t*)0x40003408 |= FLAG)
#define Clr_CAN3_TSR(FLAG)                   (*(uint32_t*)0x40003408 &= ~FLAG)
#define Set_CAN3_RF0R(FLAG)                  (*(uint32_t*)0x4000340c |= FLAG)
#define Clr_CAN3_RF0R(FLAG)                  (*(uint32_t*)0x4000340c &= ~FLAG)
#define Set_CAN3_RF1R(FLAG)                  (*(uint32_t*)0x40003410 |= FLAG)
#define Clr_CAN3_RF1R(FLAG)                  (*(uint32_t*)0x40003410 &= ~FLAG)
#define Set_CAN3_IER(FLAG)                   (*(uint32_t*)0x40003414 |= FLAG)
#define Clr_CAN3_IER(FLAG)                   (*(uint32_t*)0x40003414 &= ~FLAG)
#define Set_CAN3_ESR(FLAG)                   (*(uint32_t*)0x40003418 |= FLAG)
#define Clr_CAN3_ESR(FLAG)                   (*(uint32_t*)0x40003418 &= ~FLAG)
#define Set_CAN3_BTR(FLAG)                   (*(uint32_t*)0x4000341c |= FLAG)
#define Clr_CAN3_BTR(FLAG)                   (*(uint32_t*)0x4000341c &= ~FLAG)
#define Set_CAN3_TI0R(FLAG)                  (*(uint32_t*)0x40003580 |= FLAG)
#define Clr_CAN3_TI0R(FLAG)                  (*(uint32_t*)0x40003580 &= ~FLAG)
#define Set_CAN3_TDT0R(FLAG)                 (*(uint32_t*)0x40003584 |= FLAG)
#define Clr_CAN3_TDT0R(FLAG)                 (*(uint32_t*)0x40003584 &= ~FLAG)
#define Set_CAN3_TDL0R(FLAG)                 (*(uint32_t*)0x40003588 |= FLAG)
#define Clr_CAN3_TDL0R(FLAG)                 (*(uint32_t*)0x40003588 &= ~FLAG)
#define Set_CAN3_TDH0R(FLAG)                 (*(uint32_t*)0x4000358c |= FLAG)
#define Clr_CAN3_TDH0R(FLAG)                 (*(uint32_t*)0x4000358c &= ~FLAG)
#define Set_CAN3_TI1R(FLAG)                  (*(uint32_t*)0x40003590 |= FLAG)
#define Clr_CAN3_TI1R(FLAG)                  (*(uint32_t*)0x40003590 &= ~FLAG)
#define Set_CAN3_TDT1R(FLAG)                 (*(uint32_t*)0x40003594 |= FLAG)
#define Clr_CAN3_TDT1R(FLAG)                 (*(uint32_t*)0x40003594 &= ~FLAG)
#define Set_CAN3_TDL1R(FLAG)                 (*(uint32_t*)0x40003598 |= FLAG)
#define Clr_CAN3_TDL1R(FLAG)                 (*(uint32_t*)0x40003598 &= ~FLAG)
#define Set_CAN3_TDH1R(FLAG)                 (*(uint32_t*)0x4000359c |= FLAG)
#define Clr_CAN3_TDH1R(FLAG)                 (*(uint32_t*)0x4000359c &= ~FLAG)
#define Set_CAN3_TI2R(FLAG)                  (*(uint32_t*)0x400035a0 |= FLAG)
#define Clr_CAN3_TI2R(FLAG)                  (*(uint32_t*)0x400035a0 &= ~FLAG)
#define Set_CAN3_TDT2R(FLAG)                 (*(uint32_t*)0x400035a4 |= FLAG)
#define Clr_CAN3_TDT2R(FLAG)                 (*(uint32_t*)0x400035a4 &= ~FLAG)
#define Set_CAN3_TDL2R(FLAG)                 (*(uint32_t*)0x400035a8 |= FLAG)
#define Clr_CAN3_TDL2R(FLAG)                 (*(uint32_t*)0x400035a8 &= ~FLAG)
#define Set_CAN3_TDH2R(FLAG)                 (*(uint32_t*)0x400035ac |= FLAG)
#define Clr_CAN3_TDH2R(FLAG)                 (*(uint32_t*)0x400035ac &= ~FLAG)
#define Set_CAN3_RI0R(FLAG)                  (*(uint32_t*)0x400035b0 |= FLAG)
#define Clr_CAN3_RI0R(FLAG)                  (*(uint32_t*)0x400035b0 &= ~FLAG)
#define Set_CAN3_RDT0R(FLAG)                 (*(uint32_t*)0x400035b4 |= FLAG)
#define Clr_CAN3_RDT0R(FLAG)                 (*(uint32_t*)0x400035b4 &= ~FLAG)
#define Set_CAN3_RDL0R(FLAG)                 (*(uint32_t*)0x400035b8 |= FLAG)
#define Clr_CAN3_RDL0R(FLAG)                 (*(uint32_t*)0x400035b8 &= ~FLAG)
#define Set_CAN3_RDH0R(FLAG)                 (*(uint32_t*)0x400035bc |= FLAG)
#define Clr_CAN3_RDH0R(FLAG)                 (*(uint32_t*)0x400035bc &= ~FLAG)
#define Set_CAN3_RI1R(FLAG)                  (*(uint32_t*)0x400035c0 |= FLAG)
#define Clr_CAN3_RI1R(FLAG)                  (*(uint32_t*)0x400035c0 &= ~FLAG)
#define Set_CAN3_RDT1R(FLAG)                 (*(uint32_t*)0x400035c4 |= FLAG)
#define Clr_CAN3_RDT1R(FLAG)                 (*(uint32_t*)0x400035c4 &= ~FLAG)
#define Set_CAN3_RDL1R(FLAG)                 (*(uint32_t*)0x400035c8 |= FLAG)
#define Clr_CAN3_RDL1R(FLAG)                 (*(uint32_t*)0x400035c8 &= ~FLAG)
#define Set_CAN3_RDH1R(FLAG)                 (*(uint32_t*)0x400035cc |= FLAG)
#define Clr_CAN3_RDH1R(FLAG)                 (*(uint32_t*)0x400035cc &= ~FLAG)
#define Set_CAN3_FMR(FLAG)                   (*(uint32_t*)0x40003600 |= FLAG)
#define Clr_CAN3_FMR(FLAG)                   (*(uint32_t*)0x40003600 &= ~FLAG)
#define Set_CAN3_FM1R(FLAG)                  (*(uint32_t*)0x40003604 |= FLAG)
#define Clr_CAN3_FM1R(FLAG)                  (*(uint32_t*)0x40003604 &= ~FLAG)
#define Set_CAN3_FS1R(FLAG)                  (*(uint32_t*)0x4000360c |= FLAG)
#define Clr_CAN3_FS1R(FLAG)                  (*(uint32_t*)0x4000360c &= ~FLAG)
#define Set_CAN3_FFA1R(FLAG)                 (*(uint32_t*)0x40003614 |= FLAG)
#define Clr_CAN3_FFA1R(FLAG)                 (*(uint32_t*)0x40003614 &= ~FLAG)
#define Set_CAN3_FA1R(FLAG)                  (*(uint32_t*)0x4000361c |= FLAG)
#define Clr_CAN3_FA1R(FLAG)                  (*(uint32_t*)0x4000361c &= ~FLAG)
#define Set_CAN3_F0R1(FLAG)                  (*(uint32_t*)0x40003640 |= FLAG)
#define Clr_CAN3_F0R1(FLAG)                  (*(uint32_t*)0x40003640 &= ~FLAG)
#define Set_CAN3_F0R2(FLAG)                  (*(uint32_t*)0x40003644 |= FLAG)
#define Clr_CAN3_F0R2(FLAG)                  (*(uint32_t*)0x40003644 &= ~FLAG)
#define Set_CAN3_F1R1(FLAG)                  (*(uint32_t*)0x40003648 |= FLAG)
#define Clr_CAN3_F1R1(FLAG)                  (*(uint32_t*)0x40003648 &= ~FLAG)
#define Set_CAN3_F1R2(FLAG)                  (*(uint32_t*)0x4000364c |= FLAG)
#define Clr_CAN3_F1R2(FLAG)                  (*(uint32_t*)0x4000364c &= ~FLAG)
#define Set_CAN3_F2R1(FLAG)                  (*(uint32_t*)0x40003650 |= FLAG)
#define Clr_CAN3_F2R1(FLAG)                  (*(uint32_t*)0x40003650 &= ~FLAG)
#define Set_CAN3_F2R2(FLAG)                  (*(uint32_t*)0x40003654 |= FLAG)
#define Clr_CAN3_F2R2(FLAG)                  (*(uint32_t*)0x40003654 &= ~FLAG)
#define Set_CAN3_F3R1(FLAG)                  (*(uint32_t*)0x40003658 |= FLAG)
#define Clr_CAN3_F3R1(FLAG)                  (*(uint32_t*)0x40003658 &= ~FLAG)
#define Set_CAN3_F3R2(FLAG)                  (*(uint32_t*)0x4000365c |= FLAG)
#define Clr_CAN3_F3R2(FLAG)                  (*(uint32_t*)0x4000365c &= ~FLAG)
#define Set_CAN3_F4R1(FLAG)                  (*(uint32_t*)0x40003660 |= FLAG)
#define Clr_CAN3_F4R1(FLAG)                  (*(uint32_t*)0x40003660 &= ~FLAG)
#define Set_CAN3_F4R2(FLAG)                  (*(uint32_t*)0x40003664 |= FLAG)
#define Clr_CAN3_F4R2(FLAG)                  (*(uint32_t*)0x40003664 &= ~FLAG)
#define Set_CAN3_F5R1(FLAG)                  (*(uint32_t*)0x40003668 |= FLAG)
#define Clr_CAN3_F5R1(FLAG)                  (*(uint32_t*)0x40003668 &= ~FLAG)
#define Set_CAN3_F5R2(FLAG)                  (*(uint32_t*)0x4000366c |= FLAG)
#define Clr_CAN3_F5R2(FLAG)                  (*(uint32_t*)0x4000366c &= ~FLAG)
#define Set_CAN3_F6R1(FLAG)                  (*(uint32_t*)0x40003670 |= FLAG)
#define Clr_CAN3_F6R1(FLAG)                  (*(uint32_t*)0x40003670 &= ~FLAG)
#define Set_CAN3_F6R2(FLAG)                  (*(uint32_t*)0x40003674 |= FLAG)
#define Clr_CAN3_F6R2(FLAG)                  (*(uint32_t*)0x40003674 &= ~FLAG)
#define Set_CAN3_F7R1(FLAG)                  (*(uint32_t*)0x40003678 |= FLAG)
#define Clr_CAN3_F7R1(FLAG)                  (*(uint32_t*)0x40003678 &= ~FLAG)
#define Set_CAN3_F7R2(FLAG)                  (*(uint32_t*)0x4000367c |= FLAG)
#define Clr_CAN3_F7R2(FLAG)                  (*(uint32_t*)0x4000367c &= ~FLAG)
#define Set_CAN3_F8R1(FLAG)                  (*(uint32_t*)0x40003680 |= FLAG)
#define Clr_CAN3_F8R1(FLAG)                  (*(uint32_t*)0x40003680 &= ~FLAG)
#define Set_CAN3_F8R2(FLAG)                  (*(uint32_t*)0x40003684 |= FLAG)
#define Clr_CAN3_F8R2(FLAG)                  (*(uint32_t*)0x40003684 &= ~FLAG)
#define Set_CAN3_F9R1(FLAG)                  (*(uint32_t*)0x40003688 |= FLAG)
#define Clr_CAN3_F9R1(FLAG)                  (*(uint32_t*)0x40003688 &= ~FLAG)
#define Set_CAN3_F9R2(FLAG)                  (*(uint32_t*)0x4000368c |= FLAG)
#define Clr_CAN3_F9R2(FLAG)                  (*(uint32_t*)0x4000368c &= ~FLAG)
#define Set_CAN3_F10R1(FLAG)                 (*(uint32_t*)0x40003690 |= FLAG)
#define Clr_CAN3_F10R1(FLAG)                 (*(uint32_t*)0x40003690 &= ~FLAG)
#define Set_CAN3_F10R2(FLAG)                 (*(uint32_t*)0x40003694 |= FLAG)
#define Clr_CAN3_F10R2(FLAG)                 (*(uint32_t*)0x40003694 &= ~FLAG)
#define Set_CAN3_F11R1(FLAG)                 (*(uint32_t*)0x40003698 |= FLAG)
#define Clr_CAN3_F11R1(FLAG)                 (*(uint32_t*)0x40003698 &= ~FLAG)
#define Set_CAN3_F11R2(FLAG)                 (*(uint32_t*)0x4000369c |= FLAG)
#define Clr_CAN3_F11R2(FLAG)                 (*(uint32_t*)0x4000369c &= ~FLAG)
#define Set_CAN3_F12R1(FLAG)                 (*(uint32_t*)0x400036a0 |= FLAG)
#define Clr_CAN3_F12R1(FLAG)                 (*(uint32_t*)0x400036a0 &= ~FLAG)
#define Set_CAN3_F12R2(FLAG)                 (*(uint32_t*)0x400036a4 |= FLAG)
#define Clr_CAN3_F12R2(FLAG)                 (*(uint32_t*)0x400036a4 &= ~FLAG)
#define Set_CAN3_F13R1(FLAG)                 (*(uint32_t*)0x400036a8 |= FLAG)
#define Clr_CAN3_F13R1(FLAG)                 (*(uint32_t*)0x400036a8 &= ~FLAG)
#define Set_CAN3_F13R2(FLAG)                 (*(uint32_t*)0x400036ac |= FLAG)
#define Clr_CAN3_F13R2(FLAG)                 (*(uint32_t*)0x400036ac &= ~FLAG)
#define Set_CAN3_F14R1(FLAG)                 (*(uint32_t*)0x400036b0 |= FLAG)
#define Clr_CAN3_F14R1(FLAG)                 (*(uint32_t*)0x400036b0 &= ~FLAG)
#define Set_CAN3_F14R2(FLAG)                 (*(uint32_t*)0x400036b4 |= FLAG)
#define Clr_CAN3_F14R2(FLAG)                 (*(uint32_t*)0x400036b4 &= ~FLAG)
#define Set_CAN3_F15R1(FLAG)                 (*(uint32_t*)0x400036b8 |= FLAG)
#define Clr_CAN3_F15R1(FLAG)                 (*(uint32_t*)0x400036b8 &= ~FLAG)
#define Set_CAN3_F15R2(FLAG)                 (*(uint32_t*)0x400036bc |= FLAG)
#define Clr_CAN3_F15R2(FLAG)                 (*(uint32_t*)0x400036bc &= ~FLAG)
#define Set_CAN3_F16R1(FLAG)                 (*(uint32_t*)0x400036c0 |= FLAG)
#define Clr_CAN3_F16R1(FLAG)                 (*(uint32_t*)0x400036c0 &= ~FLAG)
#define Set_CAN3_F16R2(FLAG)                 (*(uint32_t*)0x400036c4 |= FLAG)
#define Clr_CAN3_F16R2(FLAG)                 (*(uint32_t*)0x400036c4 &= ~FLAG)
#define Set_CAN3_F17R1(FLAG)                 (*(uint32_t*)0x400036c8 |= FLAG)
#define Clr_CAN3_F17R1(FLAG)                 (*(uint32_t*)0x400036c8 &= ~FLAG)
#define Set_CAN3_F17R2(FLAG)                 (*(uint32_t*)0x400036cc |= FLAG)
#define Clr_CAN3_F17R2(FLAG)                 (*(uint32_t*)0x400036cc &= ~FLAG)
#define Set_CAN3_F18R1(FLAG)                 (*(uint32_t*)0x400036d0 |= FLAG)
#define Clr_CAN3_F18R1(FLAG)                 (*(uint32_t*)0x400036d0 &= ~FLAG)
#define Set_CAN3_F18R2(FLAG)                 (*(uint32_t*)0x400036d4 |= FLAG)
#define Clr_CAN3_F18R2(FLAG)                 (*(uint32_t*)0x400036d4 &= ~FLAG)
#define Set_CAN3_F19R1(FLAG)                 (*(uint32_t*)0x400036d8 |= FLAG)
#define Clr_CAN3_F19R1(FLAG)                 (*(uint32_t*)0x400036d8 &= ~FLAG)
#define Set_CAN3_F19R2(FLAG)                 (*(uint32_t*)0x400036dc |= FLAG)
#define Clr_CAN3_F19R2(FLAG)                 (*(uint32_t*)0x400036dc &= ~FLAG)
#define Set_CAN3_F20R1(FLAG)                 (*(uint32_t*)0x400036e0 |= FLAG)
#define Clr_CAN3_F20R1(FLAG)                 (*(uint32_t*)0x400036e0 &= ~FLAG)
#define Set_CAN3_F20R2(FLAG)                 (*(uint32_t*)0x400036e4 |= FLAG)
#define Clr_CAN3_F20R2(FLAG)                 (*(uint32_t*)0x400036e4 &= ~FLAG)
#define Set_CAN3_F21R1(FLAG)                 (*(uint32_t*)0x400036e8 |= FLAG)
#define Clr_CAN3_F21R1(FLAG)                 (*(uint32_t*)0x400036e8 &= ~FLAG)
#define Set_CAN3_F21R2(FLAG)                 (*(uint32_t*)0x400036ec |= FLAG)
#define Clr_CAN3_F21R2(FLAG)                 (*(uint32_t*)0x400036ec &= ~FLAG)
#define Set_CAN3_F22R1(FLAG)                 (*(uint32_t*)0x400036f0 |= FLAG)
#define Clr_CAN3_F22R1(FLAG)                 (*(uint32_t*)0x400036f0 &= ~FLAG)
#define Set_CAN3_F22R2(FLAG)                 (*(uint32_t*)0x400036f4 |= FLAG)
#define Clr_CAN3_F22R2(FLAG)                 (*(uint32_t*)0x400036f4 &= ~FLAG)
#define Set_CAN3_F23R1(FLAG)                 (*(uint32_t*)0x400036f8 |= FLAG)
#define Clr_CAN3_F23R1(FLAG)                 (*(uint32_t*)0x400036f8 &= ~FLAG)
#define Set_CAN3_F23R2(FLAG)                 (*(uint32_t*)0x400036fc |= FLAG)
#define Clr_CAN3_F23R2(FLAG)                 (*(uint32_t*)0x400036fc &= ~FLAG)
#define Set_CAN3_F24R1(FLAG)                 (*(uint32_t*)0x40003700 |= FLAG)
#define Clr_CAN3_F24R1(FLAG)                 (*(uint32_t*)0x40003700 &= ~FLAG)
#define Set_CAN3_F24R2(FLAG)                 (*(uint32_t*)0x40003704 |= FLAG)
#define Clr_CAN3_F24R2(FLAG)                 (*(uint32_t*)0x40003704 &= ~FLAG)
#define Set_CAN3_F25R1(FLAG)                 (*(uint32_t*)0x40003708 |= FLAG)
#define Clr_CAN3_F25R1(FLAG)                 (*(uint32_t*)0x40003708 &= ~FLAG)
#define Set_CAN3_F25R2(FLAG)                 (*(uint32_t*)0x4000370c |= FLAG)
#define Clr_CAN3_F25R2(FLAG)                 (*(uint32_t*)0x4000370c &= ~FLAG)
#define Set_CAN3_F26R1(FLAG)                 (*(uint32_t*)0x40003710 |= FLAG)
#define Clr_CAN3_F26R1(FLAG)                 (*(uint32_t*)0x40003710 &= ~FLAG)
#define Set_CAN3_F26R2(FLAG)                 (*(uint32_t*)0x40003714 |= FLAG)
#define Clr_CAN3_F26R2(FLAG)                 (*(uint32_t*)0x40003714 &= ~FLAG)
#define Set_CAN3_F27R1(FLAG)                 (*(uint32_t*)0x40003718 |= FLAG)
#define Clr_CAN3_F27R1(FLAG)                 (*(uint32_t*)0x40003718 &= ~FLAG)
#define Set_CAN3_F27R2(FLAG)                 (*(uint32_t*)0x4000371c |= FLAG)
#define Clr_CAN3_F27R2(FLAG)                 (*(uint32_t*)0x4000371c &= ~FLAG)
#define Set_CAN1_MCR(FLAG)                   (*(uint32_t*)0x40006400 |= FLAG)
#define Clr_CAN1_MCR(FLAG)                   (*(uint32_t*)0x40006400 &= ~FLAG)
#define Set_CAN1_MSR(FLAG)                   (*(uint32_t*)0x40006404 |= FLAG)
#define Clr_CAN1_MSR(FLAG)                   (*(uint32_t*)0x40006404 &= ~FLAG)
#define Set_CAN1_TSR(FLAG)                   (*(uint32_t*)0x40006408 |= FLAG)
#define Clr_CAN1_TSR(FLAG)                   (*(uint32_t*)0x40006408 &= ~FLAG)
#define Set_CAN1_RF0R(FLAG)                  (*(uint32_t*)0x4000640c |= FLAG)
#define Clr_CAN1_RF0R(FLAG)                  (*(uint32_t*)0x4000640c &= ~FLAG)
#define Set_CAN1_RF1R(FLAG)                  (*(uint32_t*)0x40006410 |= FLAG)
#define Clr_CAN1_RF1R(FLAG)                  (*(uint32_t*)0x40006410 &= ~FLAG)
#define Set_CAN1_IER(FLAG)                   (*(uint32_t*)0x40006414 |= FLAG)
#define Clr_CAN1_IER(FLAG)                   (*(uint32_t*)0x40006414 &= ~FLAG)
#define Set_CAN1_ESR(FLAG)                   (*(uint32_t*)0x40006418 |= FLAG)
#define Clr_CAN1_ESR(FLAG)                   (*(uint32_t*)0x40006418 &= ~FLAG)
#define Set_CAN1_BTR(FLAG)                   (*(uint32_t*)0x4000641c |= FLAG)
#define Clr_CAN1_BTR(FLAG)                   (*(uint32_t*)0x4000641c &= ~FLAG)
#define Set_CAN1_TI0R(FLAG)                  (*(uint32_t*)0x40006580 |= FLAG)
#define Clr_CAN1_TI0R(FLAG)                  (*(uint32_t*)0x40006580 &= ~FLAG)
#define Set_CAN1_TDT0R(FLAG)                 (*(uint32_t*)0x40006584 |= FLAG)
#define Clr_CAN1_TDT0R(FLAG)                 (*(uint32_t*)0x40006584 &= ~FLAG)
#define Set_CAN1_TDL0R(FLAG)                 (*(uint32_t*)0x40006588 |= FLAG)
#define Clr_CAN1_TDL0R(FLAG)                 (*(uint32_t*)0x40006588 &= ~FLAG)
#define Set_CAN1_TDH0R(FLAG)                 (*(uint32_t*)0x4000658c |= FLAG)
#define Clr_CAN1_TDH0R(FLAG)                 (*(uint32_t*)0x4000658c &= ~FLAG)
#define Set_CAN1_TI1R(FLAG)                  (*(uint32_t*)0x40006590 |= FLAG)
#define Clr_CAN1_TI1R(FLAG)                  (*(uint32_t*)0x40006590 &= ~FLAG)
#define Set_CAN1_TDT1R(FLAG)                 (*(uint32_t*)0x40006594 |= FLAG)
#define Clr_CAN1_TDT1R(FLAG)                 (*(uint32_t*)0x40006594 &= ~FLAG)
#define Set_CAN1_TDL1R(FLAG)                 (*(uint32_t*)0x40006598 |= FLAG)
#define Clr_CAN1_TDL1R(FLAG)                 (*(uint32_t*)0x40006598 &= ~FLAG)
#define Set_CAN1_TDH1R(FLAG)                 (*(uint32_t*)0x4000659c |= FLAG)
#define Clr_CAN1_TDH1R(FLAG)                 (*(uint32_t*)0x4000659c &= ~FLAG)
#define Set_CAN1_TI2R(FLAG)                  (*(uint32_t*)0x400065a0 |= FLAG)
#define Clr_CAN1_TI2R(FLAG)                  (*(uint32_t*)0x400065a0 &= ~FLAG)
#define Set_CAN1_TDT2R(FLAG)                 (*(uint32_t*)0x400065a4 |= FLAG)
#define Clr_CAN1_TDT2R(FLAG)                 (*(uint32_t*)0x400065a4 &= ~FLAG)
#define Set_CAN1_TDL2R(FLAG)                 (*(uint32_t*)0x400065a8 |= FLAG)
#define Clr_CAN1_TDL2R(FLAG)                 (*(uint32_t*)0x400065a8 &= ~FLAG)
#define Set_CAN1_TDH2R(FLAG)                 (*(uint32_t*)0x400065ac |= FLAG)
#define Clr_CAN1_TDH2R(FLAG)                 (*(uint32_t*)0x400065ac &= ~FLAG)
#define Set_CAN1_RI0R(FLAG)                  (*(uint32_t*)0x400065b0 |= FLAG)
#define Clr_CAN1_RI0R(FLAG)                  (*(uint32_t*)0x400065b0 &= ~FLAG)
#define Set_CAN1_RDT0R(FLAG)                 (*(uint32_t*)0x400065b4 |= FLAG)
#define Clr_CAN1_RDT0R(FLAG)                 (*(uint32_t*)0x400065b4 &= ~FLAG)
#define Set_CAN1_RDL0R(FLAG)                 (*(uint32_t*)0x400065b8 |= FLAG)
#define Clr_CAN1_RDL0R(FLAG)                 (*(uint32_t*)0x400065b8 &= ~FLAG)
#define Set_CAN1_RDH0R(FLAG)                 (*(uint32_t*)0x400065bc |= FLAG)
#define Clr_CAN1_RDH0R(FLAG)                 (*(uint32_t*)0x400065bc &= ~FLAG)
#define Set_CAN1_RI1R(FLAG)                  (*(uint32_t*)0x400065c0 |= FLAG)
#define Clr_CAN1_RI1R(FLAG)                  (*(uint32_t*)0x400065c0 &= ~FLAG)
#define Set_CAN1_RDT1R(FLAG)                 (*(uint32_t*)0x400065c4 |= FLAG)
#define Clr_CAN1_RDT1R(FLAG)                 (*(uint32_t*)0x400065c4 &= ~FLAG)
#define Set_CAN1_RDL1R(FLAG)                 (*(uint32_t*)0x400065c8 |= FLAG)
#define Clr_CAN1_RDL1R(FLAG)                 (*(uint32_t*)0x400065c8 &= ~FLAG)
#define Set_CAN1_RDH1R(FLAG)                 (*(uint32_t*)0x400065cc |= FLAG)
#define Clr_CAN1_RDH1R(FLAG)                 (*(uint32_t*)0x400065cc &= ~FLAG)
#define Set_CAN1_FMR(FLAG)                   (*(uint32_t*)0x40006600 |= FLAG)
#define Clr_CAN1_FMR(FLAG)                   (*(uint32_t*)0x40006600 &= ~FLAG)
#define Set_CAN1_FM1R(FLAG)                  (*(uint32_t*)0x40006604 |= FLAG)
#define Clr_CAN1_FM1R(FLAG)                  (*(uint32_t*)0x40006604 &= ~FLAG)
#define Set_CAN1_FS1R(FLAG)                  (*(uint32_t*)0x4000660c |= FLAG)
#define Clr_CAN1_FS1R(FLAG)                  (*(uint32_t*)0x4000660c &= ~FLAG)
#define Set_CAN1_FFA1R(FLAG)                 (*(uint32_t*)0x40006614 |= FLAG)
#define Clr_CAN1_FFA1R(FLAG)                 (*(uint32_t*)0x40006614 &= ~FLAG)
#define Set_CAN1_FA1R(FLAG)                  (*(uint32_t*)0x4000661c |= FLAG)
#define Clr_CAN1_FA1R(FLAG)                  (*(uint32_t*)0x4000661c &= ~FLAG)
#define Set_CAN1_F0R1(FLAG)                  (*(uint32_t*)0x40006640 |= FLAG)
#define Clr_CAN1_F0R1(FLAG)                  (*(uint32_t*)0x40006640 &= ~FLAG)
#define Set_CAN1_F0R2(FLAG)                  (*(uint32_t*)0x40006644 |= FLAG)
#define Clr_CAN1_F0R2(FLAG)                  (*(uint32_t*)0x40006644 &= ~FLAG)
#define Set_CAN1_F1R1(FLAG)                  (*(uint32_t*)0x40006648 |= FLAG)
#define Clr_CAN1_F1R1(FLAG)                  (*(uint32_t*)0x40006648 &= ~FLAG)
#define Set_CAN1_F1R2(FLAG)                  (*(uint32_t*)0x4000664c |= FLAG)
#define Clr_CAN1_F1R2(FLAG)                  (*(uint32_t*)0x4000664c &= ~FLAG)
#define Set_CAN1_F2R1(FLAG)                  (*(uint32_t*)0x40006650 |= FLAG)
#define Clr_CAN1_F2R1(FLAG)                  (*(uint32_t*)0x40006650 &= ~FLAG)
#define Set_CAN1_F2R2(FLAG)                  (*(uint32_t*)0x40006654 |= FLAG)
#define Clr_CAN1_F2R2(FLAG)                  (*(uint32_t*)0x40006654 &= ~FLAG)
#define Set_CAN1_F3R1(FLAG)                  (*(uint32_t*)0x40006658 |= FLAG)
#define Clr_CAN1_F3R1(FLAG)                  (*(uint32_t*)0x40006658 &= ~FLAG)
#define Set_CAN1_F3R2(FLAG)                  (*(uint32_t*)0x4000665c |= FLAG)
#define Clr_CAN1_F3R2(FLAG)                  (*(uint32_t*)0x4000665c &= ~FLAG)
#define Set_CAN1_F4R1(FLAG)                  (*(uint32_t*)0x40006660 |= FLAG)
#define Clr_CAN1_F4R1(FLAG)                  (*(uint32_t*)0x40006660 &= ~FLAG)
#define Set_CAN1_F4R2(FLAG)                  (*(uint32_t*)0x40006664 |= FLAG)
#define Clr_CAN1_F4R2(FLAG)                  (*(uint32_t*)0x40006664 &= ~FLAG)
#define Set_CAN1_F5R1(FLAG)                  (*(uint32_t*)0x40006668 |= FLAG)
#define Clr_CAN1_F5R1(FLAG)                  (*(uint32_t*)0x40006668 &= ~FLAG)
#define Set_CAN1_F5R2(FLAG)                  (*(uint32_t*)0x4000666c |= FLAG)
#define Clr_CAN1_F5R2(FLAG)                  (*(uint32_t*)0x4000666c &= ~FLAG)
#define Set_CAN1_F6R1(FLAG)                  (*(uint32_t*)0x40006670 |= FLAG)
#define Clr_CAN1_F6R1(FLAG)                  (*(uint32_t*)0x40006670 &= ~FLAG)
#define Set_CAN1_F6R2(FLAG)                  (*(uint32_t*)0x40006674 |= FLAG)
#define Clr_CAN1_F6R2(FLAG)                  (*(uint32_t*)0x40006674 &= ~FLAG)
#define Set_CAN1_F7R1(FLAG)                  (*(uint32_t*)0x40006678 |= FLAG)
#define Clr_CAN1_F7R1(FLAG)                  (*(uint32_t*)0x40006678 &= ~FLAG)
#define Set_CAN1_F7R2(FLAG)                  (*(uint32_t*)0x4000667c |= FLAG)
#define Clr_CAN1_F7R2(FLAG)                  (*(uint32_t*)0x4000667c &= ~FLAG)
#define Set_CAN1_F8R1(FLAG)                  (*(uint32_t*)0x40006680 |= FLAG)
#define Clr_CAN1_F8R1(FLAG)                  (*(uint32_t*)0x40006680 &= ~FLAG)
#define Set_CAN1_F8R2(FLAG)                  (*(uint32_t*)0x40006684 |= FLAG)
#define Clr_CAN1_F8R2(FLAG)                  (*(uint32_t*)0x40006684 &= ~FLAG)
#define Set_CAN1_F9R1(FLAG)                  (*(uint32_t*)0x40006688 |= FLAG)
#define Clr_CAN1_F9R1(FLAG)                  (*(uint32_t*)0x40006688 &= ~FLAG)
#define Set_CAN1_F9R2(FLAG)                  (*(uint32_t*)0x4000668c |= FLAG)
#define Clr_CAN1_F9R2(FLAG)                  (*(uint32_t*)0x4000668c &= ~FLAG)
#define Set_CAN1_F10R1(FLAG)                 (*(uint32_t*)0x40006690 |= FLAG)
#define Clr_CAN1_F10R1(FLAG)                 (*(uint32_t*)0x40006690 &= ~FLAG)
#define Set_CAN1_F10R2(FLAG)                 (*(uint32_t*)0x40006694 |= FLAG)
#define Clr_CAN1_F10R2(FLAG)                 (*(uint32_t*)0x40006694 &= ~FLAG)
#define Set_CAN1_F11R1(FLAG)                 (*(uint32_t*)0x40006698 |= FLAG)
#define Clr_CAN1_F11R1(FLAG)                 (*(uint32_t*)0x40006698 &= ~FLAG)
#define Set_CAN1_F11R2(FLAG)                 (*(uint32_t*)0x4000669c |= FLAG)
#define Clr_CAN1_F11R2(FLAG)                 (*(uint32_t*)0x4000669c &= ~FLAG)
#define Set_CAN1_F12R1(FLAG)                 (*(uint32_t*)0x400066a0 |= FLAG)
#define Clr_CAN1_F12R1(FLAG)                 (*(uint32_t*)0x400066a0 &= ~FLAG)
#define Set_CAN1_F12R2(FLAG)                 (*(uint32_t*)0x400066a4 |= FLAG)
#define Clr_CAN1_F12R2(FLAG)                 (*(uint32_t*)0x400066a4 &= ~FLAG)
#define Set_CAN1_F13R1(FLAG)                 (*(uint32_t*)0x400066a8 |= FLAG)
#define Clr_CAN1_F13R1(FLAG)                 (*(uint32_t*)0x400066a8 &= ~FLAG)
#define Set_CAN1_F13R2(FLAG)                 (*(uint32_t*)0x400066ac |= FLAG)
#define Clr_CAN1_F13R2(FLAG)                 (*(uint32_t*)0x400066ac &= ~FLAG)
#define Set_CAN1_F14R1(FLAG)                 (*(uint32_t*)0x400066b0 |= FLAG)
#define Clr_CAN1_F14R1(FLAG)                 (*(uint32_t*)0x400066b0 &= ~FLAG)
#define Set_CAN1_F14R2(FLAG)                 (*(uint32_t*)0x400066b4 |= FLAG)
#define Clr_CAN1_F14R2(FLAG)                 (*(uint32_t*)0x400066b4 &= ~FLAG)
#define Set_CAN1_F15R1(FLAG)                 (*(uint32_t*)0x400066b8 |= FLAG)
#define Clr_CAN1_F15R1(FLAG)                 (*(uint32_t*)0x400066b8 &= ~FLAG)
#define Set_CAN1_F15R2(FLAG)                 (*(uint32_t*)0x400066bc |= FLAG)
#define Clr_CAN1_F15R2(FLAG)                 (*(uint32_t*)0x400066bc &= ~FLAG)
#define Set_CAN1_F16R1(FLAG)                 (*(uint32_t*)0x400066c0 |= FLAG)
#define Clr_CAN1_F16R1(FLAG)                 (*(uint32_t*)0x400066c0 &= ~FLAG)
#define Set_CAN1_F16R2(FLAG)                 (*(uint32_t*)0x400066c4 |= FLAG)
#define Clr_CAN1_F16R2(FLAG)                 (*(uint32_t*)0x400066c4 &= ~FLAG)
#define Set_CAN1_F17R1(FLAG)                 (*(uint32_t*)0x400066c8 |= FLAG)
#define Clr_CAN1_F17R1(FLAG)                 (*(uint32_t*)0x400066c8 &= ~FLAG)
#define Set_CAN1_F17R2(FLAG)                 (*(uint32_t*)0x400066cc |= FLAG)
#define Clr_CAN1_F17R2(FLAG)                 (*(uint32_t*)0x400066cc &= ~FLAG)
#define Set_CAN1_F18R1(FLAG)                 (*(uint32_t*)0x400066d0 |= FLAG)
#define Clr_CAN1_F18R1(FLAG)                 (*(uint32_t*)0x400066d0 &= ~FLAG)
#define Set_CAN1_F18R2(FLAG)                 (*(uint32_t*)0x400066d4 |= FLAG)
#define Clr_CAN1_F18R2(FLAG)                 (*(uint32_t*)0x400066d4 &= ~FLAG)
#define Set_CAN1_F19R1(FLAG)                 (*(uint32_t*)0x400066d8 |= FLAG)
#define Clr_CAN1_F19R1(FLAG)                 (*(uint32_t*)0x400066d8 &= ~FLAG)
#define Set_CAN1_F19R2(FLAG)                 (*(uint32_t*)0x400066dc |= FLAG)
#define Clr_CAN1_F19R2(FLAG)                 (*(uint32_t*)0x400066dc &= ~FLAG)
#define Set_CAN1_F20R1(FLAG)                 (*(uint32_t*)0x400066e0 |= FLAG)
#define Clr_CAN1_F20R1(FLAG)                 (*(uint32_t*)0x400066e0 &= ~FLAG)
#define Set_CAN1_F20R2(FLAG)                 (*(uint32_t*)0x400066e4 |= FLAG)
#define Clr_CAN1_F20R2(FLAG)                 (*(uint32_t*)0x400066e4 &= ~FLAG)
#define Set_CAN1_F21R1(FLAG)                 (*(uint32_t*)0x400066e8 |= FLAG)
#define Clr_CAN1_F21R1(FLAG)                 (*(uint32_t*)0x400066e8 &= ~FLAG)
#define Set_CAN1_F21R2(FLAG)                 (*(uint32_t*)0x400066ec |= FLAG)
#define Clr_CAN1_F21R2(FLAG)                 (*(uint32_t*)0x400066ec &= ~FLAG)
#define Set_CAN1_F22R1(FLAG)                 (*(uint32_t*)0x400066f0 |= FLAG)
#define Clr_CAN1_F22R1(FLAG)                 (*(uint32_t*)0x400066f0 &= ~FLAG)
#define Set_CAN1_F22R2(FLAG)                 (*(uint32_t*)0x400066f4 |= FLAG)
#define Clr_CAN1_F22R2(FLAG)                 (*(uint32_t*)0x400066f4 &= ~FLAG)
#define Set_CAN1_F23R1(FLAG)                 (*(uint32_t*)0x400066f8 |= FLAG)
#define Clr_CAN1_F23R1(FLAG)                 (*(uint32_t*)0x400066f8 &= ~FLAG)
#define Set_CAN1_F23R2(FLAG)                 (*(uint32_t*)0x400066fc |= FLAG)
#define Clr_CAN1_F23R2(FLAG)                 (*(uint32_t*)0x400066fc &= ~FLAG)
#define Set_CAN1_F24R1(FLAG)                 (*(uint32_t*)0x40006700 |= FLAG)
#define Clr_CAN1_F24R1(FLAG)                 (*(uint32_t*)0x40006700 &= ~FLAG)
#define Set_CAN1_F24R2(FLAG)                 (*(uint32_t*)0x40006704 |= FLAG)
#define Clr_CAN1_F24R2(FLAG)                 (*(uint32_t*)0x40006704 &= ~FLAG)
#define Set_CAN1_F25R1(FLAG)                 (*(uint32_t*)0x40006708 |= FLAG)
#define Clr_CAN1_F25R1(FLAG)                 (*(uint32_t*)0x40006708 &= ~FLAG)
#define Set_CAN1_F25R2(FLAG)                 (*(uint32_t*)0x4000670c |= FLAG)
#define Clr_CAN1_F25R2(FLAG)                 (*(uint32_t*)0x4000670c &= ~FLAG)
#define Set_CAN1_F26R1(FLAG)                 (*(uint32_t*)0x40006710 |= FLAG)
#define Clr_CAN1_F26R1(FLAG)                 (*(uint32_t*)0x40006710 &= ~FLAG)
#define Set_CAN1_F26R2(FLAG)                 (*(uint32_t*)0x40006714 |= FLAG)
#define Clr_CAN1_F26R2(FLAG)                 (*(uint32_t*)0x40006714 &= ~FLAG)
#define Set_CAN1_F27R1(FLAG)                 (*(uint32_t*)0x40006718 |= FLAG)
#define Clr_CAN1_F27R1(FLAG)                 (*(uint32_t*)0x40006718 &= ~FLAG)
#define Set_CAN1_F27R2(FLAG)                 (*(uint32_t*)0x4000671c |= FLAG)
#define Clr_CAN1_F27R2(FLAG)                 (*(uint32_t*)0x4000671c &= ~FLAG)
#define Set_CAN2_MCR(FLAG)                   (*(uint32_t*)0x40006800 |= FLAG)
#define Clr_CAN2_MCR(FLAG)                   (*(uint32_t*)0x40006800 &= ~FLAG)
#define Set_CAN2_MSR(FLAG)                   (*(uint32_t*)0x40006804 |= FLAG)
#define Clr_CAN2_MSR(FLAG)                   (*(uint32_t*)0x40006804 &= ~FLAG)
#define Set_CAN2_TSR(FLAG)                   (*(uint32_t*)0x40006808 |= FLAG)
#define Clr_CAN2_TSR(FLAG)                   (*(uint32_t*)0x40006808 &= ~FLAG)
#define Set_CAN2_RF0R(FLAG)                  (*(uint32_t*)0x4000680c |= FLAG)
#define Clr_CAN2_RF0R(FLAG)                  (*(uint32_t*)0x4000680c &= ~FLAG)
#define Set_CAN2_RF1R(FLAG)                  (*(uint32_t*)0x40006810 |= FLAG)
#define Clr_CAN2_RF1R(FLAG)                  (*(uint32_t*)0x40006810 &= ~FLAG)
#define Set_CAN2_IER(FLAG)                   (*(uint32_t*)0x40006814 |= FLAG)
#define Clr_CAN2_IER(FLAG)                   (*(uint32_t*)0x40006814 &= ~FLAG)
#define Set_CAN2_ESR(FLAG)                   (*(uint32_t*)0x40006818 |= FLAG)
#define Clr_CAN2_ESR(FLAG)                   (*(uint32_t*)0x40006818 &= ~FLAG)
#define Set_CAN2_BTR(FLAG)                   (*(uint32_t*)0x4000681c |= FLAG)
#define Clr_CAN2_BTR(FLAG)                   (*(uint32_t*)0x4000681c &= ~FLAG)
#define Set_CAN2_TI0R(FLAG)                  (*(uint32_t*)0x40006980 |= FLAG)
#define Clr_CAN2_TI0R(FLAG)                  (*(uint32_t*)0x40006980 &= ~FLAG)
#define Set_CAN2_TDT0R(FLAG)                 (*(uint32_t*)0x40006984 |= FLAG)
#define Clr_CAN2_TDT0R(FLAG)                 (*(uint32_t*)0x40006984 &= ~FLAG)
#define Set_CAN2_TDL0R(FLAG)                 (*(uint32_t*)0x40006988 |= FLAG)
#define Clr_CAN2_TDL0R(FLAG)                 (*(uint32_t*)0x40006988 &= ~FLAG)
#define Set_CAN2_TDH0R(FLAG)                 (*(uint32_t*)0x4000698c |= FLAG)
#define Clr_CAN2_TDH0R(FLAG)                 (*(uint32_t*)0x4000698c &= ~FLAG)
#define Set_CAN2_TI1R(FLAG)                  (*(uint32_t*)0x40006990 |= FLAG)
#define Clr_CAN2_TI1R(FLAG)                  (*(uint32_t*)0x40006990 &= ~FLAG)
#define Set_CAN2_TDT1R(FLAG)                 (*(uint32_t*)0x40006994 |= FLAG)
#define Clr_CAN2_TDT1R(FLAG)                 (*(uint32_t*)0x40006994 &= ~FLAG)
#define Set_CAN2_TDL1R(FLAG)                 (*(uint32_t*)0x40006998 |= FLAG)
#define Clr_CAN2_TDL1R(FLAG)                 (*(uint32_t*)0x40006998 &= ~FLAG)
#define Set_CAN2_TDH1R(FLAG)                 (*(uint32_t*)0x4000699c |= FLAG)
#define Clr_CAN2_TDH1R(FLAG)                 (*(uint32_t*)0x4000699c &= ~FLAG)
#define Set_CAN2_TI2R(FLAG)                  (*(uint32_t*)0x400069a0 |= FLAG)
#define Clr_CAN2_TI2R(FLAG)                  (*(uint32_t*)0x400069a0 &= ~FLAG)
#define Set_CAN2_TDT2R(FLAG)                 (*(uint32_t*)0x400069a4 |= FLAG)
#define Clr_CAN2_TDT2R(FLAG)                 (*(uint32_t*)0x400069a4 &= ~FLAG)
#define Set_CAN2_TDL2R(FLAG)                 (*(uint32_t*)0x400069a8 |= FLAG)
#define Clr_CAN2_TDL2R(FLAG)                 (*(uint32_t*)0x400069a8 &= ~FLAG)
#define Set_CAN2_TDH2R(FLAG)                 (*(uint32_t*)0x400069ac |= FLAG)
#define Clr_CAN2_TDH2R(FLAG)                 (*(uint32_t*)0x400069ac &= ~FLAG)
#define Set_CAN2_RI0R(FLAG)                  (*(uint32_t*)0x400069b0 |= FLAG)
#define Clr_CAN2_RI0R(FLAG)                  (*(uint32_t*)0x400069b0 &= ~FLAG)
#define Set_CAN2_RDT0R(FLAG)                 (*(uint32_t*)0x400069b4 |= FLAG)
#define Clr_CAN2_RDT0R(FLAG)                 (*(uint32_t*)0x400069b4 &= ~FLAG)
#define Set_CAN2_RDL0R(FLAG)                 (*(uint32_t*)0x400069b8 |= FLAG)
#define Clr_CAN2_RDL0R(FLAG)                 (*(uint32_t*)0x400069b8 &= ~FLAG)
#define Set_CAN2_RDH0R(FLAG)                 (*(uint32_t*)0x400069bc |= FLAG)
#define Clr_CAN2_RDH0R(FLAG)                 (*(uint32_t*)0x400069bc &= ~FLAG)
#define Set_CAN2_RI1R(FLAG)                  (*(uint32_t*)0x400069c0 |= FLAG)
#define Clr_CAN2_RI1R(FLAG)                  (*(uint32_t*)0x400069c0 &= ~FLAG)
#define Set_CAN2_RDT1R(FLAG)                 (*(uint32_t*)0x400069c4 |= FLAG)
#define Clr_CAN2_RDT1R(FLAG)                 (*(uint32_t*)0x400069c4 &= ~FLAG)
#define Set_CAN2_RDL1R(FLAG)                 (*(uint32_t*)0x400069c8 |= FLAG)
#define Clr_CAN2_RDL1R(FLAG)                 (*(uint32_t*)0x400069c8 &= ~FLAG)
#define Set_CAN2_RDH1R(FLAG)                 (*(uint32_t*)0x400069cc |= FLAG)
#define Clr_CAN2_RDH1R(FLAG)                 (*(uint32_t*)0x400069cc &= ~FLAG)
#define Set_CAN2_FMR(FLAG)                   (*(uint32_t*)0x40006a00 |= FLAG)
#define Clr_CAN2_FMR(FLAG)                   (*(uint32_t*)0x40006a00 &= ~FLAG)
#define Set_CAN2_FM1R(FLAG)                  (*(uint32_t*)0x40006a04 |= FLAG)
#define Clr_CAN2_FM1R(FLAG)                  (*(uint32_t*)0x40006a04 &= ~FLAG)
#define Set_CAN2_FS1R(FLAG)                  (*(uint32_t*)0x40006a0c |= FLAG)
#define Clr_CAN2_FS1R(FLAG)                  (*(uint32_t*)0x40006a0c &= ~FLAG)
#define Set_CAN2_FFA1R(FLAG)                 (*(uint32_t*)0x40006a14 |= FLAG)
#define Clr_CAN2_FFA1R(FLAG)                 (*(uint32_t*)0x40006a14 &= ~FLAG)
#define Set_CAN2_FA1R(FLAG)                  (*(uint32_t*)0x40006a1c |= FLAG)
#define Clr_CAN2_FA1R(FLAG)                  (*(uint32_t*)0x40006a1c &= ~FLAG)
#define Set_CAN2_F0R1(FLAG)                  (*(uint32_t*)0x40006a40 |= FLAG)
#define Clr_CAN2_F0R1(FLAG)                  (*(uint32_t*)0x40006a40 &= ~FLAG)
#define Set_CAN2_F0R2(FLAG)                  (*(uint32_t*)0x40006a44 |= FLAG)
#define Clr_CAN2_F0R2(FLAG)                  (*(uint32_t*)0x40006a44 &= ~FLAG)
#define Set_CAN2_F1R1(FLAG)                  (*(uint32_t*)0x40006a48 |= FLAG)
#define Clr_CAN2_F1R1(FLAG)                  (*(uint32_t*)0x40006a48 &= ~FLAG)
#define Set_CAN2_F1R2(FLAG)                  (*(uint32_t*)0x40006a4c |= FLAG)
#define Clr_CAN2_F1R2(FLAG)                  (*(uint32_t*)0x40006a4c &= ~FLAG)
#define Set_CAN2_F2R1(FLAG)                  (*(uint32_t*)0x40006a50 |= FLAG)
#define Clr_CAN2_F2R1(FLAG)                  (*(uint32_t*)0x40006a50 &= ~FLAG)
#define Set_CAN2_F2R2(FLAG)                  (*(uint32_t*)0x40006a54 |= FLAG)
#define Clr_CAN2_F2R2(FLAG)                  (*(uint32_t*)0x40006a54 &= ~FLAG)
#define Set_CAN2_F3R1(FLAG)                  (*(uint32_t*)0x40006a58 |= FLAG)
#define Clr_CAN2_F3R1(FLAG)                  (*(uint32_t*)0x40006a58 &= ~FLAG)
#define Set_CAN2_F3R2(FLAG)                  (*(uint32_t*)0x40006a5c |= FLAG)
#define Clr_CAN2_F3R2(FLAG)                  (*(uint32_t*)0x40006a5c &= ~FLAG)
#define Set_CAN2_F4R1(FLAG)                  (*(uint32_t*)0x40006a60 |= FLAG)
#define Clr_CAN2_F4R1(FLAG)                  (*(uint32_t*)0x40006a60 &= ~FLAG)
#define Set_CAN2_F4R2(FLAG)                  (*(uint32_t*)0x40006a64 |= FLAG)
#define Clr_CAN2_F4R2(FLAG)                  (*(uint32_t*)0x40006a64 &= ~FLAG)
#define Set_CAN2_F5R1(FLAG)                  (*(uint32_t*)0x40006a68 |= FLAG)
#define Clr_CAN2_F5R1(FLAG)                  (*(uint32_t*)0x40006a68 &= ~FLAG)
#define Set_CAN2_F5R2(FLAG)                  (*(uint32_t*)0x40006a6c |= FLAG)
#define Clr_CAN2_F5R2(FLAG)                  (*(uint32_t*)0x40006a6c &= ~FLAG)
#define Set_CAN2_F6R1(FLAG)                  (*(uint32_t*)0x40006a70 |= FLAG)
#define Clr_CAN2_F6R1(FLAG)                  (*(uint32_t*)0x40006a70 &= ~FLAG)
#define Set_CAN2_F6R2(FLAG)                  (*(uint32_t*)0x40006a74 |= FLAG)
#define Clr_CAN2_F6R2(FLAG)                  (*(uint32_t*)0x40006a74 &= ~FLAG)
#define Set_CAN2_F7R1(FLAG)                  (*(uint32_t*)0x40006a78 |= FLAG)
#define Clr_CAN2_F7R1(FLAG)                  (*(uint32_t*)0x40006a78 &= ~FLAG)
#define Set_CAN2_F7R2(FLAG)                  (*(uint32_t*)0x40006a7c |= FLAG)
#define Clr_CAN2_F7R2(FLAG)                  (*(uint32_t*)0x40006a7c &= ~FLAG)
#define Set_CAN2_F8R1(FLAG)                  (*(uint32_t*)0x40006a80 |= FLAG)
#define Clr_CAN2_F8R1(FLAG)                  (*(uint32_t*)0x40006a80 &= ~FLAG)
#define Set_CAN2_F8R2(FLAG)                  (*(uint32_t*)0x40006a84 |= FLAG)
#define Clr_CAN2_F8R2(FLAG)                  (*(uint32_t*)0x40006a84 &= ~FLAG)
#define Set_CAN2_F9R1(FLAG)                  (*(uint32_t*)0x40006a88 |= FLAG)
#define Clr_CAN2_F9R1(FLAG)                  (*(uint32_t*)0x40006a88 &= ~FLAG)
#define Set_CAN2_F9R2(FLAG)                  (*(uint32_t*)0x40006a8c |= FLAG)
#define Clr_CAN2_F9R2(FLAG)                  (*(uint32_t*)0x40006a8c &= ~FLAG)
#define Set_CAN2_F10R1(FLAG)                 (*(uint32_t*)0x40006a90 |= FLAG)
#define Clr_CAN2_F10R1(FLAG)                 (*(uint32_t*)0x40006a90 &= ~FLAG)
#define Set_CAN2_F10R2(FLAG)                 (*(uint32_t*)0x40006a94 |= FLAG)
#define Clr_CAN2_F10R2(FLAG)                 (*(uint32_t*)0x40006a94 &= ~FLAG)
#define Set_CAN2_F11R1(FLAG)                 (*(uint32_t*)0x40006a98 |= FLAG)
#define Clr_CAN2_F11R1(FLAG)                 (*(uint32_t*)0x40006a98 &= ~FLAG)
#define Set_CAN2_F11R2(FLAG)                 (*(uint32_t*)0x40006a9c |= FLAG)
#define Clr_CAN2_F11R2(FLAG)                 (*(uint32_t*)0x40006a9c &= ~FLAG)
#define Set_CAN2_F12R1(FLAG)                 (*(uint32_t*)0x40006aa0 |= FLAG)
#define Clr_CAN2_F12R1(FLAG)                 (*(uint32_t*)0x40006aa0 &= ~FLAG)
#define Set_CAN2_F12R2(FLAG)                 (*(uint32_t*)0x40006aa4 |= FLAG)
#define Clr_CAN2_F12R2(FLAG)                 (*(uint32_t*)0x40006aa4 &= ~FLAG)
#define Set_CAN2_F13R1(FLAG)                 (*(uint32_t*)0x40006aa8 |= FLAG)
#define Clr_CAN2_F13R1(FLAG)                 (*(uint32_t*)0x40006aa8 &= ~FLAG)
#define Set_CAN2_F13R2(FLAG)                 (*(uint32_t*)0x40006aac |= FLAG)
#define Clr_CAN2_F13R2(FLAG)                 (*(uint32_t*)0x40006aac &= ~FLAG)
#define Set_CAN2_F14R1(FLAG)                 (*(uint32_t*)0x40006ab0 |= FLAG)
#define Clr_CAN2_F14R1(FLAG)                 (*(uint32_t*)0x40006ab0 &= ~FLAG)
#define Set_CAN2_F14R2(FLAG)                 (*(uint32_t*)0x40006ab4 |= FLAG)
#define Clr_CAN2_F14R2(FLAG)                 (*(uint32_t*)0x40006ab4 &= ~FLAG)
#define Set_CAN2_F15R1(FLAG)                 (*(uint32_t*)0x40006ab8 |= FLAG)
#define Clr_CAN2_F15R1(FLAG)                 (*(uint32_t*)0x40006ab8 &= ~FLAG)
#define Set_CAN2_F15R2(FLAG)                 (*(uint32_t*)0x40006abc |= FLAG)
#define Clr_CAN2_F15R2(FLAG)                 (*(uint32_t*)0x40006abc &= ~FLAG)
#define Set_CAN2_F16R1(FLAG)                 (*(uint32_t*)0x40006ac0 |= FLAG)
#define Clr_CAN2_F16R1(FLAG)                 (*(uint32_t*)0x40006ac0 &= ~FLAG)
#define Set_CAN2_F16R2(FLAG)                 (*(uint32_t*)0x40006ac4 |= FLAG)
#define Clr_CAN2_F16R2(FLAG)                 (*(uint32_t*)0x40006ac4 &= ~FLAG)
#define Set_CAN2_F17R1(FLAG)                 (*(uint32_t*)0x40006ac8 |= FLAG)
#define Clr_CAN2_F17R1(FLAG)                 (*(uint32_t*)0x40006ac8 &= ~FLAG)
#define Set_CAN2_F17R2(FLAG)                 (*(uint32_t*)0x40006acc |= FLAG)
#define Clr_CAN2_F17R2(FLAG)                 (*(uint32_t*)0x40006acc &= ~FLAG)
#define Set_CAN2_F18R1(FLAG)                 (*(uint32_t*)0x40006ad0 |= FLAG)
#define Clr_CAN2_F18R1(FLAG)                 (*(uint32_t*)0x40006ad0 &= ~FLAG)
#define Set_CAN2_F18R2(FLAG)                 (*(uint32_t*)0x40006ad4 |= FLAG)
#define Clr_CAN2_F18R2(FLAG)                 (*(uint32_t*)0x40006ad4 &= ~FLAG)
#define Set_CAN2_F19R1(FLAG)                 (*(uint32_t*)0x40006ad8 |= FLAG)
#define Clr_CAN2_F19R1(FLAG)                 (*(uint32_t*)0x40006ad8 &= ~FLAG)
#define Set_CAN2_F19R2(FLAG)                 (*(uint32_t*)0x40006adc |= FLAG)
#define Clr_CAN2_F19R2(FLAG)                 (*(uint32_t*)0x40006adc &= ~FLAG)
#define Set_CAN2_F20R1(FLAG)                 (*(uint32_t*)0x40006ae0 |= FLAG)
#define Clr_CAN2_F20R1(FLAG)                 (*(uint32_t*)0x40006ae0 &= ~FLAG)
#define Set_CAN2_F20R2(FLAG)                 (*(uint32_t*)0x40006ae4 |= FLAG)
#define Clr_CAN2_F20R2(FLAG)                 (*(uint32_t*)0x40006ae4 &= ~FLAG)
#define Set_CAN2_F21R1(FLAG)                 (*(uint32_t*)0x40006ae8 |= FLAG)
#define Clr_CAN2_F21R1(FLAG)                 (*(uint32_t*)0x40006ae8 &= ~FLAG)
#define Set_CAN2_F21R2(FLAG)                 (*(uint32_t*)0x40006aec |= FLAG)
#define Clr_CAN2_F21R2(FLAG)                 (*(uint32_t*)0x40006aec &= ~FLAG)
#define Set_CAN2_F22R1(FLAG)                 (*(uint32_t*)0x40006af0 |= FLAG)
#define Clr_CAN2_F22R1(FLAG)                 (*(uint32_t*)0x40006af0 &= ~FLAG)
#define Set_CAN2_F22R2(FLAG)                 (*(uint32_t*)0x40006af4 |= FLAG)
#define Clr_CAN2_F22R2(FLAG)                 (*(uint32_t*)0x40006af4 &= ~FLAG)
#define Set_CAN2_F23R1(FLAG)                 (*(uint32_t*)0x40006af8 |= FLAG)
#define Clr_CAN2_F23R1(FLAG)                 (*(uint32_t*)0x40006af8 &= ~FLAG)
#define Set_CAN2_F23R2(FLAG)                 (*(uint32_t*)0x40006afc |= FLAG)
#define Clr_CAN2_F23R2(FLAG)                 (*(uint32_t*)0x40006afc &= ~FLAG)
#define Set_CAN2_F24R1(FLAG)                 (*(uint32_t*)0x40006b00 |= FLAG)
#define Clr_CAN2_F24R1(FLAG)                 (*(uint32_t*)0x40006b00 &= ~FLAG)
#define Set_CAN2_F24R2(FLAG)                 (*(uint32_t*)0x40006b04 |= FLAG)
#define Clr_CAN2_F24R2(FLAG)                 (*(uint32_t*)0x40006b04 &= ~FLAG)
#define Set_CAN2_F25R1(FLAG)                 (*(uint32_t*)0x40006b08 |= FLAG)
#define Clr_CAN2_F25R1(FLAG)                 (*(uint32_t*)0x40006b08 &= ~FLAG)
#define Set_CAN2_F25R2(FLAG)                 (*(uint32_t*)0x40006b0c |= FLAG)
#define Clr_CAN2_F25R2(FLAG)                 (*(uint32_t*)0x40006b0c &= ~FLAG)
#define Set_CAN2_F26R1(FLAG)                 (*(uint32_t*)0x40006b10 |= FLAG)
#define Clr_CAN2_F26R1(FLAG)                 (*(uint32_t*)0x40006b10 &= ~FLAG)
#define Set_CAN2_F26R2(FLAG)                 (*(uint32_t*)0x40006b14 |= FLAG)
#define Clr_CAN2_F26R2(FLAG)                 (*(uint32_t*)0x40006b14 &= ~FLAG)
#define Set_CAN2_F27R1(FLAG)                 (*(uint32_t*)0x40006b18 |= FLAG)
#define Clr_CAN2_F27R1(FLAG)                 (*(uint32_t*)0x40006b18 &= ~FLAG)
#define Set_CAN2_F27R2(FLAG)                 (*(uint32_t*)0x40006b1c |= FLAG)
#define Clr_CAN2_F27R2(FLAG)                 (*(uint32_t*)0x40006b1c &= ~FLAG)
#define  _CAN3_MCR_DBF                                       (0x1 << 16)    // DBF
#define  _CAN3_MCR_RESET                                     (0x1 << 15)    // RESET
#define  _CAN3_MCR_TTCM                                      (0x1 << 7)    // TTCM
#define  _CAN3_MCR_ABOM                                      (0x1 << 6)    // ABOM
#define  _CAN3_MCR_AWUM                                      (0x1 << 5)    // AWUM
#define  _CAN3_MCR_NART                                      (0x1 << 4)    // NART
#define  _CAN3_MCR_RFLM                                      (0x1 << 3)    // RFLM
#define  _CAN3_MCR_TXFP                                      (0x1 << 2)    // TXFP
#define  _CAN3_MCR_SLEEP                                     (0x1 << 1)    // SLEEP
#define  _CAN3_MCR_INRQ                                      (0x1 << 0)    // INRQ
#define  _CAN3_MSR_RX                                        (0x1 << 11)    // RX
#define  _CAN3_MSR_SAMP                                      (0x1 << 10)    // SAMP
#define  _CAN3_MSR_RXM                                       (0x1 << 9)    // RXM
#define  _CAN3_MSR_TXM                                       (0x1 << 8)    // TXM
#define  _CAN3_MSR_SLAKI                                     (0x1 << 4)    // SLAKI
#define  _CAN3_MSR_WKUI                                      (0x1 << 3)    // WKUI
#define  _CAN3_MSR_ERRI                                      (0x1 << 2)    // ERRI
#define  _CAN3_MSR_SLAK                                      (0x1 << 1)    // SLAK
#define  _CAN3_MSR_INAK                                      (0x1 << 0)    // INAK
#define  _CAN3_TSR_LOW2                                      (0x1 << 31)    // Lowest priority flag for mailbox 2
#define  _CAN3_TSR_LOW1                                      (0x1 << 30)    // Lowest priority flag for mailbox 1
#define  _CAN3_TSR_LOW0                                      (0x1 << 29)    // Lowest priority flag for mailbox 0
#define  _CAN3_TSR_TME2                                      (0x1 << 28)    // Lowest priority flag for mailbox 2
#define  _CAN3_TSR_TME1                                      (0x1 << 27)    // Lowest priority flag for mailbox 1
#define  _CAN3_TSR_TME0                                      (0x1 << 26)    // Lowest priority flag for mailbox 0
#define  _CAN3_TSR_CODE                                      (0x3 << 24)    // CODE
#define  _CAN3_TSR_ABRQ2                                     (0x1 << 23)    // ABRQ2
#define  _CAN3_TSR_TERR2                                     (0x1 << 19)    // TERR2
#define  _CAN3_TSR_ALST2                                     (0x1 << 18)    // ALST2
#define  _CAN3_TSR_TXOK2                                     (0x1 << 17)    // TXOK2
#define  _CAN3_TSR_RQCP2                                     (0x1 << 16)    // RQCP2
#define  _CAN3_TSR_ABRQ1                                     (0x1 << 15)    // ABRQ1
#define  _CAN3_TSR_TERR1                                     (0x1 << 11)    // TERR1
#define  _CAN3_TSR_ALST1                                     (0x1 << 10)    // ALST1
#define  _CAN3_TSR_TXOK1                                     (0x1 << 9)    // TXOK1
#define  _CAN3_TSR_RQCP1                                     (0x1 << 8)    // RQCP1
#define  _CAN3_TSR_ABRQ0                                     (0x1 << 7)    // ABRQ0
#define  _CAN3_TSR_TERR0                                     (0x1 << 3)    // TERR0
#define  _CAN3_TSR_ALST0                                     (0x1 << 2)    // ALST0
#define  _CAN3_TSR_TXOK0                                     (0x1 << 1)    // TXOK0
#define  _CAN3_TSR_RQCP0                                     (0x1 << 0)    // RQCP0
#define  _CAN3_RF0R_RFOM0                                    (0x1 << 5)    // RFOM0
#define  _CAN3_RF0R_FOVR0                                    (0x1 << 4)    // FOVR0
#define  _CAN3_RF0R_FULL0                                    (0x1 << 3)    // FULL0
#define  _CAN3_RF0R_FMP0                                     (0x3 << 0)    // FMP0
#define  _CAN3_RF1R_RFOM1                                    (0x1 << 5)    // RFOM1
#define  _CAN3_RF1R_FOVR1                                    (0x1 << 4)    // FOVR1
#define  _CAN3_RF1R_FULL1                                    (0x1 << 3)    // FULL1
#define  _CAN3_RF1R_FMP1                                     (0x3 << 0)    // FMP1
#define  _CAN3_IER_SLKIE                                     (0x1 << 17)    // SLKIE
#define  _CAN3_IER_WKUIE                                     (0x1 << 16)    // WKUIE
#define  _CAN3_IER_ERRIE                                     (0x1 << 15)    // ERRIE
#define  _CAN3_IER_LECIE                                     (0x1 << 11)    // LECIE
#define  _CAN3_IER_BOFIE                                     (0x1 << 10)    // BOFIE
#define  _CAN3_IER_EPVIE                                     (0x1 << 9)    // EPVIE
#define  _CAN3_IER_EWGIE                                     (0x1 << 8)    // EWGIE
#define  _CAN3_IER_FOVIE1                                    (0x1 << 6)    // FOVIE1
#define  _CAN3_IER_FFIE1                                     (0x1 << 5)    // FFIE1
#define  _CAN3_IER_FMPIE1                                    (0x1 << 4)    // FMPIE1
#define  _CAN3_IER_FOVIE0                                    (0x1 << 3)    // FOVIE0
#define  _CAN3_IER_FFIE0                                     (0x1 << 2)    // FFIE0
#define  _CAN3_IER_FMPIE0                                    (0x1 << 1)    // FMPIE0
#define  _CAN3_IER_TMEIE                                     (0x1 << 0)    // TMEIE
#define  _CAN3_ESR_REC                                       (0xff << 24)    // REC
#define  _CAN3_ESR_TEC                                       (0xff << 16)    // TEC
#define  _CAN3_ESR_LEC                                       (0x7 << 4)    // LEC
#define  _CAN3_ESR_BOFF                                      (0x1 << 2)    // BOFF
#define  _CAN3_ESR_EPVF                                      (0x1 << 1)    // EPVF
#define  _CAN3_ESR_EWGF                                      (0x1 << 0)    // EWGF
#define  _CAN3_BTR_SILM                                      (0x1 << 31)    // SILM
#define  _CAN3_BTR_LBKM                                      (0x1 << 30)    // LBKM
#define  _CAN3_BTR_SJW                                       (0x3 << 24)    // SJW
#define  _CAN3_BTR_TS2                                       (0x7 << 20)    // TS2
#define  _CAN3_BTR_TS1                                       (0xf << 16)    // TS1
#define  _CAN3_BTR_BRP                                       (0x3ff << 0)    // BRP
#define  _CAN3_TI0R_STID                                     (0x7ff << 21)    // STID
#define  _CAN3_TI0R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN3_TI0R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN3_TI0R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN3_TI0R_TXRQ                                     (0x1 << 0)    // TXRQ
#define  _CAN3_TDT0R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN3_TDT0R_TGT                                     (0x1 << 8)    // TGT
#define  _CAN3_TDT0R_DLC                                     (0xf << 0)    // DLC
#define  _CAN3_TDL0R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN3_TDL0R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN3_TDL0R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN3_TDL0R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN3_TDH0R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN3_TDH0R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN3_TDH0R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN3_TDH0R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN3_TI1R_STID                                     (0x7ff << 21)    // STID
#define  _CAN3_TI1R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN3_TI1R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN3_TI1R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN3_TI1R_TXRQ                                     (0x1 << 0)    // TXRQ
#define  _CAN3_TDT1R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN3_TDT1R_TGT                                     (0x1 << 8)    // TGT
#define  _CAN3_TDT1R_DLC                                     (0xf << 0)    // DLC
#define  _CAN3_TDL1R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN3_TDL1R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN3_TDL1R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN3_TDL1R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN3_TDH1R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN3_TDH1R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN3_TDH1R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN3_TDH1R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN3_TI2R_STID                                     (0x7ff << 21)    // STID
#define  _CAN3_TI2R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN3_TI2R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN3_TI2R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN3_TI2R_TXRQ                                     (0x1 << 0)    // TXRQ
#define  _CAN3_TDT2R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN3_TDT2R_TGT                                     (0x1 << 8)    // TGT
#define  _CAN3_TDT2R_DLC                                     (0xf << 0)    // DLC
#define  _CAN3_TDL2R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN3_TDL2R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN3_TDL2R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN3_TDL2R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN3_TDH2R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN3_TDH2R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN3_TDH2R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN3_TDH2R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN3_RI0R_STID                                     (0x7ff << 21)    // STID
#define  _CAN3_RI0R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN3_RI0R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN3_RI0R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN3_RDT0R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN3_RDT0R_FMI                                     (0xff << 8)    // FMI
#define  _CAN3_RDT0R_DLC                                     (0xf << 0)    // DLC
#define  _CAN3_RDL0R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN3_RDL0R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN3_RDL0R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN3_RDL0R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN3_RDH0R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN3_RDH0R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN3_RDH0R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN3_RDH0R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN3_RI1R_STID                                     (0x7ff << 21)    // STID
#define  _CAN3_RI1R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN3_RI1R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN3_RI1R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN3_RDT1R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN3_RDT1R_FMI                                     (0xff << 8)    // FMI
#define  _CAN3_RDT1R_DLC                                     (0xf << 0)    // DLC
#define  _CAN3_RDL1R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN3_RDL1R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN3_RDL1R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN3_RDL1R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN3_RDH1R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN3_RDH1R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN3_RDH1R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN3_RDH1R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN3_FMR_CAN2SB                                    (0x3f << 8)    // CAN2SB
#define  _CAN3_FMR_FINIT                                     (0x1 << 0)    // FINIT
#define  _CAN3_FM1R_FBM0                                     (0x1 << 0)    // Filter mode
#define  _CAN3_FM1R_FBM1                                     (0x1 << 1)    // Filter mode
#define  _CAN3_FM1R_FBM2                                     (0x1 << 2)    // Filter mode
#define  _CAN3_FM1R_FBM3                                     (0x1 << 3)    // Filter mode
#define  _CAN3_FM1R_FBM4                                     (0x1 << 4)    // Filter mode
#define  _CAN3_FM1R_FBM5                                     (0x1 << 5)    // Filter mode
#define  _CAN3_FM1R_FBM6                                     (0x1 << 6)    // Filter mode
#define  _CAN3_FM1R_FBM7                                     (0x1 << 7)    // Filter mode
#define  _CAN3_FM1R_FBM8                                     (0x1 << 8)    // Filter mode
#define  _CAN3_FM1R_FBM9                                     (0x1 << 9)    // Filter mode
#define  _CAN3_FM1R_FBM10                                    (0x1 << 10)    // Filter mode
#define  _CAN3_FM1R_FBM11                                    (0x1 << 11)    // Filter mode
#define  _CAN3_FM1R_FBM12                                    (0x1 << 12)    // Filter mode
#define  _CAN3_FM1R_FBM13                                    (0x1 << 13)    // Filter mode
#define  _CAN3_FM1R_FBM14                                    (0x1 << 14)    // Filter mode
#define  _CAN3_FM1R_FBM15                                    (0x1 << 15)    // Filter mode
#define  _CAN3_FM1R_FBM16                                    (0x1 << 16)    // Filter mode
#define  _CAN3_FM1R_FBM17                                    (0x1 << 17)    // Filter mode
#define  _CAN3_FM1R_FBM18                                    (0x1 << 18)    // Filter mode
#define  _CAN3_FM1R_FBM19                                    (0x1 << 19)    // Filter mode
#define  _CAN3_FM1R_FBM20                                    (0x1 << 20)    // Filter mode
#define  _CAN3_FM1R_FBM21                                    (0x1 << 21)    // Filter mode
#define  _CAN3_FM1R_FBM22                                    (0x1 << 22)    // Filter mode
#define  _CAN3_FM1R_FBM23                                    (0x1 << 23)    // Filter mode
#define  _CAN3_FM1R_FBM24                                    (0x1 << 24)    // Filter mode
#define  _CAN3_FM1R_FBM25                                    (0x1 << 25)    // Filter mode
#define  _CAN3_FM1R_FBM26                                    (0x1 << 26)    // Filter mode
#define  _CAN3_FM1R_FBM27                                    (0x1 << 27)    // Filter mode
#define  _CAN3_FS1R_FSC0                                     (0x1 << 0)    // Filter scale configuration
#define  _CAN3_FS1R_FSC1                                     (0x1 << 1)    // Filter scale configuration
#define  _CAN3_FS1R_FSC2                                     (0x1 << 2)    // Filter scale configuration
#define  _CAN3_FS1R_FSC3                                     (0x1 << 3)    // Filter scale configuration
#define  _CAN3_FS1R_FSC4                                     (0x1 << 4)    // Filter scale configuration
#define  _CAN3_FS1R_FSC5                                     (0x1 << 5)    // Filter scale configuration
#define  _CAN3_FS1R_FSC6                                     (0x1 << 6)    // Filter scale configuration
#define  _CAN3_FS1R_FSC7                                     (0x1 << 7)    // Filter scale configuration
#define  _CAN3_FS1R_FSC8                                     (0x1 << 8)    // Filter scale configuration
#define  _CAN3_FS1R_FSC9                                     (0x1 << 9)    // Filter scale configuration
#define  _CAN3_FS1R_FSC10                                    (0x1 << 10)    // Filter scale configuration
#define  _CAN3_FS1R_FSC11                                    (0x1 << 11)    // Filter scale configuration
#define  _CAN3_FS1R_FSC12                                    (0x1 << 12)    // Filter scale configuration
#define  _CAN3_FS1R_FSC13                                    (0x1 << 13)    // Filter scale configuration
#define  _CAN3_FS1R_FSC14                                    (0x1 << 14)    // Filter scale configuration
#define  _CAN3_FS1R_FSC15                                    (0x1 << 15)    // Filter scale configuration
#define  _CAN3_FS1R_FSC16                                    (0x1 << 16)    // Filter scale configuration
#define  _CAN3_FS1R_FSC17                                    (0x1 << 17)    // Filter scale configuration
#define  _CAN3_FS1R_FSC18                                    (0x1 << 18)    // Filter scale configuration
#define  _CAN3_FS1R_FSC19                                    (0x1 << 19)    // Filter scale configuration
#define  _CAN3_FS1R_FSC20                                    (0x1 << 20)    // Filter scale configuration
#define  _CAN3_FS1R_FSC21                                    (0x1 << 21)    // Filter scale configuration
#define  _CAN3_FS1R_FSC22                                    (0x1 << 22)    // Filter scale configuration
#define  _CAN3_FS1R_FSC23                                    (0x1 << 23)    // Filter scale configuration
#define  _CAN3_FS1R_FSC24                                    (0x1 << 24)    // Filter scale configuration
#define  _CAN3_FS1R_FSC25                                    (0x1 << 25)    // Filter scale configuration
#define  _CAN3_FS1R_FSC26                                    (0x1 << 26)    // Filter scale configuration
#define  _CAN3_FS1R_FSC27                                    (0x1 << 27)    // Filter scale configuration
#define  _CAN3_FFA1R_FFA0                                    (0x1 << 0)    // Filter FIFO assignment for filter 0
#define  _CAN3_FFA1R_FFA1                                    (0x1 << 1)    // Filter FIFO assignment for filter 1
#define  _CAN3_FFA1R_FFA2                                    (0x1 << 2)    // Filter FIFO assignment for filter 2
#define  _CAN3_FFA1R_FFA3                                    (0x1 << 3)    // Filter FIFO assignment for filter 3
#define  _CAN3_FFA1R_FFA4                                    (0x1 << 4)    // Filter FIFO assignment for filter 4
#define  _CAN3_FFA1R_FFA5                                    (0x1 << 5)    // Filter FIFO assignment for filter 5
#define  _CAN3_FFA1R_FFA6                                    (0x1 << 6)    // Filter FIFO assignment for filter 6
#define  _CAN3_FFA1R_FFA7                                    (0x1 << 7)    // Filter FIFO assignment for filter 7
#define  _CAN3_FFA1R_FFA8                                    (0x1 << 8)    // Filter FIFO assignment for filter 8
#define  _CAN3_FFA1R_FFA9                                    (0x1 << 9)    // Filter FIFO assignment for filter 9
#define  _CAN3_FFA1R_FFA10                                   (0x1 << 10)    // Filter FIFO assignment for filter 10
#define  _CAN3_FFA1R_FFA11                                   (0x1 << 11)    // Filter FIFO assignment for filter 11
#define  _CAN3_FFA1R_FFA12                                   (0x1 << 12)    // Filter FIFO assignment for filter 12
#define  _CAN3_FFA1R_FFA13                                   (0x1 << 13)    // Filter FIFO assignment for filter 13
#define  _CAN3_FFA1R_FFA14                                   (0x1 << 14)    // Filter FIFO assignment for filter 14
#define  _CAN3_FFA1R_FFA15                                   (0x1 << 15)    // Filter FIFO assignment for filter 15
#define  _CAN3_FFA1R_FFA16                                   (0x1 << 16)    // Filter FIFO assignment for filter 16
#define  _CAN3_FFA1R_FFA17                                   (0x1 << 17)    // Filter FIFO assignment for filter 17
#define  _CAN3_FFA1R_FFA18                                   (0x1 << 18)    // Filter FIFO assignment for filter 18
#define  _CAN3_FFA1R_FFA19                                   (0x1 << 19)    // Filter FIFO assignment for filter 19
#define  _CAN3_FFA1R_FFA20                                   (0x1 << 20)    // Filter FIFO assignment for filter 20
#define  _CAN3_FFA1R_FFA21                                   (0x1 << 21)    // Filter FIFO assignment for filter 21
#define  _CAN3_FFA1R_FFA22                                   (0x1 << 22)    // Filter FIFO assignment for filter 22
#define  _CAN3_FFA1R_FFA23                                   (0x1 << 23)    // Filter FIFO assignment for filter 23
#define  _CAN3_FFA1R_FFA24                                   (0x1 << 24)    // Filter FIFO assignment for filter 24
#define  _CAN3_FFA1R_FFA25                                   (0x1 << 25)    // Filter FIFO assignment for filter 25
#define  _CAN3_FFA1R_FFA26                                   (0x1 << 26)    // Filter FIFO assignment for filter 26
#define  _CAN3_FFA1R_FFA27                                   (0x1 << 27)    // Filter FIFO assignment for filter 27
#define  _CAN3_FA1R_FACT0                                    (0x1 << 0)    // Filter active
#define  _CAN3_FA1R_FACT1                                    (0x1 << 1)    // Filter active
#define  _CAN3_FA1R_FACT2                                    (0x1 << 2)    // Filter active
#define  _CAN3_FA1R_FACT3                                    (0x1 << 3)    // Filter active
#define  _CAN3_FA1R_FACT4                                    (0x1 << 4)    // Filter active
#define  _CAN3_FA1R_FACT5                                    (0x1 << 5)    // Filter active
#define  _CAN3_FA1R_FACT6                                    (0x1 << 6)    // Filter active
#define  _CAN3_FA1R_FACT7                                    (0x1 << 7)    // Filter active
#define  _CAN3_FA1R_FACT8                                    (0x1 << 8)    // Filter active
#define  _CAN3_FA1R_FACT9                                    (0x1 << 9)    // Filter active
#define  _CAN3_FA1R_FACT10                                   (0x1 << 10)    // Filter active
#define  _CAN3_FA1R_FACT11                                   (0x1 << 11)    // Filter active
#define  _CAN3_FA1R_FACT12                                   (0x1 << 12)    // Filter active
#define  _CAN3_FA1R_FACT13                                   (0x1 << 13)    // Filter active
#define  _CAN3_FA1R_FACT14                                   (0x1 << 14)    // Filter active
#define  _CAN3_FA1R_FACT15                                   (0x1 << 15)    // Filter active
#define  _CAN3_FA1R_FACT16                                   (0x1 << 16)    // Filter active
#define  _CAN3_FA1R_FACT17                                   (0x1 << 17)    // Filter active
#define  _CAN3_FA1R_FACT18                                   (0x1 << 18)    // Filter active
#define  _CAN3_FA1R_FACT19                                   (0x1 << 19)    // Filter active
#define  _CAN3_FA1R_FACT20                                   (0x1 << 20)    // Filter active
#define  _CAN3_FA1R_FACT21                                   (0x1 << 21)    // Filter active
#define  _CAN3_FA1R_FACT22                                   (0x1 << 22)    // Filter active
#define  _CAN3_FA1R_FACT23                                   (0x1 << 23)    // Filter active
#define  _CAN3_FA1R_FACT24                                   (0x1 << 24)    // Filter active
#define  _CAN3_FA1R_FACT25                                   (0x1 << 25)    // Filter active
#define  _CAN3_FA1R_FACT26                                   (0x1 << 26)    // Filter active
#define  _CAN3_FA1R_FACT27                                   (0x1 << 27)    // Filter active
#define  _CAN3_F0R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F0R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F0R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F0R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F0R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F0R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F0R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F0R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F0R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F0R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F0R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F0R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F0R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F0R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F0R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F0R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F0R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F0R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F0R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F0R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F0R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F0R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F0R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F0R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F0R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F0R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F0R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F0R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F0R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F0R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F0R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F0R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F0R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F0R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F0R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F0R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F0R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F0R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F0R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F0R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F0R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F0R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F0R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F0R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F0R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F0R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F0R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F0R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F0R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F0R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F0R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F0R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F0R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F0R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F0R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F0R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F0R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F0R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F0R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F0R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F0R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F0R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F0R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F0R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F1R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F1R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F1R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F1R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F1R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F1R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F1R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F1R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F1R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F1R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F1R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F1R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F1R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F1R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F1R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F1R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F1R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F1R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F1R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F1R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F1R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F1R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F1R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F1R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F1R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F1R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F1R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F1R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F1R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F1R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F1R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F1R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F1R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F1R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F1R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F1R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F1R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F1R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F1R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F1R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F1R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F1R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F1R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F1R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F1R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F1R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F1R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F1R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F1R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F1R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F1R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F1R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F1R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F1R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F1R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F1R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F1R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F1R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F1R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F1R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F1R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F1R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F1R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F1R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F2R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F2R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F2R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F2R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F2R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F2R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F2R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F2R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F2R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F2R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F2R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F2R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F2R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F2R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F2R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F2R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F2R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F2R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F2R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F2R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F2R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F2R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F2R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F2R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F2R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F2R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F2R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F2R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F2R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F2R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F2R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F2R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F2R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F2R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F2R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F2R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F2R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F2R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F2R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F2R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F2R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F2R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F2R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F2R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F2R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F2R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F2R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F2R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F2R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F2R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F2R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F2R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F2R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F2R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F2R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F2R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F2R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F2R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F2R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F2R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F2R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F2R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F2R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F2R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F3R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F3R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F3R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F3R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F3R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F3R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F3R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F3R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F3R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F3R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F3R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F3R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F3R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F3R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F3R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F3R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F3R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F3R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F3R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F3R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F3R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F3R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F3R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F3R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F3R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F3R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F3R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F3R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F3R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F3R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F3R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F3R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F3R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F3R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F3R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F3R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F3R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F3R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F3R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F3R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F3R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F3R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F3R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F3R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F3R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F3R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F3R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F3R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F3R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F3R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F3R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F3R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F3R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F3R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F3R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F3R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F3R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F3R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F3R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F3R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F3R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F3R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F3R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F3R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F4R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F4R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F4R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F4R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F4R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F4R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F4R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F4R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F4R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F4R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F4R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F4R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F4R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F4R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F4R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F4R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F4R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F4R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F4R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F4R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F4R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F4R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F4R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F4R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F4R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F4R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F4R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F4R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F4R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F4R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F4R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F4R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F4R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F4R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F4R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F4R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F4R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F4R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F4R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F4R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F4R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F4R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F4R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F4R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F4R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F4R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F4R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F4R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F4R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F4R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F4R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F4R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F4R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F4R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F4R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F4R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F4R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F4R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F4R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F4R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F4R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F4R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F4R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F4R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F5R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F5R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F5R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F5R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F5R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F5R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F5R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F5R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F5R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F5R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F5R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F5R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F5R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F5R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F5R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F5R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F5R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F5R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F5R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F5R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F5R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F5R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F5R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F5R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F5R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F5R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F5R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F5R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F5R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F5R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F5R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F5R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F5R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F5R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F5R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F5R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F5R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F5R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F5R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F5R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F5R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F5R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F5R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F5R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F5R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F5R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F5R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F5R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F5R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F5R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F5R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F5R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F5R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F5R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F5R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F5R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F5R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F5R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F5R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F5R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F5R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F5R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F5R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F5R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F6R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F6R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F6R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F6R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F6R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F6R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F6R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F6R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F6R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F6R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F6R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F6R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F6R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F6R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F6R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F6R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F6R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F6R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F6R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F6R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F6R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F6R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F6R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F6R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F6R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F6R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F6R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F6R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F6R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F6R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F6R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F6R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F6R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F6R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F6R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F6R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F6R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F6R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F6R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F6R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F6R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F6R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F6R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F6R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F6R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F6R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F6R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F6R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F6R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F6R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F6R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F6R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F6R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F6R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F6R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F6R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F6R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F6R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F6R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F6R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F6R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F6R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F6R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F6R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F7R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F7R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F7R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F7R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F7R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F7R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F7R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F7R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F7R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F7R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F7R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F7R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F7R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F7R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F7R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F7R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F7R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F7R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F7R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F7R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F7R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F7R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F7R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F7R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F7R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F7R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F7R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F7R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F7R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F7R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F7R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F7R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F7R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F7R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F7R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F7R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F7R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F7R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F7R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F7R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F7R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F7R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F7R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F7R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F7R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F7R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F7R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F7R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F7R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F7R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F7R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F7R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F7R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F7R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F7R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F7R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F7R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F7R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F7R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F7R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F7R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F7R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F7R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F7R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F8R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F8R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F8R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F8R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F8R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F8R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F8R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F8R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F8R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F8R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F8R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F8R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F8R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F8R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F8R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F8R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F8R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F8R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F8R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F8R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F8R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F8R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F8R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F8R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F8R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F8R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F8R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F8R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F8R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F8R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F8R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F8R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F8R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F8R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F8R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F8R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F8R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F8R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F8R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F8R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F8R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F8R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F8R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F8R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F8R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F8R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F8R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F8R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F8R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F8R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F8R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F8R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F8R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F8R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F8R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F8R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F8R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F8R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F8R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F8R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F8R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F8R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F8R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F8R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F9R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F9R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F9R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F9R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F9R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F9R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F9R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F9R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F9R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F9R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F9R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F9R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F9R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F9R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F9R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F9R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F9R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F9R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F9R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F9R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F9R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F9R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F9R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F9R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F9R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F9R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F9R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F9R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F9R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F9R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F9R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F9R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F9R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN3_F9R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN3_F9R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN3_F9R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN3_F9R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN3_F9R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN3_F9R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN3_F9R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN3_F9R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN3_F9R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN3_F9R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN3_F9R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN3_F9R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN3_F9R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN3_F9R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN3_F9R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN3_F9R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN3_F9R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN3_F9R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN3_F9R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN3_F9R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN3_F9R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN3_F9R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN3_F9R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN3_F9R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN3_F9R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN3_F9R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN3_F9R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN3_F9R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN3_F9R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN3_F9R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN3_F9R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN3_F10R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F10R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F10R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F10R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F10R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F10R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F10R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F10R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F10R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F10R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F10R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F10R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F10R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F10R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F10R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F10R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F10R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F10R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F10R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F10R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F10R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F10R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F10R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F10R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F10R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F10R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F10R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F10R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F10R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F10R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F10R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F10R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F10R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F10R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F10R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F10R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F10R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F10R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F10R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F10R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F10R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F10R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F10R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F10R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F10R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F10R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F10R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F10R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F10R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F10R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F10R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F10R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F10R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F10R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F10R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F10R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F10R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F10R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F10R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F10R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F10R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F10R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F10R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F10R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F11R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F11R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F11R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F11R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F11R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F11R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F11R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F11R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F11R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F11R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F11R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F11R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F11R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F11R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F11R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F11R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F11R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F11R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F11R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F11R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F11R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F11R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F11R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F11R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F11R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F11R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F11R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F11R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F11R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F11R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F11R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F11R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F11R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F11R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F11R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F11R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F11R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F11R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F11R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F11R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F11R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F11R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F11R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F11R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F11R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F11R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F11R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F11R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F11R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F11R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F11R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F11R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F11R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F11R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F11R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F11R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F11R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F11R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F11R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F11R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F11R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F11R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F11R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F11R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F12R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F12R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F12R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F12R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F12R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F12R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F12R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F12R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F12R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F12R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F12R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F12R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F12R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F12R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F12R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F12R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F12R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F12R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F12R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F12R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F12R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F12R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F12R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F12R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F12R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F12R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F12R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F12R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F12R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F12R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F12R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F12R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F12R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F12R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F12R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F12R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F12R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F12R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F12R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F12R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F12R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F12R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F12R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F12R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F12R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F12R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F12R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F12R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F12R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F12R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F12R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F12R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F12R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F12R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F12R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F12R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F12R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F12R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F12R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F12R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F12R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F12R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F12R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F12R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F13R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F13R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F13R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F13R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F13R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F13R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F13R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F13R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F13R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F13R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F13R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F13R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F13R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F13R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F13R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F13R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F13R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F13R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F13R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F13R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F13R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F13R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F13R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F13R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F13R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F13R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F13R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F13R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F13R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F13R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F13R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F13R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F13R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F13R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F13R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F13R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F13R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F13R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F13R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F13R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F13R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F13R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F13R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F13R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F13R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F13R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F13R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F13R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F13R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F13R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F13R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F13R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F13R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F13R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F13R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F13R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F13R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F13R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F13R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F13R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F13R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F13R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F13R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F13R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F14R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F14R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F14R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F14R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F14R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F14R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F14R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F14R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F14R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F14R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F14R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F14R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F14R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F14R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F14R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F14R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F14R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F14R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F14R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F14R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F14R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F14R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F14R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F14R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F14R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F14R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F14R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F14R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F14R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F14R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F14R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F14R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F14R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F14R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F14R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F14R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F14R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F14R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F14R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F14R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F14R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F14R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F14R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F14R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F14R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F14R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F14R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F14R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F14R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F14R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F14R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F14R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F14R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F14R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F14R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F14R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F14R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F14R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F14R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F14R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F14R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F14R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F14R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F14R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F15R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F15R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F15R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F15R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F15R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F15R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F15R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F15R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F15R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F15R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F15R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F15R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F15R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F15R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F15R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F15R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F15R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F15R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F15R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F15R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F15R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F15R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F15R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F15R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F15R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F15R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F15R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F15R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F15R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F15R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F15R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F15R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F15R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F15R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F15R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F15R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F15R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F15R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F15R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F15R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F15R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F15R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F15R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F15R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F15R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F15R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F15R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F15R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F15R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F15R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F15R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F15R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F15R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F15R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F15R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F15R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F15R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F15R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F15R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F15R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F15R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F15R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F15R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F15R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F16R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F16R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F16R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F16R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F16R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F16R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F16R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F16R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F16R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F16R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F16R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F16R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F16R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F16R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F16R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F16R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F16R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F16R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F16R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F16R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F16R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F16R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F16R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F16R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F16R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F16R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F16R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F16R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F16R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F16R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F16R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F16R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F16R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F16R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F16R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F16R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F16R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F16R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F16R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F16R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F16R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F16R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F16R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F16R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F16R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F16R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F16R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F16R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F16R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F16R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F16R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F16R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F16R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F16R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F16R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F16R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F16R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F16R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F16R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F16R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F16R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F16R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F16R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F16R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F17R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F17R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F17R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F17R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F17R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F17R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F17R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F17R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F17R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F17R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F17R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F17R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F17R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F17R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F17R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F17R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F17R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F17R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F17R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F17R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F17R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F17R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F17R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F17R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F17R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F17R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F17R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F17R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F17R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F17R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F17R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F17R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F17R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F17R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F17R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F17R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F17R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F17R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F17R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F17R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F17R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F17R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F17R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F17R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F17R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F17R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F17R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F17R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F17R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F17R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F17R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F17R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F17R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F17R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F17R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F17R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F17R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F17R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F17R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F17R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F17R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F17R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F17R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F17R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F18R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F18R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F18R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F18R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F18R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F18R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F18R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F18R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F18R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F18R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F18R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F18R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F18R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F18R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F18R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F18R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F18R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F18R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F18R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F18R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F18R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F18R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F18R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F18R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F18R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F18R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F18R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F18R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F18R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F18R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F18R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F18R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F18R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F18R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F18R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F18R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F18R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F18R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F18R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F18R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F18R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F18R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F18R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F18R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F18R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F18R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F18R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F18R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F18R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F18R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F18R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F18R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F18R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F18R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F18R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F18R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F18R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F18R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F18R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F18R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F18R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F18R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F18R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F18R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F19R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F19R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F19R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F19R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F19R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F19R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F19R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F19R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F19R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F19R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F19R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F19R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F19R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F19R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F19R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F19R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F19R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F19R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F19R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F19R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F19R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F19R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F19R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F19R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F19R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F19R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F19R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F19R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F19R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F19R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F19R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F19R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F19R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F19R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F19R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F19R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F19R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F19R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F19R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F19R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F19R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F19R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F19R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F19R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F19R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F19R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F19R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F19R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F19R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F19R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F19R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F19R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F19R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F19R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F19R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F19R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F19R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F19R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F19R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F19R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F19R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F19R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F19R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F19R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F20R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F20R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F20R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F20R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F20R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F20R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F20R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F20R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F20R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F20R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F20R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F20R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F20R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F20R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F20R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F20R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F20R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F20R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F20R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F20R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F20R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F20R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F20R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F20R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F20R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F20R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F20R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F20R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F20R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F20R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F20R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F20R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F20R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F20R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F20R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F20R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F20R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F20R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F20R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F20R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F20R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F20R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F20R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F20R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F20R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F20R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F20R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F20R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F20R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F20R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F20R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F20R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F20R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F20R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F20R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F20R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F20R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F20R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F20R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F20R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F20R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F20R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F20R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F20R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F21R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F21R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F21R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F21R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F21R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F21R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F21R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F21R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F21R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F21R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F21R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F21R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F21R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F21R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F21R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F21R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F21R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F21R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F21R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F21R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F21R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F21R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F21R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F21R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F21R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F21R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F21R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F21R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F21R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F21R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F21R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F21R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F21R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F21R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F21R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F21R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F21R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F21R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F21R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F21R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F21R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F21R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F21R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F21R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F21R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F21R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F21R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F21R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F21R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F21R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F21R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F21R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F21R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F21R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F21R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F21R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F21R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F21R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F21R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F21R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F21R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F21R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F21R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F21R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F22R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F22R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F22R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F22R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F22R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F22R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F22R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F22R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F22R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F22R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F22R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F22R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F22R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F22R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F22R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F22R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F22R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F22R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F22R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F22R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F22R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F22R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F22R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F22R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F22R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F22R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F22R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F22R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F22R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F22R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F22R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F22R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F22R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F22R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F22R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F22R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F22R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F22R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F22R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F22R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F22R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F22R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F22R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F22R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F22R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F22R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F22R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F22R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F22R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F22R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F22R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F22R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F22R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F22R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F22R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F22R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F22R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F22R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F22R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F22R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F22R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F22R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F22R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F22R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F23R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F23R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F23R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F23R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F23R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F23R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F23R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F23R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F23R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F23R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F23R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F23R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F23R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F23R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F23R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F23R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F23R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F23R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F23R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F23R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F23R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F23R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F23R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F23R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F23R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F23R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F23R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F23R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F23R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F23R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F23R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F23R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F23R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F23R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F23R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F23R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F23R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F23R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F23R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F23R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F23R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F23R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F23R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F23R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F23R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F23R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F23R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F23R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F23R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F23R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F23R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F23R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F23R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F23R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F23R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F23R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F23R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F23R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F23R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F23R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F23R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F23R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F23R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F23R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F24R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F24R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F24R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F24R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F24R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F24R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F24R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F24R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F24R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F24R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F24R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F24R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F24R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F24R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F24R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F24R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F24R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F24R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F24R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F24R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F24R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F24R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F24R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F24R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F24R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F24R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F24R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F24R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F24R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F24R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F24R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F24R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F24R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F24R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F24R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F24R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F24R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F24R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F24R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F24R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F24R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F24R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F24R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F24R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F24R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F24R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F24R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F24R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F24R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F24R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F24R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F24R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F24R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F24R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F24R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F24R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F24R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F24R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F24R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F24R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F24R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F24R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F24R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F24R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F25R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F25R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F25R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F25R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F25R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F25R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F25R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F25R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F25R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F25R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F25R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F25R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F25R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F25R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F25R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F25R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F25R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F25R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F25R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F25R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F25R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F25R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F25R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F25R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F25R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F25R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F25R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F25R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F25R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F25R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F25R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F25R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F25R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F25R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F25R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F25R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F25R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F25R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F25R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F25R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F25R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F25R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F25R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F25R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F25R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F25R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F25R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F25R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F25R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F25R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F25R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F25R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F25R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F25R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F25R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F25R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F25R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F25R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F25R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F25R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F25R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F25R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F25R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F25R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F26R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F26R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F26R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F26R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F26R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F26R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F26R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F26R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F26R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F26R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F26R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F26R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F26R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F26R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F26R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F26R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F26R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F26R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F26R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F26R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F26R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F26R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F26R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F26R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F26R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F26R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F26R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F26R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F26R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F26R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F26R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F26R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F26R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F26R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F26R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F26R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F26R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F26R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F26R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F26R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F26R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F26R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F26R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F26R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F26R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F26R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F26R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F26R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F26R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F26R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F26R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F26R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F26R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F26R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F26R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F26R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F26R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F26R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F26R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F26R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F26R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F26R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F26R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F26R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F27R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F27R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F27R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F27R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F27R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F27R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F27R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F27R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F27R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F27R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F27R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F27R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F27R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F27R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F27R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F27R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F27R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F27R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F27R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F27R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F27R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F27R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F27R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F27R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F27R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F27R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F27R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F27R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F27R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F27R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F27R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F27R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN3_F27R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN3_F27R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN3_F27R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN3_F27R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN3_F27R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN3_F27R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN3_F27R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN3_F27R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN3_F27R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN3_F27R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN3_F27R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN3_F27R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN3_F27R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN3_F27R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN3_F27R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN3_F27R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN3_F27R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN3_F27R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN3_F27R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN3_F27R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN3_F27R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN3_F27R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN3_F27R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN3_F27R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN3_F27R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN3_F27R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN3_F27R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN3_F27R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN3_F27R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN3_F27R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN3_F27R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN3_F27R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_MCR_DBF                                       (0x1 << 16)    // DBF
#define  _CAN1_MCR_RESET                                     (0x1 << 15)    // RESET
#define  _CAN1_MCR_TTCM                                      (0x1 << 7)    // TTCM
#define  _CAN1_MCR_ABOM                                      (0x1 << 6)    // ABOM
#define  _CAN1_MCR_AWUM                                      (0x1 << 5)    // AWUM
#define  _CAN1_MCR_NART                                      (0x1 << 4)    // NART
#define  _CAN1_MCR_RFLM                                      (0x1 << 3)    // RFLM
#define  _CAN1_MCR_TXFP                                      (0x1 << 2)    // TXFP
#define  _CAN1_MCR_SLEEP                                     (0x1 << 1)    // SLEEP
#define  _CAN1_MCR_INRQ                                      (0x1 << 0)    // INRQ
#define  _CAN1_MSR_RX                                        (0x1 << 11)    // RX
#define  _CAN1_MSR_SAMP                                      (0x1 << 10)    // SAMP
#define  _CAN1_MSR_RXM                                       (0x1 << 9)    // RXM
#define  _CAN1_MSR_TXM                                       (0x1 << 8)    // TXM
#define  _CAN1_MSR_SLAKI                                     (0x1 << 4)    // SLAKI
#define  _CAN1_MSR_WKUI                                      (0x1 << 3)    // WKUI
#define  _CAN1_MSR_ERRI                                      (0x1 << 2)    // ERRI
#define  _CAN1_MSR_SLAK                                      (0x1 << 1)    // SLAK
#define  _CAN1_MSR_INAK                                      (0x1 << 0)    // INAK
#define  _CAN1_TSR_LOW2                                      (0x1 << 31)    // Lowest priority flag for mailbox 2
#define  _CAN1_TSR_LOW1                                      (0x1 << 30)    // Lowest priority flag for mailbox 1
#define  _CAN1_TSR_LOW0                                      (0x1 << 29)    // Lowest priority flag for mailbox 0
#define  _CAN1_TSR_TME2                                      (0x1 << 28)    // Lowest priority flag for mailbox 2
#define  _CAN1_TSR_TME1                                      (0x1 << 27)    // Lowest priority flag for mailbox 1
#define  _CAN1_TSR_TME0                                      (0x1 << 26)    // Lowest priority flag for mailbox 0
#define  _CAN1_TSR_CODE                                      (0x3 << 24)    // CODE
#define  _CAN1_TSR_ABRQ2                                     (0x1 << 23)    // ABRQ2
#define  _CAN1_TSR_TERR2                                     (0x1 << 19)    // TERR2
#define  _CAN1_TSR_ALST2                                     (0x1 << 18)    // ALST2
#define  _CAN1_TSR_TXOK2                                     (0x1 << 17)    // TXOK2
#define  _CAN1_TSR_RQCP2                                     (0x1 << 16)    // RQCP2
#define  _CAN1_TSR_ABRQ1                                     (0x1 << 15)    // ABRQ1
#define  _CAN1_TSR_TERR1                                     (0x1 << 11)    // TERR1
#define  _CAN1_TSR_ALST1                                     (0x1 << 10)    // ALST1
#define  _CAN1_TSR_TXOK1                                     (0x1 << 9)    // TXOK1
#define  _CAN1_TSR_RQCP1                                     (0x1 << 8)    // RQCP1
#define  _CAN1_TSR_ABRQ0                                     (0x1 << 7)    // ABRQ0
#define  _CAN1_TSR_TERR0                                     (0x1 << 3)    // TERR0
#define  _CAN1_TSR_ALST0                                     (0x1 << 2)    // ALST0
#define  _CAN1_TSR_TXOK0                                     (0x1 << 1)    // TXOK0
#define  _CAN1_TSR_RQCP0                                     (0x1 << 0)    // RQCP0
#define  _CAN1_RF0R_RFOM0                                    (0x1 << 5)    // RFOM0
#define  _CAN1_RF0R_FOVR0                                    (0x1 << 4)    // FOVR0
#define  _CAN1_RF0R_FULL0                                    (0x1 << 3)    // FULL0
#define  _CAN1_RF0R_FMP0                                     (0x3 << 0)    // FMP0
#define  _CAN1_RF1R_RFOM1                                    (0x1 << 5)    // RFOM1
#define  _CAN1_RF1R_FOVR1                                    (0x1 << 4)    // FOVR1
#define  _CAN1_RF1R_FULL1                                    (0x1 << 3)    // FULL1
#define  _CAN1_RF1R_FMP1                                     (0x3 << 0)    // FMP1
#define  _CAN1_IER_SLKIE                                     (0x1 << 17)    // SLKIE
#define  _CAN1_IER_WKUIE                                     (0x1 << 16)    // WKUIE
#define  _CAN1_IER_ERRIE                                     (0x1 << 15)    // ERRIE
#define  _CAN1_IER_LECIE                                     (0x1 << 11)    // LECIE
#define  _CAN1_IER_BOFIE                                     (0x1 << 10)    // BOFIE
#define  _CAN1_IER_EPVIE                                     (0x1 << 9)    // EPVIE
#define  _CAN1_IER_EWGIE                                     (0x1 << 8)    // EWGIE
#define  _CAN1_IER_FOVIE1                                    (0x1 << 6)    // FOVIE1
#define  _CAN1_IER_FFIE1                                     (0x1 << 5)    // FFIE1
#define  _CAN1_IER_FMPIE1                                    (0x1 << 4)    // FMPIE1
#define  _CAN1_IER_FOVIE0                                    (0x1 << 3)    // FOVIE0
#define  _CAN1_IER_FFIE0                                     (0x1 << 2)    // FFIE0
#define  _CAN1_IER_FMPIE0                                    (0x1 << 1)    // FMPIE0
#define  _CAN1_IER_TMEIE                                     (0x1 << 0)    // TMEIE
#define  _CAN1_ESR_REC                                       (0xff << 24)    // REC
#define  _CAN1_ESR_TEC                                       (0xff << 16)    // TEC
#define  _CAN1_ESR_LEC                                       (0x7 << 4)    // LEC
#define  _CAN1_ESR_BOFF                                      (0x1 << 2)    // BOFF
#define  _CAN1_ESR_EPVF                                      (0x1 << 1)    // EPVF
#define  _CAN1_ESR_EWGF                                      (0x1 << 0)    // EWGF
#define  _CAN1_BTR_SILM                                      (0x1 << 31)    // SILM
#define  _CAN1_BTR_LBKM                                      (0x1 << 30)    // LBKM
#define  _CAN1_BTR_SJW                                       (0x3 << 24)    // SJW
#define  _CAN1_BTR_TS2                                       (0x7 << 20)    // TS2
#define  _CAN1_BTR_TS1                                       (0xf << 16)    // TS1
#define  _CAN1_BTR_BRP                                       (0x3ff << 0)    // BRP
#define  _CAN1_TI0R_STID                                     (0x7ff << 21)    // STID
#define  _CAN1_TI0R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN1_TI0R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN1_TI0R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN1_TI0R_TXRQ                                     (0x1 << 0)    // TXRQ
#define  _CAN1_TDT0R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN1_TDT0R_TGT                                     (0x1 << 8)    // TGT
#define  _CAN1_TDT0R_DLC                                     (0xf << 0)    // DLC
#define  _CAN1_TDL0R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN1_TDL0R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN1_TDL0R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN1_TDL0R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN1_TDH0R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN1_TDH0R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN1_TDH0R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN1_TDH0R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN1_TI1R_STID                                     (0x7ff << 21)    // STID
#define  _CAN1_TI1R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN1_TI1R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN1_TI1R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN1_TI1R_TXRQ                                     (0x1 << 0)    // TXRQ
#define  _CAN1_TDT1R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN1_TDT1R_TGT                                     (0x1 << 8)    // TGT
#define  _CAN1_TDT1R_DLC                                     (0xf << 0)    // DLC
#define  _CAN1_TDL1R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN1_TDL1R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN1_TDL1R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN1_TDL1R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN1_TDH1R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN1_TDH1R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN1_TDH1R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN1_TDH1R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN1_TI2R_STID                                     (0x7ff << 21)    // STID
#define  _CAN1_TI2R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN1_TI2R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN1_TI2R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN1_TI2R_TXRQ                                     (0x1 << 0)    // TXRQ
#define  _CAN1_TDT2R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN1_TDT2R_TGT                                     (0x1 << 8)    // TGT
#define  _CAN1_TDT2R_DLC                                     (0xf << 0)    // DLC
#define  _CAN1_TDL2R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN1_TDL2R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN1_TDL2R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN1_TDL2R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN1_TDH2R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN1_TDH2R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN1_TDH2R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN1_TDH2R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN1_RI0R_STID                                     (0x7ff << 21)    // STID
#define  _CAN1_RI0R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN1_RI0R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN1_RI0R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN1_RDT0R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN1_RDT0R_FMI                                     (0xff << 8)    // FMI
#define  _CAN1_RDT0R_DLC                                     (0xf << 0)    // DLC
#define  _CAN1_RDL0R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN1_RDL0R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN1_RDL0R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN1_RDL0R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN1_RDH0R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN1_RDH0R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN1_RDH0R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN1_RDH0R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN1_RI1R_STID                                     (0x7ff << 21)    // STID
#define  _CAN1_RI1R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN1_RI1R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN1_RI1R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN1_RDT1R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN1_RDT1R_FMI                                     (0xff << 8)    // FMI
#define  _CAN1_RDT1R_DLC                                     (0xf << 0)    // DLC
#define  _CAN1_RDL1R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN1_RDL1R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN1_RDL1R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN1_RDL1R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN1_RDH1R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN1_RDH1R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN1_RDH1R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN1_RDH1R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN1_FMR_CAN2SB                                    (0x3f << 8)    // CAN2SB
#define  _CAN1_FMR_FINIT                                     (0x1 << 0)    // FINIT
#define  _CAN1_FM1R_FBM0                                     (0x1 << 0)    // Filter mode
#define  _CAN1_FM1R_FBM1                                     (0x1 << 1)    // Filter mode
#define  _CAN1_FM1R_FBM2                                     (0x1 << 2)    // Filter mode
#define  _CAN1_FM1R_FBM3                                     (0x1 << 3)    // Filter mode
#define  _CAN1_FM1R_FBM4                                     (0x1 << 4)    // Filter mode
#define  _CAN1_FM1R_FBM5                                     (0x1 << 5)    // Filter mode
#define  _CAN1_FM1R_FBM6                                     (0x1 << 6)    // Filter mode
#define  _CAN1_FM1R_FBM7                                     (0x1 << 7)    // Filter mode
#define  _CAN1_FM1R_FBM8                                     (0x1 << 8)    // Filter mode
#define  _CAN1_FM1R_FBM9                                     (0x1 << 9)    // Filter mode
#define  _CAN1_FM1R_FBM10                                    (0x1 << 10)    // Filter mode
#define  _CAN1_FM1R_FBM11                                    (0x1 << 11)    // Filter mode
#define  _CAN1_FM1R_FBM12                                    (0x1 << 12)    // Filter mode
#define  _CAN1_FM1R_FBM13                                    (0x1 << 13)    // Filter mode
#define  _CAN1_FM1R_FBM14                                    (0x1 << 14)    // Filter mode
#define  _CAN1_FM1R_FBM15                                    (0x1 << 15)    // Filter mode
#define  _CAN1_FM1R_FBM16                                    (0x1 << 16)    // Filter mode
#define  _CAN1_FM1R_FBM17                                    (0x1 << 17)    // Filter mode
#define  _CAN1_FM1R_FBM18                                    (0x1 << 18)    // Filter mode
#define  _CAN1_FM1R_FBM19                                    (0x1 << 19)    // Filter mode
#define  _CAN1_FM1R_FBM20                                    (0x1 << 20)    // Filter mode
#define  _CAN1_FM1R_FBM21                                    (0x1 << 21)    // Filter mode
#define  _CAN1_FM1R_FBM22                                    (0x1 << 22)    // Filter mode
#define  _CAN1_FM1R_FBM23                                    (0x1 << 23)    // Filter mode
#define  _CAN1_FM1R_FBM24                                    (0x1 << 24)    // Filter mode
#define  _CAN1_FM1R_FBM25                                    (0x1 << 25)    // Filter mode
#define  _CAN1_FM1R_FBM26                                    (0x1 << 26)    // Filter mode
#define  _CAN1_FM1R_FBM27                                    (0x1 << 27)    // Filter mode
#define  _CAN1_FS1R_FSC0                                     (0x1 << 0)    // Filter scale configuration
#define  _CAN1_FS1R_FSC1                                     (0x1 << 1)    // Filter scale configuration
#define  _CAN1_FS1R_FSC2                                     (0x1 << 2)    // Filter scale configuration
#define  _CAN1_FS1R_FSC3                                     (0x1 << 3)    // Filter scale configuration
#define  _CAN1_FS1R_FSC4                                     (0x1 << 4)    // Filter scale configuration
#define  _CAN1_FS1R_FSC5                                     (0x1 << 5)    // Filter scale configuration
#define  _CAN1_FS1R_FSC6                                     (0x1 << 6)    // Filter scale configuration
#define  _CAN1_FS1R_FSC7                                     (0x1 << 7)    // Filter scale configuration
#define  _CAN1_FS1R_FSC8                                     (0x1 << 8)    // Filter scale configuration
#define  _CAN1_FS1R_FSC9                                     (0x1 << 9)    // Filter scale configuration
#define  _CAN1_FS1R_FSC10                                    (0x1 << 10)    // Filter scale configuration
#define  _CAN1_FS1R_FSC11                                    (0x1 << 11)    // Filter scale configuration
#define  _CAN1_FS1R_FSC12                                    (0x1 << 12)    // Filter scale configuration
#define  _CAN1_FS1R_FSC13                                    (0x1 << 13)    // Filter scale configuration
#define  _CAN1_FS1R_FSC14                                    (0x1 << 14)    // Filter scale configuration
#define  _CAN1_FS1R_FSC15                                    (0x1 << 15)    // Filter scale configuration
#define  _CAN1_FS1R_FSC16                                    (0x1 << 16)    // Filter scale configuration
#define  _CAN1_FS1R_FSC17                                    (0x1 << 17)    // Filter scale configuration
#define  _CAN1_FS1R_FSC18                                    (0x1 << 18)    // Filter scale configuration
#define  _CAN1_FS1R_FSC19                                    (0x1 << 19)    // Filter scale configuration
#define  _CAN1_FS1R_FSC20                                    (0x1 << 20)    // Filter scale configuration
#define  _CAN1_FS1R_FSC21                                    (0x1 << 21)    // Filter scale configuration
#define  _CAN1_FS1R_FSC22                                    (0x1 << 22)    // Filter scale configuration
#define  _CAN1_FS1R_FSC23                                    (0x1 << 23)    // Filter scale configuration
#define  _CAN1_FS1R_FSC24                                    (0x1 << 24)    // Filter scale configuration
#define  _CAN1_FS1R_FSC25                                    (0x1 << 25)    // Filter scale configuration
#define  _CAN1_FS1R_FSC26                                    (0x1 << 26)    // Filter scale configuration
#define  _CAN1_FS1R_FSC27                                    (0x1 << 27)    // Filter scale configuration
#define  _CAN1_FFA1R_FFA0                                    (0x1 << 0)    // Filter FIFO assignment for filter 0
#define  _CAN1_FFA1R_FFA1                                    (0x1 << 1)    // Filter FIFO assignment for filter 1
#define  _CAN1_FFA1R_FFA2                                    (0x1 << 2)    // Filter FIFO assignment for filter 2
#define  _CAN1_FFA1R_FFA3                                    (0x1 << 3)    // Filter FIFO assignment for filter 3
#define  _CAN1_FFA1R_FFA4                                    (0x1 << 4)    // Filter FIFO assignment for filter 4
#define  _CAN1_FFA1R_FFA5                                    (0x1 << 5)    // Filter FIFO assignment for filter 5
#define  _CAN1_FFA1R_FFA6                                    (0x1 << 6)    // Filter FIFO assignment for filter 6
#define  _CAN1_FFA1R_FFA7                                    (0x1 << 7)    // Filter FIFO assignment for filter 7
#define  _CAN1_FFA1R_FFA8                                    (0x1 << 8)    // Filter FIFO assignment for filter 8
#define  _CAN1_FFA1R_FFA9                                    (0x1 << 9)    // Filter FIFO assignment for filter 9
#define  _CAN1_FFA1R_FFA10                                   (0x1 << 10)    // Filter FIFO assignment for filter 10
#define  _CAN1_FFA1R_FFA11                                   (0x1 << 11)    // Filter FIFO assignment for filter 11
#define  _CAN1_FFA1R_FFA12                                   (0x1 << 12)    // Filter FIFO assignment for filter 12
#define  _CAN1_FFA1R_FFA13                                   (0x1 << 13)    // Filter FIFO assignment for filter 13
#define  _CAN1_FFA1R_FFA14                                   (0x1 << 14)    // Filter FIFO assignment for filter 14
#define  _CAN1_FFA1R_FFA15                                   (0x1 << 15)    // Filter FIFO assignment for filter 15
#define  _CAN1_FFA1R_FFA16                                   (0x1 << 16)    // Filter FIFO assignment for filter 16
#define  _CAN1_FFA1R_FFA17                                   (0x1 << 17)    // Filter FIFO assignment for filter 17
#define  _CAN1_FFA1R_FFA18                                   (0x1 << 18)    // Filter FIFO assignment for filter 18
#define  _CAN1_FFA1R_FFA19                                   (0x1 << 19)    // Filter FIFO assignment for filter 19
#define  _CAN1_FFA1R_FFA20                                   (0x1 << 20)    // Filter FIFO assignment for filter 20
#define  _CAN1_FFA1R_FFA21                                   (0x1 << 21)    // Filter FIFO assignment for filter 21
#define  _CAN1_FFA1R_FFA22                                   (0x1 << 22)    // Filter FIFO assignment for filter 22
#define  _CAN1_FFA1R_FFA23                                   (0x1 << 23)    // Filter FIFO assignment for filter 23
#define  _CAN1_FFA1R_FFA24                                   (0x1 << 24)    // Filter FIFO assignment for filter 24
#define  _CAN1_FFA1R_FFA25                                   (0x1 << 25)    // Filter FIFO assignment for filter 25
#define  _CAN1_FFA1R_FFA26                                   (0x1 << 26)    // Filter FIFO assignment for filter 26
#define  _CAN1_FFA1R_FFA27                                   (0x1 << 27)    // Filter FIFO assignment for filter 27
#define  _CAN1_FA1R_FACT0                                    (0x1 << 0)    // Filter active
#define  _CAN1_FA1R_FACT1                                    (0x1 << 1)    // Filter active
#define  _CAN1_FA1R_FACT2                                    (0x1 << 2)    // Filter active
#define  _CAN1_FA1R_FACT3                                    (0x1 << 3)    // Filter active
#define  _CAN1_FA1R_FACT4                                    (0x1 << 4)    // Filter active
#define  _CAN1_FA1R_FACT5                                    (0x1 << 5)    // Filter active
#define  _CAN1_FA1R_FACT6                                    (0x1 << 6)    // Filter active
#define  _CAN1_FA1R_FACT7                                    (0x1 << 7)    // Filter active
#define  _CAN1_FA1R_FACT8                                    (0x1 << 8)    // Filter active
#define  _CAN1_FA1R_FACT9                                    (0x1 << 9)    // Filter active
#define  _CAN1_FA1R_FACT10                                   (0x1 << 10)    // Filter active
#define  _CAN1_FA1R_FACT11                                   (0x1 << 11)    // Filter active
#define  _CAN1_FA1R_FACT12                                   (0x1 << 12)    // Filter active
#define  _CAN1_FA1R_FACT13                                   (0x1 << 13)    // Filter active
#define  _CAN1_FA1R_FACT14                                   (0x1 << 14)    // Filter active
#define  _CAN1_FA1R_FACT15                                   (0x1 << 15)    // Filter active
#define  _CAN1_FA1R_FACT16                                   (0x1 << 16)    // Filter active
#define  _CAN1_FA1R_FACT17                                   (0x1 << 17)    // Filter active
#define  _CAN1_FA1R_FACT18                                   (0x1 << 18)    // Filter active
#define  _CAN1_FA1R_FACT19                                   (0x1 << 19)    // Filter active
#define  _CAN1_FA1R_FACT20                                   (0x1 << 20)    // Filter active
#define  _CAN1_FA1R_FACT21                                   (0x1 << 21)    // Filter active
#define  _CAN1_FA1R_FACT22                                   (0x1 << 22)    // Filter active
#define  _CAN1_FA1R_FACT23                                   (0x1 << 23)    // Filter active
#define  _CAN1_FA1R_FACT24                                   (0x1 << 24)    // Filter active
#define  _CAN1_FA1R_FACT25                                   (0x1 << 25)    // Filter active
#define  _CAN1_FA1R_FACT26                                   (0x1 << 26)    // Filter active
#define  _CAN1_FA1R_FACT27                                   (0x1 << 27)    // Filter active
#define  _CAN1_F0R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F0R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F0R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F0R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F0R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F0R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F0R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F0R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F0R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F0R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F0R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F0R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F0R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F0R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F0R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F0R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F0R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F0R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F0R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F0R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F0R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F0R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F0R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F0R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F0R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F0R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F0R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F0R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F0R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F0R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F0R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F0R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F0R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F0R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F0R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F0R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F0R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F0R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F0R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F0R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F0R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F0R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F0R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F0R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F0R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F0R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F0R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F0R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F0R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F0R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F0R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F0R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F0R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F0R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F0R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F0R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F0R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F0R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F0R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F0R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F0R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F0R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F0R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F0R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F1R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F1R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F1R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F1R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F1R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F1R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F1R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F1R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F1R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F1R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F1R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F1R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F1R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F1R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F1R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F1R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F1R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F1R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F1R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F1R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F1R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F1R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F1R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F1R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F1R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F1R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F1R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F1R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F1R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F1R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F1R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F1R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F1R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F1R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F1R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F1R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F1R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F1R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F1R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F1R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F1R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F1R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F1R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F1R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F1R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F1R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F1R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F1R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F1R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F1R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F1R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F1R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F1R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F1R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F1R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F1R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F1R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F1R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F1R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F1R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F1R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F1R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F1R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F1R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F2R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F2R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F2R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F2R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F2R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F2R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F2R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F2R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F2R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F2R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F2R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F2R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F2R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F2R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F2R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F2R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F2R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F2R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F2R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F2R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F2R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F2R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F2R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F2R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F2R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F2R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F2R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F2R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F2R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F2R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F2R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F2R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F2R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F2R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F2R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F2R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F2R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F2R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F2R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F2R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F2R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F2R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F2R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F2R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F2R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F2R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F2R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F2R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F2R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F2R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F2R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F2R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F2R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F2R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F2R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F2R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F2R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F2R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F2R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F2R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F2R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F2R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F2R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F2R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F3R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F3R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F3R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F3R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F3R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F3R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F3R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F3R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F3R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F3R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F3R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F3R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F3R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F3R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F3R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F3R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F3R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F3R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F3R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F3R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F3R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F3R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F3R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F3R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F3R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F3R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F3R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F3R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F3R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F3R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F3R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F3R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F3R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F3R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F3R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F3R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F3R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F3R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F3R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F3R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F3R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F3R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F3R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F3R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F3R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F3R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F3R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F3R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F3R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F3R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F3R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F3R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F3R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F3R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F3R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F3R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F3R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F3R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F3R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F3R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F3R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F3R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F3R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F3R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F4R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F4R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F4R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F4R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F4R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F4R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F4R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F4R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F4R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F4R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F4R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F4R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F4R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F4R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F4R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F4R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F4R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F4R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F4R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F4R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F4R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F4R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F4R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F4R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F4R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F4R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F4R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F4R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F4R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F4R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F4R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F4R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F4R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F4R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F4R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F4R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F4R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F4R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F4R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F4R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F4R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F4R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F4R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F4R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F4R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F4R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F4R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F4R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F4R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F4R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F4R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F4R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F4R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F4R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F4R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F4R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F4R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F4R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F4R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F4R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F4R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F4R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F4R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F4R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F5R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F5R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F5R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F5R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F5R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F5R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F5R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F5R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F5R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F5R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F5R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F5R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F5R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F5R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F5R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F5R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F5R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F5R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F5R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F5R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F5R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F5R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F5R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F5R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F5R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F5R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F5R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F5R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F5R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F5R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F5R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F5R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F5R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F5R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F5R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F5R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F5R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F5R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F5R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F5R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F5R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F5R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F5R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F5R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F5R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F5R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F5R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F5R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F5R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F5R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F5R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F5R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F5R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F5R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F5R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F5R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F5R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F5R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F5R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F5R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F5R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F5R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F5R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F5R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F6R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F6R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F6R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F6R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F6R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F6R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F6R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F6R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F6R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F6R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F6R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F6R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F6R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F6R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F6R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F6R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F6R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F6R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F6R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F6R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F6R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F6R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F6R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F6R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F6R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F6R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F6R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F6R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F6R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F6R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F6R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F6R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F6R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F6R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F6R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F6R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F6R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F6R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F6R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F6R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F6R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F6R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F6R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F6R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F6R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F6R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F6R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F6R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F6R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F6R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F6R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F6R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F6R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F6R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F6R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F6R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F6R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F6R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F6R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F6R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F6R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F6R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F6R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F6R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F7R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F7R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F7R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F7R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F7R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F7R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F7R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F7R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F7R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F7R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F7R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F7R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F7R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F7R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F7R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F7R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F7R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F7R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F7R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F7R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F7R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F7R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F7R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F7R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F7R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F7R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F7R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F7R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F7R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F7R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F7R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F7R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F7R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F7R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F7R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F7R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F7R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F7R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F7R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F7R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F7R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F7R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F7R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F7R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F7R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F7R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F7R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F7R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F7R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F7R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F7R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F7R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F7R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F7R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F7R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F7R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F7R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F7R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F7R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F7R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F7R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F7R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F7R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F7R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F8R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F8R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F8R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F8R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F8R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F8R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F8R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F8R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F8R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F8R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F8R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F8R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F8R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F8R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F8R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F8R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F8R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F8R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F8R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F8R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F8R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F8R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F8R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F8R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F8R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F8R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F8R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F8R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F8R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F8R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F8R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F8R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F8R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F8R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F8R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F8R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F8R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F8R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F8R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F8R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F8R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F8R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F8R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F8R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F8R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F8R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F8R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F8R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F8R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F8R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F8R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F8R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F8R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F8R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F8R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F8R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F8R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F8R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F8R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F8R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F8R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F8R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F8R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F8R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F9R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F9R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F9R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F9R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F9R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F9R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F9R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F9R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F9R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F9R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F9R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F9R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F9R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F9R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F9R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F9R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F9R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F9R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F9R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F9R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F9R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F9R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F9R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F9R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F9R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F9R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F9R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F9R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F9R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F9R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F9R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F9R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F9R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN1_F9R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN1_F9R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN1_F9R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN1_F9R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN1_F9R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN1_F9R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN1_F9R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN1_F9R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN1_F9R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN1_F9R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN1_F9R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN1_F9R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN1_F9R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN1_F9R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN1_F9R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN1_F9R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN1_F9R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN1_F9R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN1_F9R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN1_F9R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN1_F9R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN1_F9R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN1_F9R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN1_F9R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN1_F9R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN1_F9R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN1_F9R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN1_F9R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN1_F9R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN1_F9R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN1_F9R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN1_F10R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F10R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F10R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F10R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F10R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F10R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F10R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F10R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F10R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F10R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F10R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F10R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F10R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F10R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F10R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F10R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F10R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F10R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F10R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F10R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F10R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F10R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F10R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F10R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F10R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F10R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F10R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F10R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F10R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F10R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F10R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F10R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F10R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F10R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F10R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F10R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F10R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F10R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F10R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F10R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F10R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F10R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F10R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F10R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F10R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F10R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F10R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F10R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F10R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F10R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F10R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F10R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F10R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F10R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F10R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F10R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F10R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F10R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F10R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F10R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F10R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F10R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F10R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F10R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F11R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F11R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F11R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F11R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F11R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F11R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F11R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F11R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F11R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F11R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F11R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F11R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F11R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F11R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F11R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F11R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F11R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F11R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F11R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F11R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F11R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F11R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F11R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F11R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F11R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F11R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F11R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F11R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F11R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F11R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F11R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F11R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F11R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F11R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F11R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F11R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F11R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F11R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F11R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F11R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F11R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F11R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F11R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F11R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F11R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F11R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F11R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F11R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F11R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F11R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F11R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F11R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F11R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F11R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F11R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F11R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F11R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F11R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F11R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F11R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F11R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F11R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F11R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F11R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F12R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F12R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F12R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F12R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F12R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F12R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F12R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F12R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F12R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F12R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F12R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F12R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F12R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F12R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F12R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F12R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F12R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F12R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F12R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F12R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F12R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F12R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F12R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F12R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F12R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F12R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F12R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F12R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F12R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F12R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F12R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F12R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F12R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F12R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F12R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F12R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F12R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F12R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F12R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F12R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F12R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F12R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F12R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F12R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F12R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F12R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F12R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F12R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F12R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F12R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F12R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F12R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F12R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F12R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F12R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F12R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F12R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F12R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F12R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F12R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F12R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F12R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F12R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F12R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F13R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F13R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F13R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F13R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F13R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F13R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F13R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F13R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F13R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F13R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F13R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F13R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F13R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F13R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F13R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F13R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F13R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F13R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F13R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F13R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F13R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F13R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F13R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F13R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F13R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F13R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F13R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F13R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F13R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F13R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F13R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F13R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F13R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F13R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F13R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F13R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F13R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F13R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F13R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F13R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F13R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F13R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F13R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F13R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F13R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F13R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F13R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F13R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F13R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F13R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F13R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F13R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F13R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F13R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F13R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F13R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F13R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F13R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F13R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F13R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F13R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F13R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F13R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F13R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F14R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F14R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F14R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F14R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F14R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F14R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F14R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F14R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F14R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F14R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F14R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F14R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F14R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F14R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F14R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F14R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F14R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F14R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F14R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F14R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F14R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F14R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F14R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F14R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F14R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F14R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F14R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F14R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F14R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F14R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F14R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F14R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F14R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F14R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F14R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F14R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F14R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F14R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F14R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F14R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F14R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F14R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F14R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F14R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F14R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F14R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F14R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F14R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F14R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F14R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F14R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F14R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F14R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F14R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F14R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F14R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F14R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F14R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F14R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F14R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F14R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F14R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F14R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F14R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F15R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F15R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F15R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F15R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F15R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F15R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F15R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F15R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F15R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F15R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F15R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F15R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F15R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F15R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F15R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F15R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F15R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F15R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F15R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F15R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F15R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F15R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F15R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F15R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F15R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F15R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F15R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F15R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F15R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F15R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F15R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F15R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F15R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F15R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F15R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F15R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F15R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F15R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F15R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F15R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F15R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F15R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F15R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F15R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F15R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F15R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F15R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F15R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F15R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F15R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F15R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F15R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F15R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F15R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F15R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F15R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F15R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F15R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F15R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F15R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F15R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F15R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F15R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F15R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F16R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F16R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F16R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F16R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F16R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F16R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F16R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F16R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F16R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F16R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F16R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F16R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F16R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F16R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F16R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F16R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F16R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F16R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F16R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F16R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F16R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F16R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F16R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F16R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F16R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F16R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F16R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F16R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F16R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F16R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F16R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F16R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F16R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F16R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F16R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F16R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F16R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F16R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F16R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F16R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F16R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F16R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F16R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F16R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F16R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F16R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F16R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F16R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F16R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F16R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F16R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F16R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F16R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F16R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F16R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F16R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F16R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F16R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F16R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F16R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F16R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F16R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F16R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F16R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F17R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F17R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F17R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F17R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F17R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F17R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F17R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F17R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F17R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F17R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F17R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F17R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F17R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F17R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F17R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F17R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F17R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F17R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F17R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F17R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F17R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F17R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F17R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F17R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F17R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F17R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F17R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F17R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F17R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F17R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F17R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F17R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F17R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F17R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F17R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F17R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F17R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F17R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F17R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F17R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F17R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F17R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F17R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F17R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F17R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F17R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F17R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F17R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F17R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F17R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F17R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F17R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F17R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F17R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F17R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F17R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F17R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F17R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F17R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F17R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F17R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F17R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F17R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F17R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F18R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F18R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F18R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F18R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F18R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F18R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F18R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F18R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F18R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F18R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F18R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F18R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F18R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F18R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F18R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F18R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F18R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F18R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F18R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F18R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F18R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F18R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F18R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F18R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F18R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F18R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F18R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F18R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F18R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F18R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F18R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F18R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F18R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F18R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F18R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F18R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F18R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F18R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F18R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F18R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F18R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F18R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F18R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F18R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F18R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F18R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F18R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F18R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F18R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F18R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F18R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F18R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F18R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F18R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F18R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F18R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F18R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F18R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F18R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F18R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F18R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F18R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F18R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F18R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F19R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F19R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F19R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F19R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F19R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F19R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F19R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F19R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F19R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F19R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F19R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F19R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F19R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F19R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F19R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F19R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F19R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F19R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F19R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F19R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F19R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F19R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F19R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F19R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F19R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F19R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F19R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F19R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F19R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F19R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F19R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F19R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F19R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F19R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F19R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F19R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F19R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F19R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F19R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F19R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F19R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F19R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F19R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F19R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F19R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F19R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F19R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F19R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F19R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F19R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F19R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F19R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F19R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F19R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F19R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F19R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F19R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F19R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F19R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F19R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F19R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F19R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F19R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F19R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F20R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F20R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F20R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F20R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F20R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F20R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F20R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F20R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F20R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F20R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F20R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F20R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F20R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F20R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F20R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F20R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F20R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F20R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F20R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F20R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F20R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F20R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F20R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F20R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F20R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F20R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F20R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F20R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F20R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F20R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F20R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F20R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F20R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F20R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F20R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F20R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F20R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F20R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F20R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F20R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F20R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F20R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F20R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F20R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F20R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F20R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F20R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F20R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F20R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F20R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F20R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F20R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F20R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F20R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F20R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F20R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F20R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F20R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F20R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F20R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F20R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F20R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F20R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F20R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F21R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F21R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F21R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F21R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F21R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F21R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F21R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F21R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F21R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F21R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F21R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F21R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F21R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F21R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F21R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F21R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F21R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F21R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F21R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F21R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F21R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F21R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F21R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F21R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F21R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F21R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F21R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F21R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F21R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F21R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F21R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F21R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F21R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F21R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F21R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F21R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F21R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F21R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F21R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F21R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F21R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F21R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F21R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F21R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F21R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F21R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F21R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F21R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F21R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F21R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F21R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F21R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F21R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F21R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F21R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F21R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F21R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F21R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F21R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F21R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F21R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F21R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F21R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F21R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F22R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F22R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F22R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F22R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F22R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F22R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F22R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F22R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F22R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F22R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F22R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F22R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F22R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F22R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F22R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F22R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F22R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F22R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F22R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F22R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F22R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F22R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F22R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F22R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F22R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F22R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F22R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F22R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F22R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F22R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F22R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F22R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F22R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F22R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F22R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F22R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F22R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F22R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F22R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F22R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F22R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F22R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F22R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F22R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F22R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F22R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F22R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F22R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F22R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F22R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F22R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F22R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F22R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F22R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F22R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F22R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F22R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F22R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F22R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F22R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F22R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F22R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F22R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F22R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F23R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F23R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F23R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F23R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F23R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F23R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F23R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F23R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F23R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F23R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F23R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F23R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F23R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F23R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F23R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F23R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F23R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F23R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F23R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F23R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F23R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F23R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F23R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F23R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F23R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F23R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F23R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F23R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F23R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F23R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F23R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F23R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F23R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F23R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F23R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F23R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F23R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F23R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F23R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F23R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F23R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F23R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F23R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F23R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F23R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F23R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F23R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F23R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F23R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F23R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F23R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F23R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F23R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F23R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F23R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F23R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F23R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F23R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F23R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F23R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F23R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F23R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F23R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F23R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F24R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F24R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F24R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F24R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F24R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F24R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F24R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F24R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F24R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F24R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F24R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F24R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F24R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F24R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F24R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F24R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F24R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F24R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F24R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F24R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F24R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F24R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F24R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F24R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F24R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F24R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F24R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F24R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F24R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F24R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F24R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F24R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F24R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F24R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F24R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F24R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F24R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F24R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F24R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F24R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F24R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F24R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F24R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F24R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F24R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F24R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F24R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F24R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F24R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F24R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F24R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F24R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F24R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F24R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F24R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F24R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F24R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F24R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F24R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F24R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F24R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F24R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F24R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F24R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F25R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F25R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F25R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F25R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F25R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F25R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F25R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F25R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F25R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F25R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F25R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F25R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F25R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F25R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F25R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F25R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F25R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F25R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F25R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F25R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F25R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F25R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F25R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F25R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F25R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F25R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F25R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F25R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F25R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F25R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F25R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F25R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F25R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F25R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F25R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F25R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F25R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F25R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F25R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F25R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F25R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F25R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F25R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F25R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F25R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F25R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F25R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F25R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F25R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F25R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F25R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F25R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F25R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F25R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F25R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F25R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F25R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F25R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F25R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F25R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F25R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F25R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F25R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F25R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F26R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F26R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F26R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F26R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F26R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F26R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F26R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F26R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F26R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F26R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F26R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F26R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F26R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F26R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F26R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F26R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F26R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F26R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F26R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F26R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F26R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F26R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F26R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F26R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F26R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F26R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F26R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F26R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F26R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F26R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F26R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F26R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F26R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F26R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F26R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F26R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F26R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F26R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F26R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F26R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F26R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F26R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F26R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F26R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F26R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F26R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F26R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F26R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F26R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F26R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F26R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F26R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F26R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F26R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F26R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F26R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F26R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F26R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F26R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F26R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F26R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F26R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F26R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F26R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F27R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F27R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F27R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F27R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F27R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F27R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F27R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F27R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F27R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F27R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F27R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F27R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F27R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F27R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F27R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F27R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F27R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F27R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F27R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F27R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F27R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F27R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F27R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F27R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F27R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F27R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F27R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F27R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F27R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F27R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F27R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F27R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN1_F27R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN1_F27R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN1_F27R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN1_F27R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN1_F27R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN1_F27R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN1_F27R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN1_F27R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN1_F27R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN1_F27R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN1_F27R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN1_F27R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN1_F27R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN1_F27R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN1_F27R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN1_F27R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN1_F27R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN1_F27R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN1_F27R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN1_F27R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN1_F27R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN1_F27R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN1_F27R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN1_F27R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN1_F27R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN1_F27R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN1_F27R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN1_F27R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN1_F27R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN1_F27R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN1_F27R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN1_F27R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_MCR_DBF                                       (0x1 << 16)    // DBF
#define  _CAN2_MCR_RESET                                     (0x1 << 15)    // RESET
#define  _CAN2_MCR_TTCM                                      (0x1 << 7)    // TTCM
#define  _CAN2_MCR_ABOM                                      (0x1 << 6)    // ABOM
#define  _CAN2_MCR_AWUM                                      (0x1 << 5)    // AWUM
#define  _CAN2_MCR_NART                                      (0x1 << 4)    // NART
#define  _CAN2_MCR_RFLM                                      (0x1 << 3)    // RFLM
#define  _CAN2_MCR_TXFP                                      (0x1 << 2)    // TXFP
#define  _CAN2_MCR_SLEEP                                     (0x1 << 1)    // SLEEP
#define  _CAN2_MCR_INRQ                                      (0x1 << 0)    // INRQ
#define  _CAN2_MSR_RX                                        (0x1 << 11)    // RX
#define  _CAN2_MSR_SAMP                                      (0x1 << 10)    // SAMP
#define  _CAN2_MSR_RXM                                       (0x1 << 9)    // RXM
#define  _CAN2_MSR_TXM                                       (0x1 << 8)    // TXM
#define  _CAN2_MSR_SLAKI                                     (0x1 << 4)    // SLAKI
#define  _CAN2_MSR_WKUI                                      (0x1 << 3)    // WKUI
#define  _CAN2_MSR_ERRI                                      (0x1 << 2)    // ERRI
#define  _CAN2_MSR_SLAK                                      (0x1 << 1)    // SLAK
#define  _CAN2_MSR_INAK                                      (0x1 << 0)    // INAK
#define  _CAN2_TSR_LOW2                                      (0x1 << 31)    // Lowest priority flag for mailbox 2
#define  _CAN2_TSR_LOW1                                      (0x1 << 30)    // Lowest priority flag for mailbox 1
#define  _CAN2_TSR_LOW0                                      (0x1 << 29)    // Lowest priority flag for mailbox 0
#define  _CAN2_TSR_TME2                                      (0x1 << 28)    // Lowest priority flag for mailbox 2
#define  _CAN2_TSR_TME1                                      (0x1 << 27)    // Lowest priority flag for mailbox 1
#define  _CAN2_TSR_TME0                                      (0x1 << 26)    // Lowest priority flag for mailbox 0
#define  _CAN2_TSR_CODE                                      (0x3 << 24)    // CODE
#define  _CAN2_TSR_ABRQ2                                     (0x1 << 23)    // ABRQ2
#define  _CAN2_TSR_TERR2                                     (0x1 << 19)    // TERR2
#define  _CAN2_TSR_ALST2                                     (0x1 << 18)    // ALST2
#define  _CAN2_TSR_TXOK2                                     (0x1 << 17)    // TXOK2
#define  _CAN2_TSR_RQCP2                                     (0x1 << 16)    // RQCP2
#define  _CAN2_TSR_ABRQ1                                     (0x1 << 15)    // ABRQ1
#define  _CAN2_TSR_TERR1                                     (0x1 << 11)    // TERR1
#define  _CAN2_TSR_ALST1                                     (0x1 << 10)    // ALST1
#define  _CAN2_TSR_TXOK1                                     (0x1 << 9)    // TXOK1
#define  _CAN2_TSR_RQCP1                                     (0x1 << 8)    // RQCP1
#define  _CAN2_TSR_ABRQ0                                     (0x1 << 7)    // ABRQ0
#define  _CAN2_TSR_TERR0                                     (0x1 << 3)    // TERR0
#define  _CAN2_TSR_ALST0                                     (0x1 << 2)    // ALST0
#define  _CAN2_TSR_TXOK0                                     (0x1 << 1)    // TXOK0
#define  _CAN2_TSR_RQCP0                                     (0x1 << 0)    // RQCP0
#define  _CAN2_RF0R_RFOM0                                    (0x1 << 5)    // RFOM0
#define  _CAN2_RF0R_FOVR0                                    (0x1 << 4)    // FOVR0
#define  _CAN2_RF0R_FULL0                                    (0x1 << 3)    // FULL0
#define  _CAN2_RF0R_FMP0                                     (0x3 << 0)    // FMP0
#define  _CAN2_RF1R_RFOM1                                    (0x1 << 5)    // RFOM1
#define  _CAN2_RF1R_FOVR1                                    (0x1 << 4)    // FOVR1
#define  _CAN2_RF1R_FULL1                                    (0x1 << 3)    // FULL1
#define  _CAN2_RF1R_FMP1                                     (0x3 << 0)    // FMP1
#define  _CAN2_IER_SLKIE                                     (0x1 << 17)    // SLKIE
#define  _CAN2_IER_WKUIE                                     (0x1 << 16)    // WKUIE
#define  _CAN2_IER_ERRIE                                     (0x1 << 15)    // ERRIE
#define  _CAN2_IER_LECIE                                     (0x1 << 11)    // LECIE
#define  _CAN2_IER_BOFIE                                     (0x1 << 10)    // BOFIE
#define  _CAN2_IER_EPVIE                                     (0x1 << 9)    // EPVIE
#define  _CAN2_IER_EWGIE                                     (0x1 << 8)    // EWGIE
#define  _CAN2_IER_FOVIE1                                    (0x1 << 6)    // FOVIE1
#define  _CAN2_IER_FFIE1                                     (0x1 << 5)    // FFIE1
#define  _CAN2_IER_FMPIE1                                    (0x1 << 4)    // FMPIE1
#define  _CAN2_IER_FOVIE0                                    (0x1 << 3)    // FOVIE0
#define  _CAN2_IER_FFIE0                                     (0x1 << 2)    // FFIE0
#define  _CAN2_IER_FMPIE0                                    (0x1 << 1)    // FMPIE0
#define  _CAN2_IER_TMEIE                                     (0x1 << 0)    // TMEIE
#define  _CAN2_ESR_REC                                       (0xff << 24)    // REC
#define  _CAN2_ESR_TEC                                       (0xff << 16)    // TEC
#define  _CAN2_ESR_LEC                                       (0x7 << 4)    // LEC
#define  _CAN2_ESR_BOFF                                      (0x1 << 2)    // BOFF
#define  _CAN2_ESR_EPVF                                      (0x1 << 1)    // EPVF
#define  _CAN2_ESR_EWGF                                      (0x1 << 0)    // EWGF
#define  _CAN2_BTR_SILM                                      (0x1 << 31)    // SILM
#define  _CAN2_BTR_LBKM                                      (0x1 << 30)    // LBKM
#define  _CAN2_BTR_SJW                                       (0x3 << 24)    // SJW
#define  _CAN2_BTR_TS2                                       (0x7 << 20)    // TS2
#define  _CAN2_BTR_TS1                                       (0xf << 16)    // TS1
#define  _CAN2_BTR_BRP                                       (0x3ff << 0)    // BRP
#define  _CAN2_TI0R_STID                                     (0x7ff << 21)    // STID
#define  _CAN2_TI0R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN2_TI0R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN2_TI0R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN2_TI0R_TXRQ                                     (0x1 << 0)    // TXRQ
#define  _CAN2_TDT0R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN2_TDT0R_TGT                                     (0x1 << 8)    // TGT
#define  _CAN2_TDT0R_DLC                                     (0xf << 0)    // DLC
#define  _CAN2_TDL0R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN2_TDL0R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN2_TDL0R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN2_TDL0R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN2_TDH0R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN2_TDH0R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN2_TDH0R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN2_TDH0R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN2_TI1R_STID                                     (0x7ff << 21)    // STID
#define  _CAN2_TI1R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN2_TI1R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN2_TI1R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN2_TI1R_TXRQ                                     (0x1 << 0)    // TXRQ
#define  _CAN2_TDT1R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN2_TDT1R_TGT                                     (0x1 << 8)    // TGT
#define  _CAN2_TDT1R_DLC                                     (0xf << 0)    // DLC
#define  _CAN2_TDL1R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN2_TDL1R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN2_TDL1R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN2_TDL1R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN2_TDH1R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN2_TDH1R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN2_TDH1R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN2_TDH1R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN2_TI2R_STID                                     (0x7ff << 21)    // STID
#define  _CAN2_TI2R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN2_TI2R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN2_TI2R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN2_TI2R_TXRQ                                     (0x1 << 0)    // TXRQ
#define  _CAN2_TDT2R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN2_TDT2R_TGT                                     (0x1 << 8)    // TGT
#define  _CAN2_TDT2R_DLC                                     (0xf << 0)    // DLC
#define  _CAN2_TDL2R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN2_TDL2R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN2_TDL2R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN2_TDL2R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN2_TDH2R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN2_TDH2R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN2_TDH2R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN2_TDH2R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN2_RI0R_STID                                     (0x7ff << 21)    // STID
#define  _CAN2_RI0R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN2_RI0R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN2_RI0R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN2_RDT0R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN2_RDT0R_FMI                                     (0xff << 8)    // FMI
#define  _CAN2_RDT0R_DLC                                     (0xf << 0)    // DLC
#define  _CAN2_RDL0R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN2_RDL0R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN2_RDL0R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN2_RDL0R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN2_RDH0R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN2_RDH0R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN2_RDH0R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN2_RDH0R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN2_RI1R_STID                                     (0x7ff << 21)    // STID
#define  _CAN2_RI1R_EXID                                     (0x3ffff << 3)    // EXID
#define  _CAN2_RI1R_IDE                                      (0x1 << 2)    // IDE
#define  _CAN2_RI1R_RTR                                      (0x1 << 1)    // RTR
#define  _CAN2_RDT1R_TIME                                    (0xffff << 16)    // TIME
#define  _CAN2_RDT1R_FMI                                     (0xff << 8)    // FMI
#define  _CAN2_RDT1R_DLC                                     (0xf << 0)    // DLC
#define  _CAN2_RDL1R_DATA3                                   (0xff << 24)    // DATA3
#define  _CAN2_RDL1R_DATA2                                   (0xff << 16)    // DATA2
#define  _CAN2_RDL1R_DATA1                                   (0xff << 8)    // DATA1
#define  _CAN2_RDL1R_DATA0                                   (0xff << 0)    // DATA0
#define  _CAN2_RDH1R_DATA7                                   (0xff << 24)    // DATA7
#define  _CAN2_RDH1R_DATA6                                   (0xff << 16)    // DATA6
#define  _CAN2_RDH1R_DATA5                                   (0xff << 8)    // DATA5
#define  _CAN2_RDH1R_DATA4                                   (0xff << 0)    // DATA4
#define  _CAN2_FMR_CAN2SB                                    (0x3f << 8)    // CAN2SB
#define  _CAN2_FMR_FINIT                                     (0x1 << 0)    // FINIT
#define  _CAN2_FM1R_FBM0                                     (0x1 << 0)    // Filter mode
#define  _CAN2_FM1R_FBM1                                     (0x1 << 1)    // Filter mode
#define  _CAN2_FM1R_FBM2                                     (0x1 << 2)    // Filter mode
#define  _CAN2_FM1R_FBM3                                     (0x1 << 3)    // Filter mode
#define  _CAN2_FM1R_FBM4                                     (0x1 << 4)    // Filter mode
#define  _CAN2_FM1R_FBM5                                     (0x1 << 5)    // Filter mode
#define  _CAN2_FM1R_FBM6                                     (0x1 << 6)    // Filter mode
#define  _CAN2_FM1R_FBM7                                     (0x1 << 7)    // Filter mode
#define  _CAN2_FM1R_FBM8                                     (0x1 << 8)    // Filter mode
#define  _CAN2_FM1R_FBM9                                     (0x1 << 9)    // Filter mode
#define  _CAN2_FM1R_FBM10                                    (0x1 << 10)    // Filter mode
#define  _CAN2_FM1R_FBM11                                    (0x1 << 11)    // Filter mode
#define  _CAN2_FM1R_FBM12                                    (0x1 << 12)    // Filter mode
#define  _CAN2_FM1R_FBM13                                    (0x1 << 13)    // Filter mode
#define  _CAN2_FM1R_FBM14                                    (0x1 << 14)    // Filter mode
#define  _CAN2_FM1R_FBM15                                    (0x1 << 15)    // Filter mode
#define  _CAN2_FM1R_FBM16                                    (0x1 << 16)    // Filter mode
#define  _CAN2_FM1R_FBM17                                    (0x1 << 17)    // Filter mode
#define  _CAN2_FM1R_FBM18                                    (0x1 << 18)    // Filter mode
#define  _CAN2_FM1R_FBM19                                    (0x1 << 19)    // Filter mode
#define  _CAN2_FM1R_FBM20                                    (0x1 << 20)    // Filter mode
#define  _CAN2_FM1R_FBM21                                    (0x1 << 21)    // Filter mode
#define  _CAN2_FM1R_FBM22                                    (0x1 << 22)    // Filter mode
#define  _CAN2_FM1R_FBM23                                    (0x1 << 23)    // Filter mode
#define  _CAN2_FM1R_FBM24                                    (0x1 << 24)    // Filter mode
#define  _CAN2_FM1R_FBM25                                    (0x1 << 25)    // Filter mode
#define  _CAN2_FM1R_FBM26                                    (0x1 << 26)    // Filter mode
#define  _CAN2_FM1R_FBM27                                    (0x1 << 27)    // Filter mode
#define  _CAN2_FS1R_FSC0                                     (0x1 << 0)    // Filter scale configuration
#define  _CAN2_FS1R_FSC1                                     (0x1 << 1)    // Filter scale configuration
#define  _CAN2_FS1R_FSC2                                     (0x1 << 2)    // Filter scale configuration
#define  _CAN2_FS1R_FSC3                                     (0x1 << 3)    // Filter scale configuration
#define  _CAN2_FS1R_FSC4                                     (0x1 << 4)    // Filter scale configuration
#define  _CAN2_FS1R_FSC5                                     (0x1 << 5)    // Filter scale configuration
#define  _CAN2_FS1R_FSC6                                     (0x1 << 6)    // Filter scale configuration
#define  _CAN2_FS1R_FSC7                                     (0x1 << 7)    // Filter scale configuration
#define  _CAN2_FS1R_FSC8                                     (0x1 << 8)    // Filter scale configuration
#define  _CAN2_FS1R_FSC9                                     (0x1 << 9)    // Filter scale configuration
#define  _CAN2_FS1R_FSC10                                    (0x1 << 10)    // Filter scale configuration
#define  _CAN2_FS1R_FSC11                                    (0x1 << 11)    // Filter scale configuration
#define  _CAN2_FS1R_FSC12                                    (0x1 << 12)    // Filter scale configuration
#define  _CAN2_FS1R_FSC13                                    (0x1 << 13)    // Filter scale configuration
#define  _CAN2_FS1R_FSC14                                    (0x1 << 14)    // Filter scale configuration
#define  _CAN2_FS1R_FSC15                                    (0x1 << 15)    // Filter scale configuration
#define  _CAN2_FS1R_FSC16                                    (0x1 << 16)    // Filter scale configuration
#define  _CAN2_FS1R_FSC17                                    (0x1 << 17)    // Filter scale configuration
#define  _CAN2_FS1R_FSC18                                    (0x1 << 18)    // Filter scale configuration
#define  _CAN2_FS1R_FSC19                                    (0x1 << 19)    // Filter scale configuration
#define  _CAN2_FS1R_FSC20                                    (0x1 << 20)    // Filter scale configuration
#define  _CAN2_FS1R_FSC21                                    (0x1 << 21)    // Filter scale configuration
#define  _CAN2_FS1R_FSC22                                    (0x1 << 22)    // Filter scale configuration
#define  _CAN2_FS1R_FSC23                                    (0x1 << 23)    // Filter scale configuration
#define  _CAN2_FS1R_FSC24                                    (0x1 << 24)    // Filter scale configuration
#define  _CAN2_FS1R_FSC25                                    (0x1 << 25)    // Filter scale configuration
#define  _CAN2_FS1R_FSC26                                    (0x1 << 26)    // Filter scale configuration
#define  _CAN2_FS1R_FSC27                                    (0x1 << 27)    // Filter scale configuration
#define  _CAN2_FFA1R_FFA0                                    (0x1 << 0)    // Filter FIFO assignment for filter 0
#define  _CAN2_FFA1R_FFA1                                    (0x1 << 1)    // Filter FIFO assignment for filter 1
#define  _CAN2_FFA1R_FFA2                                    (0x1 << 2)    // Filter FIFO assignment for filter 2
#define  _CAN2_FFA1R_FFA3                                    (0x1 << 3)    // Filter FIFO assignment for filter 3
#define  _CAN2_FFA1R_FFA4                                    (0x1 << 4)    // Filter FIFO assignment for filter 4
#define  _CAN2_FFA1R_FFA5                                    (0x1 << 5)    // Filter FIFO assignment for filter 5
#define  _CAN2_FFA1R_FFA6                                    (0x1 << 6)    // Filter FIFO assignment for filter 6
#define  _CAN2_FFA1R_FFA7                                    (0x1 << 7)    // Filter FIFO assignment for filter 7
#define  _CAN2_FFA1R_FFA8                                    (0x1 << 8)    // Filter FIFO assignment for filter 8
#define  _CAN2_FFA1R_FFA9                                    (0x1 << 9)    // Filter FIFO assignment for filter 9
#define  _CAN2_FFA1R_FFA10                                   (0x1 << 10)    // Filter FIFO assignment for filter 10
#define  _CAN2_FFA1R_FFA11                                   (0x1 << 11)    // Filter FIFO assignment for filter 11
#define  _CAN2_FFA1R_FFA12                                   (0x1 << 12)    // Filter FIFO assignment for filter 12
#define  _CAN2_FFA1R_FFA13                                   (0x1 << 13)    // Filter FIFO assignment for filter 13
#define  _CAN2_FFA1R_FFA14                                   (0x1 << 14)    // Filter FIFO assignment for filter 14
#define  _CAN2_FFA1R_FFA15                                   (0x1 << 15)    // Filter FIFO assignment for filter 15
#define  _CAN2_FFA1R_FFA16                                   (0x1 << 16)    // Filter FIFO assignment for filter 16
#define  _CAN2_FFA1R_FFA17                                   (0x1 << 17)    // Filter FIFO assignment for filter 17
#define  _CAN2_FFA1R_FFA18                                   (0x1 << 18)    // Filter FIFO assignment for filter 18
#define  _CAN2_FFA1R_FFA19                                   (0x1 << 19)    // Filter FIFO assignment for filter 19
#define  _CAN2_FFA1R_FFA20                                   (0x1 << 20)    // Filter FIFO assignment for filter 20
#define  _CAN2_FFA1R_FFA21                                   (0x1 << 21)    // Filter FIFO assignment for filter 21
#define  _CAN2_FFA1R_FFA22                                   (0x1 << 22)    // Filter FIFO assignment for filter 22
#define  _CAN2_FFA1R_FFA23                                   (0x1 << 23)    // Filter FIFO assignment for filter 23
#define  _CAN2_FFA1R_FFA24                                   (0x1 << 24)    // Filter FIFO assignment for filter 24
#define  _CAN2_FFA1R_FFA25                                   (0x1 << 25)    // Filter FIFO assignment for filter 25
#define  _CAN2_FFA1R_FFA26                                   (0x1 << 26)    // Filter FIFO assignment for filter 26
#define  _CAN2_FFA1R_FFA27                                   (0x1 << 27)    // Filter FIFO assignment for filter 27
#define  _CAN2_FA1R_FACT0                                    (0x1 << 0)    // Filter active
#define  _CAN2_FA1R_FACT1                                    (0x1 << 1)    // Filter active
#define  _CAN2_FA1R_FACT2                                    (0x1 << 2)    // Filter active
#define  _CAN2_FA1R_FACT3                                    (0x1 << 3)    // Filter active
#define  _CAN2_FA1R_FACT4                                    (0x1 << 4)    // Filter active
#define  _CAN2_FA1R_FACT5                                    (0x1 << 5)    // Filter active
#define  _CAN2_FA1R_FACT6                                    (0x1 << 6)    // Filter active
#define  _CAN2_FA1R_FACT7                                    (0x1 << 7)    // Filter active
#define  _CAN2_FA1R_FACT8                                    (0x1 << 8)    // Filter active
#define  _CAN2_FA1R_FACT9                                    (0x1 << 9)    // Filter active
#define  _CAN2_FA1R_FACT10                                   (0x1 << 10)    // Filter active
#define  _CAN2_FA1R_FACT11                                   (0x1 << 11)    // Filter active
#define  _CAN2_FA1R_FACT12                                   (0x1 << 12)    // Filter active
#define  _CAN2_FA1R_FACT13                                   (0x1 << 13)    // Filter active
#define  _CAN2_FA1R_FACT14                                   (0x1 << 14)    // Filter active
#define  _CAN2_FA1R_FACT15                                   (0x1 << 15)    // Filter active
#define  _CAN2_FA1R_FACT16                                   (0x1 << 16)    // Filter active
#define  _CAN2_FA1R_FACT17                                   (0x1 << 17)    // Filter active
#define  _CAN2_FA1R_FACT18                                   (0x1 << 18)    // Filter active
#define  _CAN2_FA1R_FACT19                                   (0x1 << 19)    // Filter active
#define  _CAN2_FA1R_FACT20                                   (0x1 << 20)    // Filter active
#define  _CAN2_FA1R_FACT21                                   (0x1 << 21)    // Filter active
#define  _CAN2_FA1R_FACT22                                   (0x1 << 22)    // Filter active
#define  _CAN2_FA1R_FACT23                                   (0x1 << 23)    // Filter active
#define  _CAN2_FA1R_FACT24                                   (0x1 << 24)    // Filter active
#define  _CAN2_FA1R_FACT25                                   (0x1 << 25)    // Filter active
#define  _CAN2_FA1R_FACT26                                   (0x1 << 26)    // Filter active
#define  _CAN2_FA1R_FACT27                                   (0x1 << 27)    // Filter active
#define  _CAN2_F0R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F0R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F0R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F0R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F0R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F0R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F0R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F0R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F0R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F0R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F0R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F0R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F0R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F0R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F0R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F0R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F0R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F0R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F0R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F0R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F0R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F0R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F0R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F0R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F0R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F0R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F0R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F0R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F0R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F0R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F0R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F0R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F0R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F0R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F0R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F0R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F0R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F0R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F0R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F0R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F0R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F0R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F0R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F0R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F0R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F0R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F0R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F0R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F0R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F0R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F0R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F0R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F0R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F0R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F0R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F0R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F0R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F0R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F0R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F0R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F0R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F0R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F0R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F0R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F1R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F1R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F1R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F1R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F1R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F1R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F1R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F1R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F1R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F1R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F1R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F1R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F1R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F1R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F1R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F1R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F1R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F1R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F1R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F1R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F1R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F1R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F1R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F1R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F1R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F1R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F1R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F1R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F1R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F1R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F1R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F1R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F1R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F1R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F1R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F1R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F1R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F1R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F1R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F1R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F1R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F1R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F1R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F1R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F1R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F1R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F1R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F1R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F1R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F1R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F1R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F1R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F1R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F1R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F1R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F1R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F1R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F1R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F1R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F1R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F1R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F1R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F1R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F1R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F2R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F2R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F2R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F2R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F2R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F2R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F2R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F2R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F2R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F2R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F2R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F2R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F2R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F2R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F2R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F2R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F2R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F2R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F2R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F2R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F2R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F2R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F2R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F2R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F2R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F2R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F2R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F2R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F2R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F2R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F2R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F2R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F2R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F2R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F2R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F2R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F2R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F2R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F2R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F2R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F2R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F2R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F2R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F2R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F2R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F2R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F2R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F2R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F2R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F2R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F2R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F2R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F2R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F2R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F2R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F2R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F2R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F2R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F2R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F2R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F2R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F2R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F2R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F2R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F3R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F3R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F3R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F3R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F3R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F3R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F3R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F3R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F3R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F3R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F3R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F3R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F3R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F3R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F3R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F3R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F3R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F3R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F3R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F3R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F3R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F3R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F3R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F3R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F3R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F3R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F3R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F3R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F3R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F3R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F3R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F3R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F3R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F3R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F3R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F3R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F3R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F3R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F3R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F3R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F3R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F3R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F3R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F3R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F3R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F3R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F3R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F3R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F3R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F3R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F3R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F3R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F3R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F3R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F3R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F3R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F3R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F3R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F3R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F3R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F3R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F3R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F3R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F3R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F4R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F4R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F4R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F4R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F4R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F4R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F4R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F4R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F4R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F4R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F4R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F4R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F4R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F4R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F4R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F4R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F4R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F4R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F4R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F4R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F4R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F4R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F4R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F4R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F4R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F4R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F4R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F4R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F4R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F4R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F4R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F4R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F4R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F4R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F4R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F4R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F4R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F4R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F4R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F4R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F4R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F4R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F4R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F4R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F4R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F4R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F4R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F4R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F4R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F4R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F4R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F4R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F4R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F4R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F4R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F4R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F4R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F4R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F4R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F4R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F4R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F4R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F4R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F4R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F5R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F5R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F5R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F5R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F5R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F5R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F5R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F5R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F5R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F5R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F5R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F5R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F5R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F5R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F5R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F5R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F5R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F5R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F5R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F5R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F5R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F5R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F5R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F5R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F5R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F5R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F5R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F5R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F5R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F5R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F5R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F5R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F5R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F5R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F5R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F5R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F5R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F5R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F5R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F5R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F5R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F5R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F5R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F5R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F5R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F5R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F5R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F5R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F5R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F5R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F5R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F5R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F5R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F5R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F5R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F5R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F5R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F5R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F5R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F5R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F5R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F5R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F5R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F5R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F6R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F6R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F6R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F6R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F6R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F6R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F6R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F6R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F6R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F6R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F6R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F6R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F6R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F6R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F6R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F6R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F6R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F6R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F6R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F6R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F6R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F6R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F6R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F6R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F6R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F6R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F6R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F6R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F6R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F6R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F6R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F6R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F6R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F6R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F6R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F6R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F6R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F6R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F6R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F6R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F6R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F6R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F6R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F6R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F6R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F6R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F6R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F6R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F6R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F6R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F6R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F6R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F6R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F6R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F6R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F6R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F6R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F6R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F6R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F6R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F6R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F6R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F6R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F6R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F7R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F7R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F7R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F7R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F7R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F7R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F7R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F7R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F7R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F7R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F7R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F7R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F7R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F7R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F7R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F7R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F7R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F7R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F7R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F7R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F7R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F7R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F7R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F7R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F7R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F7R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F7R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F7R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F7R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F7R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F7R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F7R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F7R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F7R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F7R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F7R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F7R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F7R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F7R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F7R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F7R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F7R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F7R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F7R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F7R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F7R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F7R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F7R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F7R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F7R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F7R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F7R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F7R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F7R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F7R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F7R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F7R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F7R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F7R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F7R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F7R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F7R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F7R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F7R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F8R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F8R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F8R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F8R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F8R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F8R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F8R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F8R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F8R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F8R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F8R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F8R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F8R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F8R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F8R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F8R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F8R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F8R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F8R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F8R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F8R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F8R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F8R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F8R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F8R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F8R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F8R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F8R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F8R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F8R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F8R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F8R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F8R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F8R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F8R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F8R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F8R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F8R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F8R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F8R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F8R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F8R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F8R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F8R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F8R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F8R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F8R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F8R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F8R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F8R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F8R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F8R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F8R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F8R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F8R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F8R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F8R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F8R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F8R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F8R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F8R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F8R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F8R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F8R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F9R1_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F9R1_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F9R1_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F9R1_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F9R1_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F9R1_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F9R1_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F9R1_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F9R1_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F9R1_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F9R1_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F9R1_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F9R1_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F9R1_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F9R1_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F9R1_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F9R1_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F9R1_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F9R1_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F9R1_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F9R1_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F9R1_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F9R1_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F9R1_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F9R1_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F9R1_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F9R1_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F9R1_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F9R1_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F9R1_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F9R1_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F9R1_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F9R2_FB0                                      (0x1 << 0)    // Filter bits
#define  _CAN2_F9R2_FB1                                      (0x1 << 1)    // Filter bits
#define  _CAN2_F9R2_FB2                                      (0x1 << 2)    // Filter bits
#define  _CAN2_F9R2_FB3                                      (0x1 << 3)    // Filter bits
#define  _CAN2_F9R2_FB4                                      (0x1 << 4)    // Filter bits
#define  _CAN2_F9R2_FB5                                      (0x1 << 5)    // Filter bits
#define  _CAN2_F9R2_FB6                                      (0x1 << 6)    // Filter bits
#define  _CAN2_F9R2_FB7                                      (0x1 << 7)    // Filter bits
#define  _CAN2_F9R2_FB8                                      (0x1 << 8)    // Filter bits
#define  _CAN2_F9R2_FB9                                      (0x1 << 9)    // Filter bits
#define  _CAN2_F9R2_FB10                                     (0x1 << 10)    // Filter bits
#define  _CAN2_F9R2_FB11                                     (0x1 << 11)    // Filter bits
#define  _CAN2_F9R2_FB12                                     (0x1 << 12)    // Filter bits
#define  _CAN2_F9R2_FB13                                     (0x1 << 13)    // Filter bits
#define  _CAN2_F9R2_FB14                                     (0x1 << 14)    // Filter bits
#define  _CAN2_F9R2_FB15                                     (0x1 << 15)    // Filter bits
#define  _CAN2_F9R2_FB16                                     (0x1 << 16)    // Filter bits
#define  _CAN2_F9R2_FB17                                     (0x1 << 17)    // Filter bits
#define  _CAN2_F9R2_FB18                                     (0x1 << 18)    // Filter bits
#define  _CAN2_F9R2_FB19                                     (0x1 << 19)    // Filter bits
#define  _CAN2_F9R2_FB20                                     (0x1 << 20)    // Filter bits
#define  _CAN2_F9R2_FB21                                     (0x1 << 21)    // Filter bits
#define  _CAN2_F9R2_FB22                                     (0x1 << 22)    // Filter bits
#define  _CAN2_F9R2_FB23                                     (0x1 << 23)    // Filter bits
#define  _CAN2_F9R2_FB24                                     (0x1 << 24)    // Filter bits
#define  _CAN2_F9R2_FB25                                     (0x1 << 25)    // Filter bits
#define  _CAN2_F9R2_FB26                                     (0x1 << 26)    // Filter bits
#define  _CAN2_F9R2_FB27                                     (0x1 << 27)    // Filter bits
#define  _CAN2_F9R2_FB28                                     (0x1 << 28)    // Filter bits
#define  _CAN2_F9R2_FB29                                     (0x1 << 29)    // Filter bits
#define  _CAN2_F9R2_FB30                                     (0x1 << 30)    // Filter bits
#define  _CAN2_F9R2_FB31                                     (0x1 << 31)    // Filter bits
#define  _CAN2_F10R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F10R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F10R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F10R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F10R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F10R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F10R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F10R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F10R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F10R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F10R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F10R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F10R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F10R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F10R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F10R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F10R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F10R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F10R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F10R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F10R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F10R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F10R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F10R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F10R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F10R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F10R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F10R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F10R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F10R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F10R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F10R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F10R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F10R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F10R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F10R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F10R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F10R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F10R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F10R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F10R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F10R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F10R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F10R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F10R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F10R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F10R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F10R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F10R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F10R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F10R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F10R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F10R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F10R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F10R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F10R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F10R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F10R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F10R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F10R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F10R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F10R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F10R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F10R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F11R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F11R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F11R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F11R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F11R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F11R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F11R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F11R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F11R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F11R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F11R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F11R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F11R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F11R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F11R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F11R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F11R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F11R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F11R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F11R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F11R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F11R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F11R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F11R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F11R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F11R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F11R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F11R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F11R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F11R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F11R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F11R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F11R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F11R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F11R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F11R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F11R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F11R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F11R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F11R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F11R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F11R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F11R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F11R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F11R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F11R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F11R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F11R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F11R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F11R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F11R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F11R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F11R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F11R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F11R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F11R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F11R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F11R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F11R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F11R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F11R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F11R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F11R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F11R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F12R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F12R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F12R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F12R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F12R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F12R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F12R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F12R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F12R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F12R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F12R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F12R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F12R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F12R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F12R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F12R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F12R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F12R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F12R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F12R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F12R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F12R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F12R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F12R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F12R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F12R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F12R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F12R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F12R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F12R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F12R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F12R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F12R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F12R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F12R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F12R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F12R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F12R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F12R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F12R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F12R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F12R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F12R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F12R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F12R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F12R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F12R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F12R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F12R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F12R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F12R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F12R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F12R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F12R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F12R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F12R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F12R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F12R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F12R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F12R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F12R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F12R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F12R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F12R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F13R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F13R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F13R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F13R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F13R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F13R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F13R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F13R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F13R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F13R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F13R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F13R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F13R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F13R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F13R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F13R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F13R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F13R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F13R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F13R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F13R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F13R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F13R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F13R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F13R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F13R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F13R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F13R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F13R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F13R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F13R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F13R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F13R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F13R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F13R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F13R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F13R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F13R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F13R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F13R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F13R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F13R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F13R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F13R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F13R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F13R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F13R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F13R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F13R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F13R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F13R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F13R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F13R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F13R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F13R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F13R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F13R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F13R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F13R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F13R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F13R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F13R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F13R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F13R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F14R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F14R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F14R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F14R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F14R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F14R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F14R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F14R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F14R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F14R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F14R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F14R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F14R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F14R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F14R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F14R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F14R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F14R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F14R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F14R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F14R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F14R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F14R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F14R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F14R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F14R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F14R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F14R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F14R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F14R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F14R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F14R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F14R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F14R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F14R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F14R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F14R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F14R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F14R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F14R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F14R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F14R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F14R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F14R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F14R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F14R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F14R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F14R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F14R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F14R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F14R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F14R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F14R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F14R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F14R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F14R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F14R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F14R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F14R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F14R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F14R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F14R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F14R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F14R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F15R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F15R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F15R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F15R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F15R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F15R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F15R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F15R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F15R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F15R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F15R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F15R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F15R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F15R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F15R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F15R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F15R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F15R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F15R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F15R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F15R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F15R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F15R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F15R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F15R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F15R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F15R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F15R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F15R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F15R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F15R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F15R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F15R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F15R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F15R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F15R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F15R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F15R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F15R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F15R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F15R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F15R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F15R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F15R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F15R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F15R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F15R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F15R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F15R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F15R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F15R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F15R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F15R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F15R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F15R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F15R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F15R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F15R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F15R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F15R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F15R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F15R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F15R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F15R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F16R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F16R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F16R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F16R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F16R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F16R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F16R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F16R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F16R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F16R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F16R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F16R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F16R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F16R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F16R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F16R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F16R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F16R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F16R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F16R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F16R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F16R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F16R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F16R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F16R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F16R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F16R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F16R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F16R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F16R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F16R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F16R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F16R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F16R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F16R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F16R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F16R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F16R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F16R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F16R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F16R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F16R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F16R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F16R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F16R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F16R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F16R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F16R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F16R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F16R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F16R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F16R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F16R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F16R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F16R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F16R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F16R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F16R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F16R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F16R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F16R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F16R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F16R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F16R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F17R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F17R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F17R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F17R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F17R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F17R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F17R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F17R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F17R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F17R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F17R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F17R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F17R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F17R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F17R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F17R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F17R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F17R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F17R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F17R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F17R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F17R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F17R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F17R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F17R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F17R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F17R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F17R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F17R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F17R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F17R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F17R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F17R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F17R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F17R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F17R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F17R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F17R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F17R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F17R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F17R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F17R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F17R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F17R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F17R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F17R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F17R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F17R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F17R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F17R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F17R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F17R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F17R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F17R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F17R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F17R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F17R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F17R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F17R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F17R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F17R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F17R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F17R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F17R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F18R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F18R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F18R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F18R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F18R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F18R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F18R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F18R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F18R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F18R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F18R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F18R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F18R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F18R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F18R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F18R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F18R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F18R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F18R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F18R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F18R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F18R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F18R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F18R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F18R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F18R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F18R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F18R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F18R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F18R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F18R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F18R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F18R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F18R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F18R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F18R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F18R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F18R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F18R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F18R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F18R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F18R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F18R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F18R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F18R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F18R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F18R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F18R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F18R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F18R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F18R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F18R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F18R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F18R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F18R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F18R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F18R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F18R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F18R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F18R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F18R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F18R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F18R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F18R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F19R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F19R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F19R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F19R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F19R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F19R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F19R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F19R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F19R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F19R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F19R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F19R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F19R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F19R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F19R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F19R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F19R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F19R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F19R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F19R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F19R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F19R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F19R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F19R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F19R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F19R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F19R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F19R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F19R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F19R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F19R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F19R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F19R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F19R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F19R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F19R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F19R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F19R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F19R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F19R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F19R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F19R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F19R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F19R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F19R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F19R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F19R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F19R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F19R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F19R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F19R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F19R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F19R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F19R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F19R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F19R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F19R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F19R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F19R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F19R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F19R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F19R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F19R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F19R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F20R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F20R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F20R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F20R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F20R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F20R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F20R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F20R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F20R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F20R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F20R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F20R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F20R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F20R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F20R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F20R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F20R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F20R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F20R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F20R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F20R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F20R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F20R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F20R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F20R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F20R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F20R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F20R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F20R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F20R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F20R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F20R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F20R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F20R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F20R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F20R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F20R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F20R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F20R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F20R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F20R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F20R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F20R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F20R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F20R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F20R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F20R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F20R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F20R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F20R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F20R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F20R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F20R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F20R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F20R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F20R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F20R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F20R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F20R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F20R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F20R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F20R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F20R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F20R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F21R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F21R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F21R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F21R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F21R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F21R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F21R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F21R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F21R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F21R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F21R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F21R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F21R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F21R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F21R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F21R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F21R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F21R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F21R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F21R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F21R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F21R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F21R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F21R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F21R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F21R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F21R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F21R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F21R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F21R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F21R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F21R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F21R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F21R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F21R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F21R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F21R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F21R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F21R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F21R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F21R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F21R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F21R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F21R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F21R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F21R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F21R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F21R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F21R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F21R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F21R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F21R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F21R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F21R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F21R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F21R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F21R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F21R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F21R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F21R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F21R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F21R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F21R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F21R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F22R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F22R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F22R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F22R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F22R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F22R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F22R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F22R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F22R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F22R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F22R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F22R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F22R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F22R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F22R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F22R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F22R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F22R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F22R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F22R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F22R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F22R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F22R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F22R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F22R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F22R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F22R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F22R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F22R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F22R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F22R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F22R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F22R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F22R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F22R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F22R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F22R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F22R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F22R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F22R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F22R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F22R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F22R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F22R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F22R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F22R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F22R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F22R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F22R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F22R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F22R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F22R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F22R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F22R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F22R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F22R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F22R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F22R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F22R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F22R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F22R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F22R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F22R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F22R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F23R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F23R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F23R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F23R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F23R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F23R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F23R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F23R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F23R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F23R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F23R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F23R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F23R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F23R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F23R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F23R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F23R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F23R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F23R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F23R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F23R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F23R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F23R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F23R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F23R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F23R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F23R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F23R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F23R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F23R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F23R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F23R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F23R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F23R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F23R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F23R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F23R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F23R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F23R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F23R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F23R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F23R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F23R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F23R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F23R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F23R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F23R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F23R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F23R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F23R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F23R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F23R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F23R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F23R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F23R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F23R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F23R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F23R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F23R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F23R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F23R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F23R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F23R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F23R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F24R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F24R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F24R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F24R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F24R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F24R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F24R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F24R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F24R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F24R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F24R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F24R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F24R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F24R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F24R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F24R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F24R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F24R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F24R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F24R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F24R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F24R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F24R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F24R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F24R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F24R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F24R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F24R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F24R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F24R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F24R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F24R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F24R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F24R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F24R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F24R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F24R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F24R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F24R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F24R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F24R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F24R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F24R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F24R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F24R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F24R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F24R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F24R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F24R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F24R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F24R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F24R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F24R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F24R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F24R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F24R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F24R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F24R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F24R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F24R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F24R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F24R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F24R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F24R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F25R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F25R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F25R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F25R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F25R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F25R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F25R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F25R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F25R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F25R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F25R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F25R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F25R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F25R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F25R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F25R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F25R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F25R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F25R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F25R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F25R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F25R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F25R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F25R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F25R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F25R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F25R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F25R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F25R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F25R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F25R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F25R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F25R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F25R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F25R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F25R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F25R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F25R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F25R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F25R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F25R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F25R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F25R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F25R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F25R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F25R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F25R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F25R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F25R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F25R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F25R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F25R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F25R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F25R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F25R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F25R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F25R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F25R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F25R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F25R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F25R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F25R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F25R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F25R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F26R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F26R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F26R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F26R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F26R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F26R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F26R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F26R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F26R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F26R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F26R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F26R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F26R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F26R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F26R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F26R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F26R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F26R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F26R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F26R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F26R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F26R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F26R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F26R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F26R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F26R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F26R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F26R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F26R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F26R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F26R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F26R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F26R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F26R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F26R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F26R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F26R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F26R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F26R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F26R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F26R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F26R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F26R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F26R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F26R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F26R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F26R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F26R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F26R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F26R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F26R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F26R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F26R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F26R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F26R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F26R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F26R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F26R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F26R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F26R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F26R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F26R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F26R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F26R2_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F27R1_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F27R1_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F27R1_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F27R1_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F27R1_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F27R1_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F27R1_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F27R1_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F27R1_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F27R1_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F27R1_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F27R1_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F27R1_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F27R1_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F27R1_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F27R1_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F27R1_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F27R1_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F27R1_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F27R1_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F27R1_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F27R1_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F27R1_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F27R1_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F27R1_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F27R1_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F27R1_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F27R1_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F27R1_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F27R1_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F27R1_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F27R1_FB31                                    (0x1 << 31)    // Filter bits
#define  _CAN2_F27R2_FB0                                     (0x1 << 0)    // Filter bits
#define  _CAN2_F27R2_FB1                                     (0x1 << 1)    // Filter bits
#define  _CAN2_F27R2_FB2                                     (0x1 << 2)    // Filter bits
#define  _CAN2_F27R2_FB3                                     (0x1 << 3)    // Filter bits
#define  _CAN2_F27R2_FB4                                     (0x1 << 4)    // Filter bits
#define  _CAN2_F27R2_FB5                                     (0x1 << 5)    // Filter bits
#define  _CAN2_F27R2_FB6                                     (0x1 << 6)    // Filter bits
#define  _CAN2_F27R2_FB7                                     (0x1 << 7)    // Filter bits
#define  _CAN2_F27R2_FB8                                     (0x1 << 8)    // Filter bits
#define  _CAN2_F27R2_FB9                                     (0x1 << 9)    // Filter bits
#define  _CAN2_F27R2_FB10                                    (0x1 << 10)    // Filter bits
#define  _CAN2_F27R2_FB11                                    (0x1 << 11)    // Filter bits
#define  _CAN2_F27R2_FB12                                    (0x1 << 12)    // Filter bits
#define  _CAN2_F27R2_FB13                                    (0x1 << 13)    // Filter bits
#define  _CAN2_F27R2_FB14                                    (0x1 << 14)    // Filter bits
#define  _CAN2_F27R2_FB15                                    (0x1 << 15)    // Filter bits
#define  _CAN2_F27R2_FB16                                    (0x1 << 16)    // Filter bits
#define  _CAN2_F27R2_FB17                                    (0x1 << 17)    // Filter bits
#define  _CAN2_F27R2_FB18                                    (0x1 << 18)    // Filter bits
#define  _CAN2_F27R2_FB19                                    (0x1 << 19)    // Filter bits
#define  _CAN2_F27R2_FB20                                    (0x1 << 20)    // Filter bits
#define  _CAN2_F27R2_FB21                                    (0x1 << 21)    // Filter bits
#define  _CAN2_F27R2_FB22                                    (0x1 << 22)    // Filter bits
#define  _CAN2_F27R2_FB23                                    (0x1 << 23)    // Filter bits
#define  _CAN2_F27R2_FB24                                    (0x1 << 24)    // Filter bits
#define  _CAN2_F27R2_FB25                                    (0x1 << 25)    // Filter bits
#define  _CAN2_F27R2_FB26                                    (0x1 << 26)    // Filter bits
#define  _CAN2_F27R2_FB27                                    (0x1 << 27)    // Filter bits
#define  _CAN2_F27R2_FB28                                    (0x1 << 28)    // Filter bits
#define  _CAN2_F27R2_FB29                                    (0x1 << 29)    // Filter bits
#define  _CAN2_F27R2_FB30                                    (0x1 << 30)    // Filter bits
#define  _CAN2_F27R2_FB31                                    (0x1 << 31)    // Filter bits

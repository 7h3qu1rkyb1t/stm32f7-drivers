#define Get_NVIC_ISER0(FLAG)                 (*(uint32_t*)0xe000e100 & FLAG)
#define Get_NVIC_ISER1(FLAG)                 (*(uint32_t*)0xe000e104 & FLAG)
#define Get_NVIC_ISER2(FLAG)                 (*(uint32_t*)0xe000e108 & FLAG)
#define Get_NVIC_ICER0(FLAG)                 (*(uint32_t*)0xe000e180 & FLAG)
#define Get_NVIC_ICER1(FLAG)                 (*(uint32_t*)0xe000e184 & FLAG)
#define Get_NVIC_ICER2(FLAG)                 (*(uint32_t*)0xe000e188 & FLAG)
#define Get_NVIC_ISPR0(FLAG)                 (*(uint32_t*)0xe000e200 & FLAG)
#define Get_NVIC_ISPR1(FLAG)                 (*(uint32_t*)0xe000e204 & FLAG)
#define Get_NVIC_ISPR2(FLAG)                 (*(uint32_t*)0xe000e208 & FLAG)
#define Get_NVIC_ICPR0(FLAG)                 (*(uint32_t*)0xe000e280 & FLAG)
#define Get_NVIC_ICPR1(FLAG)                 (*(uint32_t*)0xe000e284 & FLAG)
#define Get_NVIC_ICPR2(FLAG)                 (*(uint32_t*)0xe000e288 & FLAG)
#define Get_NVIC_IABR0(FLAG)                 (*(uint32_t*)0xe000e300 & FLAG)
#define Get_NVIC_IABR1(FLAG)                 (*(uint32_t*)0xe000e304 & FLAG)
#define Get_NVIC_IABR2(FLAG)                 (*(uint32_t*)0xe000e308 & FLAG)
#define Get_NVIC_IPR0(FLAG)                  (*(uint32_t*)0xe000e400 & FLAG)
#define Get_NVIC_IPR1(FLAG)                  (*(uint32_t*)0xe000e404 & FLAG)
#define Get_NVIC_IPR2(FLAG)                  (*(uint32_t*)0xe000e408 & FLAG)
#define Get_NVIC_IPR3(FLAG)                  (*(uint32_t*)0xe000e40c & FLAG)
#define Get_NVIC_IPR4(FLAG)                  (*(uint32_t*)0xe000e410 & FLAG)
#define Get_NVIC_IPR5(FLAG)                  (*(uint32_t*)0xe000e414 & FLAG)
#define Get_NVIC_IPR6(FLAG)                  (*(uint32_t*)0xe000e418 & FLAG)
#define Get_NVIC_IPR7(FLAG)                  (*(uint32_t*)0xe000e41c & FLAG)
#define Get_NVIC_IPR8(FLAG)                  (*(uint32_t*)0xe000e420 & FLAG)
#define Get_NVIC_IPR9(FLAG)                  (*(uint32_t*)0xe000e424 & FLAG)
#define Get_NVIC_IPR10(FLAG)                 (*(uint32_t*)0xe000e428 & FLAG)
#define Get_NVIC_IPR11(FLAG)                 (*(uint32_t*)0xe000e42c & FLAG)
#define Get_NVIC_IPR12(FLAG)                 (*(uint32_t*)0xe000e430 & FLAG)
#define Get_NVIC_IPR13(FLAG)                 (*(uint32_t*)0xe000e434 & FLAG)
#define Get_NVIC_IPR14(FLAG)                 (*(uint32_t*)0xe000e438 & FLAG)
#define Get_NVIC_IPR15(FLAG)                 (*(uint32_t*)0xe000e43c & FLAG)
#define Get_NVIC_IPR16(FLAG)                 (*(uint32_t*)0xe000e440 & FLAG)
#define Get_NVIC_IPR17(FLAG)                 (*(uint32_t*)0xe000e444 & FLAG)
#define Get_NVIC_IPR18(FLAG)                 (*(uint32_t*)0xe000e448 & FLAG)
#define Get_NVIC_IPR19(FLAG)                 (*(uint32_t*)0xe000e44c & FLAG)
#define Get_NVIC_IPR20(FLAG)                 (*(uint32_t*)0xe000e450 & FLAG)
#define Get_NVIC_ISER3(FLAG)                 (*(uint32_t*)0xe000e10c & FLAG)
#define Get_NVIC_ICER3(FLAG)                 (*(uint32_t*)0xe000e18c & FLAG)
#define Get_NVIC_ISPR3(FLAG)                 (*(uint32_t*)0xe000e20c & FLAG)
#define Get_NVIC_ICPR3(FLAG)                 (*(uint32_t*)0xe000e28c & FLAG)
#define Get_NVIC_IABR3(FLAG)                 (*(uint32_t*)0xe000e30c & FLAG)
#define Get_NVIC_IPR21(FLAG)                 (*(uint32_t*)0xe000e454 & FLAG)
#define Get_NVIC_IPR22(FLAG)                 (*(uint32_t*)0xe000e458 & FLAG)
#define Get_NVIC_IPR23(FLAG)                 (*(uint32_t*)0xe000e45c & FLAG)
#define Get_NVIC_IPR24(FLAG)                 (*(uint32_t*)0xe000e460 & FLAG)
#define Get_NVIC_IPR25(FLAG)                 (*(uint32_t*)0xe000e464 & FLAG)
#define Get_NVIC_IPR26(FLAG)                 (*(uint32_t*)0xe000e468 & FLAG)
#define Get_NVIC_IPR27(FLAG)                 (*(uint32_t*)0xe000e46c & FLAG)
#define Get_NVIC_IPR28(FLAG)                 (*(uint32_t*)0xe000e470 & FLAG)
#define Get_NVIC_IPR29(FLAG)                 (*(uint32_t*)0xe000e474 & FLAG)
#define Get_NVIC_STIR_STIR(FLAG)             (*(uint32_t*)0xe000ef00 & FLAG)
#define Set_NVIC_ISER0(FLAG)                 (*(uint32_t*)0xe000e100 |= FLAG)
#define Clr_NVIC_ISER0(FLAG)                 (*(uint32_t*)0xe000e100 &= ~FLAG)
#define Set_NVIC_ISER1(FLAG)                 (*(uint32_t*)0xe000e104 |= FLAG)
#define Clr_NVIC_ISER1(FLAG)                 (*(uint32_t*)0xe000e104 &= ~FLAG)
#define Set_NVIC_ISER2(FLAG)                 (*(uint32_t*)0xe000e108 |= FLAG)
#define Clr_NVIC_ISER2(FLAG)                 (*(uint32_t*)0xe000e108 &= ~FLAG)
#define Set_NVIC_ICER0(FLAG)                 (*(uint32_t*)0xe000e180 |= FLAG)
#define Clr_NVIC_ICER0(FLAG)                 (*(uint32_t*)0xe000e180 &= ~FLAG)
#define Set_NVIC_ICER1(FLAG)                 (*(uint32_t*)0xe000e184 |= FLAG)
#define Clr_NVIC_ICER1(FLAG)                 (*(uint32_t*)0xe000e184 &= ~FLAG)
#define Set_NVIC_ICER2(FLAG)                 (*(uint32_t*)0xe000e188 |= FLAG)
#define Clr_NVIC_ICER2(FLAG)                 (*(uint32_t*)0xe000e188 &= ~FLAG)
#define Set_NVIC_ISPR0(FLAG)                 (*(uint32_t*)0xe000e200 |= FLAG)
#define Clr_NVIC_ISPR0(FLAG)                 (*(uint32_t*)0xe000e200 &= ~FLAG)
#define Set_NVIC_ISPR1(FLAG)                 (*(uint32_t*)0xe000e204 |= FLAG)
#define Clr_NVIC_ISPR1(FLAG)                 (*(uint32_t*)0xe000e204 &= ~FLAG)
#define Set_NVIC_ISPR2(FLAG)                 (*(uint32_t*)0xe000e208 |= FLAG)
#define Clr_NVIC_ISPR2(FLAG)                 (*(uint32_t*)0xe000e208 &= ~FLAG)
#define Set_NVIC_ICPR0(FLAG)                 (*(uint32_t*)0xe000e280 |= FLAG)
#define Clr_NVIC_ICPR0(FLAG)                 (*(uint32_t*)0xe000e280 &= ~FLAG)
#define Set_NVIC_ICPR1(FLAG)                 (*(uint32_t*)0xe000e284 |= FLAG)
#define Clr_NVIC_ICPR1(FLAG)                 (*(uint32_t*)0xe000e284 &= ~FLAG)
#define Set_NVIC_ICPR2(FLAG)                 (*(uint32_t*)0xe000e288 |= FLAG)
#define Clr_NVIC_ICPR2(FLAG)                 (*(uint32_t*)0xe000e288 &= ~FLAG)
#define Set_NVIC_IABR0(FLAG)                 (*(uint32_t*)0xe000e300 |= FLAG)
#define Clr_NVIC_IABR0(FLAG)                 (*(uint32_t*)0xe000e300 &= ~FLAG)
#define Set_NVIC_IABR1(FLAG)                 (*(uint32_t*)0xe000e304 |= FLAG)
#define Clr_NVIC_IABR1(FLAG)                 (*(uint32_t*)0xe000e304 &= ~FLAG)
#define Set_NVIC_IABR2(FLAG)                 (*(uint32_t*)0xe000e308 |= FLAG)
#define Clr_NVIC_IABR2(FLAG)                 (*(uint32_t*)0xe000e308 &= ~FLAG)
#define Set_NVIC_IPR0(FLAG)                  (*(uint32_t*)0xe000e400 |= FLAG)
#define Clr_NVIC_IPR0(FLAG)                  (*(uint32_t*)0xe000e400 &= ~FLAG)
#define Set_NVIC_IPR1(FLAG)                  (*(uint32_t*)0xe000e404 |= FLAG)
#define Clr_NVIC_IPR1(FLAG)                  (*(uint32_t*)0xe000e404 &= ~FLAG)
#define Set_NVIC_IPR2(FLAG)                  (*(uint32_t*)0xe000e408 |= FLAG)
#define Clr_NVIC_IPR2(FLAG)                  (*(uint32_t*)0xe000e408 &= ~FLAG)
#define Set_NVIC_IPR3(FLAG)                  (*(uint32_t*)0xe000e40c |= FLAG)
#define Clr_NVIC_IPR3(FLAG)                  (*(uint32_t*)0xe000e40c &= ~FLAG)
#define Set_NVIC_IPR4(FLAG)                  (*(uint32_t*)0xe000e410 |= FLAG)
#define Clr_NVIC_IPR4(FLAG)                  (*(uint32_t*)0xe000e410 &= ~FLAG)
#define Set_NVIC_IPR5(FLAG)                  (*(uint32_t*)0xe000e414 |= FLAG)
#define Clr_NVIC_IPR5(FLAG)                  (*(uint32_t*)0xe000e414 &= ~FLAG)
#define Set_NVIC_IPR6(FLAG)                  (*(uint32_t*)0xe000e418 |= FLAG)
#define Clr_NVIC_IPR6(FLAG)                  (*(uint32_t*)0xe000e418 &= ~FLAG)
#define Set_NVIC_IPR7(FLAG)                  (*(uint32_t*)0xe000e41c |= FLAG)
#define Clr_NVIC_IPR7(FLAG)                  (*(uint32_t*)0xe000e41c &= ~FLAG)
#define Set_NVIC_IPR8(FLAG)                  (*(uint32_t*)0xe000e420 |= FLAG)
#define Clr_NVIC_IPR8(FLAG)                  (*(uint32_t*)0xe000e420 &= ~FLAG)
#define Set_NVIC_IPR9(FLAG)                  (*(uint32_t*)0xe000e424 |= FLAG)
#define Clr_NVIC_IPR9(FLAG)                  (*(uint32_t*)0xe000e424 &= ~FLAG)
#define Set_NVIC_IPR10(FLAG)                 (*(uint32_t*)0xe000e428 |= FLAG)
#define Clr_NVIC_IPR10(FLAG)                 (*(uint32_t*)0xe000e428 &= ~FLAG)
#define Set_NVIC_IPR11(FLAG)                 (*(uint32_t*)0xe000e42c |= FLAG)
#define Clr_NVIC_IPR11(FLAG)                 (*(uint32_t*)0xe000e42c &= ~FLAG)
#define Set_NVIC_IPR12(FLAG)                 (*(uint32_t*)0xe000e430 |= FLAG)
#define Clr_NVIC_IPR12(FLAG)                 (*(uint32_t*)0xe000e430 &= ~FLAG)
#define Set_NVIC_IPR13(FLAG)                 (*(uint32_t*)0xe000e434 |= FLAG)
#define Clr_NVIC_IPR13(FLAG)                 (*(uint32_t*)0xe000e434 &= ~FLAG)
#define Set_NVIC_IPR14(FLAG)                 (*(uint32_t*)0xe000e438 |= FLAG)
#define Clr_NVIC_IPR14(FLAG)                 (*(uint32_t*)0xe000e438 &= ~FLAG)
#define Set_NVIC_IPR15(FLAG)                 (*(uint32_t*)0xe000e43c |= FLAG)
#define Clr_NVIC_IPR15(FLAG)                 (*(uint32_t*)0xe000e43c &= ~FLAG)
#define Set_NVIC_IPR16(FLAG)                 (*(uint32_t*)0xe000e440 |= FLAG)
#define Clr_NVIC_IPR16(FLAG)                 (*(uint32_t*)0xe000e440 &= ~FLAG)
#define Set_NVIC_IPR17(FLAG)                 (*(uint32_t*)0xe000e444 |= FLAG)
#define Clr_NVIC_IPR17(FLAG)                 (*(uint32_t*)0xe000e444 &= ~FLAG)
#define Set_NVIC_IPR18(FLAG)                 (*(uint32_t*)0xe000e448 |= FLAG)
#define Clr_NVIC_IPR18(FLAG)                 (*(uint32_t*)0xe000e448 &= ~FLAG)
#define Set_NVIC_IPR19(FLAG)                 (*(uint32_t*)0xe000e44c |= FLAG)
#define Clr_NVIC_IPR19(FLAG)                 (*(uint32_t*)0xe000e44c &= ~FLAG)
#define Set_NVIC_IPR20(FLAG)                 (*(uint32_t*)0xe000e450 |= FLAG)
#define Clr_NVIC_IPR20(FLAG)                 (*(uint32_t*)0xe000e450 &= ~FLAG)
#define Set_NVIC_ISER3(FLAG)                 (*(uint32_t*)0xe000e10c |= FLAG)
#define Clr_NVIC_ISER3(FLAG)                 (*(uint32_t*)0xe000e10c &= ~FLAG)
#define Set_NVIC_ICER3(FLAG)                 (*(uint32_t*)0xe000e18c |= FLAG)
#define Clr_NVIC_ICER3(FLAG)                 (*(uint32_t*)0xe000e18c &= ~FLAG)
#define Set_NVIC_ISPR3(FLAG)                 (*(uint32_t*)0xe000e20c |= FLAG)
#define Clr_NVIC_ISPR3(FLAG)                 (*(uint32_t*)0xe000e20c &= ~FLAG)
#define Set_NVIC_ICPR3(FLAG)                 (*(uint32_t*)0xe000e28c |= FLAG)
#define Clr_NVIC_ICPR3(FLAG)                 (*(uint32_t*)0xe000e28c &= ~FLAG)
#define Set_NVIC_IABR3(FLAG)                 (*(uint32_t*)0xe000e30c |= FLAG)
#define Clr_NVIC_IABR3(FLAG)                 (*(uint32_t*)0xe000e30c &= ~FLAG)
#define Set_NVIC_IPR21(FLAG)                 (*(uint32_t*)0xe000e454 |= FLAG)
#define Clr_NVIC_IPR21(FLAG)                 (*(uint32_t*)0xe000e454 &= ~FLAG)
#define Set_NVIC_IPR22(FLAG)                 (*(uint32_t*)0xe000e458 |= FLAG)
#define Clr_NVIC_IPR22(FLAG)                 (*(uint32_t*)0xe000e458 &= ~FLAG)
#define Set_NVIC_IPR23(FLAG)                 (*(uint32_t*)0xe000e45c |= FLAG)
#define Clr_NVIC_IPR23(FLAG)                 (*(uint32_t*)0xe000e45c &= ~FLAG)
#define Set_NVIC_IPR24(FLAG)                 (*(uint32_t*)0xe000e460 |= FLAG)
#define Clr_NVIC_IPR24(FLAG)                 (*(uint32_t*)0xe000e460 &= ~FLAG)
#define Set_NVIC_IPR25(FLAG)                 (*(uint32_t*)0xe000e464 |= FLAG)
#define Clr_NVIC_IPR25(FLAG)                 (*(uint32_t*)0xe000e464 &= ~FLAG)
#define Set_NVIC_IPR26(FLAG)                 (*(uint32_t*)0xe000e468 |= FLAG)
#define Clr_NVIC_IPR26(FLAG)                 (*(uint32_t*)0xe000e468 &= ~FLAG)
#define Set_NVIC_IPR27(FLAG)                 (*(uint32_t*)0xe000e46c |= FLAG)
#define Clr_NVIC_IPR27(FLAG)                 (*(uint32_t*)0xe000e46c &= ~FLAG)
#define Set_NVIC_IPR28(FLAG)                 (*(uint32_t*)0xe000e470 |= FLAG)
#define Clr_NVIC_IPR28(FLAG)                 (*(uint32_t*)0xe000e470 &= ~FLAG)
#define Set_NVIC_IPR29(FLAG)                 (*(uint32_t*)0xe000e474 |= FLAG)
#define Clr_NVIC_IPR29(FLAG)                 (*(uint32_t*)0xe000e474 &= ~FLAG)
#define Set_NVIC_STIR_STIR(FLAG)             (*(uint32_t*)0xe000ef00 |= FLAG)
#define Clr_NVIC_STIR_STIR(FLAG)             (*(uint32_t*)0xe000ef00 &= ~FLAG)
#define  _NVIC_ISER0_SETENA                                  (0xffffffff << 0)    // SETENA
#define  _NVIC_ISER1_SETENA                                  (0xffffffff << 0)    // SETENA
#define  _NVIC_ISER2_SETENA                                  (0xffffffff << 0)    // SETENA
#define  _NVIC_ICER0_CLRENA                                  (0xffffffff << 0)    // CLRENA
#define  _NVIC_ICER1_CLRENA                                  (0xffffffff << 0)    // CLRENA
#define  _NVIC_ICER2_CLRENA                                  (0xffffffff << 0)    // CLRENA
#define  _NVIC_ISPR0_SETPEND                                 (0xffffffff << 0)    // SETPEND
#define  _NVIC_ISPR1_SETPEND                                 (0xffffffff << 0)    // SETPEND
#define  _NVIC_ISPR2_SETPEND                                 (0xffffffff << 0)    // SETPEND
#define  _NVIC_ICPR0_CLRPEND                                 (0xffffffff << 0)    // CLRPEND
#define  _NVIC_ICPR1_CLRPEND                                 (0xffffffff << 0)    // CLRPEND
#define  _NVIC_ICPR2_CLRPEND                                 (0xffffffff << 0)    // CLRPEND
#define  _NVIC_IABR0_ACTIVE                                  (0xffffffff << 0)    // ACTIVE
#define  _NVIC_IABR1_ACTIVE                                  (0xffffffff << 0)    // ACTIVE
#define  _NVIC_IABR2_ACTIVE                                  (0xffffffff << 0)    // ACTIVE
#define  _NVIC_IPR0_IPR_N0                                   (0xff << 0)    // IPR_N0
#define  _NVIC_IPR0_IPR_N1                                   (0xff << 8)    // IPR_N1
#define  _NVIC_IPR0_IPR_N2                                   (0xff << 16)    // IPR_N2
#define  _NVIC_IPR0_IPR_N3                                   (0xff << 24)    // IPR_N3
#define  _NVIC_IPR1_IPR_N0                                   (0xff << 0)    // IPR_N0
#define  _NVIC_IPR1_IPR_N1                                   (0xff << 8)    // IPR_N1
#define  _NVIC_IPR1_IPR_N2                                   (0xff << 16)    // IPR_N2
#define  _NVIC_IPR1_IPR_N3                                   (0xff << 24)    // IPR_N3
#define  _NVIC_IPR2_IPR_N0                                   (0xff << 0)    // IPR_N0
#define  _NVIC_IPR2_IPR_N1                                   (0xff << 8)    // IPR_N1
#define  _NVIC_IPR2_IPR_N2                                   (0xff << 16)    // IPR_N2
#define  _NVIC_IPR2_IPR_N3                                   (0xff << 24)    // IPR_N3
#define  _NVIC_IPR3_IPR_N0                                   (0xff << 0)    // IPR_N0
#define  _NVIC_IPR3_IPR_N1                                   (0xff << 8)    // IPR_N1
#define  _NVIC_IPR3_IPR_N2                                   (0xff << 16)    // IPR_N2
#define  _NVIC_IPR3_IPR_N3                                   (0xff << 24)    // IPR_N3
#define  _NVIC_IPR4_IPR_N0                                   (0xff << 0)    // IPR_N0
#define  _NVIC_IPR4_IPR_N1                                   (0xff << 8)    // IPR_N1
#define  _NVIC_IPR4_IPR_N2                                   (0xff << 16)    // IPR_N2
#define  _NVIC_IPR4_IPR_N3                                   (0xff << 24)    // IPR_N3
#define  _NVIC_IPR5_IPR_N0                                   (0xff << 0)    // IPR_N0
#define  _NVIC_IPR5_IPR_N1                                   (0xff << 8)    // IPR_N1
#define  _NVIC_IPR5_IPR_N2                                   (0xff << 16)    // IPR_N2
#define  _NVIC_IPR5_IPR_N3                                   (0xff << 24)    // IPR_N3
#define  _NVIC_IPR6_IPR_N0                                   (0xff << 0)    // IPR_N0
#define  _NVIC_IPR6_IPR_N1                                   (0xff << 8)    // IPR_N1
#define  _NVIC_IPR6_IPR_N2                                   (0xff << 16)    // IPR_N2
#define  _NVIC_IPR6_IPR_N3                                   (0xff << 24)    // IPR_N3
#define  _NVIC_IPR7_IPR_N0                                   (0xff << 0)    // IPR_N0
#define  _NVIC_IPR7_IPR_N1                                   (0xff << 8)    // IPR_N1
#define  _NVIC_IPR7_IPR_N2                                   (0xff << 16)    // IPR_N2
#define  _NVIC_IPR7_IPR_N3                                   (0xff << 24)    // IPR_N3
#define  _NVIC_IPR8_IPR_N0                                   (0xff << 0)    // IPR_N0
#define  _NVIC_IPR8_IPR_N1                                   (0xff << 8)    // IPR_N1
#define  _NVIC_IPR8_IPR_N2                                   (0xff << 16)    // IPR_N2
#define  _NVIC_IPR8_IPR_N3                                   (0xff << 24)    // IPR_N3
#define  _NVIC_IPR9_IPR_N0                                   (0xff << 0)    // IPR_N0
#define  _NVIC_IPR9_IPR_N1                                   (0xff << 8)    // IPR_N1
#define  _NVIC_IPR9_IPR_N2                                   (0xff << 16)    // IPR_N2
#define  _NVIC_IPR9_IPR_N3                                   (0xff << 24)    // IPR_N3
#define  _NVIC_IPR10_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR10_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR10_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR10_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR11_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR11_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR11_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR11_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR12_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR12_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR12_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR12_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR13_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR13_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR13_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR13_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR14_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR14_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR14_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR14_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR15_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR15_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR15_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR15_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR16_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR16_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR16_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR16_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR17_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR17_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR17_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR17_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR18_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR18_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR18_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR18_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR19_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR19_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR19_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR19_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR20_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR20_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR20_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR20_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_ISER3_SETENA                                  (0xffffffff << 0)    // SETENA
#define  _NVIC_ICER3_CLRENA                                  (0xffffffff << 0)    // CLRENA
#define  _NVIC_ISPR3_SETPEND                                 (0xffffffff << 0)    // SETPEND
#define  _NVIC_ICPR3_CLRPEND                                 (0xffffffff << 0)    // CLRPEND
#define  _NVIC_IABR3_ACTIVE                                  (0xffffffff << 0)    // ACTIVE
#define  _NVIC_IPR21_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR21_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR21_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR21_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR22_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR22_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR22_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR22_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR23_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR23_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR23_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR23_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR24_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR24_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR24_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR24_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR25_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR25_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR25_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR25_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR26_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR26_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR26_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR26_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR27_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR27_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR27_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR27_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR28_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR28_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR28_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR28_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_IPR29_IPR_N0                                  (0xff << 0)    // IPR_N0
#define  _NVIC_IPR29_IPR_N1                                  (0xff << 8)    // IPR_N1
#define  _NVIC_IPR29_IPR_N2                                  (0xff << 16)    // IPR_N2
#define  _NVIC_IPR29_IPR_N3                                  (0xff << 24)    // IPR_N3
#define  _NVIC_STIR_STIR_INTID                               (0x1ff << 0)    // Software generated interrupt ID

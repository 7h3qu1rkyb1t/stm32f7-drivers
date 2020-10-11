#define Get_DSI_DSI_VR(FLAG)                 (*(uint32_t*)0x40016c00 & FLAG)
#define Get_DSI_DSI_CR(FLAG)                 (*(uint32_t*)0x40016c04 & FLAG)
#define Get_DSI_DSI_CCR(FLAG)                (*(uint32_t*)0x40016c08 & FLAG)
#define Get_DSI_DSI_LVCIDR(FLAG)             (*(uint32_t*)0x40016c0c & FLAG)
#define Get_DSI_DSI_LCOLCR(FLAG)             (*(uint32_t*)0x40016c10 & FLAG)
#define Get_DSI_DSI_LPCR(FLAG)               (*(uint32_t*)0x40016c14 & FLAG)
#define Get_DSI_DSI_LPMCR(FLAG)              (*(uint32_t*)0x40016c18 & FLAG)
#define Get_DSI_DSI_PCR(FLAG)                (*(uint32_t*)0x40016c2c & FLAG)
#define Get_DSI_DSI_GVCIDR(FLAG)             (*(uint32_t*)0x40016c30 & FLAG)
#define Get_DSI_DSI_MCR(FLAG)                (*(uint32_t*)0x40016c34 & FLAG)
#define Get_DSI_DSI_VMCR(FLAG)               (*(uint32_t*)0x40016c38 & FLAG)
#define Get_DSI_DSI_VPCR(FLAG)               (*(uint32_t*)0x40016c3c & FLAG)
#define Get_DSI_DSI_VCCR(FLAG)               (*(uint32_t*)0x40016c40 & FLAG)
#define Get_DSI_DSI_VNPCR(FLAG)              (*(uint32_t*)0x40016c44 & FLAG)
#define Get_DSI_DSI_VHSACR(FLAG)             (*(uint32_t*)0x40016c48 & FLAG)
#define Get_DSI_DSI_VHBPCR(FLAG)             (*(uint32_t*)0x40016c4c & FLAG)
#define Get_DSI_DSI_VLCR(FLAG)               (*(uint32_t*)0x40016c50 & FLAG)
#define Get_DSI_DSI_VVSACR(FLAG)             (*(uint32_t*)0x40016c54 & FLAG)
#define Get_DSI_DSI_VVBPCR(FLAG)             (*(uint32_t*)0x40016c58 & FLAG)
#define Get_DSI_DSI_VVFPCR(FLAG)             (*(uint32_t*)0x40016c5c & FLAG)
#define Get_DSI_DSI_VVACR(FLAG)              (*(uint32_t*)0x40016c60 & FLAG)
#define Get_DSI_DSI_LCCR(FLAG)               (*(uint32_t*)0x40016c64 & FLAG)
#define Get_DSI_DSI_CMCR(FLAG)               (*(uint32_t*)0x40016c68 & FLAG)
#define Get_DSI_DSI_GHCR(FLAG)               (*(uint32_t*)0x40016c6c & FLAG)
#define Get_DSI_DSI_GPDR(FLAG)               (*(uint32_t*)0x40016c70 & FLAG)
#define Get_DSI_DSI_GPSR(FLAG)               (*(uint32_t*)0x40016c74 & FLAG)
#define Get_DSI_DSI_TCCR0(FLAG)              (*(uint32_t*)0x40016c78 & FLAG)
#define Get_DSI_DSI_TCCR1(FLAG)              (*(uint32_t*)0x40016c7c & FLAG)
#define Get_DSI_DSI_TCCR2(FLAG)              (*(uint32_t*)0x40016c80 & FLAG)
#define Get_DSI_DSI_TCCR3(FLAG)              (*(uint32_t*)0x40016c84 & FLAG)
#define Get_DSI_DSI_TCCR4(FLAG)              (*(uint32_t*)0x40016c88 & FLAG)
#define Get_DSI_DSI_TCCR5(FLAG)              (*(uint32_t*)0x40016c8c & FLAG)
#define Get_DSI_DSI_CLCR(FLAG)               (*(uint32_t*)0x40016c94 & FLAG)
#define Get_DSI_DSI_CLTCR(FLAG)              (*(uint32_t*)0x40016c98 & FLAG)
#define Get_DSI_DSI_DLTCR(FLAG)              (*(uint32_t*)0x40016c9c & FLAG)
#define Get_DSI_DSI_PCTLR(FLAG)              (*(uint32_t*)0x40016ca0 & FLAG)
#define Get_DSI_DSI_PCONFR(FLAG)             (*(uint32_t*)0x40016ca4 & FLAG)
#define Get_DSI_DSI_PUCR(FLAG)               (*(uint32_t*)0x40016ca8 & FLAG)
#define Get_DSI_DSI_PTTCR(FLAG)              (*(uint32_t*)0x40016cac & FLAG)
#define Get_DSI_DSI_PSR(FLAG)                (*(uint32_t*)0x40016cb0 & FLAG)
#define Get_DSI_DSI_ISR0(FLAG)               (*(uint32_t*)0x40016cbc & FLAG)
#define Get_DSI_DSI_ISR1(FLAG)               (*(uint32_t*)0x40016cc0 & FLAG)
#define Get_DSI_DSI_IER0(FLAG)               (*(uint32_t*)0x40016cc4 & FLAG)
#define Get_DSI_DSI_IER1(FLAG)               (*(uint32_t*)0x40016cc8 & FLAG)
#define Get_DSI_DSI_FIR0(FLAG)               (*(uint32_t*)0x40016cd8 & FLAG)
#define Get_DSI_DSI_FIR1(FLAG)               (*(uint32_t*)0x40016cdc & FLAG)
#define Get_DSI_DSI_VSCR(FLAG)               (*(uint32_t*)0x40016d00 & FLAG)
#define Get_DSI_DSI_LCVCIDR(FLAG)            (*(uint32_t*)0x40016d0c & FLAG)
#define Get_DSI_DSI_LCCCR(FLAG)              (*(uint32_t*)0x40016d10 & FLAG)
#define Get_DSI_DSI_LPMCCR(FLAG)             (*(uint32_t*)0x40016d18 & FLAG)
#define Get_DSI_DSI_VMCCR(FLAG)              (*(uint32_t*)0x40016d38 & FLAG)
#define Get_DSI_DSI_VPCCR(FLAG)              (*(uint32_t*)0x40016d3c & FLAG)
#define Get_DSI_DSI_VCCCR(FLAG)              (*(uint32_t*)0x40016d40 & FLAG)
#define Get_DSI_DSI_VNPCCR(FLAG)             (*(uint32_t*)0x40016d44 & FLAG)
#define Get_DSI_DSI_VHSACCR(FLAG)            (*(uint32_t*)0x40016d48 & FLAG)
#define Get_DSI_DSI_VHBPCCR(FLAG)            (*(uint32_t*)0x40016d4c & FLAG)
#define Get_DSI_DSI_VLCCR(FLAG)              (*(uint32_t*)0x40016d50 & FLAG)
#define Get_DSI_DSI_VVSACCR(FLAG)            (*(uint32_t*)0x40016d54 & FLAG)
#define Get_DSI_DSI_VVBPCCR(FLAG)            (*(uint32_t*)0x40016d58 & FLAG)
#define Get_DSI_DSI_VVFPCCR(FLAG)            (*(uint32_t*)0x40016d5c & FLAG)
#define Get_DSI_DSI_VVACCR(FLAG)             (*(uint32_t*)0x40016d60 & FLAG)
#define Get_DSI_DSI_WCFGR(FLAG)              (*(uint32_t*)0x40017000 & FLAG)
#define Get_DSI_DSI_WCR(FLAG)                (*(uint32_t*)0x40017004 & FLAG)
#define Get_DSI_DSI_WIER(FLAG)               (*(uint32_t*)0x40017008 & FLAG)
#define Get_DSI_DSI_WISR(FLAG)               (*(uint32_t*)0x4001700c & FLAG)
#define Get_DSI_DSI_WIFCR(FLAG)              (*(uint32_t*)0x40017010 & FLAG)
#define Get_DSI_DSI_WPCR1(FLAG)              (*(uint32_t*)0x40017018 & FLAG)
#define Get_DSI_DSI_WPCR2(FLAG)              (*(uint32_t*)0x4001701c & FLAG)
#define Get_DSI_DSI_WPCR3(FLAG)              (*(uint32_t*)0x40017020 & FLAG)
#define Get_DSI_DSI_WPCR4(FLAG)              (*(uint32_t*)0x40017024 & FLAG)
#define Get_DSI_DSI_WPCR5(FLAG)              (*(uint32_t*)0x40017028 & FLAG)
#define Get_DSI_DSI_WRPCR(FLAG)              (*(uint32_t*)0x40017030 & FLAG)
#define Set_DSI_DSI_VR(FLAG)                 (*(uint32_t*)0x40016c00 |= FLAG)
#define Clr_DSI_DSI_VR(FLAG)                 (*(uint32_t*)0x40016c00 &= ~FLAG)
#define Set_DSI_DSI_CR(FLAG)                 (*(uint32_t*)0x40016c04 |= FLAG)
#define Clr_DSI_DSI_CR(FLAG)                 (*(uint32_t*)0x40016c04 &= ~FLAG)
#define Set_DSI_DSI_CCR(FLAG)                (*(uint32_t*)0x40016c08 |= FLAG)
#define Clr_DSI_DSI_CCR(FLAG)                (*(uint32_t*)0x40016c08 &= ~FLAG)
#define Set_DSI_DSI_LVCIDR(FLAG)             (*(uint32_t*)0x40016c0c |= FLAG)
#define Clr_DSI_DSI_LVCIDR(FLAG)             (*(uint32_t*)0x40016c0c &= ~FLAG)
#define Set_DSI_DSI_LCOLCR(FLAG)             (*(uint32_t*)0x40016c10 |= FLAG)
#define Clr_DSI_DSI_LCOLCR(FLAG)             (*(uint32_t*)0x40016c10 &= ~FLAG)
#define Set_DSI_DSI_LPCR(FLAG)               (*(uint32_t*)0x40016c14 |= FLAG)
#define Clr_DSI_DSI_LPCR(FLAG)               (*(uint32_t*)0x40016c14 &= ~FLAG)
#define Set_DSI_DSI_LPMCR(FLAG)              (*(uint32_t*)0x40016c18 |= FLAG)
#define Clr_DSI_DSI_LPMCR(FLAG)              (*(uint32_t*)0x40016c18 &= ~FLAG)
#define Set_DSI_DSI_PCR(FLAG)                (*(uint32_t*)0x40016c2c |= FLAG)
#define Clr_DSI_DSI_PCR(FLAG)                (*(uint32_t*)0x40016c2c &= ~FLAG)
#define Set_DSI_DSI_GVCIDR(FLAG)             (*(uint32_t*)0x40016c30 |= FLAG)
#define Clr_DSI_DSI_GVCIDR(FLAG)             (*(uint32_t*)0x40016c30 &= ~FLAG)
#define Set_DSI_DSI_MCR(FLAG)                (*(uint32_t*)0x40016c34 |= FLAG)
#define Clr_DSI_DSI_MCR(FLAG)                (*(uint32_t*)0x40016c34 &= ~FLAG)
#define Set_DSI_DSI_VMCR(FLAG)               (*(uint32_t*)0x40016c38 |= FLAG)
#define Clr_DSI_DSI_VMCR(FLAG)               (*(uint32_t*)0x40016c38 &= ~FLAG)
#define Set_DSI_DSI_VPCR(FLAG)               (*(uint32_t*)0x40016c3c |= FLAG)
#define Clr_DSI_DSI_VPCR(FLAG)               (*(uint32_t*)0x40016c3c &= ~FLAG)
#define Set_DSI_DSI_VCCR(FLAG)               (*(uint32_t*)0x40016c40 |= FLAG)
#define Clr_DSI_DSI_VCCR(FLAG)               (*(uint32_t*)0x40016c40 &= ~FLAG)
#define Set_DSI_DSI_VNPCR(FLAG)              (*(uint32_t*)0x40016c44 |= FLAG)
#define Clr_DSI_DSI_VNPCR(FLAG)              (*(uint32_t*)0x40016c44 &= ~FLAG)
#define Set_DSI_DSI_VHSACR(FLAG)             (*(uint32_t*)0x40016c48 |= FLAG)
#define Clr_DSI_DSI_VHSACR(FLAG)             (*(uint32_t*)0x40016c48 &= ~FLAG)
#define Set_DSI_DSI_VHBPCR(FLAG)             (*(uint32_t*)0x40016c4c |= FLAG)
#define Clr_DSI_DSI_VHBPCR(FLAG)             (*(uint32_t*)0x40016c4c &= ~FLAG)
#define Set_DSI_DSI_VLCR(FLAG)               (*(uint32_t*)0x40016c50 |= FLAG)
#define Clr_DSI_DSI_VLCR(FLAG)               (*(uint32_t*)0x40016c50 &= ~FLAG)
#define Set_DSI_DSI_VVSACR(FLAG)             (*(uint32_t*)0x40016c54 |= FLAG)
#define Clr_DSI_DSI_VVSACR(FLAG)             (*(uint32_t*)0x40016c54 &= ~FLAG)
#define Set_DSI_DSI_VVBPCR(FLAG)             (*(uint32_t*)0x40016c58 |= FLAG)
#define Clr_DSI_DSI_VVBPCR(FLAG)             (*(uint32_t*)0x40016c58 &= ~FLAG)
#define Set_DSI_DSI_VVFPCR(FLAG)             (*(uint32_t*)0x40016c5c |= FLAG)
#define Clr_DSI_DSI_VVFPCR(FLAG)             (*(uint32_t*)0x40016c5c &= ~FLAG)
#define Set_DSI_DSI_VVACR(FLAG)              (*(uint32_t*)0x40016c60 |= FLAG)
#define Clr_DSI_DSI_VVACR(FLAG)              (*(uint32_t*)0x40016c60 &= ~FLAG)
#define Set_DSI_DSI_LCCR(FLAG)               (*(uint32_t*)0x40016c64 |= FLAG)
#define Clr_DSI_DSI_LCCR(FLAG)               (*(uint32_t*)0x40016c64 &= ~FLAG)
#define Set_DSI_DSI_CMCR(FLAG)               (*(uint32_t*)0x40016c68 |= FLAG)
#define Clr_DSI_DSI_CMCR(FLAG)               (*(uint32_t*)0x40016c68 &= ~FLAG)
#define Set_DSI_DSI_GHCR(FLAG)               (*(uint32_t*)0x40016c6c |= FLAG)
#define Clr_DSI_DSI_GHCR(FLAG)               (*(uint32_t*)0x40016c6c &= ~FLAG)
#define Set_DSI_DSI_GPDR(FLAG)               (*(uint32_t*)0x40016c70 |= FLAG)
#define Clr_DSI_DSI_GPDR(FLAG)               (*(uint32_t*)0x40016c70 &= ~FLAG)
#define Set_DSI_DSI_GPSR(FLAG)               (*(uint32_t*)0x40016c74 |= FLAG)
#define Clr_DSI_DSI_GPSR(FLAG)               (*(uint32_t*)0x40016c74 &= ~FLAG)
#define Set_DSI_DSI_TCCR0(FLAG)              (*(uint32_t*)0x40016c78 |= FLAG)
#define Clr_DSI_DSI_TCCR0(FLAG)              (*(uint32_t*)0x40016c78 &= ~FLAG)
#define Set_DSI_DSI_TCCR1(FLAG)              (*(uint32_t*)0x40016c7c |= FLAG)
#define Clr_DSI_DSI_TCCR1(FLAG)              (*(uint32_t*)0x40016c7c &= ~FLAG)
#define Set_DSI_DSI_TCCR2(FLAG)              (*(uint32_t*)0x40016c80 |= FLAG)
#define Clr_DSI_DSI_TCCR2(FLAG)              (*(uint32_t*)0x40016c80 &= ~FLAG)
#define Set_DSI_DSI_TCCR3(FLAG)              (*(uint32_t*)0x40016c84 |= FLAG)
#define Clr_DSI_DSI_TCCR3(FLAG)              (*(uint32_t*)0x40016c84 &= ~FLAG)
#define Set_DSI_DSI_TCCR4(FLAG)              (*(uint32_t*)0x40016c88 |= FLAG)
#define Clr_DSI_DSI_TCCR4(FLAG)              (*(uint32_t*)0x40016c88 &= ~FLAG)
#define Set_DSI_DSI_TCCR5(FLAG)              (*(uint32_t*)0x40016c8c |= FLAG)
#define Clr_DSI_DSI_TCCR5(FLAG)              (*(uint32_t*)0x40016c8c &= ~FLAG)
#define Set_DSI_DSI_CLCR(FLAG)               (*(uint32_t*)0x40016c94 |= FLAG)
#define Clr_DSI_DSI_CLCR(FLAG)               (*(uint32_t*)0x40016c94 &= ~FLAG)
#define Set_DSI_DSI_CLTCR(FLAG)              (*(uint32_t*)0x40016c98 |= FLAG)
#define Clr_DSI_DSI_CLTCR(FLAG)              (*(uint32_t*)0x40016c98 &= ~FLAG)
#define Set_DSI_DSI_DLTCR(FLAG)              (*(uint32_t*)0x40016c9c |= FLAG)
#define Clr_DSI_DSI_DLTCR(FLAG)              (*(uint32_t*)0x40016c9c &= ~FLAG)
#define Set_DSI_DSI_PCTLR(FLAG)              (*(uint32_t*)0x40016ca0 |= FLAG)
#define Clr_DSI_DSI_PCTLR(FLAG)              (*(uint32_t*)0x40016ca0 &= ~FLAG)
#define Set_DSI_DSI_PCONFR(FLAG)             (*(uint32_t*)0x40016ca4 |= FLAG)
#define Clr_DSI_DSI_PCONFR(FLAG)             (*(uint32_t*)0x40016ca4 &= ~FLAG)
#define Set_DSI_DSI_PUCR(FLAG)               (*(uint32_t*)0x40016ca8 |= FLAG)
#define Clr_DSI_DSI_PUCR(FLAG)               (*(uint32_t*)0x40016ca8 &= ~FLAG)
#define Set_DSI_DSI_PTTCR(FLAG)              (*(uint32_t*)0x40016cac |= FLAG)
#define Clr_DSI_DSI_PTTCR(FLAG)              (*(uint32_t*)0x40016cac &= ~FLAG)
#define Set_DSI_DSI_PSR(FLAG)                (*(uint32_t*)0x40016cb0 |= FLAG)
#define Clr_DSI_DSI_PSR(FLAG)                (*(uint32_t*)0x40016cb0 &= ~FLAG)
#define Set_DSI_DSI_ISR0(FLAG)               (*(uint32_t*)0x40016cbc |= FLAG)
#define Clr_DSI_DSI_ISR0(FLAG)               (*(uint32_t*)0x40016cbc &= ~FLAG)
#define Set_DSI_DSI_ISR1(FLAG)               (*(uint32_t*)0x40016cc0 |= FLAG)
#define Clr_DSI_DSI_ISR1(FLAG)               (*(uint32_t*)0x40016cc0 &= ~FLAG)
#define Set_DSI_DSI_IER0(FLAG)               (*(uint32_t*)0x40016cc4 |= FLAG)
#define Clr_DSI_DSI_IER0(FLAG)               (*(uint32_t*)0x40016cc4 &= ~FLAG)
#define Set_DSI_DSI_IER1(FLAG)               (*(uint32_t*)0x40016cc8 |= FLAG)
#define Clr_DSI_DSI_IER1(FLAG)               (*(uint32_t*)0x40016cc8 &= ~FLAG)
#define Set_DSI_DSI_FIR0(FLAG)               (*(uint32_t*)0x40016cd8 |= FLAG)
#define Clr_DSI_DSI_FIR0(FLAG)               (*(uint32_t*)0x40016cd8 &= ~FLAG)
#define Set_DSI_DSI_FIR1(FLAG)               (*(uint32_t*)0x40016cdc |= FLAG)
#define Clr_DSI_DSI_FIR1(FLAG)               (*(uint32_t*)0x40016cdc &= ~FLAG)
#define Set_DSI_DSI_VSCR(FLAG)               (*(uint32_t*)0x40016d00 |= FLAG)
#define Clr_DSI_DSI_VSCR(FLAG)               (*(uint32_t*)0x40016d00 &= ~FLAG)
#define Set_DSI_DSI_LCVCIDR(FLAG)            (*(uint32_t*)0x40016d0c |= FLAG)
#define Clr_DSI_DSI_LCVCIDR(FLAG)            (*(uint32_t*)0x40016d0c &= ~FLAG)
#define Set_DSI_DSI_LCCCR(FLAG)              (*(uint32_t*)0x40016d10 |= FLAG)
#define Clr_DSI_DSI_LCCCR(FLAG)              (*(uint32_t*)0x40016d10 &= ~FLAG)
#define Set_DSI_DSI_LPMCCR(FLAG)             (*(uint32_t*)0x40016d18 |= FLAG)
#define Clr_DSI_DSI_LPMCCR(FLAG)             (*(uint32_t*)0x40016d18 &= ~FLAG)
#define Set_DSI_DSI_VMCCR(FLAG)              (*(uint32_t*)0x40016d38 |= FLAG)
#define Clr_DSI_DSI_VMCCR(FLAG)              (*(uint32_t*)0x40016d38 &= ~FLAG)
#define Set_DSI_DSI_VPCCR(FLAG)              (*(uint32_t*)0x40016d3c |= FLAG)
#define Clr_DSI_DSI_VPCCR(FLAG)              (*(uint32_t*)0x40016d3c &= ~FLAG)
#define Set_DSI_DSI_VCCCR(FLAG)              (*(uint32_t*)0x40016d40 |= FLAG)
#define Clr_DSI_DSI_VCCCR(FLAG)              (*(uint32_t*)0x40016d40 &= ~FLAG)
#define Set_DSI_DSI_VNPCCR(FLAG)             (*(uint32_t*)0x40016d44 |= FLAG)
#define Clr_DSI_DSI_VNPCCR(FLAG)             (*(uint32_t*)0x40016d44 &= ~FLAG)
#define Set_DSI_DSI_VHSACCR(FLAG)            (*(uint32_t*)0x40016d48 |= FLAG)
#define Clr_DSI_DSI_VHSACCR(FLAG)            (*(uint32_t*)0x40016d48 &= ~FLAG)
#define Set_DSI_DSI_VHBPCCR(FLAG)            (*(uint32_t*)0x40016d4c |= FLAG)
#define Clr_DSI_DSI_VHBPCCR(FLAG)            (*(uint32_t*)0x40016d4c &= ~FLAG)
#define Set_DSI_DSI_VLCCR(FLAG)              (*(uint32_t*)0x40016d50 |= FLAG)
#define Clr_DSI_DSI_VLCCR(FLAG)              (*(uint32_t*)0x40016d50 &= ~FLAG)
#define Set_DSI_DSI_VVSACCR(FLAG)            (*(uint32_t*)0x40016d54 |= FLAG)
#define Clr_DSI_DSI_VVSACCR(FLAG)            (*(uint32_t*)0x40016d54 &= ~FLAG)
#define Set_DSI_DSI_VVBPCCR(FLAG)            (*(uint32_t*)0x40016d58 |= FLAG)
#define Clr_DSI_DSI_VVBPCCR(FLAG)            (*(uint32_t*)0x40016d58 &= ~FLAG)
#define Set_DSI_DSI_VVFPCCR(FLAG)            (*(uint32_t*)0x40016d5c |= FLAG)
#define Clr_DSI_DSI_VVFPCCR(FLAG)            (*(uint32_t*)0x40016d5c &= ~FLAG)
#define Set_DSI_DSI_VVACCR(FLAG)             (*(uint32_t*)0x40016d60 |= FLAG)
#define Clr_DSI_DSI_VVACCR(FLAG)             (*(uint32_t*)0x40016d60 &= ~FLAG)
#define Set_DSI_DSI_WCFGR(FLAG)              (*(uint32_t*)0x40017000 |= FLAG)
#define Clr_DSI_DSI_WCFGR(FLAG)              (*(uint32_t*)0x40017000 &= ~FLAG)
#define Set_DSI_DSI_WCR(FLAG)                (*(uint32_t*)0x40017004 |= FLAG)
#define Clr_DSI_DSI_WCR(FLAG)                (*(uint32_t*)0x40017004 &= ~FLAG)
#define Set_DSI_DSI_WIER(FLAG)               (*(uint32_t*)0x40017008 |= FLAG)
#define Clr_DSI_DSI_WIER(FLAG)               (*(uint32_t*)0x40017008 &= ~FLAG)
#define Set_DSI_DSI_WISR(FLAG)               (*(uint32_t*)0x4001700c |= FLAG)
#define Clr_DSI_DSI_WISR(FLAG)               (*(uint32_t*)0x4001700c &= ~FLAG)
#define Set_DSI_DSI_WIFCR(FLAG)              (*(uint32_t*)0x40017010 |= FLAG)
#define Clr_DSI_DSI_WIFCR(FLAG)              (*(uint32_t*)0x40017010 &= ~FLAG)
#define Set_DSI_DSI_WPCR1(FLAG)              (*(uint32_t*)0x40017018 |= FLAG)
#define Clr_DSI_DSI_WPCR1(FLAG)              (*(uint32_t*)0x40017018 &= ~FLAG)
#define Set_DSI_DSI_WPCR2(FLAG)              (*(uint32_t*)0x4001701c |= FLAG)
#define Clr_DSI_DSI_WPCR2(FLAG)              (*(uint32_t*)0x4001701c &= ~FLAG)
#define Set_DSI_DSI_WPCR3(FLAG)              (*(uint32_t*)0x40017020 |= FLAG)
#define Clr_DSI_DSI_WPCR3(FLAG)              (*(uint32_t*)0x40017020 &= ~FLAG)
#define Set_DSI_DSI_WPCR4(FLAG)              (*(uint32_t*)0x40017024 |= FLAG)
#define Clr_DSI_DSI_WPCR4(FLAG)              (*(uint32_t*)0x40017024 &= ~FLAG)
#define Set_DSI_DSI_WPCR5(FLAG)              (*(uint32_t*)0x40017028 |= FLAG)
#define Clr_DSI_DSI_WPCR5(FLAG)              (*(uint32_t*)0x40017028 &= ~FLAG)
#define Set_DSI_DSI_WRPCR(FLAG)              (*(uint32_t*)0x40017030 |= FLAG)
#define Clr_DSI_DSI_WRPCR(FLAG)              (*(uint32_t*)0x40017030 &= ~FLAG)
#define  _DSI_DSI_VR_VERSION                                 (0xffffffff << 0)    // Version of the DSI Host
#define  _DSI_DSI_CR_EN                                      (0x1 << 0)    // Enable
#define  _DSI_DSI_CCR_TXECKDIV                               (0xff << 0)    // TX Escape Clock Division
#define  _DSI_DSI_CCR_TOCKDIV                                (0xff << 8)    // Timeout Clock Division
#define  _DSI_DSI_LVCIDR_VCID                                (0x3 << 0)    // Virtual Channel ID
#define  _DSI_DSI_LCOLCR_COLC                                (0xf << 0)    // Color Coding
#define  _DSI_DSI_LCOLCR_LPE                                 (0x1 << 8)    // Loosely Packet Enable
#define  _DSI_DSI_LPCR_DEP                                   (0x1 << 0)    // Data Enable Polarity
#define  _DSI_DSI_LPCR_VSP                                   (0x1 << 1)    // VSYNC Polarity
#define  _DSI_DSI_LPCR_HSP                                   (0x1 << 2)    // HSYNC Polarity
#define  _DSI_DSI_LPMCR_VLPSIZE                              (0xff << 0)    // VACT Largest Packet Size
#define  _DSI_DSI_LPMCR_LPSIZE                               (0xff << 16)    // Largest Packet Size
#define  _DSI_DSI_PCR_ETTXE                                  (0x1 << 0)    // EoTp Transmission Enable
#define  _DSI_DSI_PCR_ETRXE                                  (0x1 << 1)    // EoTp Reception Enable
#define  _DSI_DSI_PCR_BTAE                                   (0x1 << 2)    // Bus Turn Around Enable
#define  _DSI_DSI_PCR_ECCRXE                                 (0x1 << 3)    // ECC Reception Enable
#define  _DSI_DSI_PCR_CRCRXE                                 (0x1 << 4)    // CRC Reception Enable
#define  _DSI_DSI_GVCIDR_VCID                                (0x3 << 0)    // Virtual Channel ID
#define  _DSI_DSI_MCR_CMDM                                   (0x1 << 0)    // Command mode
#define  _DSI_DSI_VMCR_VMT                                   (0x3 << 0)    // Video mode Type
#define  _DSI_DSI_VMCR_LPVSAE                                (0x1 << 8)    // Low-Power Vertical Sync Active Enable
#define  _DSI_DSI_VMCR_LPVBPE                                (0x1 << 9)    // Low-power Vertical Back-Porch Enable
#define  _DSI_DSI_VMCR_LPVFPE                                (0x1 << 10)    // Low-power Vertical Front-porch Enable
#define  _DSI_DSI_VMCR_LPVAE                                 (0x1 << 11)    // Low-Power Vertical Active Enable
#define  _DSI_DSI_VMCR_LPHBPE                                (0x1 << 12)    // Low-Power Horizontal Back-Porch Enable
#define  _DSI_DSI_VMCR_LPHFPE                                (0x1 << 13)    // Low-Power Horizontal Front-Porch Enable
#define  _DSI_DSI_VMCR_FBTAAE                                (0x1 << 14)    // Frame Bus-Turn-Around Acknowledge Enable
#define  _DSI_DSI_VMCR_LPCE                                  (0x1 << 15)    // Low-Power Command Enable
#define  _DSI_DSI_VMCR_PGE                                   (0x1 << 16)    // Pattern Generator Enable
#define  _DSI_DSI_VMCR_PGM                                   (0x1 << 20)    // Pattern Generator mode
#define  _DSI_DSI_VMCR_PGO                                   (0x1 << 24)    // Pattern Generator Orientation
#define  _DSI_DSI_VPCR_VPSIZE                                (0x3fff << 0)    // Video Packet Size
#define  _DSI_DSI_VCCR_NUMC                                  (0x1fff << 0)    // Number of Chunks
#define  _DSI_DSI_VNPCR_NPSIZE                               (0x1fff << 0)    // Null Packet Size
#define  _DSI_DSI_VHSACR_HSA                                 (0xfff << 0)    // Horizontal Synchronism Active duration
#define  _DSI_DSI_VHBPCR_HBP                                 (0xfff << 0)    // Horizontal Back-Porch duration
#define  _DSI_DSI_VLCR_HLINE                                 (0x7fff << 0)    // Horizontal Line duration
#define  _DSI_DSI_VVSACR_VSA                                 (0x3ff << 0)    // Vertical Synchronism Active duration
#define  _DSI_DSI_VVBPCR_VBP                                 (0x3ff << 0)    // Vertical Back-Porch duration
#define  _DSI_DSI_VVFPCR_VFP                                 (0x3ff << 0)    // Vertical Front-Porch duration
#define  _DSI_DSI_VVACR_VA                                   (0x3fff << 0)    // Vertical Active duration
#define  _DSI_DSI_LCCR_CMDSIZE                               (0xffff << 0)    // Command Size
#define  _DSI_DSI_CMCR_TEARE                                 (0x1 << 0)    // Tearing Effect Acknowledge Request Enable
#define  _DSI_DSI_CMCR_ARE                                   (0x1 << 1)    // Acknowledge Request Enable
#define  _DSI_DSI_CMCR_GSW0TX                                (0x1 << 8)    // Generic Short Write Zero parameters Transmission
#define  _DSI_DSI_CMCR_GSW1TX                                (0x1 << 9)    // Generic Short Write One parameters Transmission
#define  _DSI_DSI_CMCR_GSW2TX                                (0x1 << 10)    // Generic Short Write Two parameters Transmission
#define  _DSI_DSI_CMCR_GSR0TX                                (0x1 << 11)    // Generic Short Read Zero parameters Transmission
#define  _DSI_DSI_CMCR_GSR1TX                                (0x1 << 12)    // Generic Short Read One parameters Transmission
#define  _DSI_DSI_CMCR_GSR2TX                                (0x1 << 13)    // Generic Short Read Two parameters Transmission
#define  _DSI_DSI_CMCR_GLWTX                                 (0x1 << 14)    // Generic Long Write Transmission
#define  _DSI_DSI_CMCR_DSW0TX                                (0x1 << 16)    // DCS Short Write Zero parameter Transmission
#define  _DSI_DSI_CMCR_DSW1TX                                (0x1 << 17)    // DCS Short Read One parameter Transmission
#define  _DSI_DSI_CMCR_DSR0TX                                (0x1 << 18)    // DCS Short Read Zero parameter Transmission
#define  _DSI_DSI_CMCR_DLWTX                                 (0x1 << 19)    // DCS Long Write Transmission
#define  _DSI_DSI_CMCR_MRDPS                                 (0x1 << 24)    // Maximum Read Packet Size
#define  _DSI_DSI_GHCR_DT                                    (0x3f << 0)    // Type
#define  _DSI_DSI_GHCR_VCID                                  (0x3 << 6)    // Channel
#define  _DSI_DSI_GHCR_WCLSB                                 (0xff << 8)    // WordCount LSB
#define  _DSI_DSI_GHCR_WCMSB                                 (0xff << 16)    // WordCount MSB
#define  _DSI_DSI_GPDR_DATA1                                 (0xff << 0)    // Payload Byte 1
#define  _DSI_DSI_GPDR_DATA2                                 (0xff << 8)    // Payload Byte 2
#define  _DSI_DSI_GPDR_DATA3                                 (0xff << 16)    // Payload Byte 3
#define  _DSI_DSI_GPDR_DATA4                                 (0xff << 24)    // Payload Byte 4
#define  _DSI_DSI_GPSR_CMDFE                                 (0x1 << 0)    // Command FIFO Empty
#define  _DSI_DSI_GPSR_CMDFF                                 (0x1 << 1)    // Command FIFO Full
#define  _DSI_DSI_GPSR_PWRFE                                 (0x1 << 2)    // Payload Write FIFO Empty
#define  _DSI_DSI_GPSR_PWRFF                                 (0x1 << 3)    // Payload Write FIFO Full
#define  _DSI_DSI_GPSR_PRDFE                                 (0x1 << 4)    // Payload Read FIFO Empty
#define  _DSI_DSI_GPSR_PRDFF                                 (0x1 << 5)    // Payload Read FIFO Full
#define  _DSI_DSI_GPSR_RCB                                   (0x1 << 6)    // Read Command Busy
#define  _DSI_DSI_TCCR0_LPRX_TOCNT                           (0xffff << 0)    // Low-power Reception Timeout Counter
#define  _DSI_DSI_TCCR0_HSTX_TOCNT                           (0xffff << 16)    // High-Speed Transmission Timeout Counter
#define  _DSI_DSI_TCCR1_HSRD_TOCNT                           (0xffff << 0)    // High-Speed Read Timeout Counter
#define  _DSI_DSI_TCCR2_LPRD_TOCNT                           (0xffff << 0)    // Low-Power Read Timeout Counter
#define  _DSI_DSI_TCCR3_HSWR_TOCNT                           (0xffff << 0)    // High-Speed Write Timeout Counter
#define  _DSI_DSI_TCCR3_PM                                   (0x1 << 24)    // Presp mode
#define  _DSI_DSI_TCCR4_LSWR_TOCNT                           (0xffff << 0)    // Low-Power Write Timeout Counter
#define  _DSI_DSI_TCCR5_BTA_TOCNT                            (0xffff << 0)    // Bus-Turn-Around Timeout Counter
#define  _DSI_DSI_CLCR_DPCC                                  (0x1 << 0)    // D-PHY Clock Control
#define  _DSI_DSI_CLCR_ACR                                   (0x1 << 1)    // Automatic Clock lane Control
#define  _DSI_DSI_CLTCR_LP2HS_TIME                           (0x3ff << 0)    // Low-Power to High-Speed Time
#define  _DSI_DSI_CLTCR_HS2LP_TIME                           (0x3ff << 16)    // High-Speed to Low-Power Time
#define  _DSI_DSI_DLTCR_MRD_TIME                             (0x7fff << 0)    // Maximum Read Time
#define  _DSI_DSI_DLTCR_LP2HS_TIME                           (0xff << 16)    // Low-Power To High-Speed Time
#define  _DSI_DSI_DLTCR_HS2LP_TIME                           (0xff << 24)    // High-Speed To Low-Power Time
#define  _DSI_DSI_PCTLR_DEN                                  (0x1 << 1)    // Digital Enable
#define  _DSI_DSI_PCTLR_CKE                                  (0x1 << 2)    // Clock Enable
#define  _DSI_DSI_PCONFR_NL                                  (0x3 << 0)    // Number of Lanes
#define  _DSI_DSI_PCONFR_SW_TIME                             (0xff << 8)    // Stop Wait Time
#define  _DSI_DSI_PUCR_URCL                                  (0x1 << 0)    // ULPS Request on Clock Lane
#define  _DSI_DSI_PUCR_UECL                                  (0x1 << 1)    // ULPS Exit on Clock Lane
#define  _DSI_DSI_PUCR_URDL                                  (0x1 << 2)    // ULPS Request on Data Lane
#define  _DSI_DSI_PUCR_UEDL                                  (0x1 << 3)    // ULPS Exit on Data Lane
#define  _DSI_DSI_PTTCR_TX_TRIG                              (0xf << 0)    // Transmission Trigger
#define  _DSI_DSI_PSR_PD                                     (0x1 << 1)    // PHY Direction
#define  _DSI_DSI_PSR_PSSC                                   (0x1 << 2)    // PHY Stop State Clock lane
#define  _DSI_DSI_PSR_UANC                                   (0x1 << 3)    // ULPS Active Not Clock lane
#define  _DSI_DSI_PSR_PSS0                                   (0x1 << 4)    // PHY Stop State lane 0
#define  _DSI_DSI_PSR_UAN0                                   (0x1 << 5)    // ULPS Active Not lane 1
#define  _DSI_DSI_PSR_RUE0                                   (0x1 << 6)    // RX ULPS Escape lane 0
#define  _DSI_DSI_PSR_PSS1                                   (0x1 << 7)    // PHY Stop State lane 1
#define  _DSI_DSI_PSR_UAN1                                   (0x1 << 8)    // ULPS Active Not lane 1
#define  _DSI_DSI_ISR0_AE0                                   (0x1 << 0)    // Acknowledge Error 0
#define  _DSI_DSI_ISR0_AE1                                   (0x1 << 1)    // Acknowledge Error 1
#define  _DSI_DSI_ISR0_AE2                                   (0x1 << 2)    // Acknowledge Error 2
#define  _DSI_DSI_ISR0_AE3                                   (0x1 << 3)    // Acknowledge Error 3
#define  _DSI_DSI_ISR0_AE4                                   (0x1 << 4)    // Acknowledge Error 4
#define  _DSI_DSI_ISR0_AE5                                   (0x1 << 5)    // Acknowledge Error 5
#define  _DSI_DSI_ISR0_AE6                                   (0x1 << 6)    // Acknowledge Error 6
#define  _DSI_DSI_ISR0_AE7                                   (0x1 << 7)    // Acknowledge Error 7
#define  _DSI_DSI_ISR0_AE8                                   (0x1 << 8)    // Acknowledge Error 8
#define  _DSI_DSI_ISR0_AE9                                   (0x1 << 9)    // Acknowledge Error 9
#define  _DSI_DSI_ISR0_AE10                                  (0x1 << 10)    // Acknowledge Error 10
#define  _DSI_DSI_ISR0_AE11                                  (0x1 << 11)    // Acknowledge Error 11
#define  _DSI_DSI_ISR0_AE12                                  (0x1 << 12)    // Acknowledge Error 12
#define  _DSI_DSI_ISR0_AE13                                  (0x1 << 13)    // Acknowledge Error 13
#define  _DSI_DSI_ISR0_AE14                                  (0x1 << 14)    // Acknowledge Error 14
#define  _DSI_DSI_ISR0_AE15                                  (0x1 << 15)    // Acknowledge Error 15
#define  _DSI_DSI_ISR0_PE0                                   (0x1 << 16)    // PHY Error 0
#define  _DSI_DSI_ISR0_PE1                                   (0x1 << 17)    // PHY Error 1
#define  _DSI_DSI_ISR0_PE2                                   (0x1 << 18)    // PHY Error 2
#define  _DSI_DSI_ISR0_PE3                                   (0x1 << 19)    // PHY Error 3
#define  _DSI_DSI_ISR0_PE4                                   (0x1 << 20)    // PHY Error 4
#define  _DSI_DSI_ISR1_TOHSTX                                (0x1 << 0)    // Timeout High-Speed Transmission
#define  _DSI_DSI_ISR1_TOLPRX                                (0x1 << 1)    // Timeout Low-Power Reception
#define  _DSI_DSI_ISR1_ECCSE                                 (0x1 << 2)    // ECC Single-bit Error
#define  _DSI_DSI_ISR1_ECCME                                 (0x1 << 3)    // ECC Multi-bit Error
#define  _DSI_DSI_ISR1_CRCE                                  (0x1 << 4)    // CRC Error
#define  _DSI_DSI_ISR1_PSE                                   (0x1 << 5)    // Packet Size Error
#define  _DSI_DSI_ISR1_EOTPE                                 (0x1 << 6)    // EoTp Error
#define  _DSI_DSI_ISR1_LPWRE                                 (0x1 << 7)    // LTDC Payload Write Error
#define  _DSI_DSI_ISR1_GCWRE                                 (0x1 << 8)    // Generic Command Write Error
#define  _DSI_DSI_ISR1_GPWRE                                 (0x1 << 9)    // Generic Payload Write Error
#define  _DSI_DSI_ISR1_GPTXE                                 (0x1 << 10)    // Generic Payload Transmit Error
#define  _DSI_DSI_ISR1_GPRDE                                 (0x1 << 11)    // Generic Payload Read Error
#define  _DSI_DSI_ISR1_GPRXE                                 (0x1 << 12)    // Generic Payload Receive Error
#define  _DSI_DSI_IER0_AE0IE                                 (0x1 << 0)    // Acknowledge Error 0 Interrupt Enable
#define  _DSI_DSI_IER0_AE1IE                                 (0x1 << 1)    // Acknowledge Error 1 Interrupt Enable
#define  _DSI_DSI_IER0_AE2IE                                 (0x1 << 2)    // Acknowledge Error 2 Interrupt Enable
#define  _DSI_DSI_IER0_AE3IE                                 (0x1 << 3)    // Acknowledge Error 3 Interrupt Enable
#define  _DSI_DSI_IER0_AE4IE                                 (0x1 << 4)    // Acknowledge Error 4 Interrupt Enable
#define  _DSI_DSI_IER0_AE5IE                                 (0x1 << 5)    // Acknowledge Error 5 Interrupt Enable
#define  _DSI_DSI_IER0_AE6IE                                 (0x1 << 6)    // Acknowledge Error 6 Interrupt Enable
#define  _DSI_DSI_IER0_AE7IE                                 (0x1 << 7)    // Acknowledge Error 7 Interrupt Enable
#define  _DSI_DSI_IER0_AE8IE                                 (0x1 << 8)    // Acknowledge Error 8 Interrupt Enable
#define  _DSI_DSI_IER0_AE9IE                                 (0x1 << 9)    // Acknowledge Error 9 Interrupt Enable
#define  _DSI_DSI_IER0_AE10IE                                (0x1 << 10)    // Acknowledge Error 10 Interrupt Enable
#define  _DSI_DSI_IER0_AE11IE                                (0x1 << 11)    // Acknowledge Error 11 Interrupt Enable
#define  _DSI_DSI_IER0_AE12IE                                (0x1 << 12)    // Acknowledge Error 12 Interrupt Enable
#define  _DSI_DSI_IER0_AE13IE                                (0x1 << 13)    // Acknowledge Error 13 Interrupt Enable
#define  _DSI_DSI_IER0_AE14IE                                (0x1 << 14)    // Acknowledge Error 14 Interrupt Enable
#define  _DSI_DSI_IER0_AE15IE                                (0x1 << 15)    // Acknowledge Error 15 Interrupt Enable
#define  _DSI_DSI_IER0_PE0IE                                 (0x1 << 16)    // PHY Error 0 Interrupt Enable
#define  _DSI_DSI_IER0_PE1IE                                 (0x1 << 17)    // PHY Error 1 Interrupt Enable
#define  _DSI_DSI_IER0_PE2IE                                 (0x1 << 18)    // PHY Error 2 Interrupt Enable
#define  _DSI_DSI_IER0_PE3IE                                 (0x1 << 19)    // PHY Error 3 Interrupt Enable
#define  _DSI_DSI_IER0_PE4IE                                 (0x1 << 20)    // PHY Error 4 Interrupt Enable
#define  _DSI_DSI_IER1_TOHSTXIE                              (0x1 << 0)    // Timeout High-Speed Transmission Interrupt Enable
#define  _DSI_DSI_IER1_TOLPRXIE                              (0x1 << 1)    // Timeout Low-Power Reception Interrupt Enable
#define  _DSI_DSI_IER1_ECCSEIE                               (0x1 << 2)    // ECC Single-bit Error Interrupt Enable
#define  _DSI_DSI_IER1_ECCMEIE                               (0x1 << 3)    // ECC Multi-bit Error Interrupt Enable
#define  _DSI_DSI_IER1_CRCEIE                                (0x1 << 4)    // CRC Error Interrupt Enable
#define  _DSI_DSI_IER1_PSEIE                                 (0x1 << 5)    // Packet Size Error Interrupt Enable
#define  _DSI_DSI_IER1_EOTPEIE                               (0x1 << 6)    // EoTp Error Interrupt Enable
#define  _DSI_DSI_IER1_LPWREIE                               (0x1 << 7)    // LTDC Payload Write Error Interrupt Enable
#define  _DSI_DSI_IER1_GCWREIE                               (0x1 << 8)    // Generic Command Write Error Interrupt Enable
#define  _DSI_DSI_IER1_GPWREIE                               (0x1 << 9)    // Generic Payload Write Error Interrupt Enable
#define  _DSI_DSI_IER1_GPTXEIE                               (0x1 << 10)    // Generic Payload Transmit Error Interrupt Enable
#define  _DSI_DSI_IER1_GPRDEIE                               (0x1 << 11)    // Generic Payload Read Error Interrupt Enable
#define  _DSI_DSI_IER1_GPRXEIE                               (0x1 << 12)    // Generic Payload Receive Error Interrupt Enable
#define  _DSI_DSI_FIR0_FAE0                                  (0x1 << 0)    // Force Acknowledge Error 0
#define  _DSI_DSI_FIR0_FAE1                                  (0x1 << 1)    // Force Acknowledge Error 1
#define  _DSI_DSI_FIR0_FAE2                                  (0x1 << 2)    // Force Acknowledge Error 2
#define  _DSI_DSI_FIR0_FAE3                                  (0x1 << 3)    // Force Acknowledge Error 3
#define  _DSI_DSI_FIR0_FAE4                                  (0x1 << 4)    // Force Acknowledge Error 4
#define  _DSI_DSI_FIR0_FAE5                                  (0x1 << 5)    // Force Acknowledge Error 5
#define  _DSI_DSI_FIR0_FAE6                                  (0x1 << 6)    // Force Acknowledge Error 6
#define  _DSI_DSI_FIR0_FAE7                                  (0x1 << 7)    // Force Acknowledge Error 7
#define  _DSI_DSI_FIR0_FAE8                                  (0x1 << 8)    // Force Acknowledge Error 8
#define  _DSI_DSI_FIR0_FAE9                                  (0x1 << 9)    // Force Acknowledge Error 9
#define  _DSI_DSI_FIR0_FAE10                                 (0x1 << 10)    // Force Acknowledge Error 10
#define  _DSI_DSI_FIR0_FAE11                                 (0x1 << 11)    // Force Acknowledge Error 11
#define  _DSI_DSI_FIR0_FAE12                                 (0x1 << 12)    // Force Acknowledge Error 12
#define  _DSI_DSI_FIR0_FAE13                                 (0x1 << 13)    // Force Acknowledge Error 13
#define  _DSI_DSI_FIR0_FAE14                                 (0x1 << 14)    // Force Acknowledge Error 14
#define  _DSI_DSI_FIR0_FAE15                                 (0x1 << 15)    // Force Acknowledge Error 15
#define  _DSI_DSI_FIR0_FPE0                                  (0x1 << 16)    // Force PHY Error 0
#define  _DSI_DSI_FIR0_FPE1                                  (0x1 << 17)    // Force PHY Error 1
#define  _DSI_DSI_FIR0_FPE2                                  (0x1 << 18)    // Force PHY Error 2
#define  _DSI_DSI_FIR0_FPE3                                  (0x1 << 19)    // Force PHY Error 3
#define  _DSI_DSI_FIR0_FPE4                                  (0x1 << 20)    // Force PHY Error 4
#define  _DSI_DSI_FIR1_FTOHSTX                               (0x1 << 0)    // Force Timeout High-Speed Transmission
#define  _DSI_DSI_FIR1_FTOLPRX                               (0x1 << 1)    // Force Timeout Low-Power Reception
#define  _DSI_DSI_FIR1_FECCSE                                (0x1 << 2)    // Force ECC Single-bit Error
#define  _DSI_DSI_FIR1_FECCME                                (0x1 << 3)    // Force ECC Multi-bit Error
#define  _DSI_DSI_FIR1_FCRCE                                 (0x1 << 4)    // Force CRC Error
#define  _DSI_DSI_FIR1_FPSE                                  (0x1 << 5)    // Force Packet Size Error
#define  _DSI_DSI_FIR1_FEOTPE                                (0x1 << 6)    // Force EoTp Error
#define  _DSI_DSI_FIR1_FLPWRE                                (0x1 << 7)    // Force LTDC Payload Write Error
#define  _DSI_DSI_FIR1_FGCWRE                                (0x1 << 8)    // Force Generic Command Write Error
#define  _DSI_DSI_FIR1_FGPWRE                                (0x1 << 9)    // Force Generic Payload Write Error
#define  _DSI_DSI_FIR1_FGPTXE                                (0x1 << 10)    // Force Generic Payload Transmit Error
#define  _DSI_DSI_FIR1_FGPRDE                                (0x1 << 11)    // Force Generic Payload Read Error
#define  _DSI_DSI_FIR1_FGPRXE                                (0x1 << 12)    // Force Generic Payload Receive Error
#define  _DSI_DSI_VSCR_EN                                    (0x1 << 0)    // Enable
#define  _DSI_DSI_VSCR_UR                                    (0x1 << 8)    // Update Register
#define  _DSI_DSI_LCVCIDR_VCID                               (0x3 << 0)    // Virtual Channel ID
#define  _DSI_DSI_LCCCR_COLC                                 (0xf << 0)    // Color Coding
#define  _DSI_DSI_LCCCR_LPE                                  (0x1 << 8)    // Loosely Packed Enable
#define  _DSI_DSI_LPMCCR_VLPSIZE                             (0xff << 0)    // VACT Largest Packet Size
#define  _DSI_DSI_LPMCCR_LPSIZE                              (0xff << 16)    // Largest Packet Size
#define  _DSI_DSI_VMCCR_VMT                                  (0x3 << 0)    // Video mode Type
#define  _DSI_DSI_VMCCR_LPVSAE                               (0x1 << 2)    // Low-Power Vertical Sync time Enable
#define  _DSI_DSI_VMCCR_LPVBPE                               (0x1 << 3)    // Low-power Vertical Back-Porch Enable
#define  _DSI_DSI_VMCCR_LPVFPE                               (0x1 << 4)    // Low-power Vertical Front-Porch Enable
#define  _DSI_DSI_VMCCR_LPVAE                                (0x1 << 5)    // Low-Power Vertical Active Enable
#define  _DSI_DSI_VMCCR_LPHBPE                               (0x1 << 6)    // Low-power Horizontal Back-Porch Enable
#define  _DSI_DSI_VMCCR_LPHFE                                (0x1 << 7)    // Low-Power Horizontal Front-Porch Enable
#define  _DSI_DSI_VMCCR_FBTAAE                               (0x1 << 8)    // Frame BTA Acknowledge Enable
#define  _DSI_DSI_VMCCR_LPCE                                 (0x1 << 9)    // Low-Power Command Enable
#define  _DSI_DSI_VPCCR_VPSIZE                               (0x3fff << 0)    // Video Packet Size
#define  _DSI_DSI_VCCCR_NUMC                                 (0x1fff << 0)    // Number of Chunks
#define  _DSI_DSI_VNPCCR_NPSIZE                              (0x1fff << 0)    // Null Packet Size
#define  _DSI_DSI_VHSACCR_HSA                                (0xfff << 0)    // Horizontal Synchronism Active duration
#define  _DSI_DSI_VHBPCCR_HBP                                (0xfff << 0)    // Horizontal Back-Porch duration
#define  _DSI_DSI_VLCCR_HLINE                                (0x7fff << 0)    // Horizontal Line duration
#define  _DSI_DSI_VVSACCR_VSA                                (0x3ff << 0)    // Vertical Synchronism Active duration
#define  _DSI_DSI_VVBPCCR_VBP                                (0x3ff << 0)    // Vertical Back-Porch duration
#define  _DSI_DSI_VVFPCCR_VFP                                (0x3ff << 0)    // Vertical Front-Porch duration
#define  _DSI_DSI_VVACCR_VA                                  (0x3fff << 0)    // Vertical Active duration
#define  _DSI_DSI_WCFGR_VSPOL                                (0x1 << 7)    // VSync Polarity
#define  _DSI_DSI_WCFGR_AR                                   (0x1 << 6)    // Automatic Refresh
#define  _DSI_DSI_WCFGR_TEPOL                                (0x1 << 5)    // TE Polarity
#define  _DSI_DSI_WCFGR_TESRC                                (0x1 << 4)    // TE Source
#define  _DSI_DSI_WCFGR_COLMUX                               (0x7 << 1)    // Color Multiplexing
#define  _DSI_DSI_WCFGR_DSIM                                 (0x1 << 0)    // DSI Mode
#define  _DSI_DSI_WCR_DSIEN                                  (0x1 << 3)    // DSI Enable
#define  _DSI_DSI_WCR_LTDCEN                                 (0x1 << 2)    // LTDC Enable
#define  _DSI_DSI_WCR_SHTDN                                  (0x1 << 1)    // Shutdown
#define  _DSI_DSI_WCR_COLM                                   (0x1 << 0)    // Color Mode
#define  _DSI_DSI_WIER_RRIE                                  (0x1 << 13)    // Regulator Ready Interrupt Enable
#define  _DSI_DSI_WIER_PLLUIE                                (0x1 << 10)    // PLL Unlock Interrupt Enable
#define  _DSI_DSI_WIER_PLLLIE                                (0x1 << 9)    // PLL Lock Interrupt Enable
#define  _DSI_DSI_WIER_ERIE                                  (0x1 << 1)    // End of Refresh Interrupt Enable
#define  _DSI_DSI_WIER_TEIE                                  (0x1 << 0)    // Tearing Effect Interrupt Enable
#define  _DSI_DSI_WISR_RRIF                                  (0x1 << 13)    // Regulator Ready Interrupt Flag
#define  _DSI_DSI_WISR_RRS                                   (0x1 << 12)    // Regulator Ready Status
#define  _DSI_DSI_WISR_PLLUIF                                (0x1 << 10)    // PLL Unlock Interrupt Flag
#define  _DSI_DSI_WISR_PLLLIF                                (0x1 << 9)    // PLL Lock Interrupt Flag
#define  _DSI_DSI_WISR_PLLLS                                 (0x1 << 8)    // PLL Lock Status
#define  _DSI_DSI_WISR_BUSY                                  (0x1 << 2)    // Busy Flag
#define  _DSI_DSI_WISR_ERIF                                  (0x1 << 1)    // End of Refresh Interrupt Flag
#define  _DSI_DSI_WISR_TEIF                                  (0x1 << 0)    // Tearing Effect Interrupt Flag
#define  _DSI_DSI_WIFCR_CRRIF                                (0x1 << 13)    // Clear Regulator Ready Interrupt Flag
#define  _DSI_DSI_WIFCR_CPLLUIF                              (0x1 << 10)    // Clear PLL Unlock Interrupt Flag
#define  _DSI_DSI_WIFCR_CPLLLIF                              (0x1 << 9)    // Clear PLL Lock Interrupt Flag
#define  _DSI_DSI_WIFCR_CERIF                                (0x1 << 1)    // Clear End of Refresh Interrupt Flag
#define  _DSI_DSI_WIFCR_CTEIF                                (0x1 << 0)    // Clear Tearing Effect Interrupt Flag
#define  _DSI_DSI_WPCR1_TCLKPOSTEN                           (0x1 << 27)    // custom time for tCLK-POST Enable
#define  _DSI_DSI_WPCR1_TLPXCEN                              (0x1 << 26)    // custom time for tLPX for Clock lane Enable
#define  _DSI_DSI_WPCR1_THSEXITEN                            (0x1 << 25)    // custom time for tHS-EXIT Enable
#define  _DSI_DSI_WPCR1_TLPXDEN                              (0x1 << 24)    // custom time for tLPX for Data lanes Enable
#define  _DSI_DSI_WPCR1_THSZEROEN                            (0x1 << 23)    // custom time for tHS-ZERO Enable
#define  _DSI_DSI_WPCR1_THSTRAILEN                           (0x1 << 22)    // custom time for tHS-TRAIL Enable
#define  _DSI_DSI_WPCR1_THSPREPEN                            (0x1 << 21)    // custom time for tHS-PREPARE Enable
#define  _DSI_DSI_WPCR1_TCLKZEROEN                           (0x1 << 20)    // custom time for tCLK-ZERO Enable
#define  _DSI_DSI_WPCR1_TCLKPREPEN                           (0x1 << 19)    // custom time for tCLK-PREPARE Enable
#define  _DSI_DSI_WPCR1_PDEN                                 (0x1 << 18)    // Pull-Down Enable
#define  _DSI_DSI_WPCR1_TDDL                                 (0x1 << 16)    // Turn Disable Data Lanes
#define  _DSI_DSI_WPCR1_CDOFFDL                              (0x1 << 14)    // Contention Detection OFF on Data Lanes
#define  _DSI_DSI_WPCR1_FTXSMDL                              (0x1 << 13)    // Force in TX Stop Mode the Data Lanes
#define  _DSI_DSI_WPCR1_FTXSMCL                              (0x1 << 12)    // Force in TX Stop Mode the Clock Lane
#define  _DSI_DSI_WPCR1_HSIDL1                               (0x1 << 11)    // Invert the High-Speed data signal on Data Lane 1
#define  _DSI_DSI_WPCR1_HSIDL0                               (0x1 << 10)    // Invert the Hight-Speed data signal on Data Lane 0
#define  _DSI_DSI_WPCR1_HSICL                                (0x1 << 9)    // Invert Hight-Speed data signal on Clock Lane
#define  _DSI_DSI_WPCR1_SWDL1                                (0x1 << 8)    // Swap Data Lane 1 pins
#define  _DSI_DSI_WPCR1_SWDL0                                (0x1 << 7)    // Swap Data Lane 0 pins
#define  _DSI_DSI_WPCR1_SWCL                                 (0x1 << 6)    // Swap Clock Lane pins
#define  _DSI_DSI_WPCR1_UIX4                                 (0x3f << 0)    // Unit Interval multiplied by 4
#define  _DSI_DSI_WPCR2_LPRXFT                               (0x3 << 25)    // Low-Power RX low-pass Filtering Tuning
#define  _DSI_DSI_WPCR2_FLPRXLPM                             (0x1 << 22)    // Forces LP Receiver in Low-Power Mode
#define  _DSI_DSI_WPCR2_HSTXSRCDL                            (0x3 << 18)    // High-Speed Transmission Slew Rate Control on Data Lanes
#define  _DSI_DSI_WPCR2_HSTXSRCCL                            (0x3 << 16)    // High-Speed Transmission Slew Rate Control on Clock Lane
#define  _DSI_DSI_WPCR2_SDCC                                 (0x1 << 12)    // SDD Control
#define  _DSI_DSI_WPCR2_LPSRDL                               (0x3 << 8)    // Low-Power transmission Slew Rate Compensation on Data Lanes
#define  _DSI_DSI_WPCR2_LPSRCL                               (0x3 << 6)    // Low-Power transmission Slew Rate Compensation on Clock Lane
#define  _DSI_DSI_WPCR2_HSTXDLL                              (0x3 << 2)    // High-Speed Transmission Delay on Data Lanes
#define  _DSI_DSI_WPCR2_HSTXDCL                              (0x3 << 0)    // High-Speed Transmission Delay on Clock Lane
#define  _DSI_DSI_WPCR3_THSTRAIL                             (0xff << 24)    // tHSTRAIL
#define  _DSI_DSI_WPCR3_THSPREP                              (0xff << 16)    // tHS-PREPARE
#define  _DSI_DSI_WPCR3_TCLKZEO                              (0xff << 8)    // tCLK-ZERO
#define  _DSI_DSI_WPCR3_TCLKPREP                             (0xff << 0)    // tCLK-PREPARE
#define  _DSI_DSI_WPCR4_TLPXC                                (0xff << 24)    // tLPXC for Clock lane
#define  _DSI_DSI_WPCR4_THSEXIT                              (0xff << 16)    // tHSEXIT
#define  _DSI_DSI_WPCR4_TLPXD                                (0xff << 8)    // tLPX for Data lanes
#define  _DSI_DSI_WPCR4_THSZERO                              (0xff << 0)    // tHS-ZERO
#define  _DSI_DSI_WPCR5_THSZERO                              (0xff << 0)    // tCLK-POST
#define  _DSI_DSI_WRPCR_REGEN                                (0x1 << 24)    // Regulator Enable
#define  _DSI_DSI_WRPCR_ODF                                  (0x3 << 16)    // PLL Output Division Factor
#define  _DSI_DSI_WRPCR_IDF                                  (0xf << 11)    // PLL Input Division Factor
#define  _DSI_DSI_WRPCR_NDIV                                 (0x7f << 2)    // PLL Loop Division Factor
#define  _DSI_DSI_WRPCR_PLLEN                                (0x1 << 0)    // PLL Enable

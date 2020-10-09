#define Get_OTG_FS_GLOBAL_OTG_FS_GOTGCTL(FLAG)(*(uint32_t*)0x50000000 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GOTGINT(FLAG)(*(uint32_t*)0x50000004 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GAHBCFG(FLAG)(*(uint32_t*)0x50000008 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GUSBCFG(FLAG)(*(uint32_t*)0x5000000c |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GRSTCTL(FLAG)(*(uint32_t*)0x50000010 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GINTSTS(FLAG)(*(uint32_t*)0x50000014 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GINTMSK(FLAG)(*(uint32_t*)0x50000018 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device(FLAG)(*(uint32_t*)0x5000001c |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host(FLAG)(*(uint32_t*)0x5000001c |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GRXFSIZ(FLAG)(*(uint32_t*)0x50000024 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device(FLAG)(*(uint32_t*)0x50000028 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host(FLAG)(*(uint32_t*)0x50000028 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_HNPTXSTS(FLAG)(*(uint32_t*)0x5000002c |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GCCFG(FLAG) (*(uint32_t*)0x50000038 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_CID(FLAG)   (*(uint32_t*)0x5000003c |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ(FLAG)(*(uint32_t*)0x50000100 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_DIEPTXF1(FLAG)(*(uint32_t*)0x50000104 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_DIEPTXF2(FLAG)(*(uint32_t*)0x50000108 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_DIEPTXF3(FLAG)(*(uint32_t*)0x5000010c |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device(FLAG)(*(uint32_t*)0x50000020 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host(FLAG)(*(uint32_t*)0x50000020 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GI2CCTL(FLAG)(*(uint32_t*)0x50000030 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GPWRDN(FLAG)(*(uint32_t*)0x50000058 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GADPCTL(FLAG)(*(uint32_t*)0x50000060 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_DIEPTXF4(FLAG)(*(uint32_t*)0x50000110 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_DIEPTXF5(FLAG)(*(uint32_t*)0x50000114 |= FLAG)
#define Get_OTG_FS_GLOBAL_OTG_FS_GLPMCFG(FLAG)(*(uint32_t*)0x50000054 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCFG(FLAG)    (*(uint32_t*)0x50000400 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HFIR(FLAG)    (*(uint32_t*)0x50000404 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HFNUM(FLAG)   (*(uint32_t*)0x50000408 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HPTXSTS(FLAG) (*(uint32_t*)0x50000410 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HAINT(FLAG)   (*(uint32_t*)0x50000414 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HAINTMSK(FLAG)(*(uint32_t*)0x50000418 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HPRT(FLAG)    (*(uint32_t*)0x50000440 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR0(FLAG) (*(uint32_t*)0x50000500 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR1(FLAG) (*(uint32_t*)0x50000520 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR2(FLAG) (*(uint32_t*)0x50000540 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR3(FLAG) (*(uint32_t*)0x50000560 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR4(FLAG) (*(uint32_t*)0x50000580 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR5(FLAG) (*(uint32_t*)0x500005a0 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR6(FLAG) (*(uint32_t*)0x500005c0 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR7(FLAG) (*(uint32_t*)0x500005e0 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT0(FLAG)  (*(uint32_t*)0x50000508 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT1(FLAG)  (*(uint32_t*)0x50000528 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT2(FLAG)  (*(uint32_t*)0x50000548 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT3(FLAG)  (*(uint32_t*)0x50000568 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT4(FLAG)  (*(uint32_t*)0x50000588 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT5(FLAG)  (*(uint32_t*)0x500005a8 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT6(FLAG)  (*(uint32_t*)0x500005c8 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT7(FLAG)  (*(uint32_t*)0x500005e8 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK0(FLAG)(*(uint32_t*)0x5000050c |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK1(FLAG)(*(uint32_t*)0x5000052c |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK2(FLAG)(*(uint32_t*)0x5000054c |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK3(FLAG)(*(uint32_t*)0x5000056c |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK4(FLAG)(*(uint32_t*)0x5000058c |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK5(FLAG)(*(uint32_t*)0x500005ac |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK6(FLAG)(*(uint32_t*)0x500005cc |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK7(FLAG)(*(uint32_t*)0x500005ec |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ0(FLAG) (*(uint32_t*)0x50000510 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ1(FLAG) (*(uint32_t*)0x50000530 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ2(FLAG) (*(uint32_t*)0x50000550 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ3(FLAG) (*(uint32_t*)0x50000570 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ4(FLAG) (*(uint32_t*)0x50000590 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ5(FLAG) (*(uint32_t*)0x500005b0 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ6(FLAG) (*(uint32_t*)0x500005d0 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ7(FLAG) (*(uint32_t*)0x500005f0 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR8(FLAG) (*(uint32_t*)0x500005f4 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT8(FLAG)  (*(uint32_t*)0x500005f8 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK8(FLAG)(*(uint32_t*)0x500005fc |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ8(FLAG) (*(uint32_t*)0x50000600 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR9(FLAG) (*(uint32_t*)0x50000604 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT9(FLAG)  (*(uint32_t*)0x50000608 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK9(FLAG)(*(uint32_t*)0x5000060c |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ9(FLAG) (*(uint32_t*)0x50000610 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR10(FLAG)(*(uint32_t*)0x50000614 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT10(FLAG) (*(uint32_t*)0x50000618 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK10(FLAG)(*(uint32_t*)0x5000061c |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ10(FLAG)(*(uint32_t*)0x50000620 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCCHAR11(FLAG)(*(uint32_t*)0x50000624 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINT11(FLAG) (*(uint32_t*)0x50000628 |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCINTMSK11(FLAG)(*(uint32_t*)0x5000062c |= FLAG)
#define Get_OTG_FS_HOST_OTG_FS_HCTSIZ11(FLAG)(*(uint32_t*)0x50000630 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DCFG(FLAG)  (*(uint32_t*)0x50000800 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DCTL(FLAG)  (*(uint32_t*)0x50000804 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DSTS(FLAG)  (*(uint32_t*)0x50000808 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPMSK(FLAG)(*(uint32_t*)0x50000810 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPMSK(FLAG)(*(uint32_t*)0x50000814 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DAINT(FLAG) (*(uint32_t*)0x50000818 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DAINTMSK(FLAG)(*(uint32_t*)0x5000081c |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DVBUSDIS(FLAG)(*(uint32_t*)0x50000828 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DVBUSPULSE(FLAG)(*(uint32_t*)0x5000082c |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPEMPMSK(FLAG)(*(uint32_t*)0x50000834 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPCTL0(FLAG)(*(uint32_t*)0x50000900 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPCTL1(FLAG)(*(uint32_t*)0x50000920 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPCTL2(FLAG)(*(uint32_t*)0x50000940 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPCTL3(FLAG)(*(uint32_t*)0x50000960 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPCTL0(FLAG)(*(uint32_t*)0x50000b00 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPCTL1(FLAG)(*(uint32_t*)0x50000b20 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPCTL2(FLAG)(*(uint32_t*)0x50000b40 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPCTL3(FLAG)(*(uint32_t*)0x50000b60 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPINT0(FLAG)(*(uint32_t*)0x50000908 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPINT1(FLAG)(*(uint32_t*)0x50000928 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPINT2(FLAG)(*(uint32_t*)0x50000948 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPINT3(FLAG)(*(uint32_t*)0x50000968 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPINT0(FLAG)(*(uint32_t*)0x50000b08 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPINT1(FLAG)(*(uint32_t*)0x50000b28 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPINT2(FLAG)(*(uint32_t*)0x50000b48 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPINT3(FLAG)(*(uint32_t*)0x50000b68 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ0(FLAG)(*(uint32_t*)0x50000910 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ0(FLAG)(*(uint32_t*)0x50000b10 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ1(FLAG)(*(uint32_t*)0x50000930 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ2(FLAG)(*(uint32_t*)0x50000950 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ3(FLAG)(*(uint32_t*)0x50000970 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DTXFSTS0(FLAG)(*(uint32_t*)0x50000918 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DTXFSTS1(FLAG)(*(uint32_t*)0x50000938 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DTXFSTS2(FLAG)(*(uint32_t*)0x50000958 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DTXFSTS3(FLAG)(*(uint32_t*)0x50000978 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ1(FLAG)(*(uint32_t*)0x50000b30 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ2(FLAG)(*(uint32_t*)0x50000b50 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ3(FLAG)(*(uint32_t*)0x50000b70 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPCTL4(FLAG)(*(uint32_t*)0x50000980 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPINT4(FLAG)(*(uint32_t*)0x50000988 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ4(FLAG)(*(uint32_t*)0x50000994 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DTXFSTS4(FLAG)(*(uint32_t*)0x5000099c |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPCTL5(FLAG)(*(uint32_t*)0x500009a0 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPINT5(FLAG)(*(uint32_t*)0x500009a8 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ55(FLAG)(*(uint32_t*)0x500009b0 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DTXFSTS55(FLAG)(*(uint32_t*)0x500009b8 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPCTL4(FLAG)(*(uint32_t*)0x50000b78 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPINT4(FLAG)(*(uint32_t*)0x50000b80 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ4(FLAG)(*(uint32_t*)0x50000b88 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPCTL5(FLAG)(*(uint32_t*)0x50000b90 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPINT5(FLAG)(*(uint32_t*)0x50000b98 |= FLAG)
#define Get_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ5(FLAG)(*(uint32_t*)0x50000ba0 |= FLAG)
#define Get_OTG_FS_PWRCLK_OTG_FS_PCGCCTL(FLAG)(*(uint32_t*)0x50000e00 |= FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GOTGCTL(FLAG)(*(uint32_t*)0x50000000 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GOTGCTL(FLAG)(*(uint32_t*)0x50000000 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GOTGINT(FLAG)(*(uint32_t*)0x50000004 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GOTGINT(FLAG)(*(uint32_t*)0x50000004 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GAHBCFG(FLAG)(*(uint32_t*)0x50000008 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GAHBCFG(FLAG)(*(uint32_t*)0x50000008 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GUSBCFG(FLAG)(*(uint32_t*)0x5000000c &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GUSBCFG(FLAG)(*(uint32_t*)0x5000000c |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GRSTCTL(FLAG)(*(uint32_t*)0x50000010 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GRSTCTL(FLAG)(*(uint32_t*)0x50000010 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GINTSTS(FLAG)(*(uint32_t*)0x50000014 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GINTSTS(FLAG)(*(uint32_t*)0x50000014 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GINTMSK(FLAG)(*(uint32_t*)0x50000018 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GINTMSK(FLAG)(*(uint32_t*)0x50000018 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device(FLAG)(*(uint32_t*)0x5000001c &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device(FLAG)(*(uint32_t*)0x5000001c |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host(FLAG)(*(uint32_t*)0x5000001c &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host(FLAG)(*(uint32_t*)0x5000001c |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GRXFSIZ(FLAG)(*(uint32_t*)0x50000024 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GRXFSIZ(FLAG)(*(uint32_t*)0x50000024 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device(FLAG)(*(uint32_t*)0x50000028 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device(FLAG)(*(uint32_t*)0x50000028 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host(FLAG)(*(uint32_t*)0x50000028 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host(FLAG)(*(uint32_t*)0x50000028 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_HNPTXSTS(FLAG)(*(uint32_t*)0x5000002c &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_HNPTXSTS(FLAG)(*(uint32_t*)0x5000002c |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GCCFG(FLAG) (*(uint32_t*)0x50000038 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GCCFG(FLAG) (*(uint32_t*)0x50000038 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_CID(FLAG)   (*(uint32_t*)0x5000003c &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_CID(FLAG)   (*(uint32_t*)0x5000003c |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ(FLAG)(*(uint32_t*)0x50000100 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ(FLAG)(*(uint32_t*)0x50000100 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_DIEPTXF1(FLAG)(*(uint32_t*)0x50000104 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_DIEPTXF1(FLAG)(*(uint32_t*)0x50000104 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_DIEPTXF2(FLAG)(*(uint32_t*)0x50000108 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_DIEPTXF2(FLAG)(*(uint32_t*)0x50000108 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_DIEPTXF3(FLAG)(*(uint32_t*)0x5000010c &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_DIEPTXF3(FLAG)(*(uint32_t*)0x5000010c |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device(FLAG)(*(uint32_t*)0x50000020 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device(FLAG)(*(uint32_t*)0x50000020 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host(FLAG)(*(uint32_t*)0x50000020 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host(FLAG)(*(uint32_t*)0x50000020 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GI2CCTL(FLAG)(*(uint32_t*)0x50000030 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GI2CCTL(FLAG)(*(uint32_t*)0x50000030 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GPWRDN(FLAG)(*(uint32_t*)0x50000058 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GPWRDN(FLAG)(*(uint32_t*)0x50000058 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GADPCTL(FLAG)(*(uint32_t*)0x50000060 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GADPCTL(FLAG)(*(uint32_t*)0x50000060 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_DIEPTXF4(FLAG)(*(uint32_t*)0x50000110 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_DIEPTXF4(FLAG)(*(uint32_t*)0x50000110 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_DIEPTXF5(FLAG)(*(uint32_t*)0x50000114 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_DIEPTXF5(FLAG)(*(uint32_t*)0x50000114 |= ~FLAG)
#define Set_OTG_FS_GLOBAL_OTG_FS_GLPMCFG(FLAG)(*(uint32_t*)0x50000054 &= FLAG)
#define Clr_OTG_FS_GLOBAL_OTG_FS_GLPMCFG(FLAG)(*(uint32_t*)0x50000054 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCFG(FLAG)    (*(uint32_t*)0x50000400 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCFG(FLAG)    (*(uint32_t*)0x50000400 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HFIR(FLAG)    (*(uint32_t*)0x50000404 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HFIR(FLAG)    (*(uint32_t*)0x50000404 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HFNUM(FLAG)   (*(uint32_t*)0x50000408 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HFNUM(FLAG)   (*(uint32_t*)0x50000408 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HPTXSTS(FLAG) (*(uint32_t*)0x50000410 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HPTXSTS(FLAG) (*(uint32_t*)0x50000410 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HAINT(FLAG)   (*(uint32_t*)0x50000414 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HAINT(FLAG)   (*(uint32_t*)0x50000414 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HAINTMSK(FLAG)(*(uint32_t*)0x50000418 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HAINTMSK(FLAG)(*(uint32_t*)0x50000418 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HPRT(FLAG)    (*(uint32_t*)0x50000440 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HPRT(FLAG)    (*(uint32_t*)0x50000440 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR0(FLAG) (*(uint32_t*)0x50000500 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR0(FLAG) (*(uint32_t*)0x50000500 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR1(FLAG) (*(uint32_t*)0x50000520 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR1(FLAG) (*(uint32_t*)0x50000520 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR2(FLAG) (*(uint32_t*)0x50000540 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR2(FLAG) (*(uint32_t*)0x50000540 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR3(FLAG) (*(uint32_t*)0x50000560 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR3(FLAG) (*(uint32_t*)0x50000560 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR4(FLAG) (*(uint32_t*)0x50000580 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR4(FLAG) (*(uint32_t*)0x50000580 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR5(FLAG) (*(uint32_t*)0x500005a0 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR5(FLAG) (*(uint32_t*)0x500005a0 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR6(FLAG) (*(uint32_t*)0x500005c0 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR6(FLAG) (*(uint32_t*)0x500005c0 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR7(FLAG) (*(uint32_t*)0x500005e0 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR7(FLAG) (*(uint32_t*)0x500005e0 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT0(FLAG)  (*(uint32_t*)0x50000508 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT0(FLAG)  (*(uint32_t*)0x50000508 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT1(FLAG)  (*(uint32_t*)0x50000528 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT1(FLAG)  (*(uint32_t*)0x50000528 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT2(FLAG)  (*(uint32_t*)0x50000548 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT2(FLAG)  (*(uint32_t*)0x50000548 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT3(FLAG)  (*(uint32_t*)0x50000568 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT3(FLAG)  (*(uint32_t*)0x50000568 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT4(FLAG)  (*(uint32_t*)0x50000588 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT4(FLAG)  (*(uint32_t*)0x50000588 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT5(FLAG)  (*(uint32_t*)0x500005a8 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT5(FLAG)  (*(uint32_t*)0x500005a8 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT6(FLAG)  (*(uint32_t*)0x500005c8 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT6(FLAG)  (*(uint32_t*)0x500005c8 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT7(FLAG)  (*(uint32_t*)0x500005e8 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT7(FLAG)  (*(uint32_t*)0x500005e8 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK0(FLAG)(*(uint32_t*)0x5000050c &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK0(FLAG)(*(uint32_t*)0x5000050c |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK1(FLAG)(*(uint32_t*)0x5000052c &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK1(FLAG)(*(uint32_t*)0x5000052c |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK2(FLAG)(*(uint32_t*)0x5000054c &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK2(FLAG)(*(uint32_t*)0x5000054c |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK3(FLAG)(*(uint32_t*)0x5000056c &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK3(FLAG)(*(uint32_t*)0x5000056c |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK4(FLAG)(*(uint32_t*)0x5000058c &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK4(FLAG)(*(uint32_t*)0x5000058c |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK5(FLAG)(*(uint32_t*)0x500005ac &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK5(FLAG)(*(uint32_t*)0x500005ac |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK6(FLAG)(*(uint32_t*)0x500005cc &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK6(FLAG)(*(uint32_t*)0x500005cc |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK7(FLAG)(*(uint32_t*)0x500005ec &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK7(FLAG)(*(uint32_t*)0x500005ec |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ0(FLAG) (*(uint32_t*)0x50000510 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ0(FLAG) (*(uint32_t*)0x50000510 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ1(FLAG) (*(uint32_t*)0x50000530 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ1(FLAG) (*(uint32_t*)0x50000530 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ2(FLAG) (*(uint32_t*)0x50000550 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ2(FLAG) (*(uint32_t*)0x50000550 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ3(FLAG) (*(uint32_t*)0x50000570 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ3(FLAG) (*(uint32_t*)0x50000570 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ4(FLAG) (*(uint32_t*)0x50000590 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ4(FLAG) (*(uint32_t*)0x50000590 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ5(FLAG) (*(uint32_t*)0x500005b0 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ5(FLAG) (*(uint32_t*)0x500005b0 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ6(FLAG) (*(uint32_t*)0x500005d0 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ6(FLAG) (*(uint32_t*)0x500005d0 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ7(FLAG) (*(uint32_t*)0x500005f0 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ7(FLAG) (*(uint32_t*)0x500005f0 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR8(FLAG) (*(uint32_t*)0x500005f4 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR8(FLAG) (*(uint32_t*)0x500005f4 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT8(FLAG)  (*(uint32_t*)0x500005f8 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT8(FLAG)  (*(uint32_t*)0x500005f8 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK8(FLAG)(*(uint32_t*)0x500005fc &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK8(FLAG)(*(uint32_t*)0x500005fc |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ8(FLAG) (*(uint32_t*)0x50000600 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ8(FLAG) (*(uint32_t*)0x50000600 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR9(FLAG) (*(uint32_t*)0x50000604 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR9(FLAG) (*(uint32_t*)0x50000604 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT9(FLAG)  (*(uint32_t*)0x50000608 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT9(FLAG)  (*(uint32_t*)0x50000608 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK9(FLAG)(*(uint32_t*)0x5000060c &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK9(FLAG)(*(uint32_t*)0x5000060c |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ9(FLAG) (*(uint32_t*)0x50000610 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ9(FLAG) (*(uint32_t*)0x50000610 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR10(FLAG)(*(uint32_t*)0x50000614 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR10(FLAG)(*(uint32_t*)0x50000614 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT10(FLAG) (*(uint32_t*)0x50000618 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT10(FLAG) (*(uint32_t*)0x50000618 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK10(FLAG)(*(uint32_t*)0x5000061c &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK10(FLAG)(*(uint32_t*)0x5000061c |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ10(FLAG)(*(uint32_t*)0x50000620 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ10(FLAG)(*(uint32_t*)0x50000620 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCCHAR11(FLAG)(*(uint32_t*)0x50000624 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCCHAR11(FLAG)(*(uint32_t*)0x50000624 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINT11(FLAG) (*(uint32_t*)0x50000628 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINT11(FLAG) (*(uint32_t*)0x50000628 |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCINTMSK11(FLAG)(*(uint32_t*)0x5000062c &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCINTMSK11(FLAG)(*(uint32_t*)0x5000062c |= ~FLAG)
#define Set_OTG_FS_HOST_OTG_FS_HCTSIZ11(FLAG)(*(uint32_t*)0x50000630 &= FLAG)
#define Clr_OTG_FS_HOST_OTG_FS_HCTSIZ11(FLAG)(*(uint32_t*)0x50000630 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DCFG(FLAG)  (*(uint32_t*)0x50000800 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DCFG(FLAG)  (*(uint32_t*)0x50000800 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DCTL(FLAG)  (*(uint32_t*)0x50000804 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DCTL(FLAG)  (*(uint32_t*)0x50000804 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DSTS(FLAG)  (*(uint32_t*)0x50000808 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DSTS(FLAG)  (*(uint32_t*)0x50000808 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPMSK(FLAG)(*(uint32_t*)0x50000810 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPMSK(FLAG)(*(uint32_t*)0x50000810 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPMSK(FLAG)(*(uint32_t*)0x50000814 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPMSK(FLAG)(*(uint32_t*)0x50000814 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DAINT(FLAG) (*(uint32_t*)0x50000818 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DAINT(FLAG) (*(uint32_t*)0x50000818 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DAINTMSK(FLAG)(*(uint32_t*)0x5000081c &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DAINTMSK(FLAG)(*(uint32_t*)0x5000081c |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DVBUSDIS(FLAG)(*(uint32_t*)0x50000828 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DVBUSDIS(FLAG)(*(uint32_t*)0x50000828 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DVBUSPULSE(FLAG)(*(uint32_t*)0x5000082c &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DVBUSPULSE(FLAG)(*(uint32_t*)0x5000082c |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPEMPMSK(FLAG)(*(uint32_t*)0x50000834 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPEMPMSK(FLAG)(*(uint32_t*)0x50000834 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPCTL0(FLAG)(*(uint32_t*)0x50000900 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPCTL0(FLAG)(*(uint32_t*)0x50000900 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPCTL1(FLAG)(*(uint32_t*)0x50000920 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPCTL1(FLAG)(*(uint32_t*)0x50000920 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPCTL2(FLAG)(*(uint32_t*)0x50000940 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPCTL2(FLAG)(*(uint32_t*)0x50000940 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPCTL3(FLAG)(*(uint32_t*)0x50000960 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPCTL3(FLAG)(*(uint32_t*)0x50000960 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPCTL0(FLAG)(*(uint32_t*)0x50000b00 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPCTL0(FLAG)(*(uint32_t*)0x50000b00 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPCTL1(FLAG)(*(uint32_t*)0x50000b20 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPCTL1(FLAG)(*(uint32_t*)0x50000b20 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPCTL2(FLAG)(*(uint32_t*)0x50000b40 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPCTL2(FLAG)(*(uint32_t*)0x50000b40 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPCTL3(FLAG)(*(uint32_t*)0x50000b60 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPCTL3(FLAG)(*(uint32_t*)0x50000b60 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPINT0(FLAG)(*(uint32_t*)0x50000908 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPINT0(FLAG)(*(uint32_t*)0x50000908 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPINT1(FLAG)(*(uint32_t*)0x50000928 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPINT1(FLAG)(*(uint32_t*)0x50000928 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPINT2(FLAG)(*(uint32_t*)0x50000948 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPINT2(FLAG)(*(uint32_t*)0x50000948 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPINT3(FLAG)(*(uint32_t*)0x50000968 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPINT3(FLAG)(*(uint32_t*)0x50000968 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPINT0(FLAG)(*(uint32_t*)0x50000b08 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPINT0(FLAG)(*(uint32_t*)0x50000b08 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPINT1(FLAG)(*(uint32_t*)0x50000b28 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPINT1(FLAG)(*(uint32_t*)0x50000b28 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPINT2(FLAG)(*(uint32_t*)0x50000b48 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPINT2(FLAG)(*(uint32_t*)0x50000b48 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPINT3(FLAG)(*(uint32_t*)0x50000b68 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPINT3(FLAG)(*(uint32_t*)0x50000b68 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ0(FLAG)(*(uint32_t*)0x50000910 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ0(FLAG)(*(uint32_t*)0x50000910 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ0(FLAG)(*(uint32_t*)0x50000b10 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ0(FLAG)(*(uint32_t*)0x50000b10 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ1(FLAG)(*(uint32_t*)0x50000930 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ1(FLAG)(*(uint32_t*)0x50000930 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ2(FLAG)(*(uint32_t*)0x50000950 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ2(FLAG)(*(uint32_t*)0x50000950 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ3(FLAG)(*(uint32_t*)0x50000970 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ3(FLAG)(*(uint32_t*)0x50000970 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DTXFSTS0(FLAG)(*(uint32_t*)0x50000918 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DTXFSTS0(FLAG)(*(uint32_t*)0x50000918 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DTXFSTS1(FLAG)(*(uint32_t*)0x50000938 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DTXFSTS1(FLAG)(*(uint32_t*)0x50000938 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DTXFSTS2(FLAG)(*(uint32_t*)0x50000958 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DTXFSTS2(FLAG)(*(uint32_t*)0x50000958 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DTXFSTS3(FLAG)(*(uint32_t*)0x50000978 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DTXFSTS3(FLAG)(*(uint32_t*)0x50000978 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ1(FLAG)(*(uint32_t*)0x50000b30 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ1(FLAG)(*(uint32_t*)0x50000b30 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ2(FLAG)(*(uint32_t*)0x50000b50 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ2(FLAG)(*(uint32_t*)0x50000b50 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ3(FLAG)(*(uint32_t*)0x50000b70 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ3(FLAG)(*(uint32_t*)0x50000b70 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPCTL4(FLAG)(*(uint32_t*)0x50000980 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPCTL4(FLAG)(*(uint32_t*)0x50000980 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPINT4(FLAG)(*(uint32_t*)0x50000988 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPINT4(FLAG)(*(uint32_t*)0x50000988 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ4(FLAG)(*(uint32_t*)0x50000994 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ4(FLAG)(*(uint32_t*)0x50000994 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DTXFSTS4(FLAG)(*(uint32_t*)0x5000099c &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DTXFSTS4(FLAG)(*(uint32_t*)0x5000099c |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPCTL5(FLAG)(*(uint32_t*)0x500009a0 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPCTL5(FLAG)(*(uint32_t*)0x500009a0 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPINT5(FLAG)(*(uint32_t*)0x500009a8 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPINT5(FLAG)(*(uint32_t*)0x500009a8 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ55(FLAG)(*(uint32_t*)0x500009b0 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DIEPTSIZ55(FLAG)(*(uint32_t*)0x500009b0 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DTXFSTS55(FLAG)(*(uint32_t*)0x500009b8 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DTXFSTS55(FLAG)(*(uint32_t*)0x500009b8 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPCTL4(FLAG)(*(uint32_t*)0x50000b78 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPCTL4(FLAG)(*(uint32_t*)0x50000b78 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPINT4(FLAG)(*(uint32_t*)0x50000b80 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPINT4(FLAG)(*(uint32_t*)0x50000b80 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ4(FLAG)(*(uint32_t*)0x50000b88 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ4(FLAG)(*(uint32_t*)0x50000b88 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPCTL5(FLAG)(*(uint32_t*)0x50000b90 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPCTL5(FLAG)(*(uint32_t*)0x50000b90 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPINT5(FLAG)(*(uint32_t*)0x50000b98 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPINT5(FLAG)(*(uint32_t*)0x50000b98 |= ~FLAG)
#define Set_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ5(FLAG)(*(uint32_t*)0x50000ba0 &= FLAG)
#define Clr_OTG_FS_DEVICE_OTG_FS_DOEPTSIZ5(FLAG)(*(uint32_t*)0x50000ba0 |= ~FLAG)
#define Set_OTG_FS_PWRCLK_OTG_FS_PCGCCTL(FLAG)(*(uint32_t*)0x50000e00 &= FLAG)
#define Clr_OTG_FS_PWRCLK_OTG_FS_PCGCCTL(FLAG)(*(uint32_t*)0x50000e00 |= ~FLAG)
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_SRQSCS                (0x1 << 0)    // Session request success
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_SRQ                   (0x1 << 1)    // Session request
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_HNGSCS                (0x1 << 8)    // Host negotiation success
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_HNPRQ                 (0x1 << 9)    // HNP request
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_HSHNPEN               (0x1 << 10)    // Host set HNP enable
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_DHNPEN                (0x1 << 11)    // Device HNP enabled
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_CIDSTS                (0x1 << 16)    // Connector ID status
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_DBCT                  (0x1 << 17)    // Long/short debounce time
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_ASVLD                 (0x1 << 18)    // A-session valid
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_BSVLD                 (0x1 << 19)    // B-session valid
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_VBVALOEN              (0x1 << 2)    // VBUS valid override enable
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_VBVALOVAL             (0x1 << 3)    // VBUS valid override value
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_AVALOEN               (0x1 << 4)    // A-peripheral session valid override enable
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_AVALOVAL              (0x1 << 5)    // A-peripheral session valid override value
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_BVALOEN               (0x1 << 6)    // B-peripheral session valid override enable
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_BVALOVAL              (0x1 << 7)    // B-peripheral session valid override value
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_EHEN                  (0x1 << 12)    // Embedded host enable
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGCTL_OTGVER                (0x1 << 20)    // OTG version
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGINT_SEDET                 (0x1 << 2)    // Session end detected
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGINT_SRSSCHG               (0x1 << 8)    // Session request success status change
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGINT_HNSSCHG               (0x1 << 9)    // Host negotiation success status change
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGINT_HNGDET                (0x1 << 17)    // Host negotiation detected
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGINT_ADTOCHG               (0x1 << 18)    // A-device timeout change
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGINT_DBCDNE                (0x1 << 19)    // Debounce done
#define  _OTG_FS_GLOBAL_OTG_FS_GOTGINT_IDCHNG                (0x1 << 20)    // ID input pin changed
#define  _OTG_FS_GLOBAL_OTG_FS_GAHBCFG_GINT                  (0x1 << 0)    // Global interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GAHBCFG_TXFELVL               (0x1 << 7)    // TxFIFO empty level
#define  _OTG_FS_GLOBAL_OTG_FS_GAHBCFG_PTXFELVL              (0x1 << 8)    // Periodic TxFIFO empty level
#define  _OTG_FS_GLOBAL_OTG_FS_GUSBCFG_TOCAL                 (0x7 << 0)    // FS timeout calibration
#define  _OTG_FS_GLOBAL_OTG_FS_GUSBCFG_PHYSEL                (0x1 << 6)    // Full Speed serial transceiver select
#define  _OTG_FS_GLOBAL_OTG_FS_GUSBCFG_SRPCAP                (0x1 << 8)    // SRP-capable
#define  _OTG_FS_GLOBAL_OTG_FS_GUSBCFG_HNPCAP                (0x1 << 9)    // HNP-capable
#define  _OTG_FS_GLOBAL_OTG_FS_GUSBCFG_TRDT                  (0xf << 10)    // USB turnaround time
#define  _OTG_FS_GLOBAL_OTG_FS_GUSBCFG_FHMOD                 (0x1 << 29)    // Force host mode
#define  _OTG_FS_GLOBAL_OTG_FS_GUSBCFG_FDMOD                 (0x1 << 30)    // Force device mode
#define  _OTG_FS_GLOBAL_OTG_FS_GRSTCTL_CSRST                 (0x1 << 0)    // Core soft reset
#define  _OTG_FS_GLOBAL_OTG_FS_GRSTCTL_HSRST                 (0x1 << 1)    // HCLK soft reset
#define  _OTG_FS_GLOBAL_OTG_FS_GRSTCTL_FCRST                 (0x1 << 2)    // Host frame counter reset
#define  _OTG_FS_GLOBAL_OTG_FS_GRSTCTL_RXFFLSH               (0x1 << 4)    // RxFIFO flush
#define  _OTG_FS_GLOBAL_OTG_FS_GRSTCTL_TXFFLSH               (0x1 << 5)    // TxFIFO flush
#define  _OTG_FS_GLOBAL_OTG_FS_GRSTCTL_TXFNUM                (0x1f << 6)    // TxFIFO number
#define  _OTG_FS_GLOBAL_OTG_FS_GRSTCTL_AHBIDL                (0x1 << 31)    // AHB master idle
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_CMOD                  (0x1 << 0)    // Current mode of operation
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_MMIS                  (0x1 << 1)    // Mode mismatch interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_OTGINT                (0x1 << 2)    // OTG interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_SOF                   (0x1 << 3)    // Start of frame
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_RXFLVL                (0x1 << 4)    // RxFIFO non-empty
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_NPTXFE                (0x1 << 5)    // Non-periodic TxFIFO empty
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_GINAKEFF              (0x1 << 6)    // Global IN non-periodic NAK effective
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_GOUTNAKEFF            (0x1 << 7)    // Global OUT NAK effective
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_ESUSP                 (0x1 << 10)    // Early suspend
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_USBSUSP               (0x1 << 11)    // USB suspend
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_USBRST                (0x1 << 12)    // USB reset
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_ENUMDNE               (0x1 << 13)    // Enumeration done
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_ISOODRP               (0x1 << 14)    // Isochronous OUT packet dropped interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_EOPF                  (0x1 << 15)    // End of periodic frame interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_IEPINT                (0x1 << 18)    // IN endpoint interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_OEPINT                (0x1 << 19)    // OUT endpoint interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_IISOIXFR              (0x1 << 20)    // Incomplete isochronous IN transfer
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_IPXFR_INCOMPISOOUT    (0x1 << 21)    // Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode)
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_HPRTINT               (0x1 << 24)    // Host port interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_HCINT                 (0x1 << 25)    // Host channels interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_PTXFE                 (0x1 << 26)    // Periodic TxFIFO empty
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_CIDSCHG               (0x1 << 28)    // Connector ID status change
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_DISCINT               (0x1 << 29)    // Disconnect detected interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_SRQINT                (0x1 << 30)    // Session request/new session detected interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_WKUPINT               (0x1 << 31)    // Resume/remote wakeup detected interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTSTS_RSTDET                (0x1 << 23)    // Reset detected interrupt
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_MMISM                 (0x1 << 1)    // Mode mismatch interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_OTGINT                (0x1 << 2)    // OTG interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_SOFM                  (0x1 << 3)    // Start of frame mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_RXFLVLM               (0x1 << 4)    // Receive FIFO non-empty mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_NPTXFEM               (0x1 << 5)    // Non-periodic TxFIFO empty mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_GINAKEFFM             (0x1 << 6)    // Global non-periodic IN NAK effective mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_GONAKEFFM             (0x1 << 7)    // Global OUT NAK effective mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_ESUSPM                (0x1 << 10)    // Early suspend mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_USBSUSPM              (0x1 << 11)    // USB suspend mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_USBRST                (0x1 << 12)    // USB reset mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_ENUMDNEM              (0x1 << 13)    // Enumeration done mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_ISOODRPM              (0x1 << 14)    // Isochronous OUT packet dropped interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_EOPFM                 (0x1 << 15)    // End of periodic frame interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_IEPINT                (0x1 << 18)    // IN endpoints interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_OEPINT                (0x1 << 19)    // OUT endpoints interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_IISOIXFRM             (0x1 << 20)    // Incomplete isochronous IN transfer mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_IPXFRM_IISOOXFRM      (0x1 << 21)    // Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode)
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_PRTIM                 (0x1 << 24)    // Host port interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_HCIM                  (0x1 << 25)    // Host channels interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_PTXFEM                (0x1 << 26)    // Periodic TxFIFO empty mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_CIDSCHGM              (0x1 << 28)    // Connector ID status change mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_DISCINT               (0x1 << 29)    // Disconnect detected interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_SRQIM                 (0x1 << 30)    // Session request/new session detected interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_WUIM                  (0x1 << 31)    // Resume/remote wakeup detected interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_RSTDETM               (0x1 << 23)    // Reset detected interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GINTMSK_LPMIN                 (0x1 << 27)    // LPM interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_EPNUM          (0xf << 0)    // Endpoint number
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_BCNT           (0x7ff << 4)    // Byte count
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_DPID           (0x3 << 15)    // Data PID
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_PKTSTS         (0xf << 17)    // Packet status
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_FRMNUM         (0xf << 21)    // Frame number
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_CHNUM            (0xf << 0)    // Endpoint number
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_BCNT             (0x7ff << 4)    // Byte count
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_DPID             (0x3 << 15)    // Data PID
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_PKTSTS           (0xf << 17)    // Packet status
#define  _OTG_FS_GLOBAL_OTG_FS_GRXFSIZ_RXFD                  (0xffff << 0)    // RxFIFO depth
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device_TX0FSA        (0xffff << 0)    // Endpoint 0 transmit RAM start address
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device_TX0FD         (0xffff << 16)    // Endpoint 0 TxFIFO depth
#define  _OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host_NPTXFSA        (0xffff << 0)    // Non-periodic transmit RAM start address
#define  _OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host_NPTXFD         (0xffff << 16)    // Non-periodic TxFIFO depth
#define  _OTG_FS_GLOBAL_OTG_FS_HNPTXSTS_NPTXFSAV             (0xffff << 0)    // Non-periodic TxFIFO space available
#define  _OTG_FS_GLOBAL_OTG_FS_HNPTXSTS_NPTQXSAV             (0xff << 16)    // Non-periodic transmit request queue space available
#define  _OTG_FS_GLOBAL_OTG_FS_HNPTXSTS_NPTXQTOP             (0x7f << 24)    // Top of the non-periodic transmit request queue
#define  _OTG_FS_GLOBAL_OTG_FS_GCCFG_PWRDWN                  (0x1 << 16)    // Power down
#define  _OTG_FS_GLOBAL_OTG_FS_GCCFG_BCDEN                   (0x1 << 17)    // Battery charging detector (BCD) enable
#define  _OTG_FS_GLOBAL_OTG_FS_GCCFG_DCDEN                   (0x1 << 18)    // Data contact detection (DCD) mode enable
#define  _OTG_FS_GLOBAL_OTG_FS_GCCFG_PDEN                    (0x1 << 19)    // Primary detection (PD) mode enable
#define  _OTG_FS_GLOBAL_OTG_FS_GCCFG_SDEN                    (0x1 << 20)    // Secondary detection (SD) mode enable
#define  _OTG_FS_GLOBAL_OTG_FS_GCCFG_VBDEN                   (0x1 << 21)    // USB VBUS detection enable
#define  _OTG_FS_GLOBAL_OTG_FS_GCCFG_DCDET                   (0x1 << 0)    // Data contact detection (DCD) status
#define  _OTG_FS_GLOBAL_OTG_FS_GCCFG_PDET                    (0x1 << 1)    // Primary detection (PD) status
#define  _OTG_FS_GLOBAL_OTG_FS_GCCFG_SDET                    (0x1 << 2)    // Secondary detection (SD) status
#define  _OTG_FS_GLOBAL_OTG_FS_GCCFG_PS2DET                  (0x1 << 3)    // DM pull-up detection status
#define  _OTG_FS_GLOBAL_OTG_FS_CID_PRODUCT_ID                (0xffffffff << 0)    // Product ID field
#define  _OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ_PTXSA                (0xffff << 0)    // Host periodic TxFIFO start address
#define  _OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ_PTXFSIZ              (0xffff << 16)    // Host periodic TxFIFO depth
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF1_INEPTXSA             (0xffff << 0)    // IN endpoint FIFO2 transmit RAM start address
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF1_INEPTXFD             (0xffff << 16)    // IN endpoint TxFIFO depth
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF2_INEPTXSA             (0xffff << 0)    // IN endpoint FIFO3 transmit RAM start address
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF2_INEPTXFD             (0xffff << 16)    // IN endpoint TxFIFO depth
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF3_INEPTXSA             (0xffff << 0)    // IN endpoint FIFO4 transmit RAM start address
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF3_INEPTXFD             (0xffff << 16)    // IN endpoint TxFIFO depth
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_EPNUM          (0xf << 0)    // Endpoint number
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_BCNT           (0x7ff << 4)    // Byte count
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_DPID           (0x3 << 15)    // Data PID
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_PKTSTS         (0xf << 17)    // Packet status
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_FRMNUM         (0xf << 21)    // Frame number
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_CHNUM            (0xf << 0)    // Channel number
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_BCNT             (0x7ff << 4)    // Byte count
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_DPID             (0x3 << 15)    // Data PID
#define  _OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_PKTSTS           (0xf << 17)    // Packet status
#define  _OTG_FS_GLOBAL_OTG_FS_GI2CCTL_RWDATA                (0xff << 0)    // I2C Read/Write Data
#define  _OTG_FS_GLOBAL_OTG_FS_GI2CCTL_REGADDR               (0xff << 8)    // I2C Register Address
#define  _OTG_FS_GLOBAL_OTG_FS_GI2CCTL_ADDR                  (0x7f << 16)    // I2C Address
#define  _OTG_FS_GLOBAL_OTG_FS_GI2CCTL_I2CEN                 (0x1 << 23)    // I2C Enable
#define  _OTG_FS_GLOBAL_OTG_FS_GI2CCTL_ACK                   (0x1 << 24)    // I2C ACK
#define  _OTG_FS_GLOBAL_OTG_FS_GI2CCTL_I2CDEVADR             (0x3 << 26)    // I2C Device Address
#define  _OTG_FS_GLOBAL_OTG_FS_GI2CCTL_I2CDATSE0             (0x1 << 28)    // I2C DatSe0 USB mode
#define  _OTG_FS_GLOBAL_OTG_FS_GI2CCTL_RW                    (0x1 << 30)    // Read/Write Indicator
#define  _OTG_FS_GLOBAL_OTG_FS_GI2CCTL_BSYDNE                (0x1 << 31)    // I2C Busy/Done
#define  _OTG_FS_GLOBAL_OTG_FS_GPWRDN_ADPMEN                 (0x1 << 0)    // ADP module enable
#define  _OTG_FS_GLOBAL_OTG_FS_GPWRDN_ADPIF                  (0x1 << 23)    // ADP interrupt flag
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_PRBDSCHG              (0x3 << 0)    // Probe discharge
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_PRBDELTA              (0x3 << 2)    // Probe delta
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_PRBPER                (0x3 << 4)    // Probe period
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_RTIM                  (0x7ff << 6)    // Ramp time
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_ENAPRB                (0x1 << 17)    // Enable probe
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_ENASNS                (0x1 << 18)    // Enable sense
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPRST                (0x1 << 19)    // ADP reset
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPEN                 (0x1 << 20)    // ADP enable
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPPRBIF              (0x1 << 21)    // ADP probe interrupt flag
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPSNSIF              (0x1 << 22)    // ADP sense interrupt flag
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPTOIF               (0x1 << 23)    // ADP timeout interrupt flag
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPPRBIM              (0x1 << 24)    // ADP probe interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPSNSIM              (0x1 << 25)    // ADP sense interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPTOIM               (0x1 << 26)    // ADP timeout interrupt mask
#define  _OTG_FS_GLOBAL_OTG_FS_GADPCTL_AR                    (0x3 << 27)    // Access request
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF4_INEPTXSA             (0xffff << 0)    // IN endpoint FIFOx transmit RAM start address
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF4_INEPTXFD             (0xffff << 16)    // IN endpoint Tx FIFO depth
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF5_INEPTXSA             (0xffff << 0)    // IN endpoint FIFOx transmit RAM start address
#define  _OTG_FS_GLOBAL_OTG_FS_DIEPTXF5_INEPTXFD             (0xffff << 16)    // IN endpoint Tx FIFO depth
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMEN                 (0x1 << 0)    // LPM support enable
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMACK                (0x1 << 1)    // LPM token acknowledge enable
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_BESL                  (0xf << 2)    // Best effort service latency
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_REMWAKE               (0x1 << 6)    // bRemoteWake value
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_L1SSEN                (0x1 << 7)    // L1 Shallow Sleep enable
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_BESLTHRS              (0xf << 8)    // BESL threshold
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_L1DSEN                (0x1 << 12)    // L1 deep sleep enable
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMRST                (0x3 << 13)    // LPM response
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_SLPSTS                (0x1 << 15)    // Port sleep status
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_L1RSMOK               (0x1 << 16)    // Sleep State Resume OK
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMCHIDX              (0xf << 17)    // LPM Channel Index
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMRCNT               (0x7 << 21)    // LPM retry count
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_SNDLPM                (0x1 << 24)    // Send LPM transaction
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMRCNTSTS            (0x7 << 25)    // LPM retry count status
#define  _OTG_FS_GLOBAL_OTG_FS_GLPMCFG_ENBESL                (0x1 << 28)    // Enable best effort service latency
#define  _OTG_FS_HOST_OTG_FS_HCFG_FSLSPCS                    (0x3 << 0)    // FS/LS PHY clock select
#define  _OTG_FS_HOST_OTG_FS_HCFG_FSLSS                      (0x1 << 2)    // FS- and LS-only support
#define  _OTG_FS_HOST_OTG_FS_HFIR_FRIVL                      (0xffff << 0)    // Frame interval
#define  _OTG_FS_HOST_OTG_FS_HFNUM_FRNUM                     (0xffff << 0)    // Frame number
#define  _OTG_FS_HOST_OTG_FS_HFNUM_FTREM                     (0xffff << 16)    // Frame time remaining
#define  _OTG_FS_HOST_OTG_FS_HPTXSTS_PTXFSAVL                (0xffff << 0)    // Periodic transmit data FIFO space available
#define  _OTG_FS_HOST_OTG_FS_HPTXSTS_PTXQSAV                 (0xff << 16)    // Periodic transmit request queue space available
#define  _OTG_FS_HOST_OTG_FS_HPTXSTS_PTXQTOP                 (0xff << 24)    // Top of the periodic transmit request queue
#define  _OTG_FS_HOST_OTG_FS_HAINT_HAINT                     (0xffff << 0)    // Channel interrupts
#define  _OTG_FS_HOST_OTG_FS_HAINTMSK_HAINTM                 (0xffff << 0)    // Channel interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HPRT_PCSTS                      (0x1 << 0)    // Port connect status
#define  _OTG_FS_HOST_OTG_FS_HPRT_PCDET                      (0x1 << 1)    // Port connect detected
#define  _OTG_FS_HOST_OTG_FS_HPRT_PENA                       (0x1 << 2)    // Port enable
#define  _OTG_FS_HOST_OTG_FS_HPRT_PENCHNG                    (0x1 << 3)    // Port enable/disable change
#define  _OTG_FS_HOST_OTG_FS_HPRT_POCA                       (0x1 << 4)    // Port overcurrent active
#define  _OTG_FS_HOST_OTG_FS_HPRT_POCCHNG                    (0x1 << 5)    // Port overcurrent change
#define  _OTG_FS_HOST_OTG_FS_HPRT_PRES                       (0x1 << 6)    // Port resume
#define  _OTG_FS_HOST_OTG_FS_HPRT_PSUSP                      (0x1 << 7)    // Port suspend
#define  _OTG_FS_HOST_OTG_FS_HPRT_PRST                       (0x1 << 8)    // Port reset
#define  _OTG_FS_HOST_OTG_FS_HPRT_PLSTS                      (0x3 << 10)    // Port line status
#define  _OTG_FS_HOST_OTG_FS_HPRT_PPWR                       (0x1 << 12)    // Port power
#define  _OTG_FS_HOST_OTG_FS_HPRT_PTCTL                      (0xf << 13)    // Port test control
#define  _OTG_FS_HOST_OTG_FS_HPRT_PSPD                       (0x3 << 17)    // Port speed
#define  _OTG_FS_HOST_OTG_FS_HCCHAR0_MPSIZ                   (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR0_EPNUM                   (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR0_EPDIR                   (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR0_LSDEV                   (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR0_EPTYP                   (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR0_MCNT                    (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR0_DAD                     (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR0_ODDFRM                  (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR0_CHDIS                   (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR0_CHENA                   (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR1_MPSIZ                   (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR1_EPNUM                   (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR1_EPDIR                   (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR1_LSDEV                   (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR1_EPTYP                   (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR1_MCNT                    (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR1_DAD                     (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR1_ODDFRM                  (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR1_CHDIS                   (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR1_CHENA                   (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR2_MPSIZ                   (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR2_EPNUM                   (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR2_EPDIR                   (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR2_LSDEV                   (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR2_EPTYP                   (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR2_MCNT                    (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR2_DAD                     (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR2_ODDFRM                  (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR2_CHDIS                   (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR2_CHENA                   (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR3_MPSIZ                   (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR3_EPNUM                   (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR3_EPDIR                   (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR3_LSDEV                   (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR3_EPTYP                   (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR3_MCNT                    (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR3_DAD                     (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR3_ODDFRM                  (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR3_CHDIS                   (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR3_CHENA                   (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR4_MPSIZ                   (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR4_EPNUM                   (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR4_EPDIR                   (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR4_LSDEV                   (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR4_EPTYP                   (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR4_MCNT                    (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR4_DAD                     (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR4_ODDFRM                  (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR4_CHDIS                   (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR4_CHENA                   (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR5_MPSIZ                   (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR5_EPNUM                   (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR5_EPDIR                   (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR5_LSDEV                   (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR5_EPTYP                   (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR5_MCNT                    (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR5_DAD                     (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR5_ODDFRM                  (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR5_CHDIS                   (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR5_CHENA                   (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR6_MPSIZ                   (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR6_EPNUM                   (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR6_EPDIR                   (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR6_LSDEV                   (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR6_EPTYP                   (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR6_MCNT                    (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR6_DAD                     (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR6_ODDFRM                  (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR6_CHDIS                   (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR6_CHENA                   (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR7_MPSIZ                   (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR7_EPNUM                   (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR7_EPDIR                   (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR7_LSDEV                   (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR7_EPTYP                   (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR7_MCNT                    (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR7_DAD                     (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR7_ODDFRM                  (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR7_CHDIS                   (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR7_CHENA                   (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCINT0_XFRC                     (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT0_CHH                      (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT0_STALL                    (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT0_NAK                      (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT0_ACK                      (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT0_TXERR                    (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT0_BBERR                    (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT0_FRMOR                    (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT0_DTERR                    (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINT1_XFRC                     (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT1_CHH                      (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT1_STALL                    (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT1_NAK                      (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT1_ACK                      (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT1_TXERR                    (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT1_BBERR                    (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT1_FRMOR                    (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT1_DTERR                    (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINT2_XFRC                     (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT2_CHH                      (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT2_STALL                    (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT2_NAK                      (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT2_ACK                      (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT2_TXERR                    (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT2_BBERR                    (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT2_FRMOR                    (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT2_DTERR                    (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINT3_XFRC                     (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT3_CHH                      (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT3_STALL                    (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT3_NAK                      (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT3_ACK                      (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT3_TXERR                    (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT3_BBERR                    (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT3_FRMOR                    (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT3_DTERR                    (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINT4_XFRC                     (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT4_CHH                      (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT4_STALL                    (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT4_NAK                      (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT4_ACK                      (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT4_TXERR                    (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT4_BBERR                    (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT4_FRMOR                    (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT4_DTERR                    (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINT5_XFRC                     (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT5_CHH                      (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT5_STALL                    (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT5_NAK                      (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT5_ACK                      (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT5_TXERR                    (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT5_BBERR                    (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT5_FRMOR                    (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT5_DTERR                    (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINT6_XFRC                     (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT6_CHH                      (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT6_STALL                    (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT6_NAK                      (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT6_ACK                      (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT6_TXERR                    (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT6_BBERR                    (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT6_FRMOR                    (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT6_DTERR                    (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINT7_XFRC                     (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT7_CHH                      (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT7_STALL                    (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT7_NAK                      (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT7_ACK                      (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT7_TXERR                    (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT7_BBERR                    (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT7_FRMOR                    (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT7_DTERR                    (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK0_XFRCM                 (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK0_CHHM                  (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK0_STALLM                (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK0_NAKM                  (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK0_ACKM                  (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK0_NYET                  (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK0_TXERRM                (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK0_BBERRM                (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK0_FRMORM                (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK0_DTERRM                (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK1_XFRCM                 (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK1_CHHM                  (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK1_STALLM                (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK1_NAKM                  (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK1_ACKM                  (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK1_NYET                  (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK1_TXERRM                (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK1_BBERRM                (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK1_FRMORM                (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK1_DTERRM                (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK2_XFRCM                 (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK2_CHHM                  (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK2_STALLM                (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK2_NAKM                  (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK2_ACKM                  (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK2_NYET                  (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK2_TXERRM                (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK2_BBERRM                (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK2_FRMORM                (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK2_DTERRM                (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK3_XFRCM                 (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK3_CHHM                  (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK3_STALLM                (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK3_NAKM                  (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK3_ACKM                  (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK3_NYET                  (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK3_TXERRM                (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK3_BBERRM                (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK3_FRMORM                (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK3_DTERRM                (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK4_XFRCM                 (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK4_CHHM                  (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK4_STALLM                (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK4_NAKM                  (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK4_ACKM                  (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK4_NYET                  (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK4_TXERRM                (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK4_BBERRM                (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK4_FRMORM                (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK4_DTERRM                (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK5_XFRCM                 (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK5_CHHM                  (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK5_STALLM                (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK5_NAKM                  (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK5_ACKM                  (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK5_NYET                  (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK5_TXERRM                (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK5_BBERRM                (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK5_FRMORM                (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK5_DTERRM                (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK6_XFRCM                 (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK6_CHHM                  (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK6_STALLM                (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK6_NAKM                  (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK6_ACKM                  (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK6_NYET                  (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK6_TXERRM                (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK6_BBERRM                (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK6_FRMORM                (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK6_DTERRM                (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK7_XFRCM                 (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK7_CHHM                  (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK7_STALLM                (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK7_NAKM                  (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK7_ACKM                  (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK7_NYET                  (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK7_TXERRM                (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK7_BBERRM                (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK7_FRMORM                (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK7_DTERRM                (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ0_XFRSIZ                  (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ0_PKTCNT                  (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ0_DPID                    (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ1_XFRSIZ                  (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ1_PKTCNT                  (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ1_DPID                    (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ2_XFRSIZ                  (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ2_PKTCNT                  (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ2_DPID                    (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ3_XFRSIZ                  (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ3_PKTCNT                  (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ3_DPID                    (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ4_XFRSIZ                  (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ4_PKTCNT                  (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ4_DPID                    (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ5_XFRSIZ                  (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ5_PKTCNT                  (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ5_DPID                    (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ6_XFRSIZ                  (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ6_PKTCNT                  (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ6_DPID                    (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ7_XFRSIZ                  (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ7_PKTCNT                  (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ7_DPID                    (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCCHAR8_MPSIZ                   (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR8_EPNUM                   (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR8_EPDIR                   (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR8_LSDEV                   (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR8_EPTYP                   (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR8_MCNT                    (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR8_DAD                     (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR8_ODDFRM                  (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR8_CHDIS                   (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR8_CHENA                   (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCINT8_XFRC                     (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT8_CHH                      (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT8_STALL                    (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT8_NAK                      (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT8_ACK                      (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT8_TXERR                    (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT8_BBERR                    (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT8_FRMOR                    (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT8_DTERR                    (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK8_XFRCM                 (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK8_CHHM                  (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK8_STALLM                (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK8_NAKM                  (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK8_ACKM                  (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK8_NYET                  (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK8_TXERRM                (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK8_BBERRM                (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK8_FRMORM                (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK8_DTERRM                (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ8_XFRSIZ                  (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ8_PKTCNT                  (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ8_DPID                    (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCCHAR9_MPSIZ                   (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR9_EPNUM                   (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR9_EPDIR                   (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR9_LSDEV                   (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR9_EPTYP                   (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR9_MCNT                    (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR9_DAD                     (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR9_ODDFRM                  (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR9_CHDIS                   (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR9_CHENA                   (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCINT9_XFRC                     (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT9_CHH                      (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT9_STALL                    (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT9_NAK                      (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT9_ACK                      (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT9_TXERR                    (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT9_BBERR                    (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT9_FRMOR                    (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT9_DTERR                    (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK9_XFRCM                 (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK9_CHHM                  (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK9_STALLM                (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK9_NAKM                  (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK9_ACKM                  (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK9_NYET                  (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK9_TXERRM                (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK9_BBERRM                (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK9_FRMORM                (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK9_DTERRM                (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ9_XFRSIZ                  (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ9_PKTCNT                  (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ9_DPID                    (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCCHAR10_MPSIZ                  (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR10_EPNUM                  (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR10_EPDIR                  (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR10_LSDEV                  (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR10_EPTYP                  (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR10_MCNT                   (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR10_DAD                    (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR10_ODDFRM                 (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR10_CHDIS                  (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR10_CHENA                  (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCINT10_XFRC                    (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT10_CHH                     (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT10_STALL                   (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT10_NAK                     (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT10_ACK                     (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT10_TXERR                   (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT10_BBERR                   (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT10_FRMOR                   (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT10_DTERR                   (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK10_XFRCM                (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK10_CHHM                 (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK10_STALLM               (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK10_NAKM                 (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK10_ACKM                 (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK10_NYET                 (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK10_TXERRM               (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK10_BBERRM               (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK10_FRMORM               (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK10_DTERRM               (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ10_XFRSIZ                 (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ10_PKTCNT                 (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ10_DPID                   (0x3 << 29)    // Data PID
#define  _OTG_FS_HOST_OTG_FS_HCCHAR11_MPSIZ                  (0x7ff << 0)    // Maximum packet size
#define  _OTG_FS_HOST_OTG_FS_HCCHAR11_EPNUM                  (0xf << 11)    // Endpoint number
#define  _OTG_FS_HOST_OTG_FS_HCCHAR11_EPDIR                  (0x1 << 15)    // Endpoint direction
#define  _OTG_FS_HOST_OTG_FS_HCCHAR11_LSDEV                  (0x1 << 17)    // Low-speed device
#define  _OTG_FS_HOST_OTG_FS_HCCHAR11_EPTYP                  (0x3 << 18)    // Endpoint type
#define  _OTG_FS_HOST_OTG_FS_HCCHAR11_MCNT                   (0x3 << 20)    // Multicount
#define  _OTG_FS_HOST_OTG_FS_HCCHAR11_DAD                    (0x7f << 22)    // Device address
#define  _OTG_FS_HOST_OTG_FS_HCCHAR11_ODDFRM                 (0x1 << 29)    // Odd frame
#define  _OTG_FS_HOST_OTG_FS_HCCHAR11_CHDIS                  (0x1 << 30)    // Channel disable
#define  _OTG_FS_HOST_OTG_FS_HCCHAR11_CHENA                  (0x1 << 31)    // Channel enable
#define  _OTG_FS_HOST_OTG_FS_HCINT11_XFRC                    (0x1 << 0)    // Transfer completed
#define  _OTG_FS_HOST_OTG_FS_HCINT11_CHH                     (0x1 << 1)    // Channel halted
#define  _OTG_FS_HOST_OTG_FS_HCINT11_STALL                   (0x1 << 3)    // STALL response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT11_NAK                     (0x1 << 4)    // NAK response received interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT11_ACK                     (0x1 << 5)    // ACK response received/transmitted interrupt
#define  _OTG_FS_HOST_OTG_FS_HCINT11_TXERR                   (0x1 << 7)    // Transaction error
#define  _OTG_FS_HOST_OTG_FS_HCINT11_BBERR                   (0x1 << 8)    // Babble error
#define  _OTG_FS_HOST_OTG_FS_HCINT11_FRMOR                   (0x1 << 9)    // Frame overrun
#define  _OTG_FS_HOST_OTG_FS_HCINT11_DTERR                   (0x1 << 10)    // Data toggle error
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK11_XFRCM                (0x1 << 0)    // Transfer completed mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK11_CHHM                 (0x1 << 1)    // Channel halted mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK11_STALLM               (0x1 << 3)    // STALL response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK11_NAKM                 (0x1 << 4)    // NAK response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK11_ACKM                 (0x1 << 5)    // ACK response received/transmitted interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK11_NYET                 (0x1 << 6)    // response received interrupt mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK11_TXERRM               (0x1 << 7)    // Transaction error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK11_BBERRM               (0x1 << 8)    // Babble error mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK11_FRMORM               (0x1 << 9)    // Frame overrun mask
#define  _OTG_FS_HOST_OTG_FS_HCINTMSK11_DTERRM               (0x1 << 10)    // Data toggle error mask
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ11_XFRSIZ                 (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ11_PKTCNT                 (0x3ff << 19)    // Packet count
#define  _OTG_FS_HOST_OTG_FS_HCTSIZ11_DPID                   (0x3 << 29)    // Data PID
#define  _OTG_FS_DEVICE_OTG_FS_DCFG_DSPD                     (0x3 << 0)    // Device speed
#define  _OTG_FS_DEVICE_OTG_FS_DCFG_NZLSOHSK                 (0x1 << 2)    // Non-zero-length status OUT handshake
#define  _OTG_FS_DEVICE_OTG_FS_DCFG_DAD                      (0x7f << 4)    // Device address
#define  _OTG_FS_DEVICE_OTG_FS_DCFG_PFIVL                    (0x3 << 11)    // Periodic frame interval
#define  _OTG_FS_DEVICE_OTG_FS_DCTL_RWUSIG                   (0x1 << 0)    // Remote wakeup signaling
#define  _OTG_FS_DEVICE_OTG_FS_DCTL_SDIS                     (0x1 << 1)    // Soft disconnect
#define  _OTG_FS_DEVICE_OTG_FS_DCTL_GINSTS                   (0x1 << 2)    // Global IN NAK status
#define  _OTG_FS_DEVICE_OTG_FS_DCTL_GONSTS                   (0x1 << 3)    // Global OUT NAK status
#define  _OTG_FS_DEVICE_OTG_FS_DCTL_TCTL                     (0x7 << 4)    // Test control
#define  _OTG_FS_DEVICE_OTG_FS_DCTL_SGINAK                   (0x1 << 7)    // Set global IN NAK
#define  _OTG_FS_DEVICE_OTG_FS_DCTL_CGINAK                   (0x1 << 8)    // Clear global IN NAK
#define  _OTG_FS_DEVICE_OTG_FS_DCTL_SGONAK                   (0x1 << 9)    // Set global OUT NAK
#define  _OTG_FS_DEVICE_OTG_FS_DCTL_CGONAK                   (0x1 << 10)    // Clear global OUT NAK
#define  _OTG_FS_DEVICE_OTG_FS_DCTL_POPRGDNE                 (0x1 << 11)    // Power-on programming done
#define  _OTG_FS_DEVICE_OTG_FS_DSTS_SUSPSTS                  (0x1 << 0)    // Suspend status
#define  _OTG_FS_DEVICE_OTG_FS_DSTS_ENUMSPD                  (0x3 << 1)    // Enumerated speed
#define  _OTG_FS_DEVICE_OTG_FS_DSTS_EERR                     (0x1 << 3)    // Erratic error
#define  _OTG_FS_DEVICE_OTG_FS_DSTS_FNSOF                    (0x3fff << 8)    // Frame number of the received SOF
#define  _OTG_FS_DEVICE_OTG_FS_DIEPMSK_XFRCM                 (0x1 << 0)    // Transfer completed interrupt mask
#define  _OTG_FS_DEVICE_OTG_FS_DIEPMSK_EPDM                  (0x1 << 1)    // Endpoint disabled interrupt mask
#define  _OTG_FS_DEVICE_OTG_FS_DIEPMSK_TOM                   (0x1 << 3)    // Timeout condition mask (Non-isochronous endpoints)
#define  _OTG_FS_DEVICE_OTG_FS_DIEPMSK_ITTXFEMSK             (0x1 << 4)    // IN token received when TxFIFO empty mask
#define  _OTG_FS_DEVICE_OTG_FS_DIEPMSK_INEPNMM               (0x1 << 5)    // IN token received with EP mismatch mask
#define  _OTG_FS_DEVICE_OTG_FS_DIEPMSK_INEPNEM               (0x1 << 6)    // IN endpoint NAK effective mask
#define  _OTG_FS_DEVICE_OTG_FS_DOEPMSK_XFRCM                 (0x1 << 0)    // Transfer completed interrupt mask
#define  _OTG_FS_DEVICE_OTG_FS_DOEPMSK_EPDM                  (0x1 << 1)    // Endpoint disabled interrupt mask
#define  _OTG_FS_DEVICE_OTG_FS_DOEPMSK_STUPM                 (0x1 << 3)    // SETUP phase done mask
#define  _OTG_FS_DEVICE_OTG_FS_DOEPMSK_OTEPDM                (0x1 << 4)    // OUT token received when endpoint disabled mask
#define  _OTG_FS_DEVICE_OTG_FS_DAINT_IEPINT                  (0xffff << 0)    // IN endpoint interrupt bits
#define  _OTG_FS_DEVICE_OTG_FS_DAINT_OEPINT                  (0xffff << 16)    // OUT endpoint interrupt bits
#define  _OTG_FS_DEVICE_OTG_FS_DAINTMSK_IEPM                 (0xffff << 0)    // IN EP interrupt mask bits
#define  _OTG_FS_DEVICE_OTG_FS_DAINTMSK_OEPINT               (0xffff << 16)    // OUT endpoint interrupt bits
#define  _OTG_FS_DEVICE_OTG_FS_DVBUSDIS_VBUSDT               (0xffff << 0)    // Device VBUS discharge time
#define  _OTG_FS_DEVICE_OTG_FS_DVBUSPULSE_DVBUSP             (0xfff << 0)    // Device VBUS pulsing time
#define  _OTG_FS_DEVICE_OTG_FS_DIEPEMPMSK_INEPTXFEM          (0xffff << 0)    // IN EP Tx FIFO empty interrupt mask bits
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL0_MPSIZ                (0x3 << 0)    // Maximum packet size
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL0_USBAEP               (0x1 << 15)    // USB active endpoint
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL0_NAKSTS               (0x1 << 17)    // NAK status
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL0_EPTYP                (0x3 << 18)    // Endpoint type
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL0_STALL                (0x1 << 21)    // STALL handshake
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL0_TXFNUM               (0xf << 22)    // TxFIFO number
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL0_CNAK                 (0x1 << 26)    // Clear NAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL0_SNAK                 (0x1 << 27)    // Set NAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL0_EPDIS                (0x1 << 30)    // Endpoint disable
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL0_EPENA                (0x1 << 31)    // Endpoint enable
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_SODDFRM_SD1PID       (0x1 << 29)    // SODDFRM/SD1PID
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_SD0PID_SEVNFRM       (0x1 << 28)    // SD0PID/SEVNFRM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_TXFNUM               (0xf << 22)    // TXFNUM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_EONUM_DPID           (0x1 << 16)    // EONUM/DPID
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL1_MPSIZ                (0x7ff << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_SODDFRM              (0x1 << 29)    // SODDFRM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_SD0PID_SEVNFRM       (0x1 << 28)    // SD0PID/SEVNFRM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_TXFNUM               (0xf << 22)    // TXFNUM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_EONUM_DPID           (0x1 << 16)    // EONUM/DPID
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL2_MPSIZ                (0x7ff << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_SODDFRM              (0x1 << 29)    // SODDFRM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_SD0PID_SEVNFRM       (0x1 << 28)    // SD0PID/SEVNFRM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_TXFNUM               (0xf << 22)    // TXFNUM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_EONUM_DPID           (0x1 << 16)    // EONUM/DPID
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL3_MPSIZ                (0x7ff << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL0_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL0_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL0_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL0_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL0_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL0_SNPM                 (0x1 << 20)    // SNPM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL0_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL0_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL0_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL0_MPSIZ                (0x3 << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_SODDFRM              (0x1 << 29)    // SODDFRM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_SD0PID_SEVNFRM       (0x1 << 28)    // SD0PID/SEVNFRM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_SNPM                 (0x1 << 20)    // SNPM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_EONUM_DPID           (0x1 << 16)    // EONUM/DPID
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL1_MPSIZ                (0x7ff << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_SODDFRM              (0x1 << 29)    // SODDFRM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_SD0PID_SEVNFRM       (0x1 << 28)    // SD0PID/SEVNFRM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_SNPM                 (0x1 << 20)    // SNPM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_EONUM_DPID           (0x1 << 16)    // EONUM/DPID
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL2_MPSIZ                (0x7ff << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_SODDFRM              (0x1 << 29)    // SODDFRM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_SD0PID_SEVNFRM       (0x1 << 28)    // SD0PID/SEVNFRM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_SNPM                 (0x1 << 20)    // SNPM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_EONUM_DPID           (0x1 << 16)    // EONUM/DPID
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL3_MPSIZ                (0x7ff << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT0_TXFE                 (0x1 << 7)    // TXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT0_INEPNE               (0x1 << 6)    // INEPNE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT0_ITTXFE               (0x1 << 4)    // ITTXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT0_TOC                  (0x1 << 3)    // TOC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT0_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT0_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT1_TXFE                 (0x1 << 7)    // TXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT1_INEPNE               (0x1 << 6)    // INEPNE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT1_ITTXFE               (0x1 << 4)    // ITTXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT1_TOC                  (0x1 << 3)    // TOC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT1_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT1_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT2_TXFE                 (0x1 << 7)    // TXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT2_INEPNE               (0x1 << 6)    // INEPNE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT2_ITTXFE               (0x1 << 4)    // ITTXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT2_TOC                  (0x1 << 3)    // TOC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT2_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT2_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT3_TXFE                 (0x1 << 7)    // TXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT3_INEPNE               (0x1 << 6)    // INEPNE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT3_ITTXFE               (0x1 << 4)    // ITTXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT3_TOC                  (0x1 << 3)    // TOC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT3_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT3_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT0_B2BSTUP              (0x1 << 6)    // B2BSTUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT0_OTEPDIS              (0x1 << 4)    // OTEPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT0_STUP                 (0x1 << 3)    // STUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT0_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT0_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT1_B2BSTUP              (0x1 << 6)    // B2BSTUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT1_OTEPDIS              (0x1 << 4)    // OTEPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT1_STUP                 (0x1 << 3)    // STUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT1_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT1_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT2_B2BSTUP              (0x1 << 6)    // B2BSTUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT2_OTEPDIS              (0x1 << 4)    // OTEPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT2_STUP                 (0x1 << 3)    // STUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT2_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT2_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT3_B2BSTUP              (0x1 << 6)    // B2BSTUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT3_OTEPDIS              (0x1 << 4)    // OTEPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT3_STUP                 (0x1 << 3)    // STUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT3_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT3_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ0_PKTCNT              (0x3 << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ0_XFRSIZ              (0x7f << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ0_STUPCNT             (0x3 << 29)    // SETUP packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ0_PKTCNT              (0x1 << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ0_XFRSIZ              (0x7f << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ1_MCNT                (0x3 << 29)    // Multi count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ1_PKTCNT              (0x3ff << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ1_XFRSIZ              (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ2_MCNT                (0x3 << 29)    // Multi count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ2_PKTCNT              (0x3ff << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ2_XFRSIZ              (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ3_MCNT                (0x3 << 29)    // Multi count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ3_PKTCNT              (0x3ff << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ3_XFRSIZ              (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DTXFSTS0_INEPTFSAV            (0xffff << 0)    // IN endpoint TxFIFO space available
#define  _OTG_FS_DEVICE_OTG_FS_DTXFSTS1_INEPTFSAV            (0xffff << 0)    // IN endpoint TxFIFO space available
#define  _OTG_FS_DEVICE_OTG_FS_DTXFSTS2_INEPTFSAV            (0xffff << 0)    // IN endpoint TxFIFO space available
#define  _OTG_FS_DEVICE_OTG_FS_DTXFSTS3_INEPTFSAV            (0xffff << 0)    // IN endpoint TxFIFO space available
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ1_RXDPID_STUPCNT      (0x3 << 29)    // Received data PID/SETUP packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ1_PKTCNT              (0x3ff << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ1_XFRSIZ              (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ2_RXDPID_STUPCNT      (0x3 << 29)    // Received data PID/SETUP packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ2_PKTCNT              (0x3ff << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ2_XFRSIZ              (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ3_RXDPID_STUPCNT      (0x3 << 29)    // Received data PID/SETUP packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ3_PKTCNT              (0x3ff << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ3_XFRSIZ              (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_SODDFRM              (0x1 << 29)    // SODDFRM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_SD0PID_SEVNFRM       (0x1 << 28)    // SD0PID/SEVNFRM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_TXFNUM               (0xf << 22)    // TXFNUM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_EONUM_DPID           (0x1 << 16)    // EONUM/DPID
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL4_MPSIZ                (0x7ff << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT4_TXFE                 (0x1 << 7)    // TXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT4_INEPNE               (0x1 << 6)    // INEPNE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT4_ITTXFE               (0x1 << 4)    // ITTXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT4_TOC                  (0x1 << 3)    // TOC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT4_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT4_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ4_MCNT                (0x3 << 29)    // Multi count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ4_PKTCNT              (0x3ff << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ4_XFRSIZ              (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DTXFSTS4_INEPTFSAV            (0xffff << 0)    // IN endpoint TxFIFO space available
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_SODDFRM              (0x1 << 29)    // SODDFRM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_SD0PID_SEVNFRM       (0x1 << 28)    // SD0PID/SEVNFRM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_TXFNUM               (0xf << 22)    // TXFNUM
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_EONUM_DPID           (0x1 << 16)    // EONUM/DPID
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DIEPCTL5_MPSIZ                (0x7ff << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT5_TXFE                 (0x1 << 7)    // TXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT5_INEPNE               (0x1 << 6)    // INEPNE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT5_ITTXFE               (0x1 << 4)    // ITTXFE
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT5_TOC                  (0x1 << 3)    // TOC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT5_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DIEPINT5_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ55_MCNT               (0x3 << 29)    // Multi count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ55_PKTCNT             (0x3ff << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DIEPTSIZ55_XFRSIZ             (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DTXFSTS55_INEPTFSAV           (0xffff << 0)    // IN endpoint TxFIFO space available
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_SODDFRM              (0x1 << 29)    // SODDFRM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_SD0PID_SEVNFRM       (0x1 << 28)    // SD0PID/SEVNFRM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_SNPM                 (0x1 << 20)    // SNPM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_EONUM_DPID           (0x1 << 16)    // EONUM/DPID
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL4_MPSIZ                (0x7ff << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT4_B2BSTUP              (0x1 << 6)    // B2BSTUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT4_OTEPDIS              (0x1 << 4)    // OTEPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT4_STUP                 (0x1 << 3)    // STUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT4_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT4_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ4_RXDPID_STUPCNT      (0x3 << 29)    // Received data PID/SETUP packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ4_PKTCNT              (0x3ff << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ4_XFRSIZ              (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_EPENA                (0x1 << 31)    // EPENA
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_EPDIS                (0x1 << 30)    // EPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_SODDFRM              (0x1 << 29)    // SODDFRM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_SD0PID_SEVNFRM       (0x1 << 28)    // SD0PID/SEVNFRM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_SNAK                 (0x1 << 27)    // SNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_CNAK                 (0x1 << 26)    // CNAK
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_Stall                (0x1 << 21)    // Stall
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_SNPM                 (0x1 << 20)    // SNPM
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_EPTYP                (0x3 << 18)    // EPTYP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_NAKSTS               (0x1 << 17)    // NAKSTS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_EONUM_DPID           (0x1 << 16)    // EONUM/DPID
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_USBAEP               (0x1 << 15)    // USBAEP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPCTL5_MPSIZ                (0x7ff << 0)    // MPSIZ
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT5_B2BSTUP              (0x1 << 6)    // B2BSTUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT5_OTEPDIS              (0x1 << 4)    // OTEPDIS
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT5_STUP                 (0x1 << 3)    // STUP
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT5_EPDISD               (0x1 << 1)    // EPDISD
#define  _OTG_FS_DEVICE_OTG_FS_DOEPINT5_XFRC                 (0x1 << 0)    // XFRC
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ5_RXDPID_STUPCNT      (0x3 << 29)    // Received data PID/SETUP packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ5_PKTCNT              (0x3ff << 19)    // Packet count
#define  _OTG_FS_DEVICE_OTG_FS_DOEPTSIZ5_XFRSIZ              (0x7ffff << 0)    // Transfer size
#define  _OTG_FS_PWRCLK_OTG_FS_PCGCCTL_STPPCLK               (0x1 << 0)    // Stop PHY clock
#define  _OTG_FS_PWRCLK_OTG_FS_PCGCCTL_GATEHCLK              (0x1 << 1)    // Gate HCLK
#define  _OTG_FS_PWRCLK_OTG_FS_PCGCCTL_PHYSUSP               (0x1 << 4)    // PHY Suspended

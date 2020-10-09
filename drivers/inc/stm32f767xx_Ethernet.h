#define Get_Ethernet_MAC_MACCR(FLAG)         (*(uint32_t*)0x40028000 |= FLAG)
#define Get_Ethernet_MAC_MACFFR(FLAG)        (*(uint32_t*)0x40028004 |= FLAG)
#define Get_Ethernet_MAC_MACHTHR(FLAG)       (*(uint32_t*)0x40028008 |= FLAG)
#define Get_Ethernet_MAC_MACHTLR(FLAG)       (*(uint32_t*)0x4002800c |= FLAG)
#define Get_Ethernet_MAC_MACMIIAR(FLAG)      (*(uint32_t*)0x40028010 |= FLAG)
#define Get_Ethernet_MAC_MACMIIDR(FLAG)      (*(uint32_t*)0x40028014 |= FLAG)
#define Get_Ethernet_MAC_MACFCR(FLAG)        (*(uint32_t*)0x40028018 |= FLAG)
#define Get_Ethernet_MAC_MACVLANTR(FLAG)     (*(uint32_t*)0x4002801c |= FLAG)
#define Get_Ethernet_MAC_MACPMTCSR(FLAG)     (*(uint32_t*)0x4002802c |= FLAG)
#define Get_Ethernet_MAC_MACDBGR(FLAG)       (*(uint32_t*)0x40028034 |= FLAG)
#define Get_Ethernet_MAC_MACSR(FLAG)         (*(uint32_t*)0x40028038 |= FLAG)
#define Get_Ethernet_MAC_MACIMR(FLAG)        (*(uint32_t*)0x4002803c |= FLAG)
#define Get_Ethernet_MAC_MACA0HR(FLAG)       (*(uint32_t*)0x40028040 |= FLAG)
#define Get_Ethernet_MAC_MACA0LR(FLAG)       (*(uint32_t*)0x40028044 |= FLAG)
#define Get_Ethernet_MAC_MACA1HR(FLAG)       (*(uint32_t*)0x40028048 |= FLAG)
#define Get_Ethernet_MAC_MACA1LR(FLAG)       (*(uint32_t*)0x4002804c |= FLAG)
#define Get_Ethernet_MAC_MACA2HR(FLAG)       (*(uint32_t*)0x40028050 |= FLAG)
#define Get_Ethernet_MAC_MACA2LR(FLAG)       (*(uint32_t*)0x40028054 |= FLAG)
#define Get_Ethernet_MAC_MACA3HR(FLAG)       (*(uint32_t*)0x40028058 |= FLAG)
#define Get_Ethernet_MAC_MACA3LR(FLAG)       (*(uint32_t*)0x4002805c |= FLAG)
#define Get_Ethernet_MAC_MACRWUFFER(FLAG)    (*(uint32_t*)0x40028060 |= FLAG)
#define Get_Ethernet_MMC_MMCCR(FLAG)         (*(uint32_t*)0x40028100 |= FLAG)
#define Get_Ethernet_MMC_MMCRIR(FLAG)        (*(uint32_t*)0x40028104 |= FLAG)
#define Get_Ethernet_MMC_MMCTIR(FLAG)        (*(uint32_t*)0x40028108 |= FLAG)
#define Get_Ethernet_MMC_MMCRIMR(FLAG)       (*(uint32_t*)0x4002810c |= FLAG)
#define Get_Ethernet_MMC_MMCTIMR(FLAG)       (*(uint32_t*)0x40028110 |= FLAG)
#define Get_Ethernet_MMC_MMCTGFSCCR(FLAG)    (*(uint32_t*)0x4002814c |= FLAG)
#define Get_Ethernet_MMC_MMCTGFMSCCR(FLAG)   (*(uint32_t*)0x40028150 |= FLAG)
#define Get_Ethernet_MMC_MMCTGFCR(FLAG)      (*(uint32_t*)0x40028168 |= FLAG)
#define Get_Ethernet_MMC_MMCRFCECR(FLAG)     (*(uint32_t*)0x40028194 |= FLAG)
#define Get_Ethernet_MMC_MMCRFAECR(FLAG)     (*(uint32_t*)0x40028198 |= FLAG)
#define Get_Ethernet_MMC_MMCRGUFCR(FLAG)     (*(uint32_t*)0x400281c4 |= FLAG)
#define Get_Ethernet_PTP_PTPTSCR(FLAG)       (*(uint32_t*)0x40028700 |= FLAG)
#define Get_Ethernet_PTP_PTPSSIR(FLAG)       (*(uint32_t*)0x40028704 |= FLAG)
#define Get_Ethernet_PTP_PTPTSHR(FLAG)       (*(uint32_t*)0x40028708 |= FLAG)
#define Get_Ethernet_PTP_PTPTSLR(FLAG)       (*(uint32_t*)0x4002870c |= FLAG)
#define Get_Ethernet_PTP_PTPTSHUR(FLAG)      (*(uint32_t*)0x40028710 |= FLAG)
#define Get_Ethernet_PTP_PTPTSLUR(FLAG)      (*(uint32_t*)0x40028714 |= FLAG)
#define Get_Ethernet_PTP_PTPTSAR(FLAG)       (*(uint32_t*)0x40028718 |= FLAG)
#define Get_Ethernet_PTP_PTPTTHR(FLAG)       (*(uint32_t*)0x4002871c |= FLAG)
#define Get_Ethernet_PTP_PTPTTLR(FLAG)       (*(uint32_t*)0x40028720 |= FLAG)
#define Get_Ethernet_PTP_PTPTSSR(FLAG)       (*(uint32_t*)0x40028728 |= FLAG)
#define Get_Ethernet_PTP_PTPPPSCR(FLAG)      (*(uint32_t*)0x4002872c |= FLAG)
#define Get_Ethernet_DMA_DMABMR(FLAG)        (*(uint32_t*)0x40029000 |= FLAG)
#define Get_Ethernet_DMA_DMATPDR(FLAG)       (*(uint32_t*)0x40029004 |= FLAG)
#define Get_Ethernet_DMA_DMARPDR(FLAG)       (*(uint32_t*)0x40029008 |= FLAG)
#define Get_Ethernet_DMA_DMARDLAR(FLAG)      (*(uint32_t*)0x4002900c |= FLAG)
#define Get_Ethernet_DMA_DMATDLAR(FLAG)      (*(uint32_t*)0x40029010 |= FLAG)
#define Get_Ethernet_DMA_DMASR(FLAG)         (*(uint32_t*)0x40029014 |= FLAG)
#define Get_Ethernet_DMA_DMAOMR(FLAG)        (*(uint32_t*)0x40029018 |= FLAG)
#define Get_Ethernet_DMA_DMAIER(FLAG)        (*(uint32_t*)0x4002901c |= FLAG)
#define Get_Ethernet_DMA_DMAMFBOCR(FLAG)     (*(uint32_t*)0x40029020 |= FLAG)
#define Get_Ethernet_DMA_DMARSWTR(FLAG)      (*(uint32_t*)0x40029024 |= FLAG)
#define Get_Ethernet_DMA_DMACHTDR(FLAG)      (*(uint32_t*)0x40029048 |= FLAG)
#define Get_Ethernet_DMA_DMACHRDR(FLAG)      (*(uint32_t*)0x4002904c |= FLAG)
#define Get_Ethernet_DMA_DMACHTBAR(FLAG)     (*(uint32_t*)0x40029050 |= FLAG)
#define Get_Ethernet_DMA_DMACHRBAR(FLAG)     (*(uint32_t*)0x40029054 |= FLAG)
#define Set_Ethernet_MAC_MACCR(FLAG)         (*(uint32_t*)0x40028000 &= FLAG)
#define Clr_Ethernet_MAC_MACCR(FLAG)         (*(uint32_t*)0x40028000 |= ~FLAG)
#define Set_Ethernet_MAC_MACFFR(FLAG)        (*(uint32_t*)0x40028004 &= FLAG)
#define Clr_Ethernet_MAC_MACFFR(FLAG)        (*(uint32_t*)0x40028004 |= ~FLAG)
#define Set_Ethernet_MAC_MACHTHR(FLAG)       (*(uint32_t*)0x40028008 &= FLAG)
#define Clr_Ethernet_MAC_MACHTHR(FLAG)       (*(uint32_t*)0x40028008 |= ~FLAG)
#define Set_Ethernet_MAC_MACHTLR(FLAG)       (*(uint32_t*)0x4002800c &= FLAG)
#define Clr_Ethernet_MAC_MACHTLR(FLAG)       (*(uint32_t*)0x4002800c |= ~FLAG)
#define Set_Ethernet_MAC_MACMIIAR(FLAG)      (*(uint32_t*)0x40028010 &= FLAG)
#define Clr_Ethernet_MAC_MACMIIAR(FLAG)      (*(uint32_t*)0x40028010 |= ~FLAG)
#define Set_Ethernet_MAC_MACMIIDR(FLAG)      (*(uint32_t*)0x40028014 &= FLAG)
#define Clr_Ethernet_MAC_MACMIIDR(FLAG)      (*(uint32_t*)0x40028014 |= ~FLAG)
#define Set_Ethernet_MAC_MACFCR(FLAG)        (*(uint32_t*)0x40028018 &= FLAG)
#define Clr_Ethernet_MAC_MACFCR(FLAG)        (*(uint32_t*)0x40028018 |= ~FLAG)
#define Set_Ethernet_MAC_MACVLANTR(FLAG)     (*(uint32_t*)0x4002801c &= FLAG)
#define Clr_Ethernet_MAC_MACVLANTR(FLAG)     (*(uint32_t*)0x4002801c |= ~FLAG)
#define Set_Ethernet_MAC_MACPMTCSR(FLAG)     (*(uint32_t*)0x4002802c &= FLAG)
#define Clr_Ethernet_MAC_MACPMTCSR(FLAG)     (*(uint32_t*)0x4002802c |= ~FLAG)
#define Set_Ethernet_MAC_MACDBGR(FLAG)       (*(uint32_t*)0x40028034 &= FLAG)
#define Clr_Ethernet_MAC_MACDBGR(FLAG)       (*(uint32_t*)0x40028034 |= ~FLAG)
#define Set_Ethernet_MAC_MACSR(FLAG)         (*(uint32_t*)0x40028038 &= FLAG)
#define Clr_Ethernet_MAC_MACSR(FLAG)         (*(uint32_t*)0x40028038 |= ~FLAG)
#define Set_Ethernet_MAC_MACIMR(FLAG)        (*(uint32_t*)0x4002803c &= FLAG)
#define Clr_Ethernet_MAC_MACIMR(FLAG)        (*(uint32_t*)0x4002803c |= ~FLAG)
#define Set_Ethernet_MAC_MACA0HR(FLAG)       (*(uint32_t*)0x40028040 &= FLAG)
#define Clr_Ethernet_MAC_MACA0HR(FLAG)       (*(uint32_t*)0x40028040 |= ~FLAG)
#define Set_Ethernet_MAC_MACA0LR(FLAG)       (*(uint32_t*)0x40028044 &= FLAG)
#define Clr_Ethernet_MAC_MACA0LR(FLAG)       (*(uint32_t*)0x40028044 |= ~FLAG)
#define Set_Ethernet_MAC_MACA1HR(FLAG)       (*(uint32_t*)0x40028048 &= FLAG)
#define Clr_Ethernet_MAC_MACA1HR(FLAG)       (*(uint32_t*)0x40028048 |= ~FLAG)
#define Set_Ethernet_MAC_MACA1LR(FLAG)       (*(uint32_t*)0x4002804c &= FLAG)
#define Clr_Ethernet_MAC_MACA1LR(FLAG)       (*(uint32_t*)0x4002804c |= ~FLAG)
#define Set_Ethernet_MAC_MACA2HR(FLAG)       (*(uint32_t*)0x40028050 &= FLAG)
#define Clr_Ethernet_MAC_MACA2HR(FLAG)       (*(uint32_t*)0x40028050 |= ~FLAG)
#define Set_Ethernet_MAC_MACA2LR(FLAG)       (*(uint32_t*)0x40028054 &= FLAG)
#define Clr_Ethernet_MAC_MACA2LR(FLAG)       (*(uint32_t*)0x40028054 |= ~FLAG)
#define Set_Ethernet_MAC_MACA3HR(FLAG)       (*(uint32_t*)0x40028058 &= FLAG)
#define Clr_Ethernet_MAC_MACA3HR(FLAG)       (*(uint32_t*)0x40028058 |= ~FLAG)
#define Set_Ethernet_MAC_MACA3LR(FLAG)       (*(uint32_t*)0x4002805c &= FLAG)
#define Clr_Ethernet_MAC_MACA3LR(FLAG)       (*(uint32_t*)0x4002805c |= ~FLAG)
#define Set_Ethernet_MAC_MACRWUFFER(FLAG)    (*(uint32_t*)0x40028060 &= FLAG)
#define Clr_Ethernet_MAC_MACRWUFFER(FLAG)    (*(uint32_t*)0x40028060 |= ~FLAG)
#define Set_Ethernet_MMC_MMCCR(FLAG)         (*(uint32_t*)0x40028100 &= FLAG)
#define Clr_Ethernet_MMC_MMCCR(FLAG)         (*(uint32_t*)0x40028100 |= ~FLAG)
#define Set_Ethernet_MMC_MMCRIR(FLAG)        (*(uint32_t*)0x40028104 &= FLAG)
#define Clr_Ethernet_MMC_MMCRIR(FLAG)        (*(uint32_t*)0x40028104 |= ~FLAG)
#define Set_Ethernet_MMC_MMCTIR(FLAG)        (*(uint32_t*)0x40028108 &= FLAG)
#define Clr_Ethernet_MMC_MMCTIR(FLAG)        (*(uint32_t*)0x40028108 |= ~FLAG)
#define Set_Ethernet_MMC_MMCRIMR(FLAG)       (*(uint32_t*)0x4002810c &= FLAG)
#define Clr_Ethernet_MMC_MMCRIMR(FLAG)       (*(uint32_t*)0x4002810c |= ~FLAG)
#define Set_Ethernet_MMC_MMCTIMR(FLAG)       (*(uint32_t*)0x40028110 &= FLAG)
#define Clr_Ethernet_MMC_MMCTIMR(FLAG)       (*(uint32_t*)0x40028110 |= ~FLAG)
#define Set_Ethernet_MMC_MMCTGFSCCR(FLAG)    (*(uint32_t*)0x4002814c &= FLAG)
#define Clr_Ethernet_MMC_MMCTGFSCCR(FLAG)    (*(uint32_t*)0x4002814c |= ~FLAG)
#define Set_Ethernet_MMC_MMCTGFMSCCR(FLAG)   (*(uint32_t*)0x40028150 &= FLAG)
#define Clr_Ethernet_MMC_MMCTGFMSCCR(FLAG)   (*(uint32_t*)0x40028150 |= ~FLAG)
#define Set_Ethernet_MMC_MMCTGFCR(FLAG)      (*(uint32_t*)0x40028168 &= FLAG)
#define Clr_Ethernet_MMC_MMCTGFCR(FLAG)      (*(uint32_t*)0x40028168 |= ~FLAG)
#define Set_Ethernet_MMC_MMCRFCECR(FLAG)     (*(uint32_t*)0x40028194 &= FLAG)
#define Clr_Ethernet_MMC_MMCRFCECR(FLAG)     (*(uint32_t*)0x40028194 |= ~FLAG)
#define Set_Ethernet_MMC_MMCRFAECR(FLAG)     (*(uint32_t*)0x40028198 &= FLAG)
#define Clr_Ethernet_MMC_MMCRFAECR(FLAG)     (*(uint32_t*)0x40028198 |= ~FLAG)
#define Set_Ethernet_MMC_MMCRGUFCR(FLAG)     (*(uint32_t*)0x400281c4 &= FLAG)
#define Clr_Ethernet_MMC_MMCRGUFCR(FLAG)     (*(uint32_t*)0x400281c4 |= ~FLAG)
#define Set_Ethernet_PTP_PTPTSCR(FLAG)       (*(uint32_t*)0x40028700 &= FLAG)
#define Clr_Ethernet_PTP_PTPTSCR(FLAG)       (*(uint32_t*)0x40028700 |= ~FLAG)
#define Set_Ethernet_PTP_PTPSSIR(FLAG)       (*(uint32_t*)0x40028704 &= FLAG)
#define Clr_Ethernet_PTP_PTPSSIR(FLAG)       (*(uint32_t*)0x40028704 |= ~FLAG)
#define Set_Ethernet_PTP_PTPTSHR(FLAG)       (*(uint32_t*)0x40028708 &= FLAG)
#define Clr_Ethernet_PTP_PTPTSHR(FLAG)       (*(uint32_t*)0x40028708 |= ~FLAG)
#define Set_Ethernet_PTP_PTPTSLR(FLAG)       (*(uint32_t*)0x4002870c &= FLAG)
#define Clr_Ethernet_PTP_PTPTSLR(FLAG)       (*(uint32_t*)0x4002870c |= ~FLAG)
#define Set_Ethernet_PTP_PTPTSHUR(FLAG)      (*(uint32_t*)0x40028710 &= FLAG)
#define Clr_Ethernet_PTP_PTPTSHUR(FLAG)      (*(uint32_t*)0x40028710 |= ~FLAG)
#define Set_Ethernet_PTP_PTPTSLUR(FLAG)      (*(uint32_t*)0x40028714 &= FLAG)
#define Clr_Ethernet_PTP_PTPTSLUR(FLAG)      (*(uint32_t*)0x40028714 |= ~FLAG)
#define Set_Ethernet_PTP_PTPTSAR(FLAG)       (*(uint32_t*)0x40028718 &= FLAG)
#define Clr_Ethernet_PTP_PTPTSAR(FLAG)       (*(uint32_t*)0x40028718 |= ~FLAG)
#define Set_Ethernet_PTP_PTPTTHR(FLAG)       (*(uint32_t*)0x4002871c &= FLAG)
#define Clr_Ethernet_PTP_PTPTTHR(FLAG)       (*(uint32_t*)0x4002871c |= ~FLAG)
#define Set_Ethernet_PTP_PTPTTLR(FLAG)       (*(uint32_t*)0x40028720 &= FLAG)
#define Clr_Ethernet_PTP_PTPTTLR(FLAG)       (*(uint32_t*)0x40028720 |= ~FLAG)
#define Set_Ethernet_PTP_PTPTSSR(FLAG)       (*(uint32_t*)0x40028728 &= FLAG)
#define Clr_Ethernet_PTP_PTPTSSR(FLAG)       (*(uint32_t*)0x40028728 |= ~FLAG)
#define Set_Ethernet_PTP_PTPPPSCR(FLAG)      (*(uint32_t*)0x4002872c &= FLAG)
#define Clr_Ethernet_PTP_PTPPPSCR(FLAG)      (*(uint32_t*)0x4002872c |= ~FLAG)
#define Set_Ethernet_DMA_DMABMR(FLAG)        (*(uint32_t*)0x40029000 &= FLAG)
#define Clr_Ethernet_DMA_DMABMR(FLAG)        (*(uint32_t*)0x40029000 |= ~FLAG)
#define Set_Ethernet_DMA_DMATPDR(FLAG)       (*(uint32_t*)0x40029004 &= FLAG)
#define Clr_Ethernet_DMA_DMATPDR(FLAG)       (*(uint32_t*)0x40029004 |= ~FLAG)
#define Set_Ethernet_DMA_DMARPDR(FLAG)       (*(uint32_t*)0x40029008 &= FLAG)
#define Clr_Ethernet_DMA_DMARPDR(FLAG)       (*(uint32_t*)0x40029008 |= ~FLAG)
#define Set_Ethernet_DMA_DMARDLAR(FLAG)      (*(uint32_t*)0x4002900c &= FLAG)
#define Clr_Ethernet_DMA_DMARDLAR(FLAG)      (*(uint32_t*)0x4002900c |= ~FLAG)
#define Set_Ethernet_DMA_DMATDLAR(FLAG)      (*(uint32_t*)0x40029010 &= FLAG)
#define Clr_Ethernet_DMA_DMATDLAR(FLAG)      (*(uint32_t*)0x40029010 |= ~FLAG)
#define Set_Ethernet_DMA_DMASR(FLAG)         (*(uint32_t*)0x40029014 &= FLAG)
#define Clr_Ethernet_DMA_DMASR(FLAG)         (*(uint32_t*)0x40029014 |= ~FLAG)
#define Set_Ethernet_DMA_DMAOMR(FLAG)        (*(uint32_t*)0x40029018 &= FLAG)
#define Clr_Ethernet_DMA_DMAOMR(FLAG)        (*(uint32_t*)0x40029018 |= ~FLAG)
#define Set_Ethernet_DMA_DMAIER(FLAG)        (*(uint32_t*)0x4002901c &= FLAG)
#define Clr_Ethernet_DMA_DMAIER(FLAG)        (*(uint32_t*)0x4002901c |= ~FLAG)
#define Set_Ethernet_DMA_DMAMFBOCR(FLAG)     (*(uint32_t*)0x40029020 &= FLAG)
#define Clr_Ethernet_DMA_DMAMFBOCR(FLAG)     (*(uint32_t*)0x40029020 |= ~FLAG)
#define Set_Ethernet_DMA_DMARSWTR(FLAG)      (*(uint32_t*)0x40029024 &= FLAG)
#define Clr_Ethernet_DMA_DMARSWTR(FLAG)      (*(uint32_t*)0x40029024 |= ~FLAG)
#define Set_Ethernet_DMA_DMACHTDR(FLAG)      (*(uint32_t*)0x40029048 &= FLAG)
#define Clr_Ethernet_DMA_DMACHTDR(FLAG)      (*(uint32_t*)0x40029048 |= ~FLAG)
#define Set_Ethernet_DMA_DMACHRDR(FLAG)      (*(uint32_t*)0x4002904c &= FLAG)
#define Clr_Ethernet_DMA_DMACHRDR(FLAG)      (*(uint32_t*)0x4002904c |= ~FLAG)
#define Set_Ethernet_DMA_DMACHTBAR(FLAG)     (*(uint32_t*)0x40029050 &= FLAG)
#define Clr_Ethernet_DMA_DMACHTBAR(FLAG)     (*(uint32_t*)0x40029050 |= ~FLAG)
#define Set_Ethernet_DMA_DMACHRBAR(FLAG)     (*(uint32_t*)0x40029054 &= FLAG)
#define Clr_Ethernet_DMA_DMACHRBAR(FLAG)     (*(uint32_t*)0x40029054 |= ~FLAG)
#define  _Ethernet_MAC_MACCR_RE                              (0x1 << 2)    // RE
#define  _Ethernet_MAC_MACCR_TE                              (0x1 << 3)    // TE
#define  _Ethernet_MAC_MACCR_DC                              (0x1 << 4)    // DC
#define  _Ethernet_MAC_MACCR_BL                              (0x3 << 5)    // BL
#define  _Ethernet_MAC_MACCR_APCS                            (0x1 << 7)    // APCS
#define  _Ethernet_MAC_MACCR_RD                              (0x1 << 9)    // RD
#define  _Ethernet_MAC_MACCR_IPCO                            (0x1 << 10)    // IPCO
#define  _Ethernet_MAC_MACCR_DM                              (0x1 << 11)    // DM
#define  _Ethernet_MAC_MACCR_LM                              (0x1 << 12)    // LM
#define  _Ethernet_MAC_MACCR_ROD                             (0x1 << 13)    // ROD
#define  _Ethernet_MAC_MACCR_FES                             (0x1 << 14)    // FES
#define  _Ethernet_MAC_MACCR_CSD                             (0x1 << 16)    // CSD
#define  _Ethernet_MAC_MACCR_IFG                             (0x7 << 17)    // IFG
#define  _Ethernet_MAC_MACCR_JD                              (0x1 << 22)    // JD
#define  _Ethernet_MAC_MACCR_WD                              (0x1 << 23)    // WD
#define  _Ethernet_MAC_MACCR_CSTF                            (0x1 << 25)    // CSTF
#define  _Ethernet_MAC_MACFFR_PM                             (0x1 << 0)    // PM
#define  _Ethernet_MAC_MACFFR_HU                             (0x1 << 1)    // HU
#define  _Ethernet_MAC_MACFFR_HM                             (0x1 << 2)    // HM
#define  _Ethernet_MAC_MACFFR_DAIF                           (0x1 << 3)    // DAIF
#define  _Ethernet_MAC_MACFFR_RAM                            (0x1 << 4)    // RAM
#define  _Ethernet_MAC_MACFFR_BFD                            (0x1 << 5)    // BFD
#define  _Ethernet_MAC_MACFFR_PCF                            (0x1 << 6)    // PCF
#define  _Ethernet_MAC_MACFFR_SAIF                           (0x1 << 7)    // SAIF
#define  _Ethernet_MAC_MACFFR_SAF                            (0x1 << 8)    // SAF
#define  _Ethernet_MAC_MACFFR_HPF                            (0x1 << 9)    // HPF
#define  _Ethernet_MAC_MACFFR_RA                             (0x1 << 31)    // RA
#define  _Ethernet_MAC_MACHTHR_HTH                           (0xffffffff << 0)    // HTH
#define  _Ethernet_MAC_MACHTLR_HTL                           (0xffffffff << 0)    // HTL
#define  _Ethernet_MAC_MACMIIAR_MB                           (0x1 << 0)    // MB
#define  _Ethernet_MAC_MACMIIAR_MW                           (0x1 << 1)    // MW
#define  _Ethernet_MAC_MACMIIAR_CR                           (0x7 << 2)    // CR
#define  _Ethernet_MAC_MACMIIAR_MR                           (0x1f << 6)    // MR
#define  _Ethernet_MAC_MACMIIAR_PA                           (0x1f << 11)    // PA
#define  _Ethernet_MAC_MACMIIDR_TD                           (0xffff << 0)    // TD
#define  _Ethernet_MAC_MACFCR_FCB                            (0x1 << 0)    // FCB
#define  _Ethernet_MAC_MACFCR_TFCE                           (0x1 << 1)    // TFCE
#define  _Ethernet_MAC_MACFCR_RFCE                           (0x1 << 2)    // RFCE
#define  _Ethernet_MAC_MACFCR_UPFD                           (0x1 << 3)    // UPFD
#define  _Ethernet_MAC_MACFCR_PLT                            (0x3 << 4)    // PLT
#define  _Ethernet_MAC_MACFCR_ZQPD                           (0x1 << 7)    // ZQPD
#define  _Ethernet_MAC_MACFCR_PT                             (0xffff << 16)    // PT
#define  _Ethernet_MAC_MACVLANTR_VLANTI                      (0xffff << 0)    // VLANTI
#define  _Ethernet_MAC_MACVLANTR_VLANTC                      (0x1 << 16)    // VLANTC
#define  _Ethernet_MAC_MACPMTCSR_PD                          (0x1 << 0)    // PD
#define  _Ethernet_MAC_MACPMTCSR_MPE                         (0x1 << 1)    // MPE
#define  _Ethernet_MAC_MACPMTCSR_WFE                         (0x1 << 2)    // WFE
#define  _Ethernet_MAC_MACPMTCSR_MPR                         (0x1 << 5)    // MPR
#define  _Ethernet_MAC_MACPMTCSR_WFR                         (0x1 << 6)    // WFR
#define  _Ethernet_MAC_MACPMTCSR_GU                          (0x1 << 9)    // GU
#define  _Ethernet_MAC_MACPMTCSR_WFFRPR                      (0x1 << 31)    // WFFRPR
#define  _Ethernet_MAC_MACDBGR_CR                            (0x1 << 0)    // CR
#define  _Ethernet_MAC_MACDBGR_CSR                           (0x1 << 1)    // CSR
#define  _Ethernet_MAC_MACDBGR_ROR                           (0x1 << 2)    // ROR
#define  _Ethernet_MAC_MACDBGR_MCF                           (0x1 << 3)    // MCF
#define  _Ethernet_MAC_MACDBGR_MCP                           (0x1 << 4)    // MCP
#define  _Ethernet_MAC_MACDBGR_MCFHP                         (0x1 << 5)    // MCFHP
#define  _Ethernet_MAC_MACSR_PMTS                            (0x1 << 3)    // PMTS
#define  _Ethernet_MAC_MACSR_MMCS                            (0x1 << 4)    // MMCS
#define  _Ethernet_MAC_MACSR_MMCRS                           (0x1 << 5)    // MMCRS
#define  _Ethernet_MAC_MACSR_MMCTS                           (0x1 << 6)    // MMCTS
#define  _Ethernet_MAC_MACSR_TSTS                            (0x1 << 9)    // TSTS
#define  _Ethernet_MAC_MACIMR_PMTIM                          (0x1 << 3)    // PMTIM
#define  _Ethernet_MAC_MACIMR_TSTIM                          (0x1 << 9)    // TSTIM
#define  _Ethernet_MAC_MACA0HR_MACA0H                        (0xffff << 0)    // MAC address0 high
#define  _Ethernet_MAC_MACA0HR_MO                            (0x1 << 31)    // Always 1
#define  _Ethernet_MAC_MACA0LR_MACA0L                        (0xffffffff << 0)    // 0
#define  _Ethernet_MAC_MACA1HR_MACA1H                        (0xffff << 0)    // MACA1H
#define  _Ethernet_MAC_MACA1HR_MBC                           (0x3f << 24)    // MBC
#define  _Ethernet_MAC_MACA1HR_SA                            (0x1 << 30)    // SA
#define  _Ethernet_MAC_MACA1HR_AE                            (0x1 << 31)    // AE
#define  _Ethernet_MAC_MACA1LR_MACA1LR                       (0xffffffff << 0)    // MACA1LR
#define  _Ethernet_MAC_MACA2HR_MAC2AH                        (0xffff << 0)    // MAC2AH
#define  _Ethernet_MAC_MACA2HR_MBC                           (0x3f << 24)    // MBC
#define  _Ethernet_MAC_MACA2HR_SA                            (0x1 << 30)    // SA
#define  _Ethernet_MAC_MACA2HR_AE                            (0x1 << 31)    // AE
#define  _Ethernet_MAC_MACA2LR_MACA2L                        (0x7fffffff << 0)    // MACA2L
#define  _Ethernet_MAC_MACA3HR_MACA3H                        (0xffff << 0)    // MACA3H
#define  _Ethernet_MAC_MACA3HR_MBC                           (0x3f << 24)    // MBC
#define  _Ethernet_MAC_MACA3HR_SA                            (0x1 << 30)    // SA
#define  _Ethernet_MAC_MACA3HR_AE                            (0x1 << 31)    // AE
#define  _Ethernet_MAC_MACA3LR_MBCA3L                        (0xffffffff << 0)    // MBCA3L
#define  _Ethernet_MMC_MMCCR_CR                              (0x1 << 0)    // CR
#define  _Ethernet_MMC_MMCCR_CSR                             (0x1 << 1)    // CSR
#define  _Ethernet_MMC_MMCCR_ROR                             (0x1 << 2)    // ROR
#define  _Ethernet_MMC_MMCCR_MCF                             (0x1 << 3)    // MCF
#define  _Ethernet_MMC_MMCCR_MCP                             (0x1 << 4)    // MCP
#define  _Ethernet_MMC_MMCCR_MCFHP                           (0x1 << 5)    // MCFHP
#define  _Ethernet_MMC_MMCRIR_RFCES                          (0x1 << 5)    // RFCES
#define  _Ethernet_MMC_MMCRIR_RFAES                          (0x1 << 6)    // RFAES
#define  _Ethernet_MMC_MMCRIR_RGUFS                          (0x1 << 17)    // RGUFS
#define  _Ethernet_MMC_MMCTIR_TGFSCS                         (0x1 << 14)    // TGFSCS
#define  _Ethernet_MMC_MMCTIR_TGFMSCS                        (0x1 << 15)    // TGFMSCS
#define  _Ethernet_MMC_MMCTIR_TGFS                           (0x1 << 21)    // TGFS
#define  _Ethernet_MMC_MMCRIMR_RFCEM                         (0x1 << 5)    // RFCEM
#define  _Ethernet_MMC_MMCRIMR_RFAEM                         (0x1 << 6)    // RFAEM
#define  _Ethernet_MMC_MMCRIMR_RGUFM                         (0x1 << 17)    // RGUFM
#define  _Ethernet_MMC_MMCTIMR_TGFSCM                        (0x1 << 14)    // TGFSCM
#define  _Ethernet_MMC_MMCTIMR_TGFMSCM                       (0x1 << 15)    // TGFMSCM
#define  _Ethernet_MMC_MMCTIMR_TGFM                          (0x1 << 16)    // TGFM
#define  _Ethernet_MMC_MMCTGFSCCR_TGFSCC                     (0xffffffff << 0)    // TGFSCC
#define  _Ethernet_MMC_MMCTGFMSCCR_TGFMSCC                   (0xffffffff << 0)    // TGFMSCC
#define  _Ethernet_MMC_MMCTGFCR_TGFC                         (0xffffffff << 0)    // HTL
#define  _Ethernet_MMC_MMCRFCECR_RFCFC                       (0xffffffff << 0)    // RFCFC
#define  _Ethernet_MMC_MMCRFAECR_RFAEC                       (0xffffffff << 0)    // RFAEC
#define  _Ethernet_MMC_MMCRGUFCR_RGUFC                       (0xffffffff << 0)    // RGUFC
#define  _Ethernet_PTP_PTPTSCR_TSE                           (0x1 << 0)    // TSE
#define  _Ethernet_PTP_PTPTSCR_TSFCU                         (0x1 << 1)    // TSFCU
#define  _Ethernet_PTP_PTPTSCR_TSPTPPSV2E                    (0x1 << 10)    // TSPTPPSV2E
#define  _Ethernet_PTP_PTPTSCR_TSSPTPOEFE                    (0x1 << 11)    // TSSPTPOEFE
#define  _Ethernet_PTP_PTPTSCR_TSSIPV6FE                     (0x1 << 12)    // TSSIPV6FE
#define  _Ethernet_PTP_PTPTSCR_TSSIPV4FE                     (0x1 << 13)    // TSSIPV4FE
#define  _Ethernet_PTP_PTPTSCR_TSSEME                        (0x1 << 14)    // TSSEME
#define  _Ethernet_PTP_PTPTSCR_TSSMRME                       (0x1 << 15)    // TSSMRME
#define  _Ethernet_PTP_PTPTSCR_TSCNT                         (0x3 << 16)    // TSCNT
#define  _Ethernet_PTP_PTPTSCR_TSPFFMAE                      (0x1 << 18)    // TSPFFMAE
#define  _Ethernet_PTP_PTPTSCR_TSSTI                         (0x1 << 2)    // TSSTI
#define  _Ethernet_PTP_PTPTSCR_TSSTU                         (0x1 << 3)    // TSSTU
#define  _Ethernet_PTP_PTPTSCR_TSITE                         (0x1 << 4)    // TSITE
#define  _Ethernet_PTP_PTPTSCR_TTSARU                        (0x1 << 5)    // TTSARU
#define  _Ethernet_PTP_PTPTSCR_TSSARFE                       (0x1 << 8)    // TSSARFE
#define  _Ethernet_PTP_PTPTSCR_TSSSR                         (0x1 << 9)    // TSSSR
#define  _Ethernet_PTP_PTPSSIR_STSSI                         (0xff << 0)    // STSSI
#define  _Ethernet_PTP_PTPTSHR_STS                           (0xffffffff << 0)    // STS
#define  _Ethernet_PTP_PTPTSLR_STSS                          (0x7fffffff << 0)    // STSS
#define  _Ethernet_PTP_PTPTSLR_STPNS                         (0x1 << 31)    // STPNS
#define  _Ethernet_PTP_PTPTSHUR_TSUS                         (0xffffffff << 0)    // TSUS
#define  _Ethernet_PTP_PTPTSLUR_TSUSS                        (0x7fffffff << 0)    // TSUSS
#define  _Ethernet_PTP_PTPTSLUR_TSUPNS                       (0x1 << 31)    // TSUPNS
#define  _Ethernet_PTP_PTPTSAR_TSA                           (0xffffffff << 0)    // TSA
#define  _Ethernet_PTP_PTPTTHR_TTSH                          (0xffffffff << 0)    // 0
#define  _Ethernet_PTP_PTPTTLR_TTSL                          (0xffffffff << 0)    // TTSL
#define  _Ethernet_PTP_PTPTSSR_TSSO                          (0x1 << 0)    // TSSO
#define  _Ethernet_PTP_PTPTSSR_TSTTR                         (0x1 << 1)    // TSTTR
#define  _Ethernet_PTP_PTPPPSCR_TSSO                         (0x1 << 0)    // TSSO
#define  _Ethernet_PTP_PTPPPSCR_TSTTR                        (0x1 << 1)    // TSTTR
#define  _Ethernet_DMA_DMABMR_SR                             (0x1 << 0)    // SR
#define  _Ethernet_DMA_DMABMR_DA                             (0x1 << 1)    // DA
#define  _Ethernet_DMA_DMABMR_DSL                            (0x1f << 2)    // DSL
#define  _Ethernet_DMA_DMABMR_EDFE                           (0x1 << 7)    // EDFE
#define  _Ethernet_DMA_DMABMR_PBL                            (0x3f << 8)    // PBL
#define  _Ethernet_DMA_DMABMR_RTPR                           (0x3 << 14)    // RTPR
#define  _Ethernet_DMA_DMABMR_FB                             (0x1 << 16)    // FB
#define  _Ethernet_DMA_DMABMR_RDP                            (0x3f << 17)    // RDP
#define  _Ethernet_DMA_DMABMR_USP                            (0x1 << 23)    // USP
#define  _Ethernet_DMA_DMABMR_FPM                            (0x1 << 24)    // FPM
#define  _Ethernet_DMA_DMABMR_AAB                            (0x1 << 25)    // AAB
#define  _Ethernet_DMA_DMABMR_MB                             (0x1 << 26)    // MB
#define  _Ethernet_DMA_DMATPDR_TPD                           (0xffffffff << 0)    // TPD
#define  _Ethernet_DMA_DMARPDR_RPD                           (0xffffffff << 0)    // RPD
#define  _Ethernet_DMA_DMARDLAR_SRL                          (0xffffffff << 0)    // SRL
#define  _Ethernet_DMA_DMATDLAR_STL                          (0xffffffff << 0)    // STL
#define  _Ethernet_DMA_DMASR_TS                              (0x1 << 0)    // TS
#define  _Ethernet_DMA_DMASR_TPSS                            (0x1 << 1)    // TPSS
#define  _Ethernet_DMA_DMASR_TBUS                            (0x1 << 2)    // TBUS
#define  _Ethernet_DMA_DMASR_TJTS                            (0x1 << 3)    // TJTS
#define  _Ethernet_DMA_DMASR_ROS                             (0x1 << 4)    // ROS
#define  _Ethernet_DMA_DMASR_TUS                             (0x1 << 5)    // TUS
#define  _Ethernet_DMA_DMASR_RS                              (0x1 << 6)    // RS
#define  _Ethernet_DMA_DMASR_RBUS                            (0x1 << 7)    // RBUS
#define  _Ethernet_DMA_DMASR_RPSS                            (0x1 << 8)    // RPSS
#define  _Ethernet_DMA_DMASR_PWTS                            (0x1 << 9)    // PWTS
#define  _Ethernet_DMA_DMASR_ETS                             (0x1 << 10)    // ETS
#define  _Ethernet_DMA_DMASR_FBES                            (0x1 << 13)    // FBES
#define  _Ethernet_DMA_DMASR_ERS                             (0x1 << 14)    // ERS
#define  _Ethernet_DMA_DMASR_AIS                             (0x1 << 15)    // AIS
#define  _Ethernet_DMA_DMASR_NIS                             (0x1 << 16)    // NIS
#define  _Ethernet_DMA_DMASR_RPS                             (0x7 << 17)    // RPS
#define  _Ethernet_DMA_DMASR_TPS                             (0x7 << 20)    // TPS
#define  _Ethernet_DMA_DMASR_EBS                             (0x7 << 23)    // EBS
#define  _Ethernet_DMA_DMASR_MMCS                            (0x1 << 27)    // MMCS
#define  _Ethernet_DMA_DMASR_PMTS                            (0x1 << 28)    // PMTS
#define  _Ethernet_DMA_DMASR_TSTS                            (0x1 << 29)    // TSTS
#define  _Ethernet_DMA_DMAOMR_SR                             (0x1 << 1)    // SR
#define  _Ethernet_DMA_DMAOMR_OSF                            (0x1 << 2)    // OSF
#define  _Ethernet_DMA_DMAOMR_RTC                            (0x3 << 3)    // RTC
#define  _Ethernet_DMA_DMAOMR_FUGF                           (0x1 << 6)    // FUGF
#define  _Ethernet_DMA_DMAOMR_FEF                            (0x1 << 7)    // FEF
#define  _Ethernet_DMA_DMAOMR_ST                             (0x1 << 13)    // ST
#define  _Ethernet_DMA_DMAOMR_TTC                            (0x7 << 14)    // TTC
#define  _Ethernet_DMA_DMAOMR_FTF                            (0x1 << 20)    // FTF
#define  _Ethernet_DMA_DMAOMR_TSF                            (0x1 << 21)    // TSF
#define  _Ethernet_DMA_DMAOMR_DFRF                           (0x1 << 24)    // DFRF
#define  _Ethernet_DMA_DMAOMR_RSF                            (0x1 << 25)    // RSF
#define  _Ethernet_DMA_DMAOMR_DTCEFD                         (0x1 << 26)    // DTCEFD
#define  _Ethernet_DMA_DMAIER_TIE                            (0x1 << 0)    // TIE
#define  _Ethernet_DMA_DMAIER_TPSIE                          (0x1 << 1)    // TPSIE
#define  _Ethernet_DMA_DMAIER_TBUIE                          (0x1 << 2)    // TBUIE
#define  _Ethernet_DMA_DMAIER_TJTIE                          (0x1 << 3)    // TJTIE
#define  _Ethernet_DMA_DMAIER_ROIE                           (0x1 << 4)    // ROIE
#define  _Ethernet_DMA_DMAIER_TUIE                           (0x1 << 5)    // TUIE
#define  _Ethernet_DMA_DMAIER_RIE                            (0x1 << 6)    // RIE
#define  _Ethernet_DMA_DMAIER_RBUIE                          (0x1 << 7)    // RBUIE
#define  _Ethernet_DMA_DMAIER_RPSIE                          (0x1 << 8)    // RPSIE
#define  _Ethernet_DMA_DMAIER_RWTIE                          (0x1 << 9)    // RWTIE
#define  _Ethernet_DMA_DMAIER_ETIE                           (0x1 << 10)    // ETIE
#define  _Ethernet_DMA_DMAIER_FBEIE                          (0x1 << 13)    // FBEIE
#define  _Ethernet_DMA_DMAIER_ERIE                           (0x1 << 14)    // ERIE
#define  _Ethernet_DMA_DMAIER_AISE                           (0x1 << 15)    // AISE
#define  _Ethernet_DMA_DMAIER_NISE                           (0x1 << 16)    // NISE
#define  _Ethernet_DMA_DMAMFBOCR_MFC                         (0xffff << 0)    // MFC
#define  _Ethernet_DMA_DMAMFBOCR_OMFC                        (0x1 << 16)    // OMFC
#define  _Ethernet_DMA_DMAMFBOCR_MFA                         (0x7ff << 17)    // MFA
#define  _Ethernet_DMA_DMAMFBOCR_OFOC                        (0x1 << 28)    // OFOC
#define  _Ethernet_DMA_DMARSWTR_RSWTC                        (0xff << 0)    // RSWTC
#define  _Ethernet_DMA_DMACHTDR_HTDAP                        (0xffffffff << 0)    // HTDAP
#define  _Ethernet_DMA_DMACHRDR_HRDAP                        (0xffffffff << 0)    // HRDAP
#define  _Ethernet_DMA_DMACHTBAR_HTBAP                       (0xffffffff << 0)    // HTBAP
#define  _Ethernet_DMA_DMACHRBAR_HRBAP                       (0xffffffff << 0)    // HRBAP

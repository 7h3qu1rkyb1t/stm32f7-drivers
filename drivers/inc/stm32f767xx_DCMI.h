#define Get_DCMI_CR(FLAG)                    (*(uint32_t*)0x50050000 & FLAG)
#define Get_DCMI_SR(FLAG)                    (*(uint32_t*)0x50050004 & FLAG)
#define Get_DCMI_RIS(FLAG)                   (*(uint32_t*)0x50050008 & FLAG)
#define Get_DCMI_IER(FLAG)                   (*(uint32_t*)0x5005000c & FLAG)
#define Get_DCMI_MIS(FLAG)                   (*(uint32_t*)0x50050010 & FLAG)
#define Get_DCMI_ICR(FLAG)                   (*(uint32_t*)0x50050014 & FLAG)
#define Get_DCMI_ESCR(FLAG)                  (*(uint32_t*)0x50050018 & FLAG)
#define Get_DCMI_ESUR(FLAG)                  (*(uint32_t*)0x5005001c & FLAG)
#define Get_DCMI_CWSTRT(FLAG)                (*(uint32_t*)0x50050020 & FLAG)
#define Get_DCMI_CWSIZE(FLAG)                (*(uint32_t*)0x50050024 & FLAG)
#define Get_DCMI_DR(FLAG)                    (*(uint32_t*)0x50050028 & FLAG)
#define Set_DCMI_CR(FLAG)                    (*(uint32_t*)0x50050000 |= FLAG)
#define Clr_DCMI_CR(FLAG)                    (*(uint32_t*)0x50050000 &= ~FLAG)
#define Set_DCMI_SR(FLAG)                    (*(uint32_t*)0x50050004 |= FLAG)
#define Clr_DCMI_SR(FLAG)                    (*(uint32_t*)0x50050004 &= ~FLAG)
#define Set_DCMI_RIS(FLAG)                   (*(uint32_t*)0x50050008 |= FLAG)
#define Clr_DCMI_RIS(FLAG)                   (*(uint32_t*)0x50050008 &= ~FLAG)
#define Set_DCMI_IER(FLAG)                   (*(uint32_t*)0x5005000c |= FLAG)
#define Clr_DCMI_IER(FLAG)                   (*(uint32_t*)0x5005000c &= ~FLAG)
#define Set_DCMI_MIS(FLAG)                   (*(uint32_t*)0x50050010 |= FLAG)
#define Clr_DCMI_MIS(FLAG)                   (*(uint32_t*)0x50050010 &= ~FLAG)
#define Set_DCMI_ICR(FLAG)                   (*(uint32_t*)0x50050014 |= FLAG)
#define Clr_DCMI_ICR(FLAG)                   (*(uint32_t*)0x50050014 &= ~FLAG)
#define Set_DCMI_ESCR(FLAG)                  (*(uint32_t*)0x50050018 |= FLAG)
#define Clr_DCMI_ESCR(FLAG)                  (*(uint32_t*)0x50050018 &= ~FLAG)
#define Set_DCMI_ESUR(FLAG)                  (*(uint32_t*)0x5005001c |= FLAG)
#define Clr_DCMI_ESUR(FLAG)                  (*(uint32_t*)0x5005001c &= ~FLAG)
#define Set_DCMI_CWSTRT(FLAG)                (*(uint32_t*)0x50050020 |= FLAG)
#define Clr_DCMI_CWSTRT(FLAG)                (*(uint32_t*)0x50050020 &= ~FLAG)
#define Set_DCMI_CWSIZE(FLAG)                (*(uint32_t*)0x50050024 |= FLAG)
#define Clr_DCMI_CWSIZE(FLAG)                (*(uint32_t*)0x50050024 &= ~FLAG)
#define Set_DCMI_DR(FLAG)                    (*(uint32_t*)0x50050028 |= FLAG)
#define Clr_DCMI_DR(FLAG)                    (*(uint32_t*)0x50050028 &= ~FLAG)
#define  _DCMI_CR_ENABLE                                     (0x1 << 14)    // DCMI enable
#define  _DCMI_CR_EDM                                        (0x3 << 10)    // Extended data mode
#define  _DCMI_CR_FCRC                                       (0x3 << 8)    // Frame capture rate control
#define  _DCMI_CR_VSPOL                                      (0x1 << 7)    // Vertical synchronization polarity
#define  _DCMI_CR_HSPOL                                      (0x1 << 6)    // Horizontal synchronization polarity
#define  _DCMI_CR_PCKPOL                                     (0x1 << 5)    // Pixel clock polarity
#define  _DCMI_CR_ESS                                        (0x1 << 4)    // Embedded synchronization select
#define  _DCMI_CR_JPEG                                       (0x1 << 3)    // JPEG format
#define  _DCMI_CR_CROP                                       (0x1 << 2)    // Crop feature
#define  _DCMI_CR_CM                                         (0x1 << 1)    // Capture mode
#define  _DCMI_CR_CAPTURE                                    (0x1 << 0)    // Capture enable
#define  _DCMI_SR_FNE                                        (0x1 << 2)    // FIFO not empty
#define  _DCMI_SR_VSYNC                                      (0x1 << 1)    // VSYNC
#define  _DCMI_SR_HSYNC                                      (0x1 << 0)    // HSYNC
#define  _DCMI_RIS_LINE_RIS                                  (0x1 << 4)    // Line raw interrupt status
#define  _DCMI_RIS_VSYNC_RIS                                 (0x1 << 3)    // VSYNC raw interrupt status
#define  _DCMI_RIS_ERR_RIS                                   (0x1 << 2)    // Synchronization error raw interrupt status
#define  _DCMI_RIS_OVR_RIS                                   (0x1 << 1)    // Overrun raw interrupt status
#define  _DCMI_RIS_FRAME_RIS                                 (0x1 << 0)    // Capture complete raw interrupt status
#define  _DCMI_IER_LINE_IE                                   (0x1 << 4)    // Line interrupt enable
#define  _DCMI_IER_VSYNC_IE                                  (0x1 << 3)    // VSYNC interrupt enable
#define  _DCMI_IER_ERR_IE                                    (0x1 << 2)    // Synchronization error interrupt enable
#define  _DCMI_IER_OVR_IE                                    (0x1 << 1)    // Overrun interrupt enable
#define  _DCMI_IER_FRAME_IE                                  (0x1 << 0)    // Capture complete interrupt enable
#define  _DCMI_MIS_LINE_MIS                                  (0x1 << 4)    // Line masked interrupt status
#define  _DCMI_MIS_VSYNC_MIS                                 (0x1 << 3)    // VSYNC masked interrupt status
#define  _DCMI_MIS_ERR_MIS                                   (0x1 << 2)    // Synchronization error masked interrupt status
#define  _DCMI_MIS_OVR_MIS                                   (0x1 << 1)    // Overrun masked interrupt status
#define  _DCMI_MIS_FRAME_MIS                                 (0x1 << 0)    // Capture complete masked interrupt status
#define  _DCMI_ICR_LINE_ISC                                  (0x1 << 4)    // line interrupt status clear
#define  _DCMI_ICR_VSYNC_ISC                                 (0x1 << 3)    // Vertical synch interrupt status clear
#define  _DCMI_ICR_ERR_ISC                                   (0x1 << 2)    // Synchronization error interrupt status clear
#define  _DCMI_ICR_OVR_ISC                                   (0x1 << 1)    // Overrun interrupt status clear
#define  _DCMI_ICR_FRAME_ISC                                 (0x1 << 0)    // Capture complete interrupt status clear
#define  _DCMI_ESCR_FEC                                      (0xff << 24)    // Frame end delimiter code
#define  _DCMI_ESCR_LEC                                      (0xff << 16)    // Line end delimiter code
#define  _DCMI_ESCR_LSC                                      (0xff << 8)    // Line start delimiter code
#define  _DCMI_ESCR_FSC                                      (0xff << 0)    // Frame start delimiter code
#define  _DCMI_ESUR_FEU                                      (0xff << 24)    // Frame end delimiter unmask
#define  _DCMI_ESUR_LEU                                      (0xff << 16)    // Line end delimiter unmask
#define  _DCMI_ESUR_LSU                                      (0xff << 8)    // Line start delimiter unmask
#define  _DCMI_ESUR_FSU                                      (0xff << 0)    // Frame start delimiter unmask
#define  _DCMI_CWSTRT_VST                                    (0x1fff << 16)    // Vertical start line count
#define  _DCMI_CWSTRT_HOFFCNT                                (0x3fff << 0)    // Horizontal offset count
#define  _DCMI_CWSIZE_VLINE                                  (0x3fff << 16)    // Vertical line count
#define  _DCMI_CWSIZE_CAPCNT                                 (0x3fff << 0)    // Capture count
#define  _DCMI_DR_Byte3                                      (0xff << 24)    // Data byte 3
#define  _DCMI_DR_Byte2                                      (0xff << 16)    // Data byte 2
#define  _DCMI_DR_Byte1                                      (0xff << 8)    // Data byte 1
#define  _DCMI_DR_Byte0                                      (0xff << 0)    // Data byte 0

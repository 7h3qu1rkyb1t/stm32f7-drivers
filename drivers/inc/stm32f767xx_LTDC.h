#define Get_LTCD_SSCR(FLAG)                  (*(uint32_t*)0x40016808 |= FLAG)
#define Get_LTCD_BPCR(FLAG)                  (*(uint32_t*)0x4001680c |= FLAG)
#define Get_LTCD_AWCR(FLAG)                  (*(uint32_t*)0x40016810 |= FLAG)
#define Get_LTCD_TWCR(FLAG)                  (*(uint32_t*)0x40016814 |= FLAG)
#define Get_LTCD_GCR(FLAG)                   (*(uint32_t*)0x40016818 |= FLAG)
#define Get_LTCD_SRCR(FLAG)                  (*(uint32_t*)0x40016824 |= FLAG)
#define Get_LTCD_BCCR(FLAG)                  (*(uint32_t*)0x4001682c |= FLAG)
#define Get_LTCD_IER(FLAG)                   (*(uint32_t*)0x40016834 |= FLAG)
#define Get_LTCD_ISR(FLAG)                   (*(uint32_t*)0x40016838 |= FLAG)
#define Get_LTCD_ICR(FLAG)                   (*(uint32_t*)0x4001683c |= FLAG)
#define Get_LTCD_LIPCR(FLAG)                 (*(uint32_t*)0x40016840 |= FLAG)
#define Get_LTCD_CPSR(FLAG)                  (*(uint32_t*)0x40016844 |= FLAG)
#define Get_LTCD_CDSR(FLAG)                  (*(uint32_t*)0x40016848 |= FLAG)
#define Get_LTCD_L1CR(FLAG)                  (*(uint32_t*)0x40016884 |= FLAG)
#define Get_LTCD_L1WHPCR(FLAG)               (*(uint32_t*)0x40016888 |= FLAG)
#define Get_LTCD_L1WVPCR(FLAG)               (*(uint32_t*)0x4001688c |= FLAG)
#define Get_LTCD_L1CKCR(FLAG)                (*(uint32_t*)0x40016890 |= FLAG)
#define Get_LTCD_L1PFCR(FLAG)                (*(uint32_t*)0x40016894 |= FLAG)
#define Get_LTCD_L1CACR(FLAG)                (*(uint32_t*)0x40016898 |= FLAG)
#define Get_LTCD_L1DCCR(FLAG)                (*(uint32_t*)0x4001689c |= FLAG)
#define Get_LTCD_L1BFCR(FLAG)                (*(uint32_t*)0x400168a0 |= FLAG)
#define Get_LTCD_L1CFBAR(FLAG)               (*(uint32_t*)0x400168ac |= FLAG)
#define Get_LTCD_L1CFBLR(FLAG)               (*(uint32_t*)0x400168b0 |= FLAG)
#define Get_LTCD_L1CFBLNR(FLAG)              (*(uint32_t*)0x400168b4 |= FLAG)
#define Get_LTCD_L1CLUTWR(FLAG)              (*(uint32_t*)0x400168c4 |= FLAG)
#define Get_LTCD_L2CR(FLAG)                  (*(uint32_t*)0x40016904 |= FLAG)
#define Get_LTCD_L2WHPCR(FLAG)               (*(uint32_t*)0x40016908 |= FLAG)
#define Get_LTCD_L2WVPCR(FLAG)               (*(uint32_t*)0x4001690c |= FLAG)
#define Get_LTCD_L2CKCR(FLAG)                (*(uint32_t*)0x40016910 |= FLAG)
#define Get_LTCD_L2PFCR(FLAG)                (*(uint32_t*)0x40016914 |= FLAG)
#define Get_LTCD_L2CACR(FLAG)                (*(uint32_t*)0x40016918 |= FLAG)
#define Get_LTCD_L2DCCR(FLAG)                (*(uint32_t*)0x4001691c |= FLAG)
#define Get_LTCD_L2BFCR(FLAG)                (*(uint32_t*)0x40016920 |= FLAG)
#define Get_LTCD_L2CFBAR(FLAG)               (*(uint32_t*)0x4001692c |= FLAG)
#define Get_LTCD_L2CFBLR(FLAG)               (*(uint32_t*)0x40016930 |= FLAG)
#define Get_LTCD_L2CFBLNR(FLAG)              (*(uint32_t*)0x40016934 |= FLAG)
#define Get_LTCD_L2CLUTWR(FLAG)              (*(uint32_t*)0x40016944 |= FLAG)
#define Set_LTCD_SSCR(FLAG)                  (*(uint32_t*)0x40016808 &= FLAG)
#define Clr_LTCD_SSCR(FLAG)                  (*(uint32_t*)0x40016808 |= ~FLAG)
#define Set_LTCD_BPCR(FLAG)                  (*(uint32_t*)0x4001680c &= FLAG)
#define Clr_LTCD_BPCR(FLAG)                  (*(uint32_t*)0x4001680c |= ~FLAG)
#define Set_LTCD_AWCR(FLAG)                  (*(uint32_t*)0x40016810 &= FLAG)
#define Clr_LTCD_AWCR(FLAG)                  (*(uint32_t*)0x40016810 |= ~FLAG)
#define Set_LTCD_TWCR(FLAG)                  (*(uint32_t*)0x40016814 &= FLAG)
#define Clr_LTCD_TWCR(FLAG)                  (*(uint32_t*)0x40016814 |= ~FLAG)
#define Set_LTCD_GCR(FLAG)                   (*(uint32_t*)0x40016818 &= FLAG)
#define Clr_LTCD_GCR(FLAG)                   (*(uint32_t*)0x40016818 |= ~FLAG)
#define Set_LTCD_SRCR(FLAG)                  (*(uint32_t*)0x40016824 &= FLAG)
#define Clr_LTCD_SRCR(FLAG)                  (*(uint32_t*)0x40016824 |= ~FLAG)
#define Set_LTCD_BCCR(FLAG)                  (*(uint32_t*)0x4001682c &= FLAG)
#define Clr_LTCD_BCCR(FLAG)                  (*(uint32_t*)0x4001682c |= ~FLAG)
#define Set_LTCD_IER(FLAG)                   (*(uint32_t*)0x40016834 &= FLAG)
#define Clr_LTCD_IER(FLAG)                   (*(uint32_t*)0x40016834 |= ~FLAG)
#define Set_LTCD_ISR(FLAG)                   (*(uint32_t*)0x40016838 &= FLAG)
#define Clr_LTCD_ISR(FLAG)                   (*(uint32_t*)0x40016838 |= ~FLAG)
#define Set_LTCD_ICR(FLAG)                   (*(uint32_t*)0x4001683c &= FLAG)
#define Clr_LTCD_ICR(FLAG)                   (*(uint32_t*)0x4001683c |= ~FLAG)
#define Set_LTCD_LIPCR(FLAG)                 (*(uint32_t*)0x40016840 &= FLAG)
#define Clr_LTCD_LIPCR(FLAG)                 (*(uint32_t*)0x40016840 |= ~FLAG)
#define Set_LTCD_CPSR(FLAG)                  (*(uint32_t*)0x40016844 &= FLAG)
#define Clr_LTCD_CPSR(FLAG)                  (*(uint32_t*)0x40016844 |= ~FLAG)
#define Set_LTCD_CDSR(FLAG)                  (*(uint32_t*)0x40016848 &= FLAG)
#define Clr_LTCD_CDSR(FLAG)                  (*(uint32_t*)0x40016848 |= ~FLAG)
#define Set_LTCD_L1CR(FLAG)                  (*(uint32_t*)0x40016884 &= FLAG)
#define Clr_LTCD_L1CR(FLAG)                  (*(uint32_t*)0x40016884 |= ~FLAG)
#define Set_LTCD_L1WHPCR(FLAG)               (*(uint32_t*)0x40016888 &= FLAG)
#define Clr_LTCD_L1WHPCR(FLAG)               (*(uint32_t*)0x40016888 |= ~FLAG)
#define Set_LTCD_L1WVPCR(FLAG)               (*(uint32_t*)0x4001688c &= FLAG)
#define Clr_LTCD_L1WVPCR(FLAG)               (*(uint32_t*)0x4001688c |= ~FLAG)
#define Set_LTCD_L1CKCR(FLAG)                (*(uint32_t*)0x40016890 &= FLAG)
#define Clr_LTCD_L1CKCR(FLAG)                (*(uint32_t*)0x40016890 |= ~FLAG)
#define Set_LTCD_L1PFCR(FLAG)                (*(uint32_t*)0x40016894 &= FLAG)
#define Clr_LTCD_L1PFCR(FLAG)                (*(uint32_t*)0x40016894 |= ~FLAG)
#define Set_LTCD_L1CACR(FLAG)                (*(uint32_t*)0x40016898 &= FLAG)
#define Clr_LTCD_L1CACR(FLAG)                (*(uint32_t*)0x40016898 |= ~FLAG)
#define Set_LTCD_L1DCCR(FLAG)                (*(uint32_t*)0x4001689c &= FLAG)
#define Clr_LTCD_L1DCCR(FLAG)                (*(uint32_t*)0x4001689c |= ~FLAG)
#define Set_LTCD_L1BFCR(FLAG)                (*(uint32_t*)0x400168a0 &= FLAG)
#define Clr_LTCD_L1BFCR(FLAG)                (*(uint32_t*)0x400168a0 |= ~FLAG)
#define Set_LTCD_L1CFBAR(FLAG)               (*(uint32_t*)0x400168ac &= FLAG)
#define Clr_LTCD_L1CFBAR(FLAG)               (*(uint32_t*)0x400168ac |= ~FLAG)
#define Set_LTCD_L1CFBLR(FLAG)               (*(uint32_t*)0x400168b0 &= FLAG)
#define Clr_LTCD_L1CFBLR(FLAG)               (*(uint32_t*)0x400168b0 |= ~FLAG)
#define Set_LTCD_L1CFBLNR(FLAG)              (*(uint32_t*)0x400168b4 &= FLAG)
#define Clr_LTCD_L1CFBLNR(FLAG)              (*(uint32_t*)0x400168b4 |= ~FLAG)
#define Set_LTCD_L1CLUTWR(FLAG)              (*(uint32_t*)0x400168c4 &= FLAG)
#define Clr_LTCD_L1CLUTWR(FLAG)              (*(uint32_t*)0x400168c4 |= ~FLAG)
#define Set_LTCD_L2CR(FLAG)                  (*(uint32_t*)0x40016904 &= FLAG)
#define Clr_LTCD_L2CR(FLAG)                  (*(uint32_t*)0x40016904 |= ~FLAG)
#define Set_LTCD_L2WHPCR(FLAG)               (*(uint32_t*)0x40016908 &= FLAG)
#define Clr_LTCD_L2WHPCR(FLAG)               (*(uint32_t*)0x40016908 |= ~FLAG)
#define Set_LTCD_L2WVPCR(FLAG)               (*(uint32_t*)0x4001690c &= FLAG)
#define Clr_LTCD_L2WVPCR(FLAG)               (*(uint32_t*)0x4001690c |= ~FLAG)
#define Set_LTCD_L2CKCR(FLAG)                (*(uint32_t*)0x40016910 &= FLAG)
#define Clr_LTCD_L2CKCR(FLAG)                (*(uint32_t*)0x40016910 |= ~FLAG)
#define Set_LTCD_L2PFCR(FLAG)                (*(uint32_t*)0x40016914 &= FLAG)
#define Clr_LTCD_L2PFCR(FLAG)                (*(uint32_t*)0x40016914 |= ~FLAG)
#define Set_LTCD_L2CACR(FLAG)                (*(uint32_t*)0x40016918 &= FLAG)
#define Clr_LTCD_L2CACR(FLAG)                (*(uint32_t*)0x40016918 |= ~FLAG)
#define Set_LTCD_L2DCCR(FLAG)                (*(uint32_t*)0x4001691c &= FLAG)
#define Clr_LTCD_L2DCCR(FLAG)                (*(uint32_t*)0x4001691c |= ~FLAG)
#define Set_LTCD_L2BFCR(FLAG)                (*(uint32_t*)0x40016920 &= FLAG)
#define Clr_LTCD_L2BFCR(FLAG)                (*(uint32_t*)0x40016920 |= ~FLAG)
#define Set_LTCD_L2CFBAR(FLAG)               (*(uint32_t*)0x4001692c &= FLAG)
#define Clr_LTCD_L2CFBAR(FLAG)               (*(uint32_t*)0x4001692c |= ~FLAG)
#define Set_LTCD_L2CFBLR(FLAG)               (*(uint32_t*)0x40016930 &= FLAG)
#define Clr_LTCD_L2CFBLR(FLAG)               (*(uint32_t*)0x40016930 |= ~FLAG)
#define Set_LTCD_L2CFBLNR(FLAG)              (*(uint32_t*)0x40016934 &= FLAG)
#define Clr_LTCD_L2CFBLNR(FLAG)              (*(uint32_t*)0x40016934 |= ~FLAG)
#define Set_LTCD_L2CLUTWR(FLAG)              (*(uint32_t*)0x40016944 &= FLAG)
#define Clr_LTCD_L2CLUTWR(FLAG)              (*(uint32_t*)0x40016944 |= ~FLAG)
#define  _LTCD_SSCR_HSW                                      (0x3ff << 16)    // Horizontal Synchronization Width (in units of pixel clock period)
#define  _LTCD_SSCR_VSH                                      (0x7ff << 0)    // Vertical Synchronization Height (in units of horizontal scan line)
#define  _LTCD_BPCR_AHBP                                     (0x3ff << 16)    // Accumulated Horizontal back porch (in units of pixel clock period)
#define  _LTCD_BPCR_AVBP                                     (0x7ff << 0)    // Accumulated Vertical back porch (in units of horizontal scan line)
#define  _LTCD_AWCR_AAV                                      (0x3ff << 16)    // AAV
#define  _LTCD_AWCR_AAH                                      (0x7ff << 0)    // Accumulated Active Height (in units of horizontal scan line)
#define  _LTCD_TWCR_TOTALW                                   (0x3ff << 16)    // Total Width (in units of pixel clock period)
#define  _LTCD_TWCR_TOTALH                                   (0x7ff << 0)    // Total Height (in units of horizontal scan line)
#define  _LTCD_GCR_HSPOL                                     (0x1 << 31)    // Horizontal Synchronization Polarity
#define  _LTCD_GCR_VSPOL                                     (0x1 << 30)    // Vertical Synchronization Polarity
#define  _LTCD_GCR_DEPOL                                     (0x1 << 29)    // Data Enable Polarity
#define  _LTCD_GCR_PCPOL                                     (0x1 << 28)    // Pixel Clock Polarity
#define  _LTCD_GCR_DEN                                       (0x1 << 16)    // Dither Enable
#define  _LTCD_GCR_DRW                                       (0x7 << 12)    // Dither Red Width
#define  _LTCD_GCR_DGW                                       (0x7 << 8)    // Dither Green Width
#define  _LTCD_GCR_DBW                                       (0x7 << 4)    // Dither Blue Width
#define  _LTCD_GCR_LTDCEN                                    (0x1 << 0)    // LCD-TFT controller enable bit
#define  _LTCD_SRCR_VBR                                      (0x1 << 1)    // Vertical Blanking Reload
#define  _LTCD_SRCR_IMR                                      (0x1 << 0)    // Immediate Reload
#define  _LTCD_BCCR_BC                                       (0xffffff << 0)    // Background Color Red value
#define  _LTCD_IER_RRIE                                      (0x1 << 3)    // Register Reload interrupt enable
#define  _LTCD_IER_TERRIE                                    (0x1 << 2)    // Transfer Error Interrupt Enable
#define  _LTCD_IER_FUIE                                      (0x1 << 1)    // FIFO Underrun Interrupt Enable
#define  _LTCD_IER_LIE                                       (0x1 << 0)    // Line Interrupt Enable
#define  _LTCD_ISR_RRIF                                      (0x1 << 3)    // Register Reload Interrupt Flag
#define  _LTCD_ISR_TERRIF                                    (0x1 << 2)    // Transfer Error interrupt flag
#define  _LTCD_ISR_FUIF                                      (0x1 << 1)    // FIFO Underrun Interrupt flag
#define  _LTCD_ISR_LIF                                       (0x1 << 0)    // Line Interrupt flag
#define  _LTCD_ICR_CRRIF                                     (0x1 << 3)    // Clears Register Reload Interrupt Flag
#define  _LTCD_ICR_CTERRIF                                   (0x1 << 2)    // Clears the Transfer Error Interrupt Flag
#define  _LTCD_ICR_CFUIF                                     (0x1 << 1)    // Clears the FIFO Underrun Interrupt flag
#define  _LTCD_ICR_CLIF                                      (0x1 << 0)    // Clears the Line Interrupt Flag
#define  _LTCD_LIPCR_LIPOS                                   (0x7ff << 0)    // Line Interrupt Position
#define  _LTCD_CPSR_CXPOS                                    (0xffff << 16)    // Current X Position
#define  _LTCD_CPSR_CYPOS                                    (0xffff << 0)    // Current Y Position
#define  _LTCD_CDSR_HSYNCS                                   (0x1 << 3)    // Horizontal Synchronization display Status
#define  _LTCD_CDSR_VSYNCS                                   (0x1 << 2)    // Vertical Synchronization display Status
#define  _LTCD_CDSR_HDES                                     (0x1 << 1)    // Horizontal Data Enable display Status
#define  _LTCD_CDSR_VDES                                     (0x1 << 0)    // Vertical Data Enable display Status
#define  _LTCD_L1CR_CLUTEN                                   (0x1 << 4)    // Color Look-Up Table Enable
#define  _LTCD_L1CR_COLKEN                                   (0x1 << 1)    // Color Keying Enable
#define  _LTCD_L1CR_LEN                                      (0x1 << 0)    // Layer Enable
#define  _LTCD_L1WHPCR_WHSPPOS                               (0xfff << 16)    // Window Horizontal Stop Position
#define  _LTCD_L1WHPCR_WHSTPOS                               (0xfff << 0)    // Window Horizontal Start Position
#define  _LTCD_L1WVPCR_WVSPPOS                               (0x7ff << 16)    // Window Vertical Stop Position
#define  _LTCD_L1WVPCR_WVSTPOS                               (0x7ff << 0)    // Window Vertical Start Position
#define  _LTCD_L1CKCR_CKRED                                  (0xff << 16)    // Color Key Red value
#define  _LTCD_L1CKCR_CKGREEN                                (0xff << 8)    // Color Key Green value
#define  _LTCD_L1CKCR_CKBLUE                                 (0xff << 0)    // Color Key Blue value
#define  _LTCD_L1PFCR_PF                                     (0x7 << 0)    // Pixel Format
#define  _LTCD_L1CACR_CONSTA                                 (0xff << 0)    // Constant Alpha
#define  _LTCD_L1DCCR_DCALPHA                                (0xff << 24)    // Default Color Alpha
#define  _LTCD_L1DCCR_DCRED                                  (0xff << 16)    // Default Color Red
#define  _LTCD_L1DCCR_DCGREEN                                (0xff << 8)    // Default Color Green
#define  _LTCD_L1DCCR_DCBLUE                                 (0xff << 0)    // Default Color Blue
#define  _LTCD_L1BFCR_BF1                                    (0x7 << 8)    // Blending Factor 1
#define  _LTCD_L1BFCR_BF2                                    (0x7 << 0)    // Blending Factor 2
#define  _LTCD_L1CFBAR_CFBADD                                (0xffffffff << 0)    // Color Frame Buffer Start Address
#define  _LTCD_L1CFBLR_CFBP                                  (0x1fff << 16)    // Color Frame Buffer Pitch in bytes
#define  _LTCD_L1CFBLR_CFBLL                                 (0x1fff << 0)    // Color Frame Buffer Line Length
#define  _LTCD_L1CFBLNR_CFBLNBR                              (0x7ff << 0)    // Frame Buffer Line Number
#define  _LTCD_L1CLUTWR_CLUTADD                              (0xff << 24)    // CLUT Address
#define  _LTCD_L1CLUTWR_RED                                  (0xff << 16)    // Red value
#define  _LTCD_L1CLUTWR_GREEN                                (0xff << 8)    // Green value
#define  _LTCD_L1CLUTWR_BLUE                                 (0xff << 0)    // Blue value
#define  _LTCD_L2CR_CLUTEN                                   (0x1 << 4)    // Color Look-Up Table Enable
#define  _LTCD_L2CR_COLKEN                                   (0x1 << 1)    // Color Keying Enable
#define  _LTCD_L2CR_LEN                                      (0x1 << 0)    // Layer Enable
#define  _LTCD_L2WHPCR_WHSPPOS                               (0xfff << 16)    // Window Horizontal Stop Position
#define  _LTCD_L2WHPCR_WHSTPOS                               (0xfff << 0)    // Window Horizontal Start Position
#define  _LTCD_L2WVPCR_WVSPPOS                               (0x7ff << 16)    // Window Vertical Stop Position
#define  _LTCD_L2WVPCR_WVSTPOS                               (0x7ff << 0)    // Window Vertical Start Position
#define  _LTCD_L2CKCR_CKRED                                  (0x1ff << 15)    // Color Key Red value
#define  _LTCD_L2CKCR_CKGREEN                                (0x7f << 8)    // Color Key Green value
#define  _LTCD_L2CKCR_CKBLUE                                 (0xff << 0)    // Color Key Blue value
#define  _LTCD_L2PFCR_PF                                     (0x7 << 0)    // Pixel Format
#define  _LTCD_L2CACR_CONSTA                                 (0xff << 0)    // Constant Alpha
#define  _LTCD_L2DCCR_DCALPHA                                (0xff << 24)    // Default Color Alpha
#define  _LTCD_L2DCCR_DCRED                                  (0xff << 16)    // Default Color Red
#define  _LTCD_L2DCCR_DCGREEN                                (0xff << 8)    // Default Color Green
#define  _LTCD_L2DCCR_DCBLUE                                 (0xff << 0)    // Default Color Blue
#define  _LTCD_L2BFCR_BF1                                    (0x7 << 8)    // Blending Factor 1
#define  _LTCD_L2BFCR_BF2                                    (0x7 << 0)    // Blending Factor 2
#define  _LTCD_L2CFBAR_CFBADD                                (0xffffffff << 0)    // Color Frame Buffer Start Address
#define  _LTCD_L2CFBLR_CFBP                                  (0x1fff << 16)    // Color Frame Buffer Pitch in bytes
#define  _LTCD_L2CFBLR_CFBLL                                 (0x1fff << 0)    // Color Frame Buffer Line Length
#define  _LTCD_L2CFBLNR_CFBLNBR                              (0x7ff << 0)    // Frame Buffer Line Number
#define  _LTCD_L2CLUTWR_CLUTADD                              (0xff << 24)    // CLUT Address
#define  _LTCD_L2CLUTWR_RED                                  (0xff << 16)    // Red value
#define  _LTCD_L2CLUTWR_GREEN                                (0xff << 8)    // Green value
#define  _LTCD_L2CLUTWR_BLUE                                 (0xff << 0)    // Blue value

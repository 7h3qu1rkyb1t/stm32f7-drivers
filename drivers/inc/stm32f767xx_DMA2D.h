#define Get_DMA2D_CR(FLAG)                   (*(uint32_t*)0x4002b000 & FLAG)
#define Get_DMA2D_ISR(FLAG)                  (*(uint32_t*)0x4002b004 & FLAG)
#define Get_DMA2D_IFCR(FLAG)                 (*(uint32_t*)0x4002b008 & FLAG)
#define Get_DMA2D_FGMAR(FLAG)                (*(uint32_t*)0x4002b00c & FLAG)
#define Get_DMA2D_FGOR(FLAG)                 (*(uint32_t*)0x4002b010 & FLAG)
#define Get_DMA2D_BGMAR(FLAG)                (*(uint32_t*)0x4002b014 & FLAG)
#define Get_DMA2D_BGOR(FLAG)                 (*(uint32_t*)0x4002b018 & FLAG)
#define Get_DMA2D_FGPFCCR(FLAG)              (*(uint32_t*)0x4002b01c & FLAG)
#define Get_DMA2D_FGCOLR(FLAG)               (*(uint32_t*)0x4002b020 & FLAG)
#define Get_DMA2D_BGPFCCR(FLAG)              (*(uint32_t*)0x4002b024 & FLAG)
#define Get_DMA2D_BGCOLR(FLAG)               (*(uint32_t*)0x4002b028 & FLAG)
#define Get_DMA2D_FGCMAR(FLAG)               (*(uint32_t*)0x4002b02c & FLAG)
#define Get_DMA2D_BGCMAR(FLAG)               (*(uint32_t*)0x4002b030 & FLAG)
#define Get_DMA2D_OPFCCR(FLAG)               (*(uint32_t*)0x4002b034 & FLAG)
#define Get_DMA2D_OCOLR(FLAG)                (*(uint32_t*)0x4002b038 & FLAG)
#define Get_DMA2D_OMAR(FLAG)                 (*(uint32_t*)0x4002b03c & FLAG)
#define Get_DMA2D_OOR(FLAG)                  (*(uint32_t*)0x4002b040 & FLAG)
#define Get_DMA2D_NLR(FLAG)                  (*(uint32_t*)0x4002b044 & FLAG)
#define Get_DMA2D_LWR(FLAG)                  (*(uint32_t*)0x4002b048 & FLAG)
#define Get_DMA2D_AMTCR(FLAG)                (*(uint32_t*)0x4002b04c & FLAG)
#define Get_DMA2D_FGCLUT(FLAG)               (*(uint32_t*)0x4002b400 & FLAG)
#define Get_DMA2D_BGCLUT(FLAG)               (*(uint32_t*)0x4002b800 & FLAG)
#define Set_DMA2D_CR(FLAG)                   (*(uint32_t*)0x4002b000 |= FLAG)
#define Clr_DMA2D_CR(FLAG)                   (*(uint32_t*)0x4002b000 &= ~FLAG)
#define Set_DMA2D_ISR(FLAG)                  (*(uint32_t*)0x4002b004 |= FLAG)
#define Clr_DMA2D_ISR(FLAG)                  (*(uint32_t*)0x4002b004 &= ~FLAG)
#define Set_DMA2D_IFCR(FLAG)                 (*(uint32_t*)0x4002b008 |= FLAG)
#define Clr_DMA2D_IFCR(FLAG)                 (*(uint32_t*)0x4002b008 &= ~FLAG)
#define Set_DMA2D_FGMAR(FLAG)                (*(uint32_t*)0x4002b00c |= FLAG)
#define Clr_DMA2D_FGMAR(FLAG)                (*(uint32_t*)0x4002b00c &= ~FLAG)
#define Set_DMA2D_FGOR(FLAG)                 (*(uint32_t*)0x4002b010 |= FLAG)
#define Clr_DMA2D_FGOR(FLAG)                 (*(uint32_t*)0x4002b010 &= ~FLAG)
#define Set_DMA2D_BGMAR(FLAG)                (*(uint32_t*)0x4002b014 |= FLAG)
#define Clr_DMA2D_BGMAR(FLAG)                (*(uint32_t*)0x4002b014 &= ~FLAG)
#define Set_DMA2D_BGOR(FLAG)                 (*(uint32_t*)0x4002b018 |= FLAG)
#define Clr_DMA2D_BGOR(FLAG)                 (*(uint32_t*)0x4002b018 &= ~FLAG)
#define Set_DMA2D_FGPFCCR(FLAG)              (*(uint32_t*)0x4002b01c |= FLAG)
#define Clr_DMA2D_FGPFCCR(FLAG)              (*(uint32_t*)0x4002b01c &= ~FLAG)
#define Set_DMA2D_FGCOLR(FLAG)               (*(uint32_t*)0x4002b020 |= FLAG)
#define Clr_DMA2D_FGCOLR(FLAG)               (*(uint32_t*)0x4002b020 &= ~FLAG)
#define Set_DMA2D_BGPFCCR(FLAG)              (*(uint32_t*)0x4002b024 |= FLAG)
#define Clr_DMA2D_BGPFCCR(FLAG)              (*(uint32_t*)0x4002b024 &= ~FLAG)
#define Set_DMA2D_BGCOLR(FLAG)               (*(uint32_t*)0x4002b028 |= FLAG)
#define Clr_DMA2D_BGCOLR(FLAG)               (*(uint32_t*)0x4002b028 &= ~FLAG)
#define Set_DMA2D_FGCMAR(FLAG)               (*(uint32_t*)0x4002b02c |= FLAG)
#define Clr_DMA2D_FGCMAR(FLAG)               (*(uint32_t*)0x4002b02c &= ~FLAG)
#define Set_DMA2D_BGCMAR(FLAG)               (*(uint32_t*)0x4002b030 |= FLAG)
#define Clr_DMA2D_BGCMAR(FLAG)               (*(uint32_t*)0x4002b030 &= ~FLAG)
#define Set_DMA2D_OPFCCR(FLAG)               (*(uint32_t*)0x4002b034 |= FLAG)
#define Clr_DMA2D_OPFCCR(FLAG)               (*(uint32_t*)0x4002b034 &= ~FLAG)
#define Set_DMA2D_OCOLR(FLAG)                (*(uint32_t*)0x4002b038 |= FLAG)
#define Clr_DMA2D_OCOLR(FLAG)                (*(uint32_t*)0x4002b038 &= ~FLAG)
#define Set_DMA2D_OMAR(FLAG)                 (*(uint32_t*)0x4002b03c |= FLAG)
#define Clr_DMA2D_OMAR(FLAG)                 (*(uint32_t*)0x4002b03c &= ~FLAG)
#define Set_DMA2D_OOR(FLAG)                  (*(uint32_t*)0x4002b040 |= FLAG)
#define Clr_DMA2D_OOR(FLAG)                  (*(uint32_t*)0x4002b040 &= ~FLAG)
#define Set_DMA2D_NLR(FLAG)                  (*(uint32_t*)0x4002b044 |= FLAG)
#define Clr_DMA2D_NLR(FLAG)                  (*(uint32_t*)0x4002b044 &= ~FLAG)
#define Set_DMA2D_LWR(FLAG)                  (*(uint32_t*)0x4002b048 |= FLAG)
#define Clr_DMA2D_LWR(FLAG)                  (*(uint32_t*)0x4002b048 &= ~FLAG)
#define Set_DMA2D_AMTCR(FLAG)                (*(uint32_t*)0x4002b04c |= FLAG)
#define Clr_DMA2D_AMTCR(FLAG)                (*(uint32_t*)0x4002b04c &= ~FLAG)
#define Set_DMA2D_FGCLUT(FLAG)               (*(uint32_t*)0x4002b400 |= FLAG)
#define Clr_DMA2D_FGCLUT(FLAG)               (*(uint32_t*)0x4002b400 &= ~FLAG)
#define Set_DMA2D_BGCLUT(FLAG)               (*(uint32_t*)0x4002b800 |= FLAG)
#define Clr_DMA2D_BGCLUT(FLAG)               (*(uint32_t*)0x4002b800 &= ~FLAG)
#define  _DMA2D_CR_MODE                                      (0x3 << 16)    // DMA2D mode
#define  _DMA2D_CR_CEIE                                      (0x1 << 13)    // Configuration Error Interrupt Enable
#define  _DMA2D_CR_CTCIE                                     (0x1 << 12)    // CLUT transfer complete interrupt enable
#define  _DMA2D_CR_CAEIE                                     (0x1 << 11)    // CLUT access error interrupt enable
#define  _DMA2D_CR_TWIE                                      (0x1 << 10)    // Transfer watermark interrupt enable
#define  _DMA2D_CR_TCIE                                      (0x1 << 9)    // Transfer complete interrupt enable
#define  _DMA2D_CR_TEIE                                      (0x1 << 8)    // Transfer error interrupt enable
#define  _DMA2D_CR_ABORT                                     (0x1 << 2)    // Abort
#define  _DMA2D_CR_SUSP                                      (0x1 << 1)    // Suspend
#define  _DMA2D_CR_START                                     (0x1 << 0)    // Start
#define  _DMA2D_ISR_CEIF                                     (0x1 << 5)    // Configuration error interrupt flag
#define  _DMA2D_ISR_CTCIF                                    (0x1 << 4)    // CLUT transfer complete interrupt flag
#define  _DMA2D_ISR_CAEIF                                    (0x1 << 3)    // CLUT access error interrupt flag
#define  _DMA2D_ISR_TWIF                                     (0x1 << 2)    // Transfer watermark interrupt flag
#define  _DMA2D_ISR_TCIF                                     (0x1 << 1)    // Transfer complete interrupt flag
#define  _DMA2D_ISR_TEIF                                     (0x1 << 0)    // Transfer error interrupt flag
#define  _DMA2D_IFCR_CCEIF                                   (0x1 << 5)    // Clear configuration error interrupt flag
#define  _DMA2D_IFCR_CCTCIF                                  (0x1 << 4)    // Clear CLUT transfer complete interrupt flag
#define  _DMA2D_IFCR_CAECIF                                  (0x1 << 3)    // Clear CLUT access error interrupt flag
#define  _DMA2D_IFCR_CTWIF                                   (0x1 << 2)    // Clear transfer watermark interrupt flag
#define  _DMA2D_IFCR_CTCIF                                   (0x1 << 1)    // Clear transfer complete interrupt flag
#define  _DMA2D_IFCR_CTEIF                                   (0x1 << 0)    // Clear Transfer error interrupt flag
#define  _DMA2D_FGMAR_MA                                     (0xffffffff << 0)    // Memory address
#define  _DMA2D_FGOR_LO                                      (0x3fff << 0)    // Line offset
#define  _DMA2D_BGMAR_MA                                     (0xffffffff << 0)    // Memory address
#define  _DMA2D_BGOR_LO                                      (0x3fff << 0)    // Line offset
#define  _DMA2D_FGPFCCR_ALPHA                                (0xff << 24)    // Alpha value
#define  _DMA2D_FGPFCCR_AM                                   (0x3 << 16)    // Alpha mode
#define  _DMA2D_FGPFCCR_CS                                   (0xff << 8)    // CLUT size
#define  _DMA2D_FGPFCCR_START                                (0x1 << 5)    // Start
#define  _DMA2D_FGPFCCR_CCM                                  (0x1 << 4)    // CLUT color mode
#define  _DMA2D_FGPFCCR_CM                                   (0xf << 0)    // Color mode
#define  _DMA2D_FGCOLR_RED                                   (0xff << 16)    // Red Value
#define  _DMA2D_FGCOLR_GREEN                                 (0xff << 8)    // Green Value
#define  _DMA2D_FGCOLR_BLUE                                  (0xff << 0)    // Blue Value
#define  _DMA2D_BGPFCCR_ALPHA                                (0xff << 24)    // Alpha value
#define  _DMA2D_BGPFCCR_AM                                   (0x3 << 16)    // Alpha mode
#define  _DMA2D_BGPFCCR_CS                                   (0xff << 8)    // CLUT size
#define  _DMA2D_BGPFCCR_START                                (0x1 << 5)    // Start
#define  _DMA2D_BGPFCCR_CCM                                  (0x1 << 4)    // CLUT Color mode
#define  _DMA2D_BGPFCCR_CM                                   (0xf << 0)    // Color mode
#define  _DMA2D_BGCOLR_RED                                   (0xff << 16)    // Red Value
#define  _DMA2D_BGCOLR_GREEN                                 (0xff << 8)    // Green Value
#define  _DMA2D_BGCOLR_BLUE                                  (0xff << 0)    // Blue Value
#define  _DMA2D_FGCMAR_MA                                    (0xffffffff << 0)    // Memory Address
#define  _DMA2D_BGCMAR_MA                                    (0xffffffff << 0)    // Memory address
#define  _DMA2D_OPFCCR_CM                                    (0x7 << 0)    // Color mode
#define  _DMA2D_OCOLR_APLHA                                  (0xff << 24)    // Alpha Channel Value
#define  _DMA2D_OCOLR_RED                                    (0xff << 16)    // Red Value
#define  _DMA2D_OCOLR_GREEN                                  (0xff << 8)    // Green Value
#define  _DMA2D_OCOLR_BLUE                                   (0xff << 0)    // Blue Value
#define  _DMA2D_OMAR_MA                                      (0xffffffff << 0)    // Memory Address
#define  _DMA2D_OOR_LO                                       (0x3fff << 0)    // Line Offset
#define  _DMA2D_NLR_PL                                       (0x3fff << 16)    // Pixel per lines
#define  _DMA2D_NLR_NL                                       (0xffff << 0)    // Number of lines
#define  _DMA2D_LWR_LW                                       (0xffff << 0)    // Line watermark
#define  _DMA2D_AMTCR_DT                                     (0xff << 8)    // Dead Time
#define  _DMA2D_AMTCR_EN                                     (0x1 << 0)    // Enable
#define  _DMA2D_FGCLUT_APLHA                                 (0xff << 24)    // APLHA
#define  _DMA2D_FGCLUT_RED                                   (0xff << 16)    // RED
#define  _DMA2D_FGCLUT_GREEN                                 (0xff << 8)    // GREEN
#define  _DMA2D_FGCLUT_BLUE                                  (0xff << 0)    // BLUE
#define  _DMA2D_BGCLUT_APLHA                                 (0xff << 24)    // APLHA
#define  _DMA2D_BGCLUT_RED                                   (0xff << 16)    // RED
#define  _DMA2D_BGCLUT_GREEN                                 (0xff << 8)    // GREEN
#define  _DMA2D_BGCLUT_BLUE                                  (0xff << 0)    // BLUE

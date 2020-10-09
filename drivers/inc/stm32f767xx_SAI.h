#define Get_SAI1_BCR1(FLAG)                  (*(uint32_t*)0x40015824 |= FLAG)
#define Get_SAI1_BCR2(FLAG)                  (*(uint32_t*)0x40015828 |= FLAG)
#define Get_SAI1_BFRCR(FLAG)                 (*(uint32_t*)0x4001582c |= FLAG)
#define Get_SAI1_BSLOTR(FLAG)                (*(uint32_t*)0x40015830 |= FLAG)
#define Get_SAI1_BIM(FLAG)                   (*(uint32_t*)0x40015834 |= FLAG)
#define Get_SAI1_BSR(FLAG)                   (*(uint32_t*)0x40015838 |= FLAG)
#define Get_SAI1_BCLRFR(FLAG)                (*(uint32_t*)0x4001583c |= FLAG)
#define Get_SAI1_BDR(FLAG)                   (*(uint32_t*)0x40015840 |= FLAG)
#define Get_SAI1_ACR1(FLAG)                  (*(uint32_t*)0x40015804 |= FLAG)
#define Get_SAI1_ACR2(FLAG)                  (*(uint32_t*)0x40015808 |= FLAG)
#define Get_SAI1_AFRCR(FLAG)                 (*(uint32_t*)0x4001580c |= FLAG)
#define Get_SAI1_ASLOTR(FLAG)                (*(uint32_t*)0x40015810 |= FLAG)
#define Get_SAI1_AIM(FLAG)                   (*(uint32_t*)0x40015814 |= FLAG)
#define Get_SAI1_ASR(FLAG)                   (*(uint32_t*)0x40015818 |= FLAG)
#define Get_SAI1_ACLRFR(FLAG)                (*(uint32_t*)0x4001581c |= FLAG)
#define Get_SAI1_ADR(FLAG)                   (*(uint32_t*)0x40015820 |= FLAG)
#define Get_SAI1_GCR(FLAG)                   (*(uint32_t*)0x40015800 |= FLAG)
#define Get_SAI2_BCR1(FLAG)                  (*(uint32_t*)0x40015c24 |= FLAG)
#define Get_SAI2_BCR2(FLAG)                  (*(uint32_t*)0x40015c28 |= FLAG)
#define Get_SAI2_BFRCR(FLAG)                 (*(uint32_t*)0x40015c2c |= FLAG)
#define Get_SAI2_BSLOTR(FLAG)                (*(uint32_t*)0x40015c30 |= FLAG)
#define Get_SAI2_BIM(FLAG)                   (*(uint32_t*)0x40015c34 |= FLAG)
#define Get_SAI2_BSR(FLAG)                   (*(uint32_t*)0x40015c38 |= FLAG)
#define Get_SAI2_BCLRFR(FLAG)                (*(uint32_t*)0x40015c3c |= FLAG)
#define Get_SAI2_BDR(FLAG)                   (*(uint32_t*)0x40015c40 |= FLAG)
#define Get_SAI2_ACR1(FLAG)                  (*(uint32_t*)0x40015c04 |= FLAG)
#define Get_SAI2_ACR2(FLAG)                  (*(uint32_t*)0x40015c08 |= FLAG)
#define Get_SAI2_AFRCR(FLAG)                 (*(uint32_t*)0x40015c0c |= FLAG)
#define Get_SAI2_ASLOTR(FLAG)                (*(uint32_t*)0x40015c10 |= FLAG)
#define Get_SAI2_AIM(FLAG)                   (*(uint32_t*)0x40015c14 |= FLAG)
#define Get_SAI2_ASR(FLAG)                   (*(uint32_t*)0x40015c18 |= FLAG)
#define Get_SAI2_ACLRFR(FLAG)                (*(uint32_t*)0x40015c1c |= FLAG)
#define Get_SAI2_ADR(FLAG)                   (*(uint32_t*)0x40015c20 |= FLAG)
#define Get_SAI2_GCR(FLAG)                   (*(uint32_t*)0x40015c00 |= FLAG)
#define Set_SAI1_BCR1(FLAG)                  (*(uint32_t*)0x40015824 &= FLAG)
#define Clr_SAI1_BCR1(FLAG)                  (*(uint32_t*)0x40015824 |= ~FLAG)
#define Set_SAI1_BCR2(FLAG)                  (*(uint32_t*)0x40015828 &= FLAG)
#define Clr_SAI1_BCR2(FLAG)                  (*(uint32_t*)0x40015828 |= ~FLAG)
#define Set_SAI1_BFRCR(FLAG)                 (*(uint32_t*)0x4001582c &= FLAG)
#define Clr_SAI1_BFRCR(FLAG)                 (*(uint32_t*)0x4001582c |= ~FLAG)
#define Set_SAI1_BSLOTR(FLAG)                (*(uint32_t*)0x40015830 &= FLAG)
#define Clr_SAI1_BSLOTR(FLAG)                (*(uint32_t*)0x40015830 |= ~FLAG)
#define Set_SAI1_BIM(FLAG)                   (*(uint32_t*)0x40015834 &= FLAG)
#define Clr_SAI1_BIM(FLAG)                   (*(uint32_t*)0x40015834 |= ~FLAG)
#define Set_SAI1_BSR(FLAG)                   (*(uint32_t*)0x40015838 &= FLAG)
#define Clr_SAI1_BSR(FLAG)                   (*(uint32_t*)0x40015838 |= ~FLAG)
#define Set_SAI1_BCLRFR(FLAG)                (*(uint32_t*)0x4001583c &= FLAG)
#define Clr_SAI1_BCLRFR(FLAG)                (*(uint32_t*)0x4001583c |= ~FLAG)
#define Set_SAI1_BDR(FLAG)                   (*(uint32_t*)0x40015840 &= FLAG)
#define Clr_SAI1_BDR(FLAG)                   (*(uint32_t*)0x40015840 |= ~FLAG)
#define Set_SAI1_ACR1(FLAG)                  (*(uint32_t*)0x40015804 &= FLAG)
#define Clr_SAI1_ACR1(FLAG)                  (*(uint32_t*)0x40015804 |= ~FLAG)
#define Set_SAI1_ACR2(FLAG)                  (*(uint32_t*)0x40015808 &= FLAG)
#define Clr_SAI1_ACR2(FLAG)                  (*(uint32_t*)0x40015808 |= ~FLAG)
#define Set_SAI1_AFRCR(FLAG)                 (*(uint32_t*)0x4001580c &= FLAG)
#define Clr_SAI1_AFRCR(FLAG)                 (*(uint32_t*)0x4001580c |= ~FLAG)
#define Set_SAI1_ASLOTR(FLAG)                (*(uint32_t*)0x40015810 &= FLAG)
#define Clr_SAI1_ASLOTR(FLAG)                (*(uint32_t*)0x40015810 |= ~FLAG)
#define Set_SAI1_AIM(FLAG)                   (*(uint32_t*)0x40015814 &= FLAG)
#define Clr_SAI1_AIM(FLAG)                   (*(uint32_t*)0x40015814 |= ~FLAG)
#define Set_SAI1_ASR(FLAG)                   (*(uint32_t*)0x40015818 &= FLAG)
#define Clr_SAI1_ASR(FLAG)                   (*(uint32_t*)0x40015818 |= ~FLAG)
#define Set_SAI1_ACLRFR(FLAG)                (*(uint32_t*)0x4001581c &= FLAG)
#define Clr_SAI1_ACLRFR(FLAG)                (*(uint32_t*)0x4001581c |= ~FLAG)
#define Set_SAI1_ADR(FLAG)                   (*(uint32_t*)0x40015820 &= FLAG)
#define Clr_SAI1_ADR(FLAG)                   (*(uint32_t*)0x40015820 |= ~FLAG)
#define Set_SAI1_GCR(FLAG)                   (*(uint32_t*)0x40015800 &= FLAG)
#define Clr_SAI1_GCR(FLAG)                   (*(uint32_t*)0x40015800 |= ~FLAG)
#define Set_SAI2_BCR1(FLAG)                  (*(uint32_t*)0x40015c24 &= FLAG)
#define Clr_SAI2_BCR1(FLAG)                  (*(uint32_t*)0x40015c24 |= ~FLAG)
#define Set_SAI2_BCR2(FLAG)                  (*(uint32_t*)0x40015c28 &= FLAG)
#define Clr_SAI2_BCR2(FLAG)                  (*(uint32_t*)0x40015c28 |= ~FLAG)
#define Set_SAI2_BFRCR(FLAG)                 (*(uint32_t*)0x40015c2c &= FLAG)
#define Clr_SAI2_BFRCR(FLAG)                 (*(uint32_t*)0x40015c2c |= ~FLAG)
#define Set_SAI2_BSLOTR(FLAG)                (*(uint32_t*)0x40015c30 &= FLAG)
#define Clr_SAI2_BSLOTR(FLAG)                (*(uint32_t*)0x40015c30 |= ~FLAG)
#define Set_SAI2_BIM(FLAG)                   (*(uint32_t*)0x40015c34 &= FLAG)
#define Clr_SAI2_BIM(FLAG)                   (*(uint32_t*)0x40015c34 |= ~FLAG)
#define Set_SAI2_BSR(FLAG)                   (*(uint32_t*)0x40015c38 &= FLAG)
#define Clr_SAI2_BSR(FLAG)                   (*(uint32_t*)0x40015c38 |= ~FLAG)
#define Set_SAI2_BCLRFR(FLAG)                (*(uint32_t*)0x40015c3c &= FLAG)
#define Clr_SAI2_BCLRFR(FLAG)                (*(uint32_t*)0x40015c3c |= ~FLAG)
#define Set_SAI2_BDR(FLAG)                   (*(uint32_t*)0x40015c40 &= FLAG)
#define Clr_SAI2_BDR(FLAG)                   (*(uint32_t*)0x40015c40 |= ~FLAG)
#define Set_SAI2_ACR1(FLAG)                  (*(uint32_t*)0x40015c04 &= FLAG)
#define Clr_SAI2_ACR1(FLAG)                  (*(uint32_t*)0x40015c04 |= ~FLAG)
#define Set_SAI2_ACR2(FLAG)                  (*(uint32_t*)0x40015c08 &= FLAG)
#define Clr_SAI2_ACR2(FLAG)                  (*(uint32_t*)0x40015c08 |= ~FLAG)
#define Set_SAI2_AFRCR(FLAG)                 (*(uint32_t*)0x40015c0c &= FLAG)
#define Clr_SAI2_AFRCR(FLAG)                 (*(uint32_t*)0x40015c0c |= ~FLAG)
#define Set_SAI2_ASLOTR(FLAG)                (*(uint32_t*)0x40015c10 &= FLAG)
#define Clr_SAI2_ASLOTR(FLAG)                (*(uint32_t*)0x40015c10 |= ~FLAG)
#define Set_SAI2_AIM(FLAG)                   (*(uint32_t*)0x40015c14 &= FLAG)
#define Clr_SAI2_AIM(FLAG)                   (*(uint32_t*)0x40015c14 |= ~FLAG)
#define Set_SAI2_ASR(FLAG)                   (*(uint32_t*)0x40015c18 &= FLAG)
#define Clr_SAI2_ASR(FLAG)                   (*(uint32_t*)0x40015c18 |= ~FLAG)
#define Set_SAI2_ACLRFR(FLAG)                (*(uint32_t*)0x40015c1c &= FLAG)
#define Clr_SAI2_ACLRFR(FLAG)                (*(uint32_t*)0x40015c1c |= ~FLAG)
#define Set_SAI2_ADR(FLAG)                   (*(uint32_t*)0x40015c20 &= FLAG)
#define Clr_SAI2_ADR(FLAG)                   (*(uint32_t*)0x40015c20 |= ~FLAG)
#define Set_SAI2_GCR(FLAG)                   (*(uint32_t*)0x40015c00 &= FLAG)
#define Clr_SAI2_GCR(FLAG)                   (*(uint32_t*)0x40015c00 |= ~FLAG)
#define  _SAI1_BCR1_MCKDIV                                   (0xf << 20)    // Master clock divider
#define  _SAI1_BCR1_NODIV                                    (0x1 << 19)    // No divider
#define  _SAI1_BCR1_DMAEN                                    (0x1 << 17)    // DMA enable
#define  _SAI1_BCR1_SAIBEN                                   (0x1 << 16)    // Audio block B enable
#define  _SAI1_BCR1_OutDri                                   (0x1 << 13)    // Output drive
#define  _SAI1_BCR1_MONO                                     (0x1 << 12)    // Mono mode
#define  _SAI1_BCR1_SYNCEN                                   (0x3 << 10)    // Synchronization enable
#define  _SAI1_BCR1_CKSTR                                    (0x1 << 9)    // Clock strobing edge
#define  _SAI1_BCR1_LSBFIRST                                 (0x1 << 8)    // Least significant bit first
#define  _SAI1_BCR1_DS                                       (0x7 << 5)    // Data size
#define  _SAI1_BCR1_PRTCFG                                   (0x3 << 2)    // Protocol configuration
#define  _SAI1_BCR1_MODE                                     (0x3 << 0)    // Audio block mode
#define  _SAI1_BCR2_COMP                                     (0x3 << 14)    // Companding mode
#define  _SAI1_BCR2_CPL                                      (0x1 << 13)    // Complement bit
#define  _SAI1_BCR2_MUTECN                                   (0x3f << 7)    // Mute counter
#define  _SAI1_BCR2_MUTEVAL                                  (0x1 << 6)    // Mute value
#define  _SAI1_BCR2_MUTE                                     (0x1 << 5)    // Mute
#define  _SAI1_BCR2_TRIS                                     (0x1 << 4)    // Tristate management on data line
#define  _SAI1_BCR2_FFLUS                                    (0x1 << 3)    // FIFO flush
#define  _SAI1_BCR2_FTH                                      (0x7 << 0)    // FIFO threshold
#define  _SAI1_BFRCR_FSOFF                                   (0x1 << 18)    // Frame synchronization offset
#define  _SAI1_BFRCR_FSPOL                                   (0x1 << 17)    // Frame synchronization polarity
#define  _SAI1_BFRCR_FSDEF                                   (0x1 << 16)    // Frame synchronization definition
#define  _SAI1_BFRCR_FSALL                                   (0x7f << 8)    // Frame synchronization active level length
#define  _SAI1_BFRCR_FRL                                     (0xff << 0)    // Frame length
#define  _SAI1_BSLOTR_SLOTEN                                 (0xffff << 16)    // Slot enable
#define  _SAI1_BSLOTR_NBSLOT                                 (0xf << 8)    // Number of slots in an audio frame
#define  _SAI1_BSLOTR_SLOTSZ                                 (0x3 << 6)    // Slot size
#define  _SAI1_BSLOTR_FBOFF                                  (0x1f << 0)    // First bit offset
#define  _SAI1_BIM_LFSDETIE                                  (0x1 << 6)    // Late frame synchronization detection interrupt enable
#define  _SAI1_BIM_AFSDETIE                                  (0x1 << 5)    // Anticipated frame synchronization detection interrupt enable
#define  _SAI1_BIM_CNRDYIE                                   (0x1 << 4)    // Codec not ready interrupt enable
#define  _SAI1_BIM_FREQIE                                    (0x1 << 3)    // FIFO request interrupt enable
#define  _SAI1_BIM_WCKCFG                                    (0x1 << 2)    // Wrong clock configuration interrupt enable
#define  _SAI1_BIM_MUTEDET                                   (0x1 << 1)    // Mute detection interrupt enable
#define  _SAI1_BIM_OVRUDRIE                                  (0x1 << 0)    // Overrun/underrun interrupt enable
#define  _SAI1_BSR_FLVL                                      (0x7 << 16)    // FIFO level threshold
#define  _SAI1_BSR_LFSDET                                    (0x1 << 6)    // Late frame synchronization detection
#define  _SAI1_BSR_AFSDET                                    (0x1 << 5)    // Anticipated frame synchronization detection
#define  _SAI1_BSR_CNRDY                                     (0x1 << 4)    // Codec not ready
#define  _SAI1_BSR_FREQ                                      (0x1 << 3)    // FIFO request
#define  _SAI1_BSR_WCKCFG                                    (0x1 << 2)    // Wrong clock configuration flag
#define  _SAI1_BSR_MUTEDET                                   (0x1 << 1)    // Mute detection
#define  _SAI1_BSR_OVRUDR                                    (0x1 << 0)    // Overrun / underrun
#define  _SAI1_BCLRFR_LFSDET                                 (0x1 << 6)    // Clear late frame synchronization detection flag
#define  _SAI1_BCLRFR_CAFSDET                                (0x1 << 5)    // Clear anticipated frame synchronization detection flag
#define  _SAI1_BCLRFR_CNRDY                                  (0x1 << 4)    // Clear codec not ready flag
#define  _SAI1_BCLRFR_WCKCFG                                 (0x1 << 2)    // Clear wrong clock configuration flag
#define  _SAI1_BCLRFR_MUTEDET                                (0x1 << 1)    // Mute detection flag
#define  _SAI1_BCLRFR_OVRUDR                                 (0x1 << 0)    // Clear overrun / underrun
#define  _SAI1_BDR_DATA                                      (0xffffffff << 0)    // Data
#define  _SAI1_ACR1_MCKDIV                                   (0xf << 20)    // Master clock divider
#define  _SAI1_ACR1_NODIV                                    (0x1 << 19)    // No divider
#define  _SAI1_ACR1_DMAEN                                    (0x1 << 17)    // DMA enable
#define  _SAI1_ACR1_SAIAEN                                   (0x1 << 16)    // Audio block A enable
#define  _SAI1_ACR1_OutDri                                   (0x1 << 13)    // Output drive
#define  _SAI1_ACR1_MONO                                     (0x1 << 12)    // Mono mode
#define  _SAI1_ACR1_SYNCEN                                   (0x3 << 10)    // Synchronization enable
#define  _SAI1_ACR1_CKSTR                                    (0x1 << 9)    // Clock strobing edge
#define  _SAI1_ACR1_LSBFIRST                                 (0x1 << 8)    // Least significant bit first
#define  _SAI1_ACR1_DS                                       (0x7 << 5)    // Data size
#define  _SAI1_ACR1_PRTCFG                                   (0x3 << 2)    // Protocol configuration
#define  _SAI1_ACR1_MODE                                     (0x3 << 0)    // Audio block mode
#define  _SAI1_ACR2_COMP                                     (0x3 << 14)    // Companding mode
#define  _SAI1_ACR2_CPL                                      (0x1 << 13)    // Complement bit
#define  _SAI1_ACR2_MUTECN                                   (0x3f << 7)    // Mute counter
#define  _SAI1_ACR2_MUTEVAL                                  (0x1 << 6)    // Mute value
#define  _SAI1_ACR2_MUTE                                     (0x1 << 5)    // Mute
#define  _SAI1_ACR2_TRIS                                     (0x1 << 4)    // Tristate management on data line
#define  _SAI1_ACR2_FFLUS                                    (0x1 << 3)    // FIFO flush
#define  _SAI1_ACR2_FTH                                      (0x7 << 0)    // FIFO threshold
#define  _SAI1_AFRCR_FSOFF                                   (0x1 << 18)    // Frame synchronization offset
#define  _SAI1_AFRCR_FSPOL                                   (0x1 << 17)    // Frame synchronization polarity
#define  _SAI1_AFRCR_FSDEF                                   (0x1 << 16)    // Frame synchronization definition
#define  _SAI1_AFRCR_FSALL                                   (0x7f << 8)    // Frame synchronization active level length
#define  _SAI1_AFRCR_FRL                                     (0xff << 0)    // Frame length
#define  _SAI1_ASLOTR_SLOTEN                                 (0xffff << 16)    // Slot enable
#define  _SAI1_ASLOTR_NBSLOT                                 (0xf << 8)    // Number of slots in an audio frame
#define  _SAI1_ASLOTR_SLOTSZ                                 (0x3 << 6)    // Slot size
#define  _SAI1_ASLOTR_FBOFF                                  (0x1f << 0)    // First bit offset
#define  _SAI1_AIM_LFSDET                                    (0x1 << 6)    // Late frame synchronization detection interrupt enable
#define  _SAI1_AIM_AFSDETIE                                  (0x1 << 5)    // Anticipated frame synchronization detection interrupt enable
#define  _SAI1_AIM_CNRDYIE                                   (0x1 << 4)    // Codec not ready interrupt enable
#define  _SAI1_AIM_FREQIE                                    (0x1 << 3)    // FIFO request interrupt enable
#define  _SAI1_AIM_WCKCFG                                    (0x1 << 2)    // Wrong clock configuration interrupt enable
#define  _SAI1_AIM_MUTEDET                                   (0x1 << 1)    // Mute detection interrupt enable
#define  _SAI1_AIM_OVRUDRIE                                  (0x1 << 0)    // Overrun/underrun interrupt enable
#define  _SAI1_ASR_FLVL                                      (0x7 << 16)    // FIFO level threshold
#define  _SAI1_ASR_LFSDET                                    (0x1 << 6)    // Late frame synchronization detection
#define  _SAI1_ASR_AFSDET                                    (0x1 << 5)    // Anticipated frame synchronization detection
#define  _SAI1_ASR_CNRDY                                     (0x1 << 4)    // Codec not ready
#define  _SAI1_ASR_FREQ                                      (0x1 << 3)    // FIFO request
#define  _SAI1_ASR_WCKCFG                                    (0x1 << 2)    // Wrong clock configuration flag. This bit is read only.
#define  _SAI1_ASR_MUTEDET                                   (0x1 << 1)    // Mute detection
#define  _SAI1_ASR_OVRUDR                                    (0x1 << 0)    // Overrun / underrun
#define  _SAI1_ACLRFR_LFSDET                                 (0x1 << 6)    // Clear late frame synchronization detection flag
#define  _SAI1_ACLRFR_CAFSDET                                (0x1 << 5)    // Clear anticipated frame synchronization detection flag.
#define  _SAI1_ACLRFR_CNRDY                                  (0x1 << 4)    // Clear codec not ready flag
#define  _SAI1_ACLRFR_WCKCFG                                 (0x1 << 2)    // Clear wrong clock configuration flag
#define  _SAI1_ACLRFR_MUTEDET                                (0x1 << 1)    // Mute detection flag
#define  _SAI1_ACLRFR_OVRUDR                                 (0x1 << 0)    // Clear overrun / underrun
#define  _SAI1_ADR_DATA                                      (0xffffffff << 0)    // Data
#define  _SAI1_GCR_SYNCIN                                    (0x3 << 0)    // Synchronization inputs
#define  _SAI1_GCR_SYNCOUT                                   (0x3 << 4)    // Synchronization outputs
#define  _SAI2_BCR1_MCKDIV                                   (0xf << 20)    // Master clock divider
#define  _SAI2_BCR1_NODIV                                    (0x1 << 19)    // No divider
#define  _SAI2_BCR1_DMAEN                                    (0x1 << 17)    // DMA enable
#define  _SAI2_BCR1_SAIBEN                                   (0x1 << 16)    // Audio block B enable
#define  _SAI2_BCR1_OutDri                                   (0x1 << 13)    // Output drive
#define  _SAI2_BCR1_MONO                                     (0x1 << 12)    // Mono mode
#define  _SAI2_BCR1_SYNCEN                                   (0x3 << 10)    // Synchronization enable
#define  _SAI2_BCR1_CKSTR                                    (0x1 << 9)    // Clock strobing edge
#define  _SAI2_BCR1_LSBFIRST                                 (0x1 << 8)    // Least significant bit first
#define  _SAI2_BCR1_DS                                       (0x7 << 5)    // Data size
#define  _SAI2_BCR1_PRTCFG                                   (0x3 << 2)    // Protocol configuration
#define  _SAI2_BCR1_MODE                                     (0x3 << 0)    // Audio block mode
#define  _SAI2_BCR2_COMP                                     (0x3 << 14)    // Companding mode
#define  _SAI2_BCR2_CPL                                      (0x1 << 13)    // Complement bit
#define  _SAI2_BCR2_MUTECN                                   (0x3f << 7)    // Mute counter
#define  _SAI2_BCR2_MUTEVAL                                  (0x1 << 6)    // Mute value
#define  _SAI2_BCR2_MUTE                                     (0x1 << 5)    // Mute
#define  _SAI2_BCR2_TRIS                                     (0x1 << 4)    // Tristate management on data line
#define  _SAI2_BCR2_FFLUS                                    (0x1 << 3)    // FIFO flush
#define  _SAI2_BCR2_FTH                                      (0x7 << 0)    // FIFO threshold
#define  _SAI2_BFRCR_FSOFF                                   (0x1 << 18)    // Frame synchronization offset
#define  _SAI2_BFRCR_FSPOL                                   (0x1 << 17)    // Frame synchronization polarity
#define  _SAI2_BFRCR_FSDEF                                   (0x1 << 16)    // Frame synchronization definition
#define  _SAI2_BFRCR_FSALL                                   (0x7f << 8)    // Frame synchronization active level length
#define  _SAI2_BFRCR_FRL                                     (0xff << 0)    // Frame length
#define  _SAI2_BSLOTR_SLOTEN                                 (0xffff << 16)    // Slot enable
#define  _SAI2_BSLOTR_NBSLOT                                 (0xf << 8)    // Number of slots in an audio frame
#define  _SAI2_BSLOTR_SLOTSZ                                 (0x3 << 6)    // Slot size
#define  _SAI2_BSLOTR_FBOFF                                  (0x1f << 0)    // First bit offset
#define  _SAI2_BIM_LFSDETIE                                  (0x1 << 6)    // Late frame synchronization detection interrupt enable
#define  _SAI2_BIM_AFSDETIE                                  (0x1 << 5)    // Anticipated frame synchronization detection interrupt enable
#define  _SAI2_BIM_CNRDYIE                                   (0x1 << 4)    // Codec not ready interrupt enable
#define  _SAI2_BIM_FREQIE                                    (0x1 << 3)    // FIFO request interrupt enable
#define  _SAI2_BIM_WCKCFG                                    (0x1 << 2)    // Wrong clock configuration interrupt enable
#define  _SAI2_BIM_MUTEDET                                   (0x1 << 1)    // Mute detection interrupt enable
#define  _SAI2_BIM_OVRUDRIE                                  (0x1 << 0)    // Overrun/underrun interrupt enable
#define  _SAI2_BSR_FLVL                                      (0x7 << 16)    // FIFO level threshold
#define  _SAI2_BSR_LFSDET                                    (0x1 << 6)    // Late frame synchronization detection
#define  _SAI2_BSR_AFSDET                                    (0x1 << 5)    // Anticipated frame synchronization detection
#define  _SAI2_BSR_CNRDY                                     (0x1 << 4)    // Codec not ready
#define  _SAI2_BSR_FREQ                                      (0x1 << 3)    // FIFO request
#define  _SAI2_BSR_WCKCFG                                    (0x1 << 2)    // Wrong clock configuration flag
#define  _SAI2_BSR_MUTEDET                                   (0x1 << 1)    // Mute detection
#define  _SAI2_BSR_OVRUDR                                    (0x1 << 0)    // Overrun / underrun
#define  _SAI2_BCLRFR_LFSDET                                 (0x1 << 6)    // Clear late frame synchronization detection flag
#define  _SAI2_BCLRFR_CAFSDET                                (0x1 << 5)    // Clear anticipated frame synchronization detection flag
#define  _SAI2_BCLRFR_CNRDY                                  (0x1 << 4)    // Clear codec not ready flag
#define  _SAI2_BCLRFR_WCKCFG                                 (0x1 << 2)    // Clear wrong clock configuration flag
#define  _SAI2_BCLRFR_MUTEDET                                (0x1 << 1)    // Mute detection flag
#define  _SAI2_BCLRFR_OVRUDR                                 (0x1 << 0)    // Clear overrun / underrun
#define  _SAI2_BDR_DATA                                      (0xffffffff << 0)    // Data
#define  _SAI2_ACR1_MCKDIV                                   (0xf << 20)    // Master clock divider
#define  _SAI2_ACR1_NODIV                                    (0x1 << 19)    // No divider
#define  _SAI2_ACR1_DMAEN                                    (0x1 << 17)    // DMA enable
#define  _SAI2_ACR1_SAIAEN                                   (0x1 << 16)    // Audio block A enable
#define  _SAI2_ACR1_OutDri                                   (0x1 << 13)    // Output drive
#define  _SAI2_ACR1_MONO                                     (0x1 << 12)    // Mono mode
#define  _SAI2_ACR1_SYNCEN                                   (0x3 << 10)    // Synchronization enable
#define  _SAI2_ACR1_CKSTR                                    (0x1 << 9)    // Clock strobing edge
#define  _SAI2_ACR1_LSBFIRST                                 (0x1 << 8)    // Least significant bit first
#define  _SAI2_ACR1_DS                                       (0x7 << 5)    // Data size
#define  _SAI2_ACR1_PRTCFG                                   (0x3 << 2)    // Protocol configuration
#define  _SAI2_ACR1_MODE                                     (0x3 << 0)    // Audio block mode
#define  _SAI2_ACR2_COMP                                     (0x3 << 14)    // Companding mode
#define  _SAI2_ACR2_CPL                                      (0x1 << 13)    // Complement bit
#define  _SAI2_ACR2_MUTECN                                   (0x3f << 7)    // Mute counter
#define  _SAI2_ACR2_MUTEVAL                                  (0x1 << 6)    // Mute value
#define  _SAI2_ACR2_MUTE                                     (0x1 << 5)    // Mute
#define  _SAI2_ACR2_TRIS                                     (0x1 << 4)    // Tristate management on data line
#define  _SAI2_ACR2_FFLUS                                    (0x1 << 3)    // FIFO flush
#define  _SAI2_ACR2_FTH                                      (0x7 << 0)    // FIFO threshold
#define  _SAI2_AFRCR_FSOFF                                   (0x1 << 18)    // Frame synchronization offset
#define  _SAI2_AFRCR_FSPOL                                   (0x1 << 17)    // Frame synchronization polarity
#define  _SAI2_AFRCR_FSDEF                                   (0x1 << 16)    // Frame synchronization definition
#define  _SAI2_AFRCR_FSALL                                   (0x7f << 8)    // Frame synchronization active level length
#define  _SAI2_AFRCR_FRL                                     (0xff << 0)    // Frame length
#define  _SAI2_ASLOTR_SLOTEN                                 (0xffff << 16)    // Slot enable
#define  _SAI2_ASLOTR_NBSLOT                                 (0xf << 8)    // Number of slots in an audio frame
#define  _SAI2_ASLOTR_SLOTSZ                                 (0x3 << 6)    // Slot size
#define  _SAI2_ASLOTR_FBOFF                                  (0x1f << 0)    // First bit offset
#define  _SAI2_AIM_LFSDET                                    (0x1 << 6)    // Late frame synchronization detection interrupt enable
#define  _SAI2_AIM_AFSDETIE                                  (0x1 << 5)    // Anticipated frame synchronization detection interrupt enable
#define  _SAI2_AIM_CNRDYIE                                   (0x1 << 4)    // Codec not ready interrupt enable
#define  _SAI2_AIM_FREQIE                                    (0x1 << 3)    // FIFO request interrupt enable
#define  _SAI2_AIM_WCKCFG                                    (0x1 << 2)    // Wrong clock configuration interrupt enable
#define  _SAI2_AIM_MUTEDET                                   (0x1 << 1)    // Mute detection interrupt enable
#define  _SAI2_AIM_OVRUDRIE                                  (0x1 << 0)    // Overrun/underrun interrupt enable
#define  _SAI2_ASR_FLVL                                      (0x7 << 16)    // FIFO level threshold
#define  _SAI2_ASR_LFSDET                                    (0x1 << 6)    // Late frame synchronization detection
#define  _SAI2_ASR_AFSDET                                    (0x1 << 5)    // Anticipated frame synchronization detection
#define  _SAI2_ASR_CNRDY                                     (0x1 << 4)    // Codec not ready
#define  _SAI2_ASR_FREQ                                      (0x1 << 3)    // FIFO request
#define  _SAI2_ASR_WCKCFG                                    (0x1 << 2)    // Wrong clock configuration flag. This bit is read only.
#define  _SAI2_ASR_MUTEDET                                   (0x1 << 1)    // Mute detection
#define  _SAI2_ASR_OVRUDR                                    (0x1 << 0)    // Overrun / underrun
#define  _SAI2_ACLRFR_LFSDET                                 (0x1 << 6)    // Clear late frame synchronization detection flag
#define  _SAI2_ACLRFR_CAFSDET                                (0x1 << 5)    // Clear anticipated frame synchronization detection flag.
#define  _SAI2_ACLRFR_CNRDY                                  (0x1 << 4)    // Clear codec not ready flag
#define  _SAI2_ACLRFR_WCKCFG                                 (0x1 << 2)    // Clear wrong clock configuration flag
#define  _SAI2_ACLRFR_MUTEDET                                (0x1 << 1)    // Mute detection flag
#define  _SAI2_ACLRFR_OVRUDR                                 (0x1 << 0)    // Clear overrun / underrun
#define  _SAI2_ADR_DATA                                      (0xffffffff << 0)    // Data
#define  _SAI2_GCR_SYNCIN                                    (0x3 << 0)    // Synchronization inputs
#define  _SAI2_GCR_SYNCOUT                                   (0x3 << 4)    // Synchronization outputs

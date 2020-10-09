#define Get_FMC_BCR1(FLAG)                   (*(uint32_t*)0xa0000000 |= FLAG)
#define Get_FMC_BTR1(FLAG)                   (*(uint32_t*)0xa0000004 |= FLAG)
#define Get_FMC_BCR2(FLAG)                   (*(uint32_t*)0xa0000008 |= FLAG)
#define Get_FMC_BTR2(FLAG)                   (*(uint32_t*)0xa000000c |= FLAG)
#define Get_FMC_BCR3(FLAG)                   (*(uint32_t*)0xa0000010 |= FLAG)
#define Get_FMC_BTR3(FLAG)                   (*(uint32_t*)0xa0000014 |= FLAG)
#define Get_FMC_BCR4(FLAG)                   (*(uint32_t*)0xa0000018 |= FLAG)
#define Get_FMC_BTR4(FLAG)                   (*(uint32_t*)0xa000001c |= FLAG)
#define Get_FMC_PCR(FLAG)                    (*(uint32_t*)0xa0000080 |= FLAG)
#define Get_FMC_SR(FLAG)                     (*(uint32_t*)0xa0000084 |= FLAG)
#define Get_FMC_PMEM(FLAG)                   (*(uint32_t*)0xa0000088 |= FLAG)
#define Get_FMC_PATT(FLAG)                   (*(uint32_t*)0xa000008c |= FLAG)
#define Get_FMC_ECCR(FLAG)                   (*(uint32_t*)0xa0000094 |= FLAG)
#define Get_FMC_BWTR1(FLAG)                  (*(uint32_t*)0xa0000104 |= FLAG)
#define Get_FMC_BWTR2(FLAG)                  (*(uint32_t*)0xa000010c |= FLAG)
#define Get_FMC_BWTR3(FLAG)                  (*(uint32_t*)0xa0000114 |= FLAG)
#define Get_FMC_BWTR4(FLAG)                  (*(uint32_t*)0xa000011c |= FLAG)
#define Get_FMC_SDCR1(FLAG)                  (*(uint32_t*)0xa0000140 |= FLAG)
#define Get_FMC_SDCR2(FLAG)                  (*(uint32_t*)0xa0000144 |= FLAG)
#define Get_FMC_SDTR1(FLAG)                  (*(uint32_t*)0xa0000148 |= FLAG)
#define Get_FMC_SDTR2(FLAG)                  (*(uint32_t*)0xa000014c |= FLAG)
#define Get_FMC_SDCMR(FLAG)                  (*(uint32_t*)0xa0000150 |= FLAG)
#define Get_FMC_SDRTR(FLAG)                  (*(uint32_t*)0xa0000154 |= FLAG)
#define Get_FMC_SDSR(FLAG)                   (*(uint32_t*)0xa0000158 |= FLAG)
#define Set_FMC_BCR1(FLAG)                   (*(uint32_t*)0xa0000000 &= FLAG)
#define Clr_FMC_BCR1(FLAG)                   (*(uint32_t*)0xa0000000 |= ~FLAG)
#define Set_FMC_BTR1(FLAG)                   (*(uint32_t*)0xa0000004 &= FLAG)
#define Clr_FMC_BTR1(FLAG)                   (*(uint32_t*)0xa0000004 |= ~FLAG)
#define Set_FMC_BCR2(FLAG)                   (*(uint32_t*)0xa0000008 &= FLAG)
#define Clr_FMC_BCR2(FLAG)                   (*(uint32_t*)0xa0000008 |= ~FLAG)
#define Set_FMC_BTR2(FLAG)                   (*(uint32_t*)0xa000000c &= FLAG)
#define Clr_FMC_BTR2(FLAG)                   (*(uint32_t*)0xa000000c |= ~FLAG)
#define Set_FMC_BCR3(FLAG)                   (*(uint32_t*)0xa0000010 &= FLAG)
#define Clr_FMC_BCR3(FLAG)                   (*(uint32_t*)0xa0000010 |= ~FLAG)
#define Set_FMC_BTR3(FLAG)                   (*(uint32_t*)0xa0000014 &= FLAG)
#define Clr_FMC_BTR3(FLAG)                   (*(uint32_t*)0xa0000014 |= ~FLAG)
#define Set_FMC_BCR4(FLAG)                   (*(uint32_t*)0xa0000018 &= FLAG)
#define Clr_FMC_BCR4(FLAG)                   (*(uint32_t*)0xa0000018 |= ~FLAG)
#define Set_FMC_BTR4(FLAG)                   (*(uint32_t*)0xa000001c &= FLAG)
#define Clr_FMC_BTR4(FLAG)                   (*(uint32_t*)0xa000001c |= ~FLAG)
#define Set_FMC_PCR(FLAG)                    (*(uint32_t*)0xa0000080 &= FLAG)
#define Clr_FMC_PCR(FLAG)                    (*(uint32_t*)0xa0000080 |= ~FLAG)
#define Set_FMC_SR(FLAG)                     (*(uint32_t*)0xa0000084 &= FLAG)
#define Clr_FMC_SR(FLAG)                     (*(uint32_t*)0xa0000084 |= ~FLAG)
#define Set_FMC_PMEM(FLAG)                   (*(uint32_t*)0xa0000088 &= FLAG)
#define Clr_FMC_PMEM(FLAG)                   (*(uint32_t*)0xa0000088 |= ~FLAG)
#define Set_FMC_PATT(FLAG)                   (*(uint32_t*)0xa000008c &= FLAG)
#define Clr_FMC_PATT(FLAG)                   (*(uint32_t*)0xa000008c |= ~FLAG)
#define Set_FMC_ECCR(FLAG)                   (*(uint32_t*)0xa0000094 &= FLAG)
#define Clr_FMC_ECCR(FLAG)                   (*(uint32_t*)0xa0000094 |= ~FLAG)
#define Set_FMC_BWTR1(FLAG)                  (*(uint32_t*)0xa0000104 &= FLAG)
#define Clr_FMC_BWTR1(FLAG)                  (*(uint32_t*)0xa0000104 |= ~FLAG)
#define Set_FMC_BWTR2(FLAG)                  (*(uint32_t*)0xa000010c &= FLAG)
#define Clr_FMC_BWTR2(FLAG)                  (*(uint32_t*)0xa000010c |= ~FLAG)
#define Set_FMC_BWTR3(FLAG)                  (*(uint32_t*)0xa0000114 &= FLAG)
#define Clr_FMC_BWTR3(FLAG)                  (*(uint32_t*)0xa0000114 |= ~FLAG)
#define Set_FMC_BWTR4(FLAG)                  (*(uint32_t*)0xa000011c &= FLAG)
#define Clr_FMC_BWTR4(FLAG)                  (*(uint32_t*)0xa000011c |= ~FLAG)
#define Set_FMC_SDCR1(FLAG)                  (*(uint32_t*)0xa0000140 &= FLAG)
#define Clr_FMC_SDCR1(FLAG)                  (*(uint32_t*)0xa0000140 |= ~FLAG)
#define Set_FMC_SDCR2(FLAG)                  (*(uint32_t*)0xa0000144 &= FLAG)
#define Clr_FMC_SDCR2(FLAG)                  (*(uint32_t*)0xa0000144 |= ~FLAG)
#define Set_FMC_SDTR1(FLAG)                  (*(uint32_t*)0xa0000148 &= FLAG)
#define Clr_FMC_SDTR1(FLAG)                  (*(uint32_t*)0xa0000148 |= ~FLAG)
#define Set_FMC_SDTR2(FLAG)                  (*(uint32_t*)0xa000014c &= FLAG)
#define Clr_FMC_SDTR2(FLAG)                  (*(uint32_t*)0xa000014c |= ~FLAG)
#define Set_FMC_SDCMR(FLAG)                  (*(uint32_t*)0xa0000150 &= FLAG)
#define Clr_FMC_SDCMR(FLAG)                  (*(uint32_t*)0xa0000150 |= ~FLAG)
#define Set_FMC_SDRTR(FLAG)                  (*(uint32_t*)0xa0000154 &= FLAG)
#define Clr_FMC_SDRTR(FLAG)                  (*(uint32_t*)0xa0000154 |= ~FLAG)
#define Set_FMC_SDSR(FLAG)                   (*(uint32_t*)0xa0000158 &= FLAG)
#define Clr_FMC_SDSR(FLAG)                   (*(uint32_t*)0xa0000158 |= ~FLAG)
#define  _FMC_BCR1_CCLKEN                                    (0x1 << 20)    // CCLKEN
#define  _FMC_BCR1_CBURSTRW                                  (0x1 << 19)    // CBURSTRW
#define  _FMC_BCR1_ASYNCWAIT                                 (0x1 << 15)    // ASYNCWAIT
#define  _FMC_BCR1_EXTMOD                                    (0x1 << 14)    // EXTMOD
#define  _FMC_BCR1_WAITEN                                    (0x1 << 13)    // WAITEN
#define  _FMC_BCR1_WREN                                      (0x1 << 12)    // WREN
#define  _FMC_BCR1_WAITCFG                                   (0x1 << 11)    // WAITCFG
#define  _FMC_BCR1_WAITPOL                                   (0x1 << 9)    // WAITPOL
#define  _FMC_BCR1_BURSTEN                                   (0x1 << 8)    // BURSTEN
#define  _FMC_BCR1_FACCEN                                    (0x1 << 6)    // FACCEN
#define  _FMC_BCR1_MWID                                      (0x3 << 4)    // MWID
#define  _FMC_BCR1_MTYP                                      (0x3 << 2)    // MTYP
#define  _FMC_BCR1_MUXEN                                     (0x1 << 1)    // MUXEN
#define  _FMC_BCR1_MBKEN                                     (0x1 << 0)    // MBKEN
#define  _FMC_BTR1_ACCMOD                                    (0x3 << 28)    // ACCMOD
#define  _FMC_BTR1_DATLAT                                    (0xf << 24)    // DATLAT
#define  _FMC_BTR1_CLKDIV                                    (0xf << 20)    // CLKDIV
#define  _FMC_BTR1_BUSTURN                                   (0xf << 16)    // BUSTURN
#define  _FMC_BTR1_DATAST                                    (0xff << 8)    // DATAST
#define  _FMC_BTR1_ADDHLD                                    (0xf << 4)    // ADDHLD
#define  _FMC_BTR1_ADDSET                                    (0xf << 0)    // ADDSET
#define  _FMC_BCR2_CBURSTRW                                  (0x1 << 19)    // CBURSTRW
#define  _FMC_BCR2_ASYNCWAIT                                 (0x1 << 15)    // ASYNCWAIT
#define  _FMC_BCR2_EXTMOD                                    (0x1 << 14)    // EXTMOD
#define  _FMC_BCR2_WAITEN                                    (0x1 << 13)    // WAITEN
#define  _FMC_BCR2_WREN                                      (0x1 << 12)    // WREN
#define  _FMC_BCR2_WAITCFG                                   (0x1 << 11)    // WAITCFG
#define  _FMC_BCR2_WRAPMOD                                   (0x1 << 10)    // WRAPMOD
#define  _FMC_BCR2_WAITPOL                                   (0x1 << 9)    // WAITPOL
#define  _FMC_BCR2_BURSTEN                                   (0x1 << 8)    // BURSTEN
#define  _FMC_BCR2_FACCEN                                    (0x1 << 6)    // FACCEN
#define  _FMC_BCR2_MWID                                      (0x3 << 4)    // MWID
#define  _FMC_BCR2_MTYP                                      (0x3 << 2)    // MTYP
#define  _FMC_BCR2_MUXEN                                     (0x1 << 1)    // MUXEN
#define  _FMC_BCR2_MBKEN                                     (0x1 << 0)    // MBKEN
#define  _FMC_BTR2_ACCMOD                                    (0x3 << 28)    // ACCMOD
#define  _FMC_BTR2_DATLAT                                    (0xf << 24)    // DATLAT
#define  _FMC_BTR2_CLKDIV                                    (0xf << 20)    // CLKDIV
#define  _FMC_BTR2_BUSTURN                                   (0xf << 16)    // BUSTURN
#define  _FMC_BTR2_DATAST                                    (0xff << 8)    // DATAST
#define  _FMC_BTR2_ADDHLD                                    (0xf << 4)    // ADDHLD
#define  _FMC_BTR2_ADDSET                                    (0xf << 0)    // ADDSET
#define  _FMC_BCR3_CBURSTRW                                  (0x1 << 19)    // CBURSTRW
#define  _FMC_BCR3_ASYNCWAIT                                 (0x1 << 15)    // ASYNCWAIT
#define  _FMC_BCR3_EXTMOD                                    (0x1 << 14)    // EXTMOD
#define  _FMC_BCR3_WAITEN                                    (0x1 << 13)    // WAITEN
#define  _FMC_BCR3_WREN                                      (0x1 << 12)    // WREN
#define  _FMC_BCR3_WAITCFG                                   (0x1 << 11)    // WAITCFG
#define  _FMC_BCR3_WRAPMOD                                   (0x1 << 10)    // WRAPMOD
#define  _FMC_BCR3_WAITPOL                                   (0x1 << 9)    // WAITPOL
#define  _FMC_BCR3_BURSTEN                                   (0x1 << 8)    // BURSTEN
#define  _FMC_BCR3_FACCEN                                    (0x1 << 6)    // FACCEN
#define  _FMC_BCR3_MWID                                      (0x3 << 4)    // MWID
#define  _FMC_BCR3_MTYP                                      (0x3 << 2)    // MTYP
#define  _FMC_BCR3_MUXEN                                     (0x1 << 1)    // MUXEN
#define  _FMC_BCR3_MBKEN                                     (0x1 << 0)    // MBKEN
#define  _FMC_BTR3_ACCMOD                                    (0x3 << 28)    // ACCMOD
#define  _FMC_BTR3_DATLAT                                    (0xf << 24)    // DATLAT
#define  _FMC_BTR3_CLKDIV                                    (0xf << 20)    // CLKDIV
#define  _FMC_BTR3_BUSTURN                                   (0xf << 16)    // BUSTURN
#define  _FMC_BTR3_DATAST                                    (0xff << 8)    // DATAST
#define  _FMC_BTR3_ADDHLD                                    (0xf << 4)    // ADDHLD
#define  _FMC_BTR3_ADDSET                                    (0xf << 0)    // ADDSET
#define  _FMC_BCR4_CBURSTRW                                  (0x1 << 19)    // CBURSTRW
#define  _FMC_BCR4_ASYNCWAIT                                 (0x1 << 15)    // ASYNCWAIT
#define  _FMC_BCR4_EXTMOD                                    (0x1 << 14)    // EXTMOD
#define  _FMC_BCR4_WAITEN                                    (0x1 << 13)    // WAITEN
#define  _FMC_BCR4_WREN                                      (0x1 << 12)    // WREN
#define  _FMC_BCR4_WAITCFG                                   (0x1 << 11)    // WAITCFG
#define  _FMC_BCR4_WRAPMOD                                   (0x1 << 10)    // WRAPMOD
#define  _FMC_BCR4_WAITPOL                                   (0x1 << 9)    // WAITPOL
#define  _FMC_BCR4_BURSTEN                                   (0x1 << 8)    // BURSTEN
#define  _FMC_BCR4_FACCEN                                    (0x1 << 6)    // FACCEN
#define  _FMC_BCR4_MWID                                      (0x3 << 4)    // MWID
#define  _FMC_BCR4_MTYP                                      (0x3 << 2)    // MTYP
#define  _FMC_BCR4_MUXEN                                     (0x1 << 1)    // MUXEN
#define  _FMC_BCR4_MBKEN                                     (0x1 << 0)    // MBKEN
#define  _FMC_BTR4_ACCMOD                                    (0x3 << 28)    // ACCMOD
#define  _FMC_BTR4_DATLAT                                    (0xf << 24)    // DATLAT
#define  _FMC_BTR4_CLKDIV                                    (0xf << 20)    // CLKDIV
#define  _FMC_BTR4_BUSTURN                                   (0xf << 16)    // BUSTURN
#define  _FMC_BTR4_DATAST                                    (0xff << 8)    // DATAST
#define  _FMC_BTR4_ADDHLD                                    (0xf << 4)    // ADDHLD
#define  _FMC_BTR4_ADDSET                                    (0xf << 0)    // ADDSET
#define  _FMC_PCR_ECCPS                                      (0x7 << 17)    // ECCPS
#define  _FMC_PCR_TAR                                        (0xf << 13)    // TAR
#define  _FMC_PCR_TCLR                                       (0xf << 9)    // TCLR
#define  _FMC_PCR_ECCEN                                      (0x1 << 6)    // ECCEN
#define  _FMC_PCR_PWID                                       (0x3 << 4)    // PWID
#define  _FMC_PCR_PTYP                                       (0x1 << 3)    // PTYP
#define  _FMC_PCR_PBKEN                                      (0x1 << 2)    // PBKEN
#define  _FMC_PCR_PWAITEN                                    (0x1 << 1)    // PWAITEN
#define  _FMC_SR_FEMPT                                       (0x1 << 6)    // FEMPT
#define  _FMC_SR_IFEN                                        (0x1 << 5)    // IFEN
#define  _FMC_SR_ILEN                                        (0x1 << 4)    // ILEN
#define  _FMC_SR_IREN                                        (0x1 << 3)    // IREN
#define  _FMC_SR_IFS                                         (0x1 << 2)    // IFS
#define  _FMC_SR_ILS                                         (0x1 << 1)    // ILS
#define  _FMC_SR_IRS                                         (0x1 << 0)    // IRS
#define  _FMC_PMEM_MEMHIZx                                   (0xff << 24)    // MEMHIZx
#define  _FMC_PMEM_MEMHOLDx                                  (0xff << 16)    // MEMHOLDx
#define  _FMC_PMEM_MEMWAITx                                  (0xff << 8)    // MEMWAITx
#define  _FMC_PMEM_MEMSETx                                   (0xff << 0)    // MEMSETx
#define  _FMC_PATT_ATTHIZx                                   (0xff << 24)    // ATTHIZx
#define  _FMC_PATT_ATTHOLDx                                  (0xff << 16)    // ATTHOLDx
#define  _FMC_PATT_ATTWAITx                                  (0xff << 8)    // ATTWAITx
#define  _FMC_PATT_ATTSETx                                   (0xff << 0)    // ATTSETx
#define  _FMC_ECCR_ECCx                                      (0xffffffff << 0)    // ECCx
#define  _FMC_BWTR1_ACCMOD                                   (0x3 << 28)    // ACCMOD
#define  _FMC_BWTR1_DATLAT                                   (0xf << 24)    // DATLAT
#define  _FMC_BWTR1_CLKDIV                                   (0xf << 20)    // CLKDIV
#define  _FMC_BWTR1_DATAST                                   (0xff << 8)    // DATAST
#define  _FMC_BWTR1_ADDHLD                                   (0xf << 4)    // ADDHLD
#define  _FMC_BWTR1_ADDSET                                   (0xf << 0)    // ADDSET
#define  _FMC_BWTR2_ACCMOD                                   (0x3 << 28)    // ACCMOD
#define  _FMC_BWTR2_DATLAT                                   (0xf << 24)    // DATLAT
#define  _FMC_BWTR2_CLKDIV                                   (0xf << 20)    // CLKDIV
#define  _FMC_BWTR2_DATAST                                   (0xff << 8)    // DATAST
#define  _FMC_BWTR2_ADDHLD                                   (0xf << 4)    // ADDHLD
#define  _FMC_BWTR2_ADDSET                                   (0xf << 0)    // ADDSET
#define  _FMC_BWTR3_ACCMOD                                   (0x3 << 28)    // ACCMOD
#define  _FMC_BWTR3_DATLAT                                   (0xf << 24)    // DATLAT
#define  _FMC_BWTR3_CLKDIV                                   (0xf << 20)    // CLKDIV
#define  _FMC_BWTR3_DATAST                                   (0xff << 8)    // DATAST
#define  _FMC_BWTR3_ADDHLD                                   (0xf << 4)    // ADDHLD
#define  _FMC_BWTR3_ADDSET                                   (0xf << 0)    // ADDSET
#define  _FMC_BWTR4_ACCMOD                                   (0x3 << 28)    // ACCMOD
#define  _FMC_BWTR4_DATLAT                                   (0xf << 24)    // DATLAT
#define  _FMC_BWTR4_CLKDIV                                   (0xf << 20)    // CLKDIV
#define  _FMC_BWTR4_DATAST                                   (0xff << 8)    // DATAST
#define  _FMC_BWTR4_ADDHLD                                   (0xf << 4)    // ADDHLD
#define  _FMC_BWTR4_ADDSET                                   (0xf << 0)    // ADDSET
#define  _FMC_SDCR1_NC                                       (0x3 << 0)    // Number of column address bits
#define  _FMC_SDCR1_NR                                       (0x3 << 2)    // Number of row address bits
#define  _FMC_SDCR1_MWID                                     (0x3 << 4)    // Memory data bus width
#define  _FMC_SDCR1_NB                                       (0x1 << 6)    // Number of internal banks
#define  _FMC_SDCR1_CAS                                      (0x3 << 7)    // CAS latency
#define  _FMC_SDCR1_WP                                       (0x1 << 9)    // Write protection
#define  _FMC_SDCR1_SDCLK                                    (0x3 << 10)    // SDRAM clock configuration
#define  _FMC_SDCR1_RBURST                                   (0x1 << 12)    // Burst read
#define  _FMC_SDCR1_RPIPE                                    (0x3 << 13)    // Read pipe
#define  _FMC_SDCR2_NC                                       (0x3 << 0)    // Number of column address bits
#define  _FMC_SDCR2_NR                                       (0x3 << 2)    // Number of row address bits
#define  _FMC_SDCR2_MWID                                     (0x3 << 4)    // Memory data bus width
#define  _FMC_SDCR2_NB                                       (0x1 << 6)    // Number of internal banks
#define  _FMC_SDCR2_CAS                                      (0x3 << 7)    // CAS latency
#define  _FMC_SDCR2_WP                                       (0x1 << 9)    // Write protection
#define  _FMC_SDCR2_SDCLK                                    (0x3 << 10)    // SDRAM clock configuration
#define  _FMC_SDCR2_RBURST                                   (0x1 << 12)    // Burst read
#define  _FMC_SDCR2_RPIPE                                    (0x3 << 13)    // Read pipe
#define  _FMC_SDTR1_TMRD                                     (0xf << 0)    // Load Mode Register to Active
#define  _FMC_SDTR1_TXSR                                     (0xf << 4)    // Exit self-refresh delay
#define  _FMC_SDTR1_TRAS                                     (0xf << 8)    // Self refresh time
#define  _FMC_SDTR1_TRC                                      (0xf << 12)    // Row cycle delay
#define  _FMC_SDTR1_TWR                                      (0xf << 16)    // Recovery delay
#define  _FMC_SDTR1_TRP                                      (0xf << 20)    // Row precharge delay
#define  _FMC_SDTR1_TRCD                                     (0xf << 24)    // Row to column delay
#define  _FMC_SDTR2_TMRD                                     (0xf << 0)    // Load Mode Register to Active
#define  _FMC_SDTR2_TXSR                                     (0xf << 4)    // Exit self-refresh delay
#define  _FMC_SDTR2_TRAS                                     (0xf << 8)    // Self refresh time
#define  _FMC_SDTR2_TRC                                      (0xf << 12)    // Row cycle delay
#define  _FMC_SDTR2_TWR                                      (0xf << 16)    // Recovery delay
#define  _FMC_SDTR2_TRP                                      (0xf << 20)    // Row precharge delay
#define  _FMC_SDTR2_TRCD                                     (0xf << 24)    // Row to column delay
#define  _FMC_SDCMR_MODE                                     (0x7 << 0)    // Command mode
#define  _FMC_SDCMR_CTB2                                     (0x1 << 3)    // Command target bank 2
#define  _FMC_SDCMR_CTB1                                     (0x1 << 4)    // Command target bank 1
#define  _FMC_SDCMR_NRFS                                     (0xf << 5)    // Number of Auto-refresh
#define  _FMC_SDCMR_MRD                                      (0x1fff << 9)    // Mode Register definition
#define  _FMC_SDRTR_CRE                                      (0x1 << 0)    // Clear Refresh error flag
#define  _FMC_SDRTR_COUNT                                    (0x1fff << 1)    // Refresh Timer Count
#define  _FMC_SDRTR_REIE                                     (0x1 << 14)    // RES Interrupt Enable
#define  _FMC_SDSR_RE                                        (0x1 << 0)    // Refresh error flag
#define  _FMC_SDSR_MODES1                                    (0x3 << 1)    // Status Mode for Bank 1
#define  _FMC_SDSR_MODES2                                    (0x3 << 3)    // Status Mode for Bank 2
#define  _FMC_SDSR_BUSY                                      (0x1 << 5)    // Busy status

#define Get_PF_CLIDR(FLAG)                   (*(uint32_t*)0xe000ed78 & FLAG)
#define Get_PF_CTR(FLAG)                     (*(uint32_t*)0xe000ed7c & FLAG)
#define Get_PF_CCSIDR(FLAG)                  (*(uint32_t*)0xe000ed80 & FLAG)
#define Set_PF_CLIDR(FLAG)                   (*(uint32_t*)0xe000ed78 |= FLAG)
#define Clr_PF_CLIDR(FLAG)                   (*(uint32_t*)0xe000ed78 &= ~FLAG)
#define Set_PF_CTR(FLAG)                     (*(uint32_t*)0xe000ed7c |= FLAG)
#define Clr_PF_CTR(FLAG)                     (*(uint32_t*)0xe000ed7c &= ~FLAG)
#define Set_PF_CCSIDR(FLAG)                  (*(uint32_t*)0xe000ed80 |= FLAG)
#define Clr_PF_CCSIDR(FLAG)                  (*(uint32_t*)0xe000ed80 &= ~FLAG)
#define  _PF_CLIDR_CL1                                       (0x7 << 0)    // CL1
#define  _PF_CLIDR_CL2                                       (0x7 << 3)    // CL2
#define  _PF_CLIDR_CL3                                       (0x7 << 6)    // CL3
#define  _PF_CLIDR_CL4                                       (0x7 << 9)    // CL4
#define  _PF_CLIDR_CL5                                       (0x7 << 12)    // CL5
#define  _PF_CLIDR_CL6                                       (0x7 << 15)    // CL6
#define  _PF_CLIDR_CL7                                       (0x7 << 18)    // CL7
#define  _PF_CLIDR_LoUIS                                     (0x7 << 21)    // LoUIS
#define  _PF_CLIDR_LoC                                       (0x7 << 24)    // LoC
#define  _PF_CLIDR_LoU                                       (0x7 << 27)    // LoU
#define  _PF_CTR__IminLine                                   (0xf << 0)    // IminLine
#define  _PF_CTR_DMinLine                                    (0xf << 16)    // DMinLine
#define  _PF_CTR_ERG                                         (0xf << 20)    // ERG
#define  _PF_CTR_CWG                                         (0xf << 24)    // CWG
#define  _PF_CTR_Format                                      (0x7 << 29)    // Format
#define  _PF_CCSIDR_LineSize                                 (0x7 << 0)    // LineSize
#define  _PF_CCSIDR_Associativity                            (0x3ff << 3)    // Associativity
#define  _PF_CCSIDR_NumSets                                  (0x7fff << 13)    // NumSets
#define  _PF_CCSIDR_WA                                       (0x1 << 28)    // WA
#define  _PF_CCSIDR_RA                                       (0x1 << 29)    // RA
#define  _PF_CCSIDR_WB                                       (0x1 << 30)    // WB
#define  _PF_CCSIDR_WT                                       (0x1 << 31)    // WT

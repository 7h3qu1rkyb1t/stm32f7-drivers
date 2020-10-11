#define Get_CRYP_CR(FLAG)                    (*(uint32_t*)0x50060000 & FLAG)
#define Get_CRYP_SR(FLAG)                    (*(uint32_t*)0x50060004 & FLAG)
#define Get_CRYP_DIN(FLAG)                   (*(uint32_t*)0x50060008 & FLAG)
#define Get_CRYP_DOUT(FLAG)                  (*(uint32_t*)0x5006000c & FLAG)
#define Get_CRYP_DMACR(FLAG)                 (*(uint32_t*)0x50060010 & FLAG)
#define Get_CRYP_IMSCR(FLAG)                 (*(uint32_t*)0x50060014 & FLAG)
#define Get_CRYP_RISR(FLAG)                  (*(uint32_t*)0x50060018 & FLAG)
#define Get_CRYP_MISR(FLAG)                  (*(uint32_t*)0x5006001c & FLAG)
#define Get_CRYP_K0LR(FLAG)                  (*(uint32_t*)0x50060020 & FLAG)
#define Get_CRYP_K0RR(FLAG)                  (*(uint32_t*)0x50060024 & FLAG)
#define Get_CRYP_K1LR(FLAG)                  (*(uint32_t*)0x50060028 & FLAG)
#define Get_CRYP_K1RR(FLAG)                  (*(uint32_t*)0x5006002c & FLAG)
#define Get_CRYP_K2LR(FLAG)                  (*(uint32_t*)0x50060030 & FLAG)
#define Get_CRYP_K2RR(FLAG)                  (*(uint32_t*)0x50060034 & FLAG)
#define Get_CRYP_K3LR(FLAG)                  (*(uint32_t*)0x50060038 & FLAG)
#define Get_CRYP_K3RR(FLAG)                  (*(uint32_t*)0x5006003c & FLAG)
#define Get_CRYP_IV0LR(FLAG)                 (*(uint32_t*)0x50060040 & FLAG)
#define Get_CRYP_IV0RR(FLAG)                 (*(uint32_t*)0x50060044 & FLAG)
#define Get_CRYP_IV1LR(FLAG)                 (*(uint32_t*)0x50060048 & FLAG)
#define Get_CRYP_IV1RR(FLAG)                 (*(uint32_t*)0x5006004c & FLAG)
#define Get_CRYP_CSGCMCCM0R(FLAG)            (*(uint32_t*)0x50060050 & FLAG)
#define Get_CRYP_CSGCMCCM1R(FLAG)            (*(uint32_t*)0x50060054 & FLAG)
#define Get_CRYP_CSGCMCCM2R(FLAG)            (*(uint32_t*)0x50060058 & FLAG)
#define Get_CRYP_CSGCMCCM3R(FLAG)            (*(uint32_t*)0x5006005c & FLAG)
#define Get_CRYP_CSGCMCCM4R(FLAG)            (*(uint32_t*)0x50060060 & FLAG)
#define Get_CRYP_CSGCMCCM5R(FLAG)            (*(uint32_t*)0x50060064 & FLAG)
#define Get_CRYP_CSGCMCCM6R(FLAG)            (*(uint32_t*)0x50060068 & FLAG)
#define Get_CRYP_CSGCMCCM7R(FLAG)            (*(uint32_t*)0x5006006c & FLAG)
#define Get_CRYP_CSGCM0R(FLAG)               (*(uint32_t*)0x50060070 & FLAG)
#define Get_CRYP_CSGCM1R(FLAG)               (*(uint32_t*)0x50060074 & FLAG)
#define Get_CRYP_CSGCM2R(FLAG)               (*(uint32_t*)0x50060078 & FLAG)
#define Get_CRYP_CSGCM3R(FLAG)               (*(uint32_t*)0x5006007c & FLAG)
#define Get_CRYP_CSGCM4R(FLAG)               (*(uint32_t*)0x50060080 & FLAG)
#define Get_CRYP_CSGCM5R(FLAG)               (*(uint32_t*)0x50060084 & FLAG)
#define Get_CRYP_CSGCM6R(FLAG)               (*(uint32_t*)0x50060088 & FLAG)
#define Get_CRYP_CSGCM7R(FLAG)               (*(uint32_t*)0x5006008c & FLAG)
#define Set_CRYP_CR(FLAG)                    (*(uint32_t*)0x50060000 |= FLAG)
#define Clr_CRYP_CR(FLAG)                    (*(uint32_t*)0x50060000 &= ~FLAG)
#define Set_CRYP_SR(FLAG)                    (*(uint32_t*)0x50060004 |= FLAG)
#define Clr_CRYP_SR(FLAG)                    (*(uint32_t*)0x50060004 &= ~FLAG)
#define Set_CRYP_DIN(FLAG)                   (*(uint32_t*)0x50060008 |= FLAG)
#define Clr_CRYP_DIN(FLAG)                   (*(uint32_t*)0x50060008 &= ~FLAG)
#define Set_CRYP_DOUT(FLAG)                  (*(uint32_t*)0x5006000c |= FLAG)
#define Clr_CRYP_DOUT(FLAG)                  (*(uint32_t*)0x5006000c &= ~FLAG)
#define Set_CRYP_DMACR(FLAG)                 (*(uint32_t*)0x50060010 |= FLAG)
#define Clr_CRYP_DMACR(FLAG)                 (*(uint32_t*)0x50060010 &= ~FLAG)
#define Set_CRYP_IMSCR(FLAG)                 (*(uint32_t*)0x50060014 |= FLAG)
#define Clr_CRYP_IMSCR(FLAG)                 (*(uint32_t*)0x50060014 &= ~FLAG)
#define Set_CRYP_RISR(FLAG)                  (*(uint32_t*)0x50060018 |= FLAG)
#define Clr_CRYP_RISR(FLAG)                  (*(uint32_t*)0x50060018 &= ~FLAG)
#define Set_CRYP_MISR(FLAG)                  (*(uint32_t*)0x5006001c |= FLAG)
#define Clr_CRYP_MISR(FLAG)                  (*(uint32_t*)0x5006001c &= ~FLAG)
#define Set_CRYP_K0LR(FLAG)                  (*(uint32_t*)0x50060020 |= FLAG)
#define Clr_CRYP_K0LR(FLAG)                  (*(uint32_t*)0x50060020 &= ~FLAG)
#define Set_CRYP_K0RR(FLAG)                  (*(uint32_t*)0x50060024 |= FLAG)
#define Clr_CRYP_K0RR(FLAG)                  (*(uint32_t*)0x50060024 &= ~FLAG)
#define Set_CRYP_K1LR(FLAG)                  (*(uint32_t*)0x50060028 |= FLAG)
#define Clr_CRYP_K1LR(FLAG)                  (*(uint32_t*)0x50060028 &= ~FLAG)
#define Set_CRYP_K1RR(FLAG)                  (*(uint32_t*)0x5006002c |= FLAG)
#define Clr_CRYP_K1RR(FLAG)                  (*(uint32_t*)0x5006002c &= ~FLAG)
#define Set_CRYP_K2LR(FLAG)                  (*(uint32_t*)0x50060030 |= FLAG)
#define Clr_CRYP_K2LR(FLAG)                  (*(uint32_t*)0x50060030 &= ~FLAG)
#define Set_CRYP_K2RR(FLAG)                  (*(uint32_t*)0x50060034 |= FLAG)
#define Clr_CRYP_K2RR(FLAG)                  (*(uint32_t*)0x50060034 &= ~FLAG)
#define Set_CRYP_K3LR(FLAG)                  (*(uint32_t*)0x50060038 |= FLAG)
#define Clr_CRYP_K3LR(FLAG)                  (*(uint32_t*)0x50060038 &= ~FLAG)
#define Set_CRYP_K3RR(FLAG)                  (*(uint32_t*)0x5006003c |= FLAG)
#define Clr_CRYP_K3RR(FLAG)                  (*(uint32_t*)0x5006003c &= ~FLAG)
#define Set_CRYP_IV0LR(FLAG)                 (*(uint32_t*)0x50060040 |= FLAG)
#define Clr_CRYP_IV0LR(FLAG)                 (*(uint32_t*)0x50060040 &= ~FLAG)
#define Set_CRYP_IV0RR(FLAG)                 (*(uint32_t*)0x50060044 |= FLAG)
#define Clr_CRYP_IV0RR(FLAG)                 (*(uint32_t*)0x50060044 &= ~FLAG)
#define Set_CRYP_IV1LR(FLAG)                 (*(uint32_t*)0x50060048 |= FLAG)
#define Clr_CRYP_IV1LR(FLAG)                 (*(uint32_t*)0x50060048 &= ~FLAG)
#define Set_CRYP_IV1RR(FLAG)                 (*(uint32_t*)0x5006004c |= FLAG)
#define Clr_CRYP_IV1RR(FLAG)                 (*(uint32_t*)0x5006004c &= ~FLAG)
#define Set_CRYP_CSGCMCCM0R(FLAG)            (*(uint32_t*)0x50060050 |= FLAG)
#define Clr_CRYP_CSGCMCCM0R(FLAG)            (*(uint32_t*)0x50060050 &= ~FLAG)
#define Set_CRYP_CSGCMCCM1R(FLAG)            (*(uint32_t*)0x50060054 |= FLAG)
#define Clr_CRYP_CSGCMCCM1R(FLAG)            (*(uint32_t*)0x50060054 &= ~FLAG)
#define Set_CRYP_CSGCMCCM2R(FLAG)            (*(uint32_t*)0x50060058 |= FLAG)
#define Clr_CRYP_CSGCMCCM2R(FLAG)            (*(uint32_t*)0x50060058 &= ~FLAG)
#define Set_CRYP_CSGCMCCM3R(FLAG)            (*(uint32_t*)0x5006005c |= FLAG)
#define Clr_CRYP_CSGCMCCM3R(FLAG)            (*(uint32_t*)0x5006005c &= ~FLAG)
#define Set_CRYP_CSGCMCCM4R(FLAG)            (*(uint32_t*)0x50060060 |= FLAG)
#define Clr_CRYP_CSGCMCCM4R(FLAG)            (*(uint32_t*)0x50060060 &= ~FLAG)
#define Set_CRYP_CSGCMCCM5R(FLAG)            (*(uint32_t*)0x50060064 |= FLAG)
#define Clr_CRYP_CSGCMCCM5R(FLAG)            (*(uint32_t*)0x50060064 &= ~FLAG)
#define Set_CRYP_CSGCMCCM6R(FLAG)            (*(uint32_t*)0x50060068 |= FLAG)
#define Clr_CRYP_CSGCMCCM6R(FLAG)            (*(uint32_t*)0x50060068 &= ~FLAG)
#define Set_CRYP_CSGCMCCM7R(FLAG)            (*(uint32_t*)0x5006006c |= FLAG)
#define Clr_CRYP_CSGCMCCM7R(FLAG)            (*(uint32_t*)0x5006006c &= ~FLAG)
#define Set_CRYP_CSGCM0R(FLAG)               (*(uint32_t*)0x50060070 |= FLAG)
#define Clr_CRYP_CSGCM0R(FLAG)               (*(uint32_t*)0x50060070 &= ~FLAG)
#define Set_CRYP_CSGCM1R(FLAG)               (*(uint32_t*)0x50060074 |= FLAG)
#define Clr_CRYP_CSGCM1R(FLAG)               (*(uint32_t*)0x50060074 &= ~FLAG)
#define Set_CRYP_CSGCM2R(FLAG)               (*(uint32_t*)0x50060078 |= FLAG)
#define Clr_CRYP_CSGCM2R(FLAG)               (*(uint32_t*)0x50060078 &= ~FLAG)
#define Set_CRYP_CSGCM3R(FLAG)               (*(uint32_t*)0x5006007c |= FLAG)
#define Clr_CRYP_CSGCM3R(FLAG)               (*(uint32_t*)0x5006007c &= ~FLAG)
#define Set_CRYP_CSGCM4R(FLAG)               (*(uint32_t*)0x50060080 |= FLAG)
#define Clr_CRYP_CSGCM4R(FLAG)               (*(uint32_t*)0x50060080 &= ~FLAG)
#define Set_CRYP_CSGCM5R(FLAG)               (*(uint32_t*)0x50060084 |= FLAG)
#define Clr_CRYP_CSGCM5R(FLAG)               (*(uint32_t*)0x50060084 &= ~FLAG)
#define Set_CRYP_CSGCM6R(FLAG)               (*(uint32_t*)0x50060088 |= FLAG)
#define Clr_CRYP_CSGCM6R(FLAG)               (*(uint32_t*)0x50060088 &= ~FLAG)
#define Set_CRYP_CSGCM7R(FLAG)               (*(uint32_t*)0x5006008c |= FLAG)
#define Clr_CRYP_CSGCM7R(FLAG)               (*(uint32_t*)0x5006008c &= ~FLAG)
#define  _CRYP_CR_ALGODIR                                    (0x1 << 2)    // Algorithm direction
#define  _CRYP_CR_ALGOMODE0                                  (0x7 << 3)    // Algorithm mode
#define  _CRYP_CR_DATATYPE                                   (0x3 << 6)    // Data type selection
#define  _CRYP_CR_KEYSIZE                                    (0x3 << 8)    // Key size selection (AES mode only)
#define  _CRYP_CR_FFLUSH                                     (0x1 << 14)    // FIFO flush
#define  _CRYP_CR_CRYPEN                                     (0x1 << 15)    // Cryptographic processor enable
#define  _CRYP_CR_GCM_CCMPH                                  (0x3 << 16)    // GCM_CCMPH
#define  _CRYP_CR_ALGOMODE3                                  (0x1 << 19)    // ALGOMODE
#define  _CRYP_SR_BUSY                                       (0x1 << 4)    // Busy bit
#define  _CRYP_SR_OFFU                                       (0x1 << 3)    // Output FIFO full
#define  _CRYP_SR_OFNE                                       (0x1 << 2)    // Output FIFO not empty
#define  _CRYP_SR_IFNF                                       (0x1 << 1)    // Input FIFO not full
#define  _CRYP_SR_IFEM                                       (0x1 << 0)    // Input FIFO empty
#define  _CRYP_DIN_DATAIN                                    (0xffffffff << 0)    // Data input
#define  _CRYP_DOUT_DATAOUT                                  (0xffffffff << 0)    // Data output
#define  _CRYP_DMACR_DOEN                                    (0x1 << 1)    // DMA output enable
#define  _CRYP_DMACR_DIEN                                    (0x1 << 0)    // DMA input enable
#define  _CRYP_IMSCR_OUTIM                                   (0x1 << 1)    // Output FIFO service interrupt mask
#define  _CRYP_IMSCR_INIM                                    (0x1 << 0)    // Input FIFO service interrupt mask
#define  _CRYP_RISR_OUTRIS                                   (0x1 << 1)    // Output FIFO service raw interrupt status
#define  _CRYP_RISR_INRIS                                    (0x1 << 0)    // Input FIFO service raw interrupt status
#define  _CRYP_MISR_OUTMIS                                   (0x1 << 1)    // Output FIFO service masked interrupt status
#define  _CRYP_MISR_INMIS                                    (0x1 << 0)    // Input FIFO service masked interrupt status
#define  _CRYP_K0LR_b224                                     (0x1 << 0)    // b224
#define  _CRYP_K0LR_b225                                     (0x1 << 1)    // b225
#define  _CRYP_K0LR_b226                                     (0x1 << 2)    // b226
#define  _CRYP_K0LR_b227                                     (0x1 << 3)    // b227
#define  _CRYP_K0LR_b228                                     (0x1 << 4)    // b228
#define  _CRYP_K0LR_b229                                     (0x1 << 5)    // b229
#define  _CRYP_K0LR_b230                                     (0x1 << 6)    // b230
#define  _CRYP_K0LR_b231                                     (0x1 << 7)    // b231
#define  _CRYP_K0LR_b232                                     (0x1 << 8)    // b232
#define  _CRYP_K0LR_b233                                     (0x1 << 9)    // b233
#define  _CRYP_K0LR_b234                                     (0x1 << 10)    // b234
#define  _CRYP_K0LR_b235                                     (0x1 << 11)    // b235
#define  _CRYP_K0LR_b236                                     (0x1 << 12)    // b236
#define  _CRYP_K0LR_b237                                     (0x1 << 13)    // b237
#define  _CRYP_K0LR_b238                                     (0x1 << 14)    // b238
#define  _CRYP_K0LR_b239                                     (0x1 << 15)    // b239
#define  _CRYP_K0LR_b240                                     (0x1 << 16)    // b240
#define  _CRYP_K0LR_b241                                     (0x1 << 17)    // b241
#define  _CRYP_K0LR_b242                                     (0x1 << 18)    // b242
#define  _CRYP_K0LR_b243                                     (0x1 << 19)    // b243
#define  _CRYP_K0LR_b244                                     (0x1 << 20)    // b244
#define  _CRYP_K0LR_b245                                     (0x1 << 21)    // b245
#define  _CRYP_K0LR_b246                                     (0x1 << 22)    // b246
#define  _CRYP_K0LR_b247                                     (0x1 << 23)    // b247
#define  _CRYP_K0LR_b248                                     (0x1 << 24)    // b248
#define  _CRYP_K0LR_b249                                     (0x1 << 25)    // b249
#define  _CRYP_K0LR_b250                                     (0x1 << 26)    // b250
#define  _CRYP_K0LR_b251                                     (0x1 << 27)    // b251
#define  _CRYP_K0LR_b252                                     (0x1 << 28)    // b252
#define  _CRYP_K0LR_b253                                     (0x1 << 29)    // b253
#define  _CRYP_K0LR_b254                                     (0x1 << 30)    // b254
#define  _CRYP_K0LR_b255                                     (0x1 << 31)    // b255
#define  _CRYP_K0RR_b192                                     (0x1 << 0)    // b192
#define  _CRYP_K0RR_b193                                     (0x1 << 1)    // b193
#define  _CRYP_K0RR_b194                                     (0x1 << 2)    // b194
#define  _CRYP_K0RR_b195                                     (0x1 << 3)    // b195
#define  _CRYP_K0RR_b196                                     (0x1 << 4)    // b196
#define  _CRYP_K0RR_b197                                     (0x1 << 5)    // b197
#define  _CRYP_K0RR_b198                                     (0x1 << 6)    // b198
#define  _CRYP_K0RR_b199                                     (0x1 << 7)    // b199
#define  _CRYP_K0RR_b200                                     (0x1 << 8)    // b200
#define  _CRYP_K0RR_b201                                     (0x1 << 9)    // b201
#define  _CRYP_K0RR_b202                                     (0x1 << 10)    // b202
#define  _CRYP_K0RR_b203                                     (0x1 << 11)    // b203
#define  _CRYP_K0RR_b204                                     (0x1 << 12)    // b204
#define  _CRYP_K0RR_b205                                     (0x1 << 13)    // b205
#define  _CRYP_K0RR_b206                                     (0x1 << 14)    // b206
#define  _CRYP_K0RR_b207                                     (0x1 << 15)    // b207
#define  _CRYP_K0RR_b208                                     (0x1 << 16)    // b208
#define  _CRYP_K0RR_b209                                     (0x1 << 17)    // b209
#define  _CRYP_K0RR_b210                                     (0x1 << 18)    // b210
#define  _CRYP_K0RR_b211                                     (0x1 << 19)    // b211
#define  _CRYP_K0RR_b212                                     (0x1 << 20)    // b212
#define  _CRYP_K0RR_b213                                     (0x1 << 21)    // b213
#define  _CRYP_K0RR_b214                                     (0x1 << 22)    // b214
#define  _CRYP_K0RR_b215                                     (0x1 << 23)    // b215
#define  _CRYP_K0RR_b216                                     (0x1 << 24)    // b216
#define  _CRYP_K0RR_b217                                     (0x1 << 25)    // b217
#define  _CRYP_K0RR_b218                                     (0x1 << 26)    // b218
#define  _CRYP_K0RR_b219                                     (0x1 << 27)    // b219
#define  _CRYP_K0RR_b220                                     (0x1 << 28)    // b220
#define  _CRYP_K0RR_b221                                     (0x1 << 29)    // b221
#define  _CRYP_K0RR_b222                                     (0x1 << 30)    // b222
#define  _CRYP_K0RR_b223                                     (0x1 << 31)    // b223
#define  _CRYP_K1LR_b160                                     (0x1 << 0)    // b160
#define  _CRYP_K1LR_b161                                     (0x1 << 1)    // b161
#define  _CRYP_K1LR_b162                                     (0x1 << 2)    // b162
#define  _CRYP_K1LR_b163                                     (0x1 << 3)    // b163
#define  _CRYP_K1LR_b164                                     (0x1 << 4)    // b164
#define  _CRYP_K1LR_b165                                     (0x1 << 5)    // b165
#define  _CRYP_K1LR_b166                                     (0x1 << 6)    // b166
#define  _CRYP_K1LR_b167                                     (0x1 << 7)    // b167
#define  _CRYP_K1LR_b168                                     (0x1 << 8)    // b168
#define  _CRYP_K1LR_b169                                     (0x1 << 9)    // b169
#define  _CRYP_K1LR_b170                                     (0x1 << 10)    // b170
#define  _CRYP_K1LR_b171                                     (0x1 << 11)    // b171
#define  _CRYP_K1LR_b172                                     (0x1 << 12)    // b172
#define  _CRYP_K1LR_b173                                     (0x1 << 13)    // b173
#define  _CRYP_K1LR_b174                                     (0x1 << 14)    // b174
#define  _CRYP_K1LR_b175                                     (0x1 << 15)    // b175
#define  _CRYP_K1LR_b176                                     (0x1 << 16)    // b176
#define  _CRYP_K1LR_b177                                     (0x1 << 17)    // b177
#define  _CRYP_K1LR_b178                                     (0x1 << 18)    // b178
#define  _CRYP_K1LR_b179                                     (0x1 << 19)    // b179
#define  _CRYP_K1LR_b180                                     (0x1 << 20)    // b180
#define  _CRYP_K1LR_b181                                     (0x1 << 21)    // b181
#define  _CRYP_K1LR_b182                                     (0x1 << 22)    // b182
#define  _CRYP_K1LR_b183                                     (0x1 << 23)    // b183
#define  _CRYP_K1LR_b184                                     (0x1 << 24)    // b184
#define  _CRYP_K1LR_b185                                     (0x1 << 25)    // b185
#define  _CRYP_K1LR_b186                                     (0x1 << 26)    // b186
#define  _CRYP_K1LR_b187                                     (0x1 << 27)    // b187
#define  _CRYP_K1LR_b188                                     (0x1 << 28)    // b188
#define  _CRYP_K1LR_b189                                     (0x1 << 29)    // b189
#define  _CRYP_K1LR_b190                                     (0x1 << 30)    // b190
#define  _CRYP_K1LR_b191                                     (0x1 << 31)    // b191
#define  _CRYP_K1RR_b128                                     (0x1 << 0)    // b128
#define  _CRYP_K1RR_b129                                     (0x1 << 1)    // b129
#define  _CRYP_K1RR_b130                                     (0x1 << 2)    // b130
#define  _CRYP_K1RR_b131                                     (0x1 << 3)    // b131
#define  _CRYP_K1RR_b132                                     (0x1 << 4)    // b132
#define  _CRYP_K1RR_b133                                     (0x1 << 5)    // b133
#define  _CRYP_K1RR_b134                                     (0x1 << 6)    // b134
#define  _CRYP_K1RR_b135                                     (0x1 << 7)    // b135
#define  _CRYP_K1RR_b136                                     (0x1 << 8)    // b136
#define  _CRYP_K1RR_b137                                     (0x1 << 9)    // b137
#define  _CRYP_K1RR_b138                                     (0x1 << 10)    // b138
#define  _CRYP_K1RR_b139                                     (0x1 << 11)    // b139
#define  _CRYP_K1RR_b140                                     (0x1 << 12)    // b140
#define  _CRYP_K1RR_b141                                     (0x1 << 13)    // b141
#define  _CRYP_K1RR_b142                                     (0x1 << 14)    // b142
#define  _CRYP_K1RR_b143                                     (0x1 << 15)    // b143
#define  _CRYP_K1RR_b144                                     (0x1 << 16)    // b144
#define  _CRYP_K1RR_b145                                     (0x1 << 17)    // b145
#define  _CRYP_K1RR_b146                                     (0x1 << 18)    // b146
#define  _CRYP_K1RR_b147                                     (0x1 << 19)    // b147
#define  _CRYP_K1RR_b148                                     (0x1 << 20)    // b148
#define  _CRYP_K1RR_b149                                     (0x1 << 21)    // b149
#define  _CRYP_K1RR_b150                                     (0x1 << 22)    // b150
#define  _CRYP_K1RR_b151                                     (0x1 << 23)    // b151
#define  _CRYP_K1RR_b152                                     (0x1 << 24)    // b152
#define  _CRYP_K1RR_b153                                     (0x1 << 25)    // b153
#define  _CRYP_K1RR_b154                                     (0x1 << 26)    // b154
#define  _CRYP_K1RR_b155                                     (0x1 << 27)    // b155
#define  _CRYP_K1RR_b156                                     (0x1 << 28)    // b156
#define  _CRYP_K1RR_b157                                     (0x1 << 29)    // b157
#define  _CRYP_K1RR_b158                                     (0x1 << 30)    // b158
#define  _CRYP_K1RR_b159                                     (0x1 << 31)    // b159
#define  _CRYP_K2LR_b96                                      (0x1 << 0)    // b96
#define  _CRYP_K2LR_b97                                      (0x1 << 1)    // b97
#define  _CRYP_K2LR_b98                                      (0x1 << 2)    // b98
#define  _CRYP_K2LR_b99                                      (0x1 << 3)    // b99
#define  _CRYP_K2LR_b100                                     (0x1 << 4)    // b100
#define  _CRYP_K2LR_b101                                     (0x1 << 5)    // b101
#define  _CRYP_K2LR_b102                                     (0x1 << 6)    // b102
#define  _CRYP_K2LR_b103                                     (0x1 << 7)    // b103
#define  _CRYP_K2LR_b104                                     (0x1 << 8)    // b104
#define  _CRYP_K2LR_b105                                     (0x1 << 9)    // b105
#define  _CRYP_K2LR_b106                                     (0x1 << 10)    // b106
#define  _CRYP_K2LR_b107                                     (0x1 << 11)    // b107
#define  _CRYP_K2LR_b108                                     (0x1 << 12)    // b108
#define  _CRYP_K2LR_b109                                     (0x1 << 13)    // b109
#define  _CRYP_K2LR_b110                                     (0x1 << 14)    // b110
#define  _CRYP_K2LR_b111                                     (0x1 << 15)    // b111
#define  _CRYP_K2LR_b112                                     (0x1 << 16)    // b112
#define  _CRYP_K2LR_b113                                     (0x1 << 17)    // b113
#define  _CRYP_K2LR_b114                                     (0x1 << 18)    // b114
#define  _CRYP_K2LR_b115                                     (0x1 << 19)    // b115
#define  _CRYP_K2LR_b116                                     (0x1 << 20)    // b116
#define  _CRYP_K2LR_b117                                     (0x1 << 21)    // b117
#define  _CRYP_K2LR_b118                                     (0x1 << 22)    // b118
#define  _CRYP_K2LR_b119                                     (0x1 << 23)    // b119
#define  _CRYP_K2LR_b120                                     (0x1 << 24)    // b120
#define  _CRYP_K2LR_b121                                     (0x1 << 25)    // b121
#define  _CRYP_K2LR_b122                                     (0x1 << 26)    // b122
#define  _CRYP_K2LR_b123                                     (0x1 << 27)    // b123
#define  _CRYP_K2LR_b124                                     (0x1 << 28)    // b124
#define  _CRYP_K2LR_b125                                     (0x1 << 29)    // b125
#define  _CRYP_K2LR_b126                                     (0x1 << 30)    // b126
#define  _CRYP_K2LR_b127                                     (0x1 << 31)    // b127
#define  _CRYP_K2RR_b64                                      (0x1 << 0)    // b64
#define  _CRYP_K2RR_b65                                      (0x1 << 1)    // b65
#define  _CRYP_K2RR_b66                                      (0x1 << 2)    // b66
#define  _CRYP_K2RR_b67                                      (0x1 << 3)    // b67
#define  _CRYP_K2RR_b68                                      (0x1 << 4)    // b68
#define  _CRYP_K2RR_b69                                      (0x1 << 5)    // b69
#define  _CRYP_K2RR_b70                                      (0x1 << 6)    // b70
#define  _CRYP_K2RR_b71                                      (0x1 << 7)    // b71
#define  _CRYP_K2RR_b72                                      (0x1 << 8)    // b72
#define  _CRYP_K2RR_b73                                      (0x1 << 9)    // b73
#define  _CRYP_K2RR_b74                                      (0x1 << 10)    // b74
#define  _CRYP_K2RR_b75                                      (0x1 << 11)    // b75
#define  _CRYP_K2RR_b76                                      (0x1 << 12)    // b76
#define  _CRYP_K2RR_b77                                      (0x1 << 13)    // b77
#define  _CRYP_K2RR_b78                                      (0x1 << 14)    // b78
#define  _CRYP_K2RR_b79                                      (0x1 << 15)    // b79
#define  _CRYP_K2RR_b80                                      (0x1 << 16)    // b80
#define  _CRYP_K2RR_b81                                      (0x1 << 17)    // b81
#define  _CRYP_K2RR_b82                                      (0x1 << 18)    // b82
#define  _CRYP_K2RR_b83                                      (0x1 << 19)    // b83
#define  _CRYP_K2RR_b84                                      (0x1 << 20)    // b84
#define  _CRYP_K2RR_b85                                      (0x1 << 21)    // b85
#define  _CRYP_K2RR_b86                                      (0x1 << 22)    // b86
#define  _CRYP_K2RR_b87                                      (0x1 << 23)    // b87
#define  _CRYP_K2RR_b88                                      (0x1 << 24)    // b88
#define  _CRYP_K2RR_b89                                      (0x1 << 25)    // b89
#define  _CRYP_K2RR_b90                                      (0x1 << 26)    // b90
#define  _CRYP_K2RR_b91                                      (0x1 << 27)    // b91
#define  _CRYP_K2RR_b92                                      (0x1 << 28)    // b92
#define  _CRYP_K2RR_b93                                      (0x1 << 29)    // b93
#define  _CRYP_K2RR_b94                                      (0x1 << 30)    // b94
#define  _CRYP_K2RR_b95                                      (0x1 << 31)    // b95
#define  _CRYP_K3LR_b32                                      (0x1 << 0)    // b32
#define  _CRYP_K3LR_b33                                      (0x1 << 1)    // b33
#define  _CRYP_K3LR_b34                                      (0x1 << 2)    // b34
#define  _CRYP_K3LR_b35                                      (0x1 << 3)    // b35
#define  _CRYP_K3LR_b36                                      (0x1 << 4)    // b36
#define  _CRYP_K3LR_b37                                      (0x1 << 5)    // b37
#define  _CRYP_K3LR_b38                                      (0x1 << 6)    // b38
#define  _CRYP_K3LR_b39                                      (0x1 << 7)    // b39
#define  _CRYP_K3LR_b40                                      (0x1 << 8)    // b40
#define  _CRYP_K3LR_b41                                      (0x1 << 9)    // b41
#define  _CRYP_K3LR_b42                                      (0x1 << 10)    // b42
#define  _CRYP_K3LR_b43                                      (0x1 << 11)    // b43
#define  _CRYP_K3LR_b44                                      (0x1 << 12)    // b44
#define  _CRYP_K3LR_b45                                      (0x1 << 13)    // b45
#define  _CRYP_K3LR_b46                                      (0x1 << 14)    // b46
#define  _CRYP_K3LR_b47                                      (0x1 << 15)    // b47
#define  _CRYP_K3LR_b48                                      (0x1 << 16)    // b48
#define  _CRYP_K3LR_b49                                      (0x1 << 17)    // b49
#define  _CRYP_K3LR_b50                                      (0x1 << 18)    // b50
#define  _CRYP_K3LR_b51                                      (0x1 << 19)    // b51
#define  _CRYP_K3LR_b52                                      (0x1 << 20)    // b52
#define  _CRYP_K3LR_b53                                      (0x1 << 21)    // b53
#define  _CRYP_K3LR_b54                                      (0x1 << 22)    // b54
#define  _CRYP_K3LR_b55                                      (0x1 << 23)    // b55
#define  _CRYP_K3LR_b56                                      (0x1 << 24)    // b56
#define  _CRYP_K3LR_b57                                      (0x1 << 25)    // b57
#define  _CRYP_K3LR_b58                                      (0x1 << 26)    // b58
#define  _CRYP_K3LR_b59                                      (0x1 << 27)    // b59
#define  _CRYP_K3LR_b60                                      (0x1 << 28)    // b60
#define  _CRYP_K3LR_b61                                      (0x1 << 29)    // b61
#define  _CRYP_K3LR_b62                                      (0x1 << 30)    // b62
#define  _CRYP_K3LR_b63                                      (0x1 << 31)    // b63
#define  _CRYP_K3RR_b0                                       (0x1 << 0)    // b0
#define  _CRYP_K3RR_b1                                       (0x1 << 1)    // b1
#define  _CRYP_K3RR_b2                                       (0x1 << 2)    // b2
#define  _CRYP_K3RR_b3                                       (0x1 << 3)    // b3
#define  _CRYP_K3RR_b4                                       (0x1 << 4)    // b4
#define  _CRYP_K3RR_b5                                       (0x1 << 5)    // b5
#define  _CRYP_K3RR_b6                                       (0x1 << 6)    // b6
#define  _CRYP_K3RR_b7                                       (0x1 << 7)    // b7
#define  _CRYP_K3RR_b8                                       (0x1 << 8)    // b8
#define  _CRYP_K3RR_b9                                       (0x1 << 9)    // b9
#define  _CRYP_K3RR_b10                                      (0x1 << 10)    // b10
#define  _CRYP_K3RR_b11                                      (0x1 << 11)    // b11
#define  _CRYP_K3RR_b12                                      (0x1 << 12)    // b12
#define  _CRYP_K3RR_b13                                      (0x1 << 13)    // b13
#define  _CRYP_K3RR_b14                                      (0x1 << 14)    // b14
#define  _CRYP_K3RR_b15                                      (0x1 << 15)    // b15
#define  _CRYP_K3RR_b16                                      (0x1 << 16)    // b16
#define  _CRYP_K3RR_b17                                      (0x1 << 17)    // b17
#define  _CRYP_K3RR_b18                                      (0x1 << 18)    // b18
#define  _CRYP_K3RR_b19                                      (0x1 << 19)    // b19
#define  _CRYP_K3RR_b20                                      (0x1 << 20)    // b20
#define  _CRYP_K3RR_b21                                      (0x1 << 21)    // b21
#define  _CRYP_K3RR_b22                                      (0x1 << 22)    // b22
#define  _CRYP_K3RR_b23                                      (0x1 << 23)    // b23
#define  _CRYP_K3RR_b24                                      (0x1 << 24)    // b24
#define  _CRYP_K3RR_b25                                      (0x1 << 25)    // b25
#define  _CRYP_K3RR_b26                                      (0x1 << 26)    // b26
#define  _CRYP_K3RR_b27                                      (0x1 << 27)    // b27
#define  _CRYP_K3RR_b28                                      (0x1 << 28)    // b28
#define  _CRYP_K3RR_b29                                      (0x1 << 29)    // b29
#define  _CRYP_K3RR_b30                                      (0x1 << 30)    // b30
#define  _CRYP_K3RR_b31                                      (0x1 << 31)    // b31
#define  _CRYP_IV0LR_IV31                                    (0x1 << 0)    // IV31
#define  _CRYP_IV0LR_IV30                                    (0x1 << 1)    // IV30
#define  _CRYP_IV0LR_IV29                                    (0x1 << 2)    // IV29
#define  _CRYP_IV0LR_IV28                                    (0x1 << 3)    // IV28
#define  _CRYP_IV0LR_IV27                                    (0x1 << 4)    // IV27
#define  _CRYP_IV0LR_IV26                                    (0x1 << 5)    // IV26
#define  _CRYP_IV0LR_IV25                                    (0x1 << 6)    // IV25
#define  _CRYP_IV0LR_IV24                                    (0x1 << 7)    // IV24
#define  _CRYP_IV0LR_IV23                                    (0x1 << 8)    // IV23
#define  _CRYP_IV0LR_IV22                                    (0x1 << 9)    // IV22
#define  _CRYP_IV0LR_IV21                                    (0x1 << 10)    // IV21
#define  _CRYP_IV0LR_IV20                                    (0x1 << 11)    // IV20
#define  _CRYP_IV0LR_IV19                                    (0x1 << 12)    // IV19
#define  _CRYP_IV0LR_IV18                                    (0x1 << 13)    // IV18
#define  _CRYP_IV0LR_IV17                                    (0x1 << 14)    // IV17
#define  _CRYP_IV0LR_IV16                                    (0x1 << 15)    // IV16
#define  _CRYP_IV0LR_IV15                                    (0x1 << 16)    // IV15
#define  _CRYP_IV0LR_IV14                                    (0x1 << 17)    // IV14
#define  _CRYP_IV0LR_IV13                                    (0x1 << 18)    // IV13
#define  _CRYP_IV0LR_IV12                                    (0x1 << 19)    // IV12
#define  _CRYP_IV0LR_IV11                                    (0x1 << 20)    // IV11
#define  _CRYP_IV0LR_IV10                                    (0x1 << 21)    // IV10
#define  _CRYP_IV0LR_IV9                                     (0x1 << 22)    // IV9
#define  _CRYP_IV0LR_IV8                                     (0x1 << 23)    // IV8
#define  _CRYP_IV0LR_IV7                                     (0x1 << 24)    // IV7
#define  _CRYP_IV0LR_IV6                                     (0x1 << 25)    // IV6
#define  _CRYP_IV0LR_IV5                                     (0x1 << 26)    // IV5
#define  _CRYP_IV0LR_IV4                                     (0x1 << 27)    // IV4
#define  _CRYP_IV0LR_IV3                                     (0x1 << 28)    // IV3
#define  _CRYP_IV0LR_IV2                                     (0x1 << 29)    // IV2
#define  _CRYP_IV0LR_IV1                                     (0x1 << 30)    // IV1
#define  _CRYP_IV0LR_IV0                                     (0x1 << 31)    // IV0
#define  _CRYP_IV0RR_IV63                                    (0x1 << 0)    // IV63
#define  _CRYP_IV0RR_IV62                                    (0x1 << 1)    // IV62
#define  _CRYP_IV0RR_IV61                                    (0x1 << 2)    // IV61
#define  _CRYP_IV0RR_IV60                                    (0x1 << 3)    // IV60
#define  _CRYP_IV0RR_IV59                                    (0x1 << 4)    // IV59
#define  _CRYP_IV0RR_IV58                                    (0x1 << 5)    // IV58
#define  _CRYP_IV0RR_IV57                                    (0x1 << 6)    // IV57
#define  _CRYP_IV0RR_IV56                                    (0x1 << 7)    // IV56
#define  _CRYP_IV0RR_IV55                                    (0x1 << 8)    // IV55
#define  _CRYP_IV0RR_IV54                                    (0x1 << 9)    // IV54
#define  _CRYP_IV0RR_IV53                                    (0x1 << 10)    // IV53
#define  _CRYP_IV0RR_IV52                                    (0x1 << 11)    // IV52
#define  _CRYP_IV0RR_IV51                                    (0x1 << 12)    // IV51
#define  _CRYP_IV0RR_IV50                                    (0x1 << 13)    // IV50
#define  _CRYP_IV0RR_IV49                                    (0x1 << 14)    // IV49
#define  _CRYP_IV0RR_IV48                                    (0x1 << 15)    // IV48
#define  _CRYP_IV0RR_IV47                                    (0x1 << 16)    // IV47
#define  _CRYP_IV0RR_IV46                                    (0x1 << 17)    // IV46
#define  _CRYP_IV0RR_IV45                                    (0x1 << 18)    // IV45
#define  _CRYP_IV0RR_IV44                                    (0x1 << 19)    // IV44
#define  _CRYP_IV0RR_IV43                                    (0x1 << 20)    // IV43
#define  _CRYP_IV0RR_IV42                                    (0x1 << 21)    // IV42
#define  _CRYP_IV0RR_IV41                                    (0x1 << 22)    // IV41
#define  _CRYP_IV0RR_IV40                                    (0x1 << 23)    // IV40
#define  _CRYP_IV0RR_IV39                                    (0x1 << 24)    // IV39
#define  _CRYP_IV0RR_IV38                                    (0x1 << 25)    // IV38
#define  _CRYP_IV0RR_IV37                                    (0x1 << 26)    // IV37
#define  _CRYP_IV0RR_IV36                                    (0x1 << 27)    // IV36
#define  _CRYP_IV0RR_IV35                                    (0x1 << 28)    // IV35
#define  _CRYP_IV0RR_IV34                                    (0x1 << 29)    // IV34
#define  _CRYP_IV0RR_IV33                                    (0x1 << 30)    // IV33
#define  _CRYP_IV0RR_IV32                                    (0x1 << 31)    // IV32
#define  _CRYP_IV1LR_IV95                                    (0x1 << 0)    // IV95
#define  _CRYP_IV1LR_IV94                                    (0x1 << 1)    // IV94
#define  _CRYP_IV1LR_IV93                                    (0x1 << 2)    // IV93
#define  _CRYP_IV1LR_IV92                                    (0x1 << 3)    // IV92
#define  _CRYP_IV1LR_IV91                                    (0x1 << 4)    // IV91
#define  _CRYP_IV1LR_IV90                                    (0x1 << 5)    // IV90
#define  _CRYP_IV1LR_IV89                                    (0x1 << 6)    // IV89
#define  _CRYP_IV1LR_IV88                                    (0x1 << 7)    // IV88
#define  _CRYP_IV1LR_IV87                                    (0x1 << 8)    // IV87
#define  _CRYP_IV1LR_IV86                                    (0x1 << 9)    // IV86
#define  _CRYP_IV1LR_IV85                                    (0x1 << 10)    // IV85
#define  _CRYP_IV1LR_IV84                                    (0x1 << 11)    // IV84
#define  _CRYP_IV1LR_IV83                                    (0x1 << 12)    // IV83
#define  _CRYP_IV1LR_IV82                                    (0x1 << 13)    // IV82
#define  _CRYP_IV1LR_IV81                                    (0x1 << 14)    // IV81
#define  _CRYP_IV1LR_IV80                                    (0x1 << 15)    // IV80
#define  _CRYP_IV1LR_IV79                                    (0x1 << 16)    // IV79
#define  _CRYP_IV1LR_IV78                                    (0x1 << 17)    // IV78
#define  _CRYP_IV1LR_IV77                                    (0x1 << 18)    // IV77
#define  _CRYP_IV1LR_IV76                                    (0x1 << 19)    // IV76
#define  _CRYP_IV1LR_IV75                                    (0x1 << 20)    // IV75
#define  _CRYP_IV1LR_IV74                                    (0x1 << 21)    // IV74
#define  _CRYP_IV1LR_IV73                                    (0x1 << 22)    // IV73
#define  _CRYP_IV1LR_IV72                                    (0x1 << 23)    // IV72
#define  _CRYP_IV1LR_IV71                                    (0x1 << 24)    // IV71
#define  _CRYP_IV1LR_IV70                                    (0x1 << 25)    // IV70
#define  _CRYP_IV1LR_IV69                                    (0x1 << 26)    // IV69
#define  _CRYP_IV1LR_IV68                                    (0x1 << 27)    // IV68
#define  _CRYP_IV1LR_IV67                                    (0x1 << 28)    // IV67
#define  _CRYP_IV1LR_IV66                                    (0x1 << 29)    // IV66
#define  _CRYP_IV1LR_IV65                                    (0x1 << 30)    // IV65
#define  _CRYP_IV1LR_IV64                                    (0x1 << 31)    // IV64
#define  _CRYP_IV1RR_IV127                                   (0x1 << 0)    // IV127
#define  _CRYP_IV1RR_IV126                                   (0x1 << 1)    // IV126
#define  _CRYP_IV1RR_IV125                                   (0x1 << 2)    // IV125
#define  _CRYP_IV1RR_IV124                                   (0x1 << 3)    // IV124
#define  _CRYP_IV1RR_IV123                                   (0x1 << 4)    // IV123
#define  _CRYP_IV1RR_IV122                                   (0x1 << 5)    // IV122
#define  _CRYP_IV1RR_IV121                                   (0x1 << 6)    // IV121
#define  _CRYP_IV1RR_IV120                                   (0x1 << 7)    // IV120
#define  _CRYP_IV1RR_IV119                                   (0x1 << 8)    // IV119
#define  _CRYP_IV1RR_IV118                                   (0x1 << 9)    // IV118
#define  _CRYP_IV1RR_IV117                                   (0x1 << 10)    // IV117
#define  _CRYP_IV1RR_IV116                                   (0x1 << 11)    // IV116
#define  _CRYP_IV1RR_IV115                                   (0x1 << 12)    // IV115
#define  _CRYP_IV1RR_IV114                                   (0x1 << 13)    // IV114
#define  _CRYP_IV1RR_IV113                                   (0x1 << 14)    // IV113
#define  _CRYP_IV1RR_IV112                                   (0x1 << 15)    // IV112
#define  _CRYP_IV1RR_IV111                                   (0x1 << 16)    // IV111
#define  _CRYP_IV1RR_IV110                                   (0x1 << 17)    // IV110
#define  _CRYP_IV1RR_IV109                                   (0x1 << 18)    // IV109
#define  _CRYP_IV1RR_IV108                                   (0x1 << 19)    // IV108
#define  _CRYP_IV1RR_IV107                                   (0x1 << 20)    // IV107
#define  _CRYP_IV1RR_IV106                                   (0x1 << 21)    // IV106
#define  _CRYP_IV1RR_IV105                                   (0x1 << 22)    // IV105
#define  _CRYP_IV1RR_IV104                                   (0x1 << 23)    // IV104
#define  _CRYP_IV1RR_IV103                                   (0x1 << 24)    // IV103
#define  _CRYP_IV1RR_IV102                                   (0x1 << 25)    // IV102
#define  _CRYP_IV1RR_IV101                                   (0x1 << 26)    // IV101
#define  _CRYP_IV1RR_IV100                                   (0x1 << 27)    // IV100
#define  _CRYP_IV1RR_IV99                                    (0x1 << 28)    // IV99
#define  _CRYP_IV1RR_IV98                                    (0x1 << 29)    // IV98
#define  _CRYP_IV1RR_IV97                                    (0x1 << 30)    // IV97
#define  _CRYP_IV1RR_IV96                                    (0x1 << 31)    // IV96
#define  _CRYP_CSGCMCCM0R_CSGCMCCM0R                         (0xffffffff << 0)    // CSGCMCCM0R
#define  _CRYP_CSGCMCCM1R_CSGCMCCM1R                         (0xffffffff << 0)    // CSGCMCCM1R
#define  _CRYP_CSGCMCCM2R_CSGCMCCM2R                         (0xffffffff << 0)    // CSGCMCCM2R
#define  _CRYP_CSGCMCCM3R_CSGCMCCM3R                         (0xffffffff << 0)    // CSGCMCCM3R
#define  _CRYP_CSGCMCCM4R_CSGCMCCM4R                         (0xffffffff << 0)    // CSGCMCCM4R
#define  _CRYP_CSGCMCCM5R_CSGCMCCM5R                         (0xffffffff << 0)    // CSGCMCCM5R
#define  _CRYP_CSGCMCCM6R_CSGCMCCM6R                         (0xffffffff << 0)    // CSGCMCCM6R
#define  _CRYP_CSGCMCCM7R_CSGCMCCM7R                         (0xffffffff << 0)    // CSGCMCCM7R
#define  _CRYP_CSGCM0R_CSGCM0R                               (0xffffffff << 0)    // CSGCM0R
#define  _CRYP_CSGCM1R_CSGCM1R                               (0xffffffff << 0)    // CSGCM1R
#define  _CRYP_CSGCM2R_CSGCM2R                               (0xffffffff << 0)    // CSGCM2R
#define  _CRYP_CSGCM3R_CSGCM3R                               (0xffffffff << 0)    // CSGCM3R
#define  _CRYP_CSGCM4R_CSGCM4R                               (0xffffffff << 0)    // CSGCM4R
#define  _CRYP_CSGCM5R_CSGCM5R                               (0xffffffff << 0)    // CSGCM5R
#define  _CRYP_CSGCM6R_CSGCM6R                               (0xffffffff << 0)    // CSGCM6R
#define  _CRYP_CSGCM7R_CSGCM7R                               (0xffffffff << 0)    // CSGCM7R

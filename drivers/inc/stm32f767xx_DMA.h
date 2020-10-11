#define Get_DMA1_LISR(FLAG)                  (*(uint32_t*)0x40026000 & FLAG)
#define Get_DMA1_HISR(FLAG)                  (*(uint32_t*)0x40026004 & FLAG)
#define Get_DMA1_LIFCR(FLAG)                 (*(uint32_t*)0x40026008 & FLAG)
#define Get_DMA1_HIFCR(FLAG)                 (*(uint32_t*)0x4002600c & FLAG)
#define Get_DMA1_S0CR(FLAG)                  (*(uint32_t*)0x40026010 & FLAG)
#define Get_DMA1_S0NDTR(FLAG)                (*(uint32_t*)0x40026014 & FLAG)
#define Get_DMA1_S0PAR(FLAG)                 (*(uint32_t*)0x40026018 & FLAG)
#define Get_DMA1_S0M0AR(FLAG)                (*(uint32_t*)0x4002601c & FLAG)
#define Get_DMA1_S0M1AR(FLAG)                (*(uint32_t*)0x40026020 & FLAG)
#define Get_DMA1_S0FCR(FLAG)                 (*(uint32_t*)0x40026024 & FLAG)
#define Get_DMA1_S1CR(FLAG)                  (*(uint32_t*)0x40026028 & FLAG)
#define Get_DMA1_S1NDTR(FLAG)                (*(uint32_t*)0x4002602c & FLAG)
#define Get_DMA1_S1PAR(FLAG)                 (*(uint32_t*)0x40026030 & FLAG)
#define Get_DMA1_S1M0AR(FLAG)                (*(uint32_t*)0x40026034 & FLAG)
#define Get_DMA1_S1M1AR(FLAG)                (*(uint32_t*)0x40026038 & FLAG)
#define Get_DMA1_S1FCR(FLAG)                 (*(uint32_t*)0x4002603c & FLAG)
#define Get_DMA1_S2CR(FLAG)                  (*(uint32_t*)0x40026040 & FLAG)
#define Get_DMA1_S2NDTR(FLAG)                (*(uint32_t*)0x40026044 & FLAG)
#define Get_DMA1_S2PAR(FLAG)                 (*(uint32_t*)0x40026048 & FLAG)
#define Get_DMA1_S2M0AR(FLAG)                (*(uint32_t*)0x4002604c & FLAG)
#define Get_DMA1_S2M1AR(FLAG)                (*(uint32_t*)0x40026050 & FLAG)
#define Get_DMA1_S2FCR(FLAG)                 (*(uint32_t*)0x40026054 & FLAG)
#define Get_DMA1_S3CR(FLAG)                  (*(uint32_t*)0x40026058 & FLAG)
#define Get_DMA1_S3NDTR(FLAG)                (*(uint32_t*)0x4002605c & FLAG)
#define Get_DMA1_S3PAR(FLAG)                 (*(uint32_t*)0x40026060 & FLAG)
#define Get_DMA1_S3M0AR(FLAG)                (*(uint32_t*)0x40026064 & FLAG)
#define Get_DMA1_S3M1AR(FLAG)                (*(uint32_t*)0x40026068 & FLAG)
#define Get_DMA1_S3FCR(FLAG)                 (*(uint32_t*)0x4002606c & FLAG)
#define Get_DMA1_S4CR(FLAG)                  (*(uint32_t*)0x40026070 & FLAG)
#define Get_DMA1_S4NDTR(FLAG)                (*(uint32_t*)0x40026074 & FLAG)
#define Get_DMA1_S4PAR(FLAG)                 (*(uint32_t*)0x40026078 & FLAG)
#define Get_DMA1_S4M0AR(FLAG)                (*(uint32_t*)0x4002607c & FLAG)
#define Get_DMA1_S4M1AR(FLAG)                (*(uint32_t*)0x40026080 & FLAG)
#define Get_DMA1_S4FCR(FLAG)                 (*(uint32_t*)0x40026084 & FLAG)
#define Get_DMA1_S5CR(FLAG)                  (*(uint32_t*)0x40026088 & FLAG)
#define Get_DMA1_S5NDTR(FLAG)                (*(uint32_t*)0x4002608c & FLAG)
#define Get_DMA1_S5PAR(FLAG)                 (*(uint32_t*)0x40026090 & FLAG)
#define Get_DMA1_S5M0AR(FLAG)                (*(uint32_t*)0x40026094 & FLAG)
#define Get_DMA1_S5M1AR(FLAG)                (*(uint32_t*)0x40026098 & FLAG)
#define Get_DMA1_S5FCR(FLAG)                 (*(uint32_t*)0x4002609c & FLAG)
#define Get_DMA1_S6CR(FLAG)                  (*(uint32_t*)0x400260a0 & FLAG)
#define Get_DMA1_S6NDTR(FLAG)                (*(uint32_t*)0x400260a4 & FLAG)
#define Get_DMA1_S6PAR(FLAG)                 (*(uint32_t*)0x400260a8 & FLAG)
#define Get_DMA1_S6M0AR(FLAG)                (*(uint32_t*)0x400260ac & FLAG)
#define Get_DMA1_S6M1AR(FLAG)                (*(uint32_t*)0x400260b0 & FLAG)
#define Get_DMA1_S6FCR(FLAG)                 (*(uint32_t*)0x400260b4 & FLAG)
#define Get_DMA1_S7CR(FLAG)                  (*(uint32_t*)0x400260b8 & FLAG)
#define Get_DMA1_S7NDTR(FLAG)                (*(uint32_t*)0x400260bc & FLAG)
#define Get_DMA1_S7PAR(FLAG)                 (*(uint32_t*)0x400260c0 & FLAG)
#define Get_DMA1_S7M0AR(FLAG)                (*(uint32_t*)0x400260c4 & FLAG)
#define Get_DMA1_S7M1AR(FLAG)                (*(uint32_t*)0x400260c8 & FLAG)
#define Get_DMA1_S7FCR(FLAG)                 (*(uint32_t*)0x400260cc & FLAG)
#define Get_DMA2_LISR(FLAG)                  (*(uint32_t*)0x40026400 & FLAG)
#define Get_DMA2_HISR(FLAG)                  (*(uint32_t*)0x40026404 & FLAG)
#define Get_DMA2_LIFCR(FLAG)                 (*(uint32_t*)0x40026408 & FLAG)
#define Get_DMA2_HIFCR(FLAG)                 (*(uint32_t*)0x4002640c & FLAG)
#define Get_DMA2_S0CR(FLAG)                  (*(uint32_t*)0x40026410 & FLAG)
#define Get_DMA2_S0NDTR(FLAG)                (*(uint32_t*)0x40026414 & FLAG)
#define Get_DMA2_S0PAR(FLAG)                 (*(uint32_t*)0x40026418 & FLAG)
#define Get_DMA2_S0M0AR(FLAG)                (*(uint32_t*)0x4002641c & FLAG)
#define Get_DMA2_S0M1AR(FLAG)                (*(uint32_t*)0x40026420 & FLAG)
#define Get_DMA2_S0FCR(FLAG)                 (*(uint32_t*)0x40026424 & FLAG)
#define Get_DMA2_S1CR(FLAG)                  (*(uint32_t*)0x40026428 & FLAG)
#define Get_DMA2_S1NDTR(FLAG)                (*(uint32_t*)0x4002642c & FLAG)
#define Get_DMA2_S1PAR(FLAG)                 (*(uint32_t*)0x40026430 & FLAG)
#define Get_DMA2_S1M0AR(FLAG)                (*(uint32_t*)0x40026434 & FLAG)
#define Get_DMA2_S1M1AR(FLAG)                (*(uint32_t*)0x40026438 & FLAG)
#define Get_DMA2_S1FCR(FLAG)                 (*(uint32_t*)0x4002643c & FLAG)
#define Get_DMA2_S2CR(FLAG)                  (*(uint32_t*)0x40026440 & FLAG)
#define Get_DMA2_S2NDTR(FLAG)                (*(uint32_t*)0x40026444 & FLAG)
#define Get_DMA2_S2PAR(FLAG)                 (*(uint32_t*)0x40026448 & FLAG)
#define Get_DMA2_S2M0AR(FLAG)                (*(uint32_t*)0x4002644c & FLAG)
#define Get_DMA2_S2M1AR(FLAG)                (*(uint32_t*)0x40026450 & FLAG)
#define Get_DMA2_S2FCR(FLAG)                 (*(uint32_t*)0x40026454 & FLAG)
#define Get_DMA2_S3CR(FLAG)                  (*(uint32_t*)0x40026458 & FLAG)
#define Get_DMA2_S3NDTR(FLAG)                (*(uint32_t*)0x4002645c & FLAG)
#define Get_DMA2_S3PAR(FLAG)                 (*(uint32_t*)0x40026460 & FLAG)
#define Get_DMA2_S3M0AR(FLAG)                (*(uint32_t*)0x40026464 & FLAG)
#define Get_DMA2_S3M1AR(FLAG)                (*(uint32_t*)0x40026468 & FLAG)
#define Get_DMA2_S3FCR(FLAG)                 (*(uint32_t*)0x4002646c & FLAG)
#define Get_DMA2_S4CR(FLAG)                  (*(uint32_t*)0x40026470 & FLAG)
#define Get_DMA2_S4NDTR(FLAG)                (*(uint32_t*)0x40026474 & FLAG)
#define Get_DMA2_S4PAR(FLAG)                 (*(uint32_t*)0x40026478 & FLAG)
#define Get_DMA2_S4M0AR(FLAG)                (*(uint32_t*)0x4002647c & FLAG)
#define Get_DMA2_S4M1AR(FLAG)                (*(uint32_t*)0x40026480 & FLAG)
#define Get_DMA2_S4FCR(FLAG)                 (*(uint32_t*)0x40026484 & FLAG)
#define Get_DMA2_S5CR(FLAG)                  (*(uint32_t*)0x40026488 & FLAG)
#define Get_DMA2_S5NDTR(FLAG)                (*(uint32_t*)0x4002648c & FLAG)
#define Get_DMA2_S5PAR(FLAG)                 (*(uint32_t*)0x40026490 & FLAG)
#define Get_DMA2_S5M0AR(FLAG)                (*(uint32_t*)0x40026494 & FLAG)
#define Get_DMA2_S5M1AR(FLAG)                (*(uint32_t*)0x40026498 & FLAG)
#define Get_DMA2_S5FCR(FLAG)                 (*(uint32_t*)0x4002649c & FLAG)
#define Get_DMA2_S6CR(FLAG)                  (*(uint32_t*)0x400264a0 & FLAG)
#define Get_DMA2_S6NDTR(FLAG)                (*(uint32_t*)0x400264a4 & FLAG)
#define Get_DMA2_S6PAR(FLAG)                 (*(uint32_t*)0x400264a8 & FLAG)
#define Get_DMA2_S6M0AR(FLAG)                (*(uint32_t*)0x400264ac & FLAG)
#define Get_DMA2_S6M1AR(FLAG)                (*(uint32_t*)0x400264b0 & FLAG)
#define Get_DMA2_S6FCR(FLAG)                 (*(uint32_t*)0x400264b4 & FLAG)
#define Get_DMA2_S7CR(FLAG)                  (*(uint32_t*)0x400264b8 & FLAG)
#define Get_DMA2_S7NDTR(FLAG)                (*(uint32_t*)0x400264bc & FLAG)
#define Get_DMA2_S7PAR(FLAG)                 (*(uint32_t*)0x400264c0 & FLAG)
#define Get_DMA2_S7M0AR(FLAG)                (*(uint32_t*)0x400264c4 & FLAG)
#define Get_DMA2_S7M1AR(FLAG)                (*(uint32_t*)0x400264c8 & FLAG)
#define Get_DMA2_S7FCR(FLAG)                 (*(uint32_t*)0x400264cc & FLAG)
#define Set_DMA1_LISR(FLAG)                  (*(uint32_t*)0x40026000 |= FLAG)
#define Clr_DMA1_LISR(FLAG)                  (*(uint32_t*)0x40026000 &= ~FLAG)
#define Set_DMA1_HISR(FLAG)                  (*(uint32_t*)0x40026004 |= FLAG)
#define Clr_DMA1_HISR(FLAG)                  (*(uint32_t*)0x40026004 &= ~FLAG)
#define Set_DMA1_LIFCR(FLAG)                 (*(uint32_t*)0x40026008 |= FLAG)
#define Clr_DMA1_LIFCR(FLAG)                 (*(uint32_t*)0x40026008 &= ~FLAG)
#define Set_DMA1_HIFCR(FLAG)                 (*(uint32_t*)0x4002600c |= FLAG)
#define Clr_DMA1_HIFCR(FLAG)                 (*(uint32_t*)0x4002600c &= ~FLAG)
#define Set_DMA1_S0CR(FLAG)                  (*(uint32_t*)0x40026010 |= FLAG)
#define Clr_DMA1_S0CR(FLAG)                  (*(uint32_t*)0x40026010 &= ~FLAG)
#define Set_DMA1_S0NDTR(FLAG)                (*(uint32_t*)0x40026014 |= FLAG)
#define Clr_DMA1_S0NDTR(FLAG)                (*(uint32_t*)0x40026014 &= ~FLAG)
#define Set_DMA1_S0PAR(FLAG)                 (*(uint32_t*)0x40026018 |= FLAG)
#define Clr_DMA1_S0PAR(FLAG)                 (*(uint32_t*)0x40026018 &= ~FLAG)
#define Set_DMA1_S0M0AR(FLAG)                (*(uint32_t*)0x4002601c |= FLAG)
#define Clr_DMA1_S0M0AR(FLAG)                (*(uint32_t*)0x4002601c &= ~FLAG)
#define Set_DMA1_S0M1AR(FLAG)                (*(uint32_t*)0x40026020 |= FLAG)
#define Clr_DMA1_S0M1AR(FLAG)                (*(uint32_t*)0x40026020 &= ~FLAG)
#define Set_DMA1_S0FCR(FLAG)                 (*(uint32_t*)0x40026024 |= FLAG)
#define Clr_DMA1_S0FCR(FLAG)                 (*(uint32_t*)0x40026024 &= ~FLAG)
#define Set_DMA1_S1CR(FLAG)                  (*(uint32_t*)0x40026028 |= FLAG)
#define Clr_DMA1_S1CR(FLAG)                  (*(uint32_t*)0x40026028 &= ~FLAG)
#define Set_DMA1_S1NDTR(FLAG)                (*(uint32_t*)0x4002602c |= FLAG)
#define Clr_DMA1_S1NDTR(FLAG)                (*(uint32_t*)0x4002602c &= ~FLAG)
#define Set_DMA1_S1PAR(FLAG)                 (*(uint32_t*)0x40026030 |= FLAG)
#define Clr_DMA1_S1PAR(FLAG)                 (*(uint32_t*)0x40026030 &= ~FLAG)
#define Set_DMA1_S1M0AR(FLAG)                (*(uint32_t*)0x40026034 |= FLAG)
#define Clr_DMA1_S1M0AR(FLAG)                (*(uint32_t*)0x40026034 &= ~FLAG)
#define Set_DMA1_S1M1AR(FLAG)                (*(uint32_t*)0x40026038 |= FLAG)
#define Clr_DMA1_S1M1AR(FLAG)                (*(uint32_t*)0x40026038 &= ~FLAG)
#define Set_DMA1_S1FCR(FLAG)                 (*(uint32_t*)0x4002603c |= FLAG)
#define Clr_DMA1_S1FCR(FLAG)                 (*(uint32_t*)0x4002603c &= ~FLAG)
#define Set_DMA1_S2CR(FLAG)                  (*(uint32_t*)0x40026040 |= FLAG)
#define Clr_DMA1_S2CR(FLAG)                  (*(uint32_t*)0x40026040 &= ~FLAG)
#define Set_DMA1_S2NDTR(FLAG)                (*(uint32_t*)0x40026044 |= FLAG)
#define Clr_DMA1_S2NDTR(FLAG)                (*(uint32_t*)0x40026044 &= ~FLAG)
#define Set_DMA1_S2PAR(FLAG)                 (*(uint32_t*)0x40026048 |= FLAG)
#define Clr_DMA1_S2PAR(FLAG)                 (*(uint32_t*)0x40026048 &= ~FLAG)
#define Set_DMA1_S2M0AR(FLAG)                (*(uint32_t*)0x4002604c |= FLAG)
#define Clr_DMA1_S2M0AR(FLAG)                (*(uint32_t*)0x4002604c &= ~FLAG)
#define Set_DMA1_S2M1AR(FLAG)                (*(uint32_t*)0x40026050 |= FLAG)
#define Clr_DMA1_S2M1AR(FLAG)                (*(uint32_t*)0x40026050 &= ~FLAG)
#define Set_DMA1_S2FCR(FLAG)                 (*(uint32_t*)0x40026054 |= FLAG)
#define Clr_DMA1_S2FCR(FLAG)                 (*(uint32_t*)0x40026054 &= ~FLAG)
#define Set_DMA1_S3CR(FLAG)                  (*(uint32_t*)0x40026058 |= FLAG)
#define Clr_DMA1_S3CR(FLAG)                  (*(uint32_t*)0x40026058 &= ~FLAG)
#define Set_DMA1_S3NDTR(FLAG)                (*(uint32_t*)0x4002605c |= FLAG)
#define Clr_DMA1_S3NDTR(FLAG)                (*(uint32_t*)0x4002605c &= ~FLAG)
#define Set_DMA1_S3PAR(FLAG)                 (*(uint32_t*)0x40026060 |= FLAG)
#define Clr_DMA1_S3PAR(FLAG)                 (*(uint32_t*)0x40026060 &= ~FLAG)
#define Set_DMA1_S3M0AR(FLAG)                (*(uint32_t*)0x40026064 |= FLAG)
#define Clr_DMA1_S3M0AR(FLAG)                (*(uint32_t*)0x40026064 &= ~FLAG)
#define Set_DMA1_S3M1AR(FLAG)                (*(uint32_t*)0x40026068 |= FLAG)
#define Clr_DMA1_S3M1AR(FLAG)                (*(uint32_t*)0x40026068 &= ~FLAG)
#define Set_DMA1_S3FCR(FLAG)                 (*(uint32_t*)0x4002606c |= FLAG)
#define Clr_DMA1_S3FCR(FLAG)                 (*(uint32_t*)0x4002606c &= ~FLAG)
#define Set_DMA1_S4CR(FLAG)                  (*(uint32_t*)0x40026070 |= FLAG)
#define Clr_DMA1_S4CR(FLAG)                  (*(uint32_t*)0x40026070 &= ~FLAG)
#define Set_DMA1_S4NDTR(FLAG)                (*(uint32_t*)0x40026074 |= FLAG)
#define Clr_DMA1_S4NDTR(FLAG)                (*(uint32_t*)0x40026074 &= ~FLAG)
#define Set_DMA1_S4PAR(FLAG)                 (*(uint32_t*)0x40026078 |= FLAG)
#define Clr_DMA1_S4PAR(FLAG)                 (*(uint32_t*)0x40026078 &= ~FLAG)
#define Set_DMA1_S4M0AR(FLAG)                (*(uint32_t*)0x4002607c |= FLAG)
#define Clr_DMA1_S4M0AR(FLAG)                (*(uint32_t*)0x4002607c &= ~FLAG)
#define Set_DMA1_S4M1AR(FLAG)                (*(uint32_t*)0x40026080 |= FLAG)
#define Clr_DMA1_S4M1AR(FLAG)                (*(uint32_t*)0x40026080 &= ~FLAG)
#define Set_DMA1_S4FCR(FLAG)                 (*(uint32_t*)0x40026084 |= FLAG)
#define Clr_DMA1_S4FCR(FLAG)                 (*(uint32_t*)0x40026084 &= ~FLAG)
#define Set_DMA1_S5CR(FLAG)                  (*(uint32_t*)0x40026088 |= FLAG)
#define Clr_DMA1_S5CR(FLAG)                  (*(uint32_t*)0x40026088 &= ~FLAG)
#define Set_DMA1_S5NDTR(FLAG)                (*(uint32_t*)0x4002608c |= FLAG)
#define Clr_DMA1_S5NDTR(FLAG)                (*(uint32_t*)0x4002608c &= ~FLAG)
#define Set_DMA1_S5PAR(FLAG)                 (*(uint32_t*)0x40026090 |= FLAG)
#define Clr_DMA1_S5PAR(FLAG)                 (*(uint32_t*)0x40026090 &= ~FLAG)
#define Set_DMA1_S5M0AR(FLAG)                (*(uint32_t*)0x40026094 |= FLAG)
#define Clr_DMA1_S5M0AR(FLAG)                (*(uint32_t*)0x40026094 &= ~FLAG)
#define Set_DMA1_S5M1AR(FLAG)                (*(uint32_t*)0x40026098 |= FLAG)
#define Clr_DMA1_S5M1AR(FLAG)                (*(uint32_t*)0x40026098 &= ~FLAG)
#define Set_DMA1_S5FCR(FLAG)                 (*(uint32_t*)0x4002609c |= FLAG)
#define Clr_DMA1_S5FCR(FLAG)                 (*(uint32_t*)0x4002609c &= ~FLAG)
#define Set_DMA1_S6CR(FLAG)                  (*(uint32_t*)0x400260a0 |= FLAG)
#define Clr_DMA1_S6CR(FLAG)                  (*(uint32_t*)0x400260a0 &= ~FLAG)
#define Set_DMA1_S6NDTR(FLAG)                (*(uint32_t*)0x400260a4 |= FLAG)
#define Clr_DMA1_S6NDTR(FLAG)                (*(uint32_t*)0x400260a4 &= ~FLAG)
#define Set_DMA1_S6PAR(FLAG)                 (*(uint32_t*)0x400260a8 |= FLAG)
#define Clr_DMA1_S6PAR(FLAG)                 (*(uint32_t*)0x400260a8 &= ~FLAG)
#define Set_DMA1_S6M0AR(FLAG)                (*(uint32_t*)0x400260ac |= FLAG)
#define Clr_DMA1_S6M0AR(FLAG)                (*(uint32_t*)0x400260ac &= ~FLAG)
#define Set_DMA1_S6M1AR(FLAG)                (*(uint32_t*)0x400260b0 |= FLAG)
#define Clr_DMA1_S6M1AR(FLAG)                (*(uint32_t*)0x400260b0 &= ~FLAG)
#define Set_DMA1_S6FCR(FLAG)                 (*(uint32_t*)0x400260b4 |= FLAG)
#define Clr_DMA1_S6FCR(FLAG)                 (*(uint32_t*)0x400260b4 &= ~FLAG)
#define Set_DMA1_S7CR(FLAG)                  (*(uint32_t*)0x400260b8 |= FLAG)
#define Clr_DMA1_S7CR(FLAG)                  (*(uint32_t*)0x400260b8 &= ~FLAG)
#define Set_DMA1_S7NDTR(FLAG)                (*(uint32_t*)0x400260bc |= FLAG)
#define Clr_DMA1_S7NDTR(FLAG)                (*(uint32_t*)0x400260bc &= ~FLAG)
#define Set_DMA1_S7PAR(FLAG)                 (*(uint32_t*)0x400260c0 |= FLAG)
#define Clr_DMA1_S7PAR(FLAG)                 (*(uint32_t*)0x400260c0 &= ~FLAG)
#define Set_DMA1_S7M0AR(FLAG)                (*(uint32_t*)0x400260c4 |= FLAG)
#define Clr_DMA1_S7M0AR(FLAG)                (*(uint32_t*)0x400260c4 &= ~FLAG)
#define Set_DMA1_S7M1AR(FLAG)                (*(uint32_t*)0x400260c8 |= FLAG)
#define Clr_DMA1_S7M1AR(FLAG)                (*(uint32_t*)0x400260c8 &= ~FLAG)
#define Set_DMA1_S7FCR(FLAG)                 (*(uint32_t*)0x400260cc |= FLAG)
#define Clr_DMA1_S7FCR(FLAG)                 (*(uint32_t*)0x400260cc &= ~FLAG)
#define Set_DMA2_LISR(FLAG)                  (*(uint32_t*)0x40026400 |= FLAG)
#define Clr_DMA2_LISR(FLAG)                  (*(uint32_t*)0x40026400 &= ~FLAG)
#define Set_DMA2_HISR(FLAG)                  (*(uint32_t*)0x40026404 |= FLAG)
#define Clr_DMA2_HISR(FLAG)                  (*(uint32_t*)0x40026404 &= ~FLAG)
#define Set_DMA2_LIFCR(FLAG)                 (*(uint32_t*)0x40026408 |= FLAG)
#define Clr_DMA2_LIFCR(FLAG)                 (*(uint32_t*)0x40026408 &= ~FLAG)
#define Set_DMA2_HIFCR(FLAG)                 (*(uint32_t*)0x4002640c |= FLAG)
#define Clr_DMA2_HIFCR(FLAG)                 (*(uint32_t*)0x4002640c &= ~FLAG)
#define Set_DMA2_S0CR(FLAG)                  (*(uint32_t*)0x40026410 |= FLAG)
#define Clr_DMA2_S0CR(FLAG)                  (*(uint32_t*)0x40026410 &= ~FLAG)
#define Set_DMA2_S0NDTR(FLAG)                (*(uint32_t*)0x40026414 |= FLAG)
#define Clr_DMA2_S0NDTR(FLAG)                (*(uint32_t*)0x40026414 &= ~FLAG)
#define Set_DMA2_S0PAR(FLAG)                 (*(uint32_t*)0x40026418 |= FLAG)
#define Clr_DMA2_S0PAR(FLAG)                 (*(uint32_t*)0x40026418 &= ~FLAG)
#define Set_DMA2_S0M0AR(FLAG)                (*(uint32_t*)0x4002641c |= FLAG)
#define Clr_DMA2_S0M0AR(FLAG)                (*(uint32_t*)0x4002641c &= ~FLAG)
#define Set_DMA2_S0M1AR(FLAG)                (*(uint32_t*)0x40026420 |= FLAG)
#define Clr_DMA2_S0M1AR(FLAG)                (*(uint32_t*)0x40026420 &= ~FLAG)
#define Set_DMA2_S0FCR(FLAG)                 (*(uint32_t*)0x40026424 |= FLAG)
#define Clr_DMA2_S0FCR(FLAG)                 (*(uint32_t*)0x40026424 &= ~FLAG)
#define Set_DMA2_S1CR(FLAG)                  (*(uint32_t*)0x40026428 |= FLAG)
#define Clr_DMA2_S1CR(FLAG)                  (*(uint32_t*)0x40026428 &= ~FLAG)
#define Set_DMA2_S1NDTR(FLAG)                (*(uint32_t*)0x4002642c |= FLAG)
#define Clr_DMA2_S1NDTR(FLAG)                (*(uint32_t*)0x4002642c &= ~FLAG)
#define Set_DMA2_S1PAR(FLAG)                 (*(uint32_t*)0x40026430 |= FLAG)
#define Clr_DMA2_S1PAR(FLAG)                 (*(uint32_t*)0x40026430 &= ~FLAG)
#define Set_DMA2_S1M0AR(FLAG)                (*(uint32_t*)0x40026434 |= FLAG)
#define Clr_DMA2_S1M0AR(FLAG)                (*(uint32_t*)0x40026434 &= ~FLAG)
#define Set_DMA2_S1M1AR(FLAG)                (*(uint32_t*)0x40026438 |= FLAG)
#define Clr_DMA2_S1M1AR(FLAG)                (*(uint32_t*)0x40026438 &= ~FLAG)
#define Set_DMA2_S1FCR(FLAG)                 (*(uint32_t*)0x4002643c |= FLAG)
#define Clr_DMA2_S1FCR(FLAG)                 (*(uint32_t*)0x4002643c &= ~FLAG)
#define Set_DMA2_S2CR(FLAG)                  (*(uint32_t*)0x40026440 |= FLAG)
#define Clr_DMA2_S2CR(FLAG)                  (*(uint32_t*)0x40026440 &= ~FLAG)
#define Set_DMA2_S2NDTR(FLAG)                (*(uint32_t*)0x40026444 |= FLAG)
#define Clr_DMA2_S2NDTR(FLAG)                (*(uint32_t*)0x40026444 &= ~FLAG)
#define Set_DMA2_S2PAR(FLAG)                 (*(uint32_t*)0x40026448 |= FLAG)
#define Clr_DMA2_S2PAR(FLAG)                 (*(uint32_t*)0x40026448 &= ~FLAG)
#define Set_DMA2_S2M0AR(FLAG)                (*(uint32_t*)0x4002644c |= FLAG)
#define Clr_DMA2_S2M0AR(FLAG)                (*(uint32_t*)0x4002644c &= ~FLAG)
#define Set_DMA2_S2M1AR(FLAG)                (*(uint32_t*)0x40026450 |= FLAG)
#define Clr_DMA2_S2M1AR(FLAG)                (*(uint32_t*)0x40026450 &= ~FLAG)
#define Set_DMA2_S2FCR(FLAG)                 (*(uint32_t*)0x40026454 |= FLAG)
#define Clr_DMA2_S2FCR(FLAG)                 (*(uint32_t*)0x40026454 &= ~FLAG)
#define Set_DMA2_S3CR(FLAG)                  (*(uint32_t*)0x40026458 |= FLAG)
#define Clr_DMA2_S3CR(FLAG)                  (*(uint32_t*)0x40026458 &= ~FLAG)
#define Set_DMA2_S3NDTR(FLAG)                (*(uint32_t*)0x4002645c |= FLAG)
#define Clr_DMA2_S3NDTR(FLAG)                (*(uint32_t*)0x4002645c &= ~FLAG)
#define Set_DMA2_S3PAR(FLAG)                 (*(uint32_t*)0x40026460 |= FLAG)
#define Clr_DMA2_S3PAR(FLAG)                 (*(uint32_t*)0x40026460 &= ~FLAG)
#define Set_DMA2_S3M0AR(FLAG)                (*(uint32_t*)0x40026464 |= FLAG)
#define Clr_DMA2_S3M0AR(FLAG)                (*(uint32_t*)0x40026464 &= ~FLAG)
#define Set_DMA2_S3M1AR(FLAG)                (*(uint32_t*)0x40026468 |= FLAG)
#define Clr_DMA2_S3M1AR(FLAG)                (*(uint32_t*)0x40026468 &= ~FLAG)
#define Set_DMA2_S3FCR(FLAG)                 (*(uint32_t*)0x4002646c |= FLAG)
#define Clr_DMA2_S3FCR(FLAG)                 (*(uint32_t*)0x4002646c &= ~FLAG)
#define Set_DMA2_S4CR(FLAG)                  (*(uint32_t*)0x40026470 |= FLAG)
#define Clr_DMA2_S4CR(FLAG)                  (*(uint32_t*)0x40026470 &= ~FLAG)
#define Set_DMA2_S4NDTR(FLAG)                (*(uint32_t*)0x40026474 |= FLAG)
#define Clr_DMA2_S4NDTR(FLAG)                (*(uint32_t*)0x40026474 &= ~FLAG)
#define Set_DMA2_S4PAR(FLAG)                 (*(uint32_t*)0x40026478 |= FLAG)
#define Clr_DMA2_S4PAR(FLAG)                 (*(uint32_t*)0x40026478 &= ~FLAG)
#define Set_DMA2_S4M0AR(FLAG)                (*(uint32_t*)0x4002647c |= FLAG)
#define Clr_DMA2_S4M0AR(FLAG)                (*(uint32_t*)0x4002647c &= ~FLAG)
#define Set_DMA2_S4M1AR(FLAG)                (*(uint32_t*)0x40026480 |= FLAG)
#define Clr_DMA2_S4M1AR(FLAG)                (*(uint32_t*)0x40026480 &= ~FLAG)
#define Set_DMA2_S4FCR(FLAG)                 (*(uint32_t*)0x40026484 |= FLAG)
#define Clr_DMA2_S4FCR(FLAG)                 (*(uint32_t*)0x40026484 &= ~FLAG)
#define Set_DMA2_S5CR(FLAG)                  (*(uint32_t*)0x40026488 |= FLAG)
#define Clr_DMA2_S5CR(FLAG)                  (*(uint32_t*)0x40026488 &= ~FLAG)
#define Set_DMA2_S5NDTR(FLAG)                (*(uint32_t*)0x4002648c |= FLAG)
#define Clr_DMA2_S5NDTR(FLAG)                (*(uint32_t*)0x4002648c &= ~FLAG)
#define Set_DMA2_S5PAR(FLAG)                 (*(uint32_t*)0x40026490 |= FLAG)
#define Clr_DMA2_S5PAR(FLAG)                 (*(uint32_t*)0x40026490 &= ~FLAG)
#define Set_DMA2_S5M0AR(FLAG)                (*(uint32_t*)0x40026494 |= FLAG)
#define Clr_DMA2_S5M0AR(FLAG)                (*(uint32_t*)0x40026494 &= ~FLAG)
#define Set_DMA2_S5M1AR(FLAG)                (*(uint32_t*)0x40026498 |= FLAG)
#define Clr_DMA2_S5M1AR(FLAG)                (*(uint32_t*)0x40026498 &= ~FLAG)
#define Set_DMA2_S5FCR(FLAG)                 (*(uint32_t*)0x4002649c |= FLAG)
#define Clr_DMA2_S5FCR(FLAG)                 (*(uint32_t*)0x4002649c &= ~FLAG)
#define Set_DMA2_S6CR(FLAG)                  (*(uint32_t*)0x400264a0 |= FLAG)
#define Clr_DMA2_S6CR(FLAG)                  (*(uint32_t*)0x400264a0 &= ~FLAG)
#define Set_DMA2_S6NDTR(FLAG)                (*(uint32_t*)0x400264a4 |= FLAG)
#define Clr_DMA2_S6NDTR(FLAG)                (*(uint32_t*)0x400264a4 &= ~FLAG)
#define Set_DMA2_S6PAR(FLAG)                 (*(uint32_t*)0x400264a8 |= FLAG)
#define Clr_DMA2_S6PAR(FLAG)                 (*(uint32_t*)0x400264a8 &= ~FLAG)
#define Set_DMA2_S6M0AR(FLAG)                (*(uint32_t*)0x400264ac |= FLAG)
#define Clr_DMA2_S6M0AR(FLAG)                (*(uint32_t*)0x400264ac &= ~FLAG)
#define Set_DMA2_S6M1AR(FLAG)                (*(uint32_t*)0x400264b0 |= FLAG)
#define Clr_DMA2_S6M1AR(FLAG)                (*(uint32_t*)0x400264b0 &= ~FLAG)
#define Set_DMA2_S6FCR(FLAG)                 (*(uint32_t*)0x400264b4 |= FLAG)
#define Clr_DMA2_S6FCR(FLAG)                 (*(uint32_t*)0x400264b4 &= ~FLAG)
#define Set_DMA2_S7CR(FLAG)                  (*(uint32_t*)0x400264b8 |= FLAG)
#define Clr_DMA2_S7CR(FLAG)                  (*(uint32_t*)0x400264b8 &= ~FLAG)
#define Set_DMA2_S7NDTR(FLAG)                (*(uint32_t*)0x400264bc |= FLAG)
#define Clr_DMA2_S7NDTR(FLAG)                (*(uint32_t*)0x400264bc &= ~FLAG)
#define Set_DMA2_S7PAR(FLAG)                 (*(uint32_t*)0x400264c0 |= FLAG)
#define Clr_DMA2_S7PAR(FLAG)                 (*(uint32_t*)0x400264c0 &= ~FLAG)
#define Set_DMA2_S7M0AR(FLAG)                (*(uint32_t*)0x400264c4 |= FLAG)
#define Clr_DMA2_S7M0AR(FLAG)                (*(uint32_t*)0x400264c4 &= ~FLAG)
#define Set_DMA2_S7M1AR(FLAG)                (*(uint32_t*)0x400264c8 |= FLAG)
#define Clr_DMA2_S7M1AR(FLAG)                (*(uint32_t*)0x400264c8 &= ~FLAG)
#define Set_DMA2_S7FCR(FLAG)                 (*(uint32_t*)0x400264cc |= FLAG)
#define Clr_DMA2_S7FCR(FLAG)                 (*(uint32_t*)0x400264cc &= ~FLAG)
#define  _DMA1_LISR_TCIF3                                    (0x1 << 27)    // Stream x transfer complete interrupt flag (x = 3..0)
#define  _DMA1_LISR_HTIF3                                    (0x1 << 26)    // Stream x half transfer interrupt flag (x=3..0)
#define  _DMA1_LISR_TEIF3                                    (0x1 << 25)    // Stream x transfer error interrupt flag (x=3..0)
#define  _DMA1_LISR_DMEIF3                                   (0x1 << 24)    // Stream x direct mode error interrupt flag (x=3..0)
#define  _DMA1_LISR_FEIF3                                    (0x1 << 22)    // Stream x FIFO error interrupt flag (x=3..0)
#define  _DMA1_LISR_TCIF2                                    (0x1 << 21)    // Stream x transfer complete interrupt flag (x = 3..0)
#define  _DMA1_LISR_HTIF2                                    (0x1 << 20)    // Stream x half transfer interrupt flag (x=3..0)
#define  _DMA1_LISR_TEIF2                                    (0x1 << 19)    // Stream x transfer error interrupt flag (x=3..0)
#define  _DMA1_LISR_DMEIF2                                   (0x1 << 18)    // Stream x direct mode error interrupt flag (x=3..0)
#define  _DMA1_LISR_FEIF2                                    (0x1 << 16)    // Stream x FIFO error interrupt flag (x=3..0)
#define  _DMA1_LISR_TCIF1                                    (0x1 << 11)    // Stream x transfer complete interrupt flag (x = 3..0)
#define  _DMA1_LISR_HTIF1                                    (0x1 << 10)    // Stream x half transfer interrupt flag (x=3..0)
#define  _DMA1_LISR_TEIF1                                    (0x1 << 9)    // Stream x transfer error interrupt flag (x=3..0)
#define  _DMA1_LISR_DMEIF1                                   (0x1 << 8)    // Stream x direct mode error interrupt flag (x=3..0)
#define  _DMA1_LISR_FEIF1                                    (0x1 << 6)    // Stream x FIFO error interrupt flag (x=3..0)
#define  _DMA1_LISR_TCIF0                                    (0x1 << 5)    // Stream x transfer complete interrupt flag (x = 3..0)
#define  _DMA1_LISR_HTIF0                                    (0x1 << 4)    // Stream x half transfer interrupt flag (x=3..0)
#define  _DMA1_LISR_TEIF0                                    (0x1 << 3)    // Stream x transfer error interrupt flag (x=3..0)
#define  _DMA1_LISR_DMEIF0                                   (0x1 << 2)    // Stream x direct mode error interrupt flag (x=3..0)
#define  _DMA1_LISR_FEIF0                                    (0x1 << 0)    // Stream x FIFO error interrupt flag (x=3..0)
#define  _DMA1_HISR_TCIF7                                    (0x1 << 27)    // Stream x transfer complete interrupt flag (x=7..4)
#define  _DMA1_HISR_HTIF7                                    (0x1 << 26)    // Stream x half transfer interrupt flag (x=7..4)
#define  _DMA1_HISR_TEIF7                                    (0x1 << 25)    // Stream x transfer error interrupt flag (x=7..4)
#define  _DMA1_HISR_DMEIF7                                   (0x1 << 24)    // Stream x direct mode error interrupt flag (x=7..4)
#define  _DMA1_HISR_FEIF7                                    (0x1 << 22)    // Stream x FIFO error interrupt flag (x=7..4)
#define  _DMA1_HISR_TCIF6                                    (0x1 << 21)    // Stream x transfer complete interrupt flag (x=7..4)
#define  _DMA1_HISR_HTIF6                                    (0x1 << 20)    // Stream x half transfer interrupt flag (x=7..4)
#define  _DMA1_HISR_TEIF6                                    (0x1 << 19)    // Stream x transfer error interrupt flag (x=7..4)
#define  _DMA1_HISR_DMEIF6                                   (0x1 << 18)    // Stream x direct mode error interrupt flag (x=7..4)
#define  _DMA1_HISR_FEIF6                                    (0x1 << 16)    // Stream x FIFO error interrupt flag (x=7..4)
#define  _DMA1_HISR_TCIF5                                    (0x1 << 11)    // Stream x transfer complete interrupt flag (x=7..4)
#define  _DMA1_HISR_HTIF5                                    (0x1 << 10)    // Stream x half transfer interrupt flag (x=7..4)
#define  _DMA1_HISR_TEIF5                                    (0x1 << 9)    // Stream x transfer error interrupt flag (x=7..4)
#define  _DMA1_HISR_DMEIF5                                   (0x1 << 8)    // Stream x direct mode error interrupt flag (x=7..4)
#define  _DMA1_HISR_FEIF5                                    (0x1 << 6)    // Stream x FIFO error interrupt flag (x=7..4)
#define  _DMA1_HISR_TCIF4                                    (0x1 << 5)    // Stream x transfer complete interrupt flag (x=7..4)
#define  _DMA1_HISR_HTIF4                                    (0x1 << 4)    // Stream x half transfer interrupt flag (x=7..4)
#define  _DMA1_HISR_TEIF4                                    (0x1 << 3)    // Stream x transfer error interrupt flag (x=7..4)
#define  _DMA1_HISR_DMEIF4                                   (0x1 << 2)    // Stream x direct mode error interrupt flag (x=7..4)
#define  _DMA1_HISR_FEIF4                                    (0x1 << 0)    // Stream x FIFO error interrupt flag (x=7..4)
#define  _DMA1_LIFCR_CTCIF3                                  (0x1 << 27)    // Stream x clear transfer complete interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CHTIF3                                  (0x1 << 26)    // Stream x clear half transfer interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CTEIF3                                  (0x1 << 25)    // Stream x clear transfer error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CDMEIF3                                 (0x1 << 24)    // Stream x clear direct mode error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CFEIF3                                  (0x1 << 22)    // Stream x clear FIFO error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CTCIF2                                  (0x1 << 21)    // Stream x clear transfer complete interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CHTIF2                                  (0x1 << 20)    // Stream x clear half transfer interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CTEIF2                                  (0x1 << 19)    // Stream x clear transfer error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CDMEIF2                                 (0x1 << 18)    // Stream x clear direct mode error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CFEIF2                                  (0x1 << 16)    // Stream x clear FIFO error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CTCIF1                                  (0x1 << 11)    // Stream x clear transfer complete interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CHTIF1                                  (0x1 << 10)    // Stream x clear half transfer interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CTEIF1                                  (0x1 << 9)    // Stream x clear transfer error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CDMEIF1                                 (0x1 << 8)    // Stream x clear direct mode error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CFEIF1                                  (0x1 << 6)    // Stream x clear FIFO error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CTCIF0                                  (0x1 << 5)    // Stream x clear transfer complete interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CHTIF0                                  (0x1 << 4)    // Stream x clear half transfer interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CTEIF0                                  (0x1 << 3)    // Stream x clear transfer error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CDMEIF0                                 (0x1 << 2)    // Stream x clear direct mode error interrupt flag (x = 3..0)
#define  _DMA1_LIFCR_CFEIF0                                  (0x1 << 0)    // Stream x clear FIFO error interrupt flag (x = 3..0)
#define  _DMA1_HIFCR_CTCIF7                                  (0x1 << 27)    // Stream x clear transfer complete interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CHTIF7                                  (0x1 << 26)    // Stream x clear half transfer interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CTEIF7                                  (0x1 << 25)    // Stream x clear transfer error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CDMEIF7                                 (0x1 << 24)    // Stream x clear direct mode error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CFEIF7                                  (0x1 << 22)    // Stream x clear FIFO error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CTCIF6                                  (0x1 << 21)    // Stream x clear transfer complete interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CHTIF6                                  (0x1 << 20)    // Stream x clear half transfer interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CTEIF6                                  (0x1 << 19)    // Stream x clear transfer error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CDMEIF6                                 (0x1 << 18)    // Stream x clear direct mode error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CFEIF6                                  (0x1 << 16)    // Stream x clear FIFO error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CTCIF5                                  (0x1 << 11)    // Stream x clear transfer complete interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CHTIF5                                  (0x1 << 10)    // Stream x clear half transfer interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CTEIF5                                  (0x1 << 9)    // Stream x clear transfer error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CDMEIF5                                 (0x1 << 8)    // Stream x clear direct mode error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CFEIF5                                  (0x1 << 6)    // Stream x clear FIFO error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CTCIF4                                  (0x1 << 5)    // Stream x clear transfer complete interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CHTIF4                                  (0x1 << 4)    // Stream x clear half transfer interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CTEIF4                                  (0x1 << 3)    // Stream x clear transfer error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CDMEIF4                                 (0x1 << 2)    // Stream x clear direct mode error interrupt flag (x = 7..4)
#define  _DMA1_HIFCR_CFEIF4                                  (0x1 << 0)    // Stream x clear FIFO error interrupt flag (x = 7..4)
#define  _DMA1_S0CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA1_S0CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA1_S0CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA1_S0CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA1_S0CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA1_S0CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA1_S0CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA1_S0CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA1_S0CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA1_S0CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA1_S0CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA1_S0CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA1_S0CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA1_S0CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA1_S0CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA1_S0CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA1_S0CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA1_S0CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA1_S0CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA1_S0NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA1_S0PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA1_S0M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA1_S0M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA1_S0FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA1_S0FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA1_S0FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA1_S0FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA1_S1CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA1_S1CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA1_S1CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA1_S1CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA1_S1CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA1_S1CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA1_S1CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA1_S1CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA1_S1CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA1_S1CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA1_S1CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA1_S1CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA1_S1CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA1_S1CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA1_S1CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA1_S1CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA1_S1CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA1_S1CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA1_S1CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA1_S1CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA1_S1NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA1_S1PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA1_S1M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA1_S1M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA1_S1FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA1_S1FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA1_S1FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA1_S1FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA1_S2CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA1_S2CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA1_S2CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA1_S2CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA1_S2CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA1_S2CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA1_S2CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA1_S2CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA1_S2CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA1_S2CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA1_S2CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA1_S2CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA1_S2CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA1_S2CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA1_S2CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA1_S2CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA1_S2CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA1_S2CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA1_S2CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA1_S2CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA1_S2NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA1_S2PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA1_S2M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA1_S2M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA1_S2FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA1_S2FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA1_S2FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA1_S2FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA1_S3CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA1_S3CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA1_S3CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA1_S3CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA1_S3CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA1_S3CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA1_S3CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA1_S3CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA1_S3CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA1_S3CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA1_S3CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA1_S3CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA1_S3CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA1_S3CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA1_S3CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA1_S3CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA1_S3CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA1_S3CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA1_S3CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA1_S3CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA1_S3NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA1_S3PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA1_S3M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA1_S3M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA1_S3FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA1_S3FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA1_S3FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA1_S3FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA1_S4CR_CHSEL                                    (0x7 << 25)    // Channel selection
#define  _DMA1_S4CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA1_S4CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA1_S4CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA1_S4CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA1_S4CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA1_S4CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA1_S4CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA1_S4CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA1_S4CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA1_S4CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA1_S4CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA1_S4CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA1_S4CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA1_S4CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA1_S4CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA1_S4CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA1_S4CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA1_S4CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA1_S4CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA1_S4NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA1_S4PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA1_S4M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA1_S4M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA1_S4FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA1_S4FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA1_S4FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA1_S4FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA1_S5CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA1_S5CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA1_S5CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA1_S5CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA1_S5CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA1_S5CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA1_S5CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA1_S5CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA1_S5CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA1_S5CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA1_S5CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA1_S5CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA1_S5CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA1_S5CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA1_S5CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA1_S5CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA1_S5CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA1_S5CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA1_S5CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA1_S5CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA1_S5NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA1_S5PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA1_S5M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA1_S5M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA1_S5FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA1_S5FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA1_S5FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA1_S5FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA1_S6CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA1_S6CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA1_S6CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA1_S6CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA1_S6CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA1_S6CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA1_S6CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA1_S6CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA1_S6CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA1_S6CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA1_S6CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA1_S6CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA1_S6CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA1_S6CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA1_S6CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA1_S6CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA1_S6CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA1_S6CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA1_S6CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA1_S6CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA1_S6NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA1_S6PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA1_S6M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA1_S6M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA1_S6FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA1_S6FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA1_S6FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA1_S6FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA1_S7CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA1_S7CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA1_S7CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA1_S7CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA1_S7CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA1_S7CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA1_S7CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA1_S7CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA1_S7CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA1_S7CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA1_S7CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA1_S7CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA1_S7CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA1_S7CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA1_S7CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA1_S7CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA1_S7CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA1_S7CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA1_S7CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA1_S7CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA1_S7NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA1_S7PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA1_S7M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA1_S7M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA1_S7FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA1_S7FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA1_S7FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA1_S7FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA2_LISR_TCIF3                                    (0x1 << 27)    // Stream x transfer complete interrupt flag (x = 3..0)
#define  _DMA2_LISR_HTIF3                                    (0x1 << 26)    // Stream x half transfer interrupt flag (x=3..0)
#define  _DMA2_LISR_TEIF3                                    (0x1 << 25)    // Stream x transfer error interrupt flag (x=3..0)
#define  _DMA2_LISR_DMEIF3                                   (0x1 << 24)    // Stream x direct mode error interrupt flag (x=3..0)
#define  _DMA2_LISR_FEIF3                                    (0x1 << 22)    // Stream x FIFO error interrupt flag (x=3..0)
#define  _DMA2_LISR_TCIF2                                    (0x1 << 21)    // Stream x transfer complete interrupt flag (x = 3..0)
#define  _DMA2_LISR_HTIF2                                    (0x1 << 20)    // Stream x half transfer interrupt flag (x=3..0)
#define  _DMA2_LISR_TEIF2                                    (0x1 << 19)    // Stream x transfer error interrupt flag (x=3..0)
#define  _DMA2_LISR_DMEIF2                                   (0x1 << 18)    // Stream x direct mode error interrupt flag (x=3..0)
#define  _DMA2_LISR_FEIF2                                    (0x1 << 16)    // Stream x FIFO error interrupt flag (x=3..0)
#define  _DMA2_LISR_TCIF1                                    (0x1 << 11)    // Stream x transfer complete interrupt flag (x = 3..0)
#define  _DMA2_LISR_HTIF1                                    (0x1 << 10)    // Stream x half transfer interrupt flag (x=3..0)
#define  _DMA2_LISR_TEIF1                                    (0x1 << 9)    // Stream x transfer error interrupt flag (x=3..0)
#define  _DMA2_LISR_DMEIF1                                   (0x1 << 8)    // Stream x direct mode error interrupt flag (x=3..0)
#define  _DMA2_LISR_FEIF1                                    (0x1 << 6)    // Stream x FIFO error interrupt flag (x=3..0)
#define  _DMA2_LISR_TCIF0                                    (0x1 << 5)    // Stream x transfer complete interrupt flag (x = 3..0)
#define  _DMA2_LISR_HTIF0                                    (0x1 << 4)    // Stream x half transfer interrupt flag (x=3..0)
#define  _DMA2_LISR_TEIF0                                    (0x1 << 3)    // Stream x transfer error interrupt flag (x=3..0)
#define  _DMA2_LISR_DMEIF0                                   (0x1 << 2)    // Stream x direct mode error interrupt flag (x=3..0)
#define  _DMA2_LISR_FEIF0                                    (0x1 << 0)    // Stream x FIFO error interrupt flag (x=3..0)
#define  _DMA2_HISR_TCIF7                                    (0x1 << 27)    // Stream x transfer complete interrupt flag (x=7..4)
#define  _DMA2_HISR_HTIF7                                    (0x1 << 26)    // Stream x half transfer interrupt flag (x=7..4)
#define  _DMA2_HISR_TEIF7                                    (0x1 << 25)    // Stream x transfer error interrupt flag (x=7..4)
#define  _DMA2_HISR_DMEIF7                                   (0x1 << 24)    // Stream x direct mode error interrupt flag (x=7..4)
#define  _DMA2_HISR_FEIF7                                    (0x1 << 22)    // Stream x FIFO error interrupt flag (x=7..4)
#define  _DMA2_HISR_TCIF6                                    (0x1 << 21)    // Stream x transfer complete interrupt flag (x=7..4)
#define  _DMA2_HISR_HTIF6                                    (0x1 << 20)    // Stream x half transfer interrupt flag (x=7..4)
#define  _DMA2_HISR_TEIF6                                    (0x1 << 19)    // Stream x transfer error interrupt flag (x=7..4)
#define  _DMA2_HISR_DMEIF6                                   (0x1 << 18)    // Stream x direct mode error interrupt flag (x=7..4)
#define  _DMA2_HISR_FEIF6                                    (0x1 << 16)    // Stream x FIFO error interrupt flag (x=7..4)
#define  _DMA2_HISR_TCIF5                                    (0x1 << 11)    // Stream x transfer complete interrupt flag (x=7..4)
#define  _DMA2_HISR_HTIF5                                    (0x1 << 10)    // Stream x half transfer interrupt flag (x=7..4)
#define  _DMA2_HISR_TEIF5                                    (0x1 << 9)    // Stream x transfer error interrupt flag (x=7..4)
#define  _DMA2_HISR_DMEIF5                                   (0x1 << 8)    // Stream x direct mode error interrupt flag (x=7..4)
#define  _DMA2_HISR_FEIF5                                    (0x1 << 6)    // Stream x FIFO error interrupt flag (x=7..4)
#define  _DMA2_HISR_TCIF4                                    (0x1 << 5)    // Stream x transfer complete interrupt flag (x=7..4)
#define  _DMA2_HISR_HTIF4                                    (0x1 << 4)    // Stream x half transfer interrupt flag (x=7..4)
#define  _DMA2_HISR_TEIF4                                    (0x1 << 3)    // Stream x transfer error interrupt flag (x=7..4)
#define  _DMA2_HISR_DMEIF4                                   (0x1 << 2)    // Stream x direct mode error interrupt flag (x=7..4)
#define  _DMA2_HISR_FEIF4                                    (0x1 << 0)    // Stream x FIFO error interrupt flag (x=7..4)
#define  _DMA2_LIFCR_CTCIF3                                  (0x1 << 27)    // Stream x clear transfer complete interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CHTIF3                                  (0x1 << 26)    // Stream x clear half transfer interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CTEIF3                                  (0x1 << 25)    // Stream x clear transfer error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CDMEIF3                                 (0x1 << 24)    // Stream x clear direct mode error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CFEIF3                                  (0x1 << 22)    // Stream x clear FIFO error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CTCIF2                                  (0x1 << 21)    // Stream x clear transfer complete interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CHTIF2                                  (0x1 << 20)    // Stream x clear half transfer interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CTEIF2                                  (0x1 << 19)    // Stream x clear transfer error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CDMEIF2                                 (0x1 << 18)    // Stream x clear direct mode error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CFEIF2                                  (0x1 << 16)    // Stream x clear FIFO error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CTCIF1                                  (0x1 << 11)    // Stream x clear transfer complete interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CHTIF1                                  (0x1 << 10)    // Stream x clear half transfer interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CTEIF1                                  (0x1 << 9)    // Stream x clear transfer error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CDMEIF1                                 (0x1 << 8)    // Stream x clear direct mode error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CFEIF1                                  (0x1 << 6)    // Stream x clear FIFO error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CTCIF0                                  (0x1 << 5)    // Stream x clear transfer complete interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CHTIF0                                  (0x1 << 4)    // Stream x clear half transfer interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CTEIF0                                  (0x1 << 3)    // Stream x clear transfer error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CDMEIF0                                 (0x1 << 2)    // Stream x clear direct mode error interrupt flag (x = 3..0)
#define  _DMA2_LIFCR_CFEIF0                                  (0x1 << 0)    // Stream x clear FIFO error interrupt flag (x = 3..0)
#define  _DMA2_HIFCR_CTCIF7                                  (0x1 << 27)    // Stream x clear transfer complete interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CHTIF7                                  (0x1 << 26)    // Stream x clear half transfer interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CTEIF7                                  (0x1 << 25)    // Stream x clear transfer error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CDMEIF7                                 (0x1 << 24)    // Stream x clear direct mode error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CFEIF7                                  (0x1 << 22)    // Stream x clear FIFO error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CTCIF6                                  (0x1 << 21)    // Stream x clear transfer complete interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CHTIF6                                  (0x1 << 20)    // Stream x clear half transfer interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CTEIF6                                  (0x1 << 19)    // Stream x clear transfer error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CDMEIF6                                 (0x1 << 18)    // Stream x clear direct mode error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CFEIF6                                  (0x1 << 16)    // Stream x clear FIFO error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CTCIF5                                  (0x1 << 11)    // Stream x clear transfer complete interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CHTIF5                                  (0x1 << 10)    // Stream x clear half transfer interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CTEIF5                                  (0x1 << 9)    // Stream x clear transfer error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CDMEIF5                                 (0x1 << 8)    // Stream x clear direct mode error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CFEIF5                                  (0x1 << 6)    // Stream x clear FIFO error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CTCIF4                                  (0x1 << 5)    // Stream x clear transfer complete interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CHTIF4                                  (0x1 << 4)    // Stream x clear half transfer interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CTEIF4                                  (0x1 << 3)    // Stream x clear transfer error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CDMEIF4                                 (0x1 << 2)    // Stream x clear direct mode error interrupt flag (x = 7..4)
#define  _DMA2_HIFCR_CFEIF4                                  (0x1 << 0)    // Stream x clear FIFO error interrupt flag (x = 7..4)
#define  _DMA2_S0CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA2_S0CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA2_S0CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA2_S0CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA2_S0CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA2_S0CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA2_S0CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA2_S0CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA2_S0CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA2_S0CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA2_S0CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA2_S0CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA2_S0CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA2_S0CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA2_S0CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA2_S0CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA2_S0CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA2_S0CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA2_S0CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA2_S0NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA2_S0PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA2_S0M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA2_S0M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA2_S0FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA2_S0FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA2_S0FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA2_S0FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA2_S1CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA2_S1CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA2_S1CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA2_S1CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA2_S1CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA2_S1CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA2_S1CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA2_S1CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA2_S1CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA2_S1CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA2_S1CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA2_S1CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA2_S1CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA2_S1CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA2_S1CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA2_S1CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA2_S1CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA2_S1CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA2_S1CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA2_S1CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA2_S1NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA2_S1PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA2_S1M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA2_S1M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA2_S1FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA2_S1FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA2_S1FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA2_S1FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA2_S2CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA2_S2CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA2_S2CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA2_S2CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA2_S2CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA2_S2CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA2_S2CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA2_S2CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA2_S2CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA2_S2CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA2_S2CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA2_S2CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA2_S2CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA2_S2CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA2_S2CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA2_S2CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA2_S2CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA2_S2CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA2_S2CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA2_S2CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA2_S2NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA2_S2PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA2_S2M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA2_S2M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA2_S2FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA2_S2FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA2_S2FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA2_S2FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA2_S3CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA2_S3CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA2_S3CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA2_S3CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA2_S3CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA2_S3CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA2_S3CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA2_S3CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA2_S3CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA2_S3CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA2_S3CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA2_S3CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA2_S3CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA2_S3CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA2_S3CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA2_S3CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA2_S3CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA2_S3CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA2_S3CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA2_S3CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA2_S3NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA2_S3PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA2_S3M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA2_S3M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA2_S3FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA2_S3FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA2_S3FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA2_S3FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA2_S4CR_CHSEL                                    (0x7 << 25)    // Channel selection
#define  _DMA2_S4CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA2_S4CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA2_S4CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA2_S4CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA2_S4CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA2_S4CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA2_S4CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA2_S4CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA2_S4CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA2_S4CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA2_S4CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA2_S4CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA2_S4CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA2_S4CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA2_S4CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA2_S4CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA2_S4CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA2_S4CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA2_S4CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA2_S4NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA2_S4PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA2_S4M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA2_S4M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA2_S4FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA2_S4FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA2_S4FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA2_S4FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA2_S5CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA2_S5CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA2_S5CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA2_S5CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA2_S5CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA2_S5CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA2_S5CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA2_S5CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA2_S5CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA2_S5CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA2_S5CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA2_S5CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA2_S5CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA2_S5CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA2_S5CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA2_S5CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA2_S5CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA2_S5CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA2_S5CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA2_S5CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA2_S5NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA2_S5PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA2_S5M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA2_S5M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA2_S5FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA2_S5FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA2_S5FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA2_S5FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA2_S6CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA2_S6CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA2_S6CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA2_S6CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA2_S6CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA2_S6CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA2_S6CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA2_S6CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA2_S6CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA2_S6CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA2_S6CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA2_S6CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA2_S6CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA2_S6CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA2_S6CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA2_S6CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA2_S6CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA2_S6CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA2_S6CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA2_S6CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA2_S6NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA2_S6PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA2_S6M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA2_S6M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA2_S6FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA2_S6FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA2_S6FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA2_S6FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection
#define  _DMA2_S7CR_CHSEL                                    (0xf << 25)    // Channel selection
#define  _DMA2_S7CR_MBURST                                   (0x3 << 23)    // Memory burst transfer configuration
#define  _DMA2_S7CR_PBURST                                   (0x3 << 21)    // Peripheral burst transfer configuration
#define  _DMA2_S7CR_ACK                                      (0x1 << 20)    // ACK
#define  _DMA2_S7CR_CT                                       (0x1 << 19)    // Current target (only in double buffer mode)
#define  _DMA2_S7CR_DBM                                      (0x1 << 18)    // Double buffer mode
#define  _DMA2_S7CR_PL                                       (0x3 << 16)    // Priority level
#define  _DMA2_S7CR_PINCOS                                   (0x1 << 15)    // Peripheral increment offset size
#define  _DMA2_S7CR_MSIZE                                    (0x3 << 13)    // Memory data size
#define  _DMA2_S7CR_PSIZE                                    (0x3 << 11)    // Peripheral data size
#define  _DMA2_S7CR_MINC                                     (0x1 << 10)    // Memory increment mode
#define  _DMA2_S7CR_PINC                                     (0x1 << 9)    // Peripheral increment mode
#define  _DMA2_S7CR_CIRC                                     (0x1 << 8)    // Circular mode
#define  _DMA2_S7CR_DIR                                      (0x3 << 6)    // Data transfer direction
#define  _DMA2_S7CR_PFCTRL                                   (0x1 << 5)    // Peripheral flow controller
#define  _DMA2_S7CR_TCIE                                     (0x1 << 4)    // Transfer complete interrupt enable
#define  _DMA2_S7CR_HTIE                                     (0x1 << 3)    // Half transfer interrupt enable
#define  _DMA2_S7CR_TEIE                                     (0x1 << 2)    // Transfer error interrupt enable
#define  _DMA2_S7CR_DMEIE                                    (0x1 << 1)    // Direct mode error interrupt enable
#define  _DMA2_S7CR_EN                                       (0x1 << 0)    // Stream enable / flag stream ready when read low
#define  _DMA2_S7NDTR_NDT                                    (0xffff << 0)    // Number of data items to transfer
#define  _DMA2_S7PAR_PA                                      (0xffffffff << 0)    // Peripheral address
#define  _DMA2_S7M0AR_M0A                                    (0xffffffff << 0)    // Memory 0 address
#define  _DMA2_S7M1AR_M1A                                    (0xffffffff << 0)    // Memory 1 address (used in case of Double buffer mode)
#define  _DMA2_S7FCR_FEIE                                    (0x1 << 7)    // FIFO error interrupt enable
#define  _DMA2_S7FCR_FS                                      (0x7 << 3)    // FIFO status
#define  _DMA2_S7FCR_DMDIS                                   (0x1 << 2)    // Direct mode disable
#define  _DMA2_S7FCR_FTH                                     (0x3 << 0)    // FIFO threshold selection

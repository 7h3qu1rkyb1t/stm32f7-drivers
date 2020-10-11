#define Get_USART2_CR1(FLAG)                 (*(uint32_t*)0x40004400 & FLAG)
#define Get_USART2_CR2(FLAG)                 (*(uint32_t*)0x40004404 & FLAG)
#define Get_USART2_CR3(FLAG)                 (*(uint32_t*)0x40004408 & FLAG)
#define Get_USART2_BRR(FLAG)                 (*(uint32_t*)0x4000440c & FLAG)
#define Get_USART2_GTPR(FLAG)                (*(uint32_t*)0x40004410 & FLAG)
#define Get_USART2_RTOR(FLAG)                (*(uint32_t*)0x40004414 & FLAG)
#define Get_USART2_RQR(FLAG)                 (*(uint32_t*)0x40004418 & FLAG)
#define Get_USART2_ISR(FLAG)                 (*(uint32_t*)0x4000441c & FLAG)
#define Get_USART2_ICR(FLAG)                 (*(uint32_t*)0x40004420 & FLAG)
#define Get_USART2_RDR(FLAG)                 (*(uint32_t*)0x40004424 & FLAG)
#define Get_USART2_TDR(FLAG)                 (*(uint32_t*)0x40004428 & FLAG)
#define Get_USART3_CR1(FLAG)                 (*(uint32_t*)0x40004800 & FLAG)
#define Get_USART3_CR2(FLAG)                 (*(uint32_t*)0x40004804 & FLAG)
#define Get_USART3_CR3(FLAG)                 (*(uint32_t*)0x40004808 & FLAG)
#define Get_USART3_BRR(FLAG)                 (*(uint32_t*)0x4000480c & FLAG)
#define Get_USART3_GTPR(FLAG)                (*(uint32_t*)0x40004810 & FLAG)
#define Get_USART3_RTOR(FLAG)                (*(uint32_t*)0x40004814 & FLAG)
#define Get_USART3_RQR(FLAG)                 (*(uint32_t*)0x40004818 & FLAG)
#define Get_USART3_ISR(FLAG)                 (*(uint32_t*)0x4000481c & FLAG)
#define Get_USART3_ICR(FLAG)                 (*(uint32_t*)0x40004820 & FLAG)
#define Get_USART3_RDR(FLAG)                 (*(uint32_t*)0x40004824 & FLAG)
#define Get_USART3_TDR(FLAG)                 (*(uint32_t*)0x40004828 & FLAG)
#define Get_UART4_CR1(FLAG)                  (*(uint32_t*)0x40004c00 & FLAG)
#define Get_UART4_CR2(FLAG)                  (*(uint32_t*)0x40004c04 & FLAG)
#define Get_UART4_CR3(FLAG)                  (*(uint32_t*)0x40004c08 & FLAG)
#define Get_UART4_BRR(FLAG)                  (*(uint32_t*)0x40004c0c & FLAG)
#define Get_UART4_GTPR(FLAG)                 (*(uint32_t*)0x40004c10 & FLAG)
#define Get_UART4_RTOR(FLAG)                 (*(uint32_t*)0x40004c14 & FLAG)
#define Get_UART4_RQR(FLAG)                  (*(uint32_t*)0x40004c18 & FLAG)
#define Get_UART4_ISR(FLAG)                  (*(uint32_t*)0x40004c1c & FLAG)
#define Get_UART4_ICR(FLAG)                  (*(uint32_t*)0x40004c20 & FLAG)
#define Get_UART4_RDR(FLAG)                  (*(uint32_t*)0x40004c24 & FLAG)
#define Get_UART4_TDR(FLAG)                  (*(uint32_t*)0x40004c28 & FLAG)
#define Get_UART5_CR1(FLAG)                  (*(uint32_t*)0x40005000 & FLAG)
#define Get_UART5_CR2(FLAG)                  (*(uint32_t*)0x40005004 & FLAG)
#define Get_UART5_CR3(FLAG)                  (*(uint32_t*)0x40005008 & FLAG)
#define Get_UART5_BRR(FLAG)                  (*(uint32_t*)0x4000500c & FLAG)
#define Get_UART5_GTPR(FLAG)                 (*(uint32_t*)0x40005010 & FLAG)
#define Get_UART5_RTOR(FLAG)                 (*(uint32_t*)0x40005014 & FLAG)
#define Get_UART5_RQR(FLAG)                  (*(uint32_t*)0x40005018 & FLAG)
#define Get_UART5_ISR(FLAG)                  (*(uint32_t*)0x4000501c & FLAG)
#define Get_UART5_ICR(FLAG)                  (*(uint32_t*)0x40005020 & FLAG)
#define Get_UART5_RDR(FLAG)                  (*(uint32_t*)0x40005024 & FLAG)
#define Get_UART5_TDR(FLAG)                  (*(uint32_t*)0x40005028 & FLAG)
#define Get_UART7_CR1(FLAG)                  (*(uint32_t*)0x40007800 & FLAG)
#define Get_UART7_CR2(FLAG)                  (*(uint32_t*)0x40007804 & FLAG)
#define Get_UART7_CR3(FLAG)                  (*(uint32_t*)0x40007808 & FLAG)
#define Get_UART7_BRR(FLAG)                  (*(uint32_t*)0x4000780c & FLAG)
#define Get_UART7_GTPR(FLAG)                 (*(uint32_t*)0x40007810 & FLAG)
#define Get_UART7_RTOR(FLAG)                 (*(uint32_t*)0x40007814 & FLAG)
#define Get_UART7_RQR(FLAG)                  (*(uint32_t*)0x40007818 & FLAG)
#define Get_UART7_ISR(FLAG)                  (*(uint32_t*)0x4000781c & FLAG)
#define Get_UART7_ICR(FLAG)                  (*(uint32_t*)0x40007820 & FLAG)
#define Get_UART7_RDR(FLAG)                  (*(uint32_t*)0x40007824 & FLAG)
#define Get_UART7_TDR(FLAG)                  (*(uint32_t*)0x40007828 & FLAG)
#define Get_UART8_CR1(FLAG)                  (*(uint32_t*)0x40007c00 & FLAG)
#define Get_UART8_CR2(FLAG)                  (*(uint32_t*)0x40007c04 & FLAG)
#define Get_UART8_CR3(FLAG)                  (*(uint32_t*)0x40007c08 & FLAG)
#define Get_UART8_BRR(FLAG)                  (*(uint32_t*)0x40007c0c & FLAG)
#define Get_UART8_GTPR(FLAG)                 (*(uint32_t*)0x40007c10 & FLAG)
#define Get_UART8_RTOR(FLAG)                 (*(uint32_t*)0x40007c14 & FLAG)
#define Get_UART8_RQR(FLAG)                  (*(uint32_t*)0x40007c18 & FLAG)
#define Get_UART8_ISR(FLAG)                  (*(uint32_t*)0x40007c1c & FLAG)
#define Get_UART8_ICR(FLAG)                  (*(uint32_t*)0x40007c20 & FLAG)
#define Get_UART8_RDR(FLAG)                  (*(uint32_t*)0x40007c24 & FLAG)
#define Get_UART8_TDR(FLAG)                  (*(uint32_t*)0x40007c28 & FLAG)
#define Get_USART1_CR1(FLAG)                 (*(uint32_t*)0x40011000 & FLAG)
#define Get_USART1_CR2(FLAG)                 (*(uint32_t*)0x40011004 & FLAG)
#define Get_USART1_CR3(FLAG)                 (*(uint32_t*)0x40011008 & FLAG)
#define Get_USART1_BRR(FLAG)                 (*(uint32_t*)0x4001100c & FLAG)
#define Get_USART1_GTPR(FLAG)                (*(uint32_t*)0x40011010 & FLAG)
#define Get_USART1_RTOR(FLAG)                (*(uint32_t*)0x40011014 & FLAG)
#define Get_USART1_RQR(FLAG)                 (*(uint32_t*)0x40011018 & FLAG)
#define Get_USART1_ISR(FLAG)                 (*(uint32_t*)0x4001101c & FLAG)
#define Get_USART1_ICR(FLAG)                 (*(uint32_t*)0x40011020 & FLAG)
#define Get_USART1_RDR(FLAG)                 (*(uint32_t*)0x40011024 & FLAG)
#define Get_USART1_TDR(FLAG)                 (*(uint32_t*)0x40011028 & FLAG)
#define Get_USART6_CR1(FLAG)                 (*(uint32_t*)0x40011400 & FLAG)
#define Get_USART6_CR2(FLAG)                 (*(uint32_t*)0x40011404 & FLAG)
#define Get_USART6_CR3(FLAG)                 (*(uint32_t*)0x40011408 & FLAG)
#define Get_USART6_BRR(FLAG)                 (*(uint32_t*)0x4001140c & FLAG)
#define Get_USART6_GTPR(FLAG)                (*(uint32_t*)0x40011410 & FLAG)
#define Get_USART6_RTOR(FLAG)                (*(uint32_t*)0x40011414 & FLAG)
#define Get_USART6_RQR(FLAG)                 (*(uint32_t*)0x40011418 & FLAG)
#define Get_USART6_ISR(FLAG)                 (*(uint32_t*)0x4001141c & FLAG)
#define Get_USART6_ICR(FLAG)                 (*(uint32_t*)0x40011420 & FLAG)
#define Get_USART6_RDR(FLAG)                 (*(uint32_t*)0x40011424 & FLAG)
#define Get_USART6_TDR(FLAG)                 (*(uint32_t*)0x40011428 & FLAG)
#define Set_USART2_CR1(FLAG)                 (*(uint32_t*)0x40004400 |= FLAG)
#define Clr_USART2_CR1(FLAG)                 (*(uint32_t*)0x40004400 &= ~FLAG)
#define Set_USART2_CR2(FLAG)                 (*(uint32_t*)0x40004404 |= FLAG)
#define Clr_USART2_CR2(FLAG)                 (*(uint32_t*)0x40004404 &= ~FLAG)
#define Set_USART2_CR3(FLAG)                 (*(uint32_t*)0x40004408 |= FLAG)
#define Clr_USART2_CR3(FLAG)                 (*(uint32_t*)0x40004408 &= ~FLAG)
#define Set_USART2_BRR(FLAG)                 (*(uint32_t*)0x4000440c |= FLAG)
#define Clr_USART2_BRR(FLAG)                 (*(uint32_t*)0x4000440c &= ~FLAG)
#define Set_USART2_GTPR(FLAG)                (*(uint32_t*)0x40004410 |= FLAG)
#define Clr_USART2_GTPR(FLAG)                (*(uint32_t*)0x40004410 &= ~FLAG)
#define Set_USART2_RTOR(FLAG)                (*(uint32_t*)0x40004414 |= FLAG)
#define Clr_USART2_RTOR(FLAG)                (*(uint32_t*)0x40004414 &= ~FLAG)
#define Set_USART2_RQR(FLAG)                 (*(uint32_t*)0x40004418 |= FLAG)
#define Clr_USART2_RQR(FLAG)                 (*(uint32_t*)0x40004418 &= ~FLAG)
#define Set_USART2_ISR(FLAG)                 (*(uint32_t*)0x4000441c |= FLAG)
#define Clr_USART2_ISR(FLAG)                 (*(uint32_t*)0x4000441c &= ~FLAG)
#define Set_USART2_ICR(FLAG)                 (*(uint32_t*)0x40004420 |= FLAG)
#define Clr_USART2_ICR(FLAG)                 (*(uint32_t*)0x40004420 &= ~FLAG)
#define Set_USART2_RDR(FLAG)                 (*(uint32_t*)0x40004424 |= FLAG)
#define Clr_USART2_RDR(FLAG)                 (*(uint32_t*)0x40004424 &= ~FLAG)
#define Set_USART2_TDR(FLAG)                 (*(uint32_t*)0x40004428 |= FLAG)
#define Clr_USART2_TDR(FLAG)                 (*(uint32_t*)0x40004428 &= ~FLAG)
#define Set_USART3_CR1(FLAG)                 (*(uint32_t*)0x40004800 |= FLAG)
#define Clr_USART3_CR1(FLAG)                 (*(uint32_t*)0x40004800 &= ~FLAG)
#define Set_USART3_CR2(FLAG)                 (*(uint32_t*)0x40004804 |= FLAG)
#define Clr_USART3_CR2(FLAG)                 (*(uint32_t*)0x40004804 &= ~FLAG)
#define Set_USART3_CR3(FLAG)                 (*(uint32_t*)0x40004808 |= FLAG)
#define Clr_USART3_CR3(FLAG)                 (*(uint32_t*)0x40004808 &= ~FLAG)
#define Set_USART3_BRR(FLAG)                 (*(uint32_t*)0x4000480c |= FLAG)
#define Clr_USART3_BRR(FLAG)                 (*(uint32_t*)0x4000480c &= ~FLAG)
#define Set_USART3_GTPR(FLAG)                (*(uint32_t*)0x40004810 |= FLAG)
#define Clr_USART3_GTPR(FLAG)                (*(uint32_t*)0x40004810 &= ~FLAG)
#define Set_USART3_RTOR(FLAG)                (*(uint32_t*)0x40004814 |= FLAG)
#define Clr_USART3_RTOR(FLAG)                (*(uint32_t*)0x40004814 &= ~FLAG)
#define Set_USART3_RQR(FLAG)                 (*(uint32_t*)0x40004818 |= FLAG)
#define Clr_USART3_RQR(FLAG)                 (*(uint32_t*)0x40004818 &= ~FLAG)
#define Set_USART3_ISR(FLAG)                 (*(uint32_t*)0x4000481c |= FLAG)
#define Clr_USART3_ISR(FLAG)                 (*(uint32_t*)0x4000481c &= ~FLAG)
#define Set_USART3_ICR(FLAG)                 (*(uint32_t*)0x40004820 |= FLAG)
#define Clr_USART3_ICR(FLAG)                 (*(uint32_t*)0x40004820 &= ~FLAG)
#define Set_USART3_RDR(FLAG)                 (*(uint32_t*)0x40004824 |= FLAG)
#define Clr_USART3_RDR(FLAG)                 (*(uint32_t*)0x40004824 &= ~FLAG)
#define Set_USART3_TDR(FLAG)                 (*(uint32_t*)0x40004828 |= FLAG)
#define Clr_USART3_TDR(FLAG)                 (*(uint32_t*)0x40004828 &= ~FLAG)
#define Set_UART4_CR1(FLAG)                  (*(uint32_t*)0x40004c00 |= FLAG)
#define Clr_UART4_CR1(FLAG)                  (*(uint32_t*)0x40004c00 &= ~FLAG)
#define Set_UART4_CR2(FLAG)                  (*(uint32_t*)0x40004c04 |= FLAG)
#define Clr_UART4_CR2(FLAG)                  (*(uint32_t*)0x40004c04 &= ~FLAG)
#define Set_UART4_CR3(FLAG)                  (*(uint32_t*)0x40004c08 |= FLAG)
#define Clr_UART4_CR3(FLAG)                  (*(uint32_t*)0x40004c08 &= ~FLAG)
#define Set_UART4_BRR(FLAG)                  (*(uint32_t*)0x40004c0c |= FLAG)
#define Clr_UART4_BRR(FLAG)                  (*(uint32_t*)0x40004c0c &= ~FLAG)
#define Set_UART4_GTPR(FLAG)                 (*(uint32_t*)0x40004c10 |= FLAG)
#define Clr_UART4_GTPR(FLAG)                 (*(uint32_t*)0x40004c10 &= ~FLAG)
#define Set_UART4_RTOR(FLAG)                 (*(uint32_t*)0x40004c14 |= FLAG)
#define Clr_UART4_RTOR(FLAG)                 (*(uint32_t*)0x40004c14 &= ~FLAG)
#define Set_UART4_RQR(FLAG)                  (*(uint32_t*)0x40004c18 |= FLAG)
#define Clr_UART4_RQR(FLAG)                  (*(uint32_t*)0x40004c18 &= ~FLAG)
#define Set_UART4_ISR(FLAG)                  (*(uint32_t*)0x40004c1c |= FLAG)
#define Clr_UART4_ISR(FLAG)                  (*(uint32_t*)0x40004c1c &= ~FLAG)
#define Set_UART4_ICR(FLAG)                  (*(uint32_t*)0x40004c20 |= FLAG)
#define Clr_UART4_ICR(FLAG)                  (*(uint32_t*)0x40004c20 &= ~FLAG)
#define Set_UART4_RDR(FLAG)                  (*(uint32_t*)0x40004c24 |= FLAG)
#define Clr_UART4_RDR(FLAG)                  (*(uint32_t*)0x40004c24 &= ~FLAG)
#define Set_UART4_TDR(FLAG)                  (*(uint32_t*)0x40004c28 |= FLAG)
#define Clr_UART4_TDR(FLAG)                  (*(uint32_t*)0x40004c28 &= ~FLAG)
#define Set_UART5_CR1(FLAG)                  (*(uint32_t*)0x40005000 |= FLAG)
#define Clr_UART5_CR1(FLAG)                  (*(uint32_t*)0x40005000 &= ~FLAG)
#define Set_UART5_CR2(FLAG)                  (*(uint32_t*)0x40005004 |= FLAG)
#define Clr_UART5_CR2(FLAG)                  (*(uint32_t*)0x40005004 &= ~FLAG)
#define Set_UART5_CR3(FLAG)                  (*(uint32_t*)0x40005008 |= FLAG)
#define Clr_UART5_CR3(FLAG)                  (*(uint32_t*)0x40005008 &= ~FLAG)
#define Set_UART5_BRR(FLAG)                  (*(uint32_t*)0x4000500c |= FLAG)
#define Clr_UART5_BRR(FLAG)                  (*(uint32_t*)0x4000500c &= ~FLAG)
#define Set_UART5_GTPR(FLAG)                 (*(uint32_t*)0x40005010 |= FLAG)
#define Clr_UART5_GTPR(FLAG)                 (*(uint32_t*)0x40005010 &= ~FLAG)
#define Set_UART5_RTOR(FLAG)                 (*(uint32_t*)0x40005014 |= FLAG)
#define Clr_UART5_RTOR(FLAG)                 (*(uint32_t*)0x40005014 &= ~FLAG)
#define Set_UART5_RQR(FLAG)                  (*(uint32_t*)0x40005018 |= FLAG)
#define Clr_UART5_RQR(FLAG)                  (*(uint32_t*)0x40005018 &= ~FLAG)
#define Set_UART5_ISR(FLAG)                  (*(uint32_t*)0x4000501c |= FLAG)
#define Clr_UART5_ISR(FLAG)                  (*(uint32_t*)0x4000501c &= ~FLAG)
#define Set_UART5_ICR(FLAG)                  (*(uint32_t*)0x40005020 |= FLAG)
#define Clr_UART5_ICR(FLAG)                  (*(uint32_t*)0x40005020 &= ~FLAG)
#define Set_UART5_RDR(FLAG)                  (*(uint32_t*)0x40005024 |= FLAG)
#define Clr_UART5_RDR(FLAG)                  (*(uint32_t*)0x40005024 &= ~FLAG)
#define Set_UART5_TDR(FLAG)                  (*(uint32_t*)0x40005028 |= FLAG)
#define Clr_UART5_TDR(FLAG)                  (*(uint32_t*)0x40005028 &= ~FLAG)
#define Set_UART7_CR1(FLAG)                  (*(uint32_t*)0x40007800 |= FLAG)
#define Clr_UART7_CR1(FLAG)                  (*(uint32_t*)0x40007800 &= ~FLAG)
#define Set_UART7_CR2(FLAG)                  (*(uint32_t*)0x40007804 |= FLAG)
#define Clr_UART7_CR2(FLAG)                  (*(uint32_t*)0x40007804 &= ~FLAG)
#define Set_UART7_CR3(FLAG)                  (*(uint32_t*)0x40007808 |= FLAG)
#define Clr_UART7_CR3(FLAG)                  (*(uint32_t*)0x40007808 &= ~FLAG)
#define Set_UART7_BRR(FLAG)                  (*(uint32_t*)0x4000780c |= FLAG)
#define Clr_UART7_BRR(FLAG)                  (*(uint32_t*)0x4000780c &= ~FLAG)
#define Set_UART7_GTPR(FLAG)                 (*(uint32_t*)0x40007810 |= FLAG)
#define Clr_UART7_GTPR(FLAG)                 (*(uint32_t*)0x40007810 &= ~FLAG)
#define Set_UART7_RTOR(FLAG)                 (*(uint32_t*)0x40007814 |= FLAG)
#define Clr_UART7_RTOR(FLAG)                 (*(uint32_t*)0x40007814 &= ~FLAG)
#define Set_UART7_RQR(FLAG)                  (*(uint32_t*)0x40007818 |= FLAG)
#define Clr_UART7_RQR(FLAG)                  (*(uint32_t*)0x40007818 &= ~FLAG)
#define Set_UART7_ISR(FLAG)                  (*(uint32_t*)0x4000781c |= FLAG)
#define Clr_UART7_ISR(FLAG)                  (*(uint32_t*)0x4000781c &= ~FLAG)
#define Set_UART7_ICR(FLAG)                  (*(uint32_t*)0x40007820 |= FLAG)
#define Clr_UART7_ICR(FLAG)                  (*(uint32_t*)0x40007820 &= ~FLAG)
#define Set_UART7_RDR(FLAG)                  (*(uint32_t*)0x40007824 |= FLAG)
#define Clr_UART7_RDR(FLAG)                  (*(uint32_t*)0x40007824 &= ~FLAG)
#define Set_UART7_TDR(FLAG)                  (*(uint32_t*)0x40007828 |= FLAG)
#define Clr_UART7_TDR(FLAG)                  (*(uint32_t*)0x40007828 &= ~FLAG)
#define Set_UART8_CR1(FLAG)                  (*(uint32_t*)0x40007c00 |= FLAG)
#define Clr_UART8_CR1(FLAG)                  (*(uint32_t*)0x40007c00 &= ~FLAG)
#define Set_UART8_CR2(FLAG)                  (*(uint32_t*)0x40007c04 |= FLAG)
#define Clr_UART8_CR2(FLAG)                  (*(uint32_t*)0x40007c04 &= ~FLAG)
#define Set_UART8_CR3(FLAG)                  (*(uint32_t*)0x40007c08 |= FLAG)
#define Clr_UART8_CR3(FLAG)                  (*(uint32_t*)0x40007c08 &= ~FLAG)
#define Set_UART8_BRR(FLAG)                  (*(uint32_t*)0x40007c0c |= FLAG)
#define Clr_UART8_BRR(FLAG)                  (*(uint32_t*)0x40007c0c &= ~FLAG)
#define Set_UART8_GTPR(FLAG)                 (*(uint32_t*)0x40007c10 |= FLAG)
#define Clr_UART8_GTPR(FLAG)                 (*(uint32_t*)0x40007c10 &= ~FLAG)
#define Set_UART8_RTOR(FLAG)                 (*(uint32_t*)0x40007c14 |= FLAG)
#define Clr_UART8_RTOR(FLAG)                 (*(uint32_t*)0x40007c14 &= ~FLAG)
#define Set_UART8_RQR(FLAG)                  (*(uint32_t*)0x40007c18 |= FLAG)
#define Clr_UART8_RQR(FLAG)                  (*(uint32_t*)0x40007c18 &= ~FLAG)
#define Set_UART8_ISR(FLAG)                  (*(uint32_t*)0x40007c1c |= FLAG)
#define Clr_UART8_ISR(FLAG)                  (*(uint32_t*)0x40007c1c &= ~FLAG)
#define Set_UART8_ICR(FLAG)                  (*(uint32_t*)0x40007c20 |= FLAG)
#define Clr_UART8_ICR(FLAG)                  (*(uint32_t*)0x40007c20 &= ~FLAG)
#define Set_UART8_RDR(FLAG)                  (*(uint32_t*)0x40007c24 |= FLAG)
#define Clr_UART8_RDR(FLAG)                  (*(uint32_t*)0x40007c24 &= ~FLAG)
#define Set_UART8_TDR(FLAG)                  (*(uint32_t*)0x40007c28 |= FLAG)
#define Clr_UART8_TDR(FLAG)                  (*(uint32_t*)0x40007c28 &= ~FLAG)
#define Set_USART1_CR1(FLAG)                 (*(uint32_t*)0x40011000 |= FLAG)
#define Clr_USART1_CR1(FLAG)                 (*(uint32_t*)0x40011000 &= ~FLAG)
#define Set_USART1_CR2(FLAG)                 (*(uint32_t*)0x40011004 |= FLAG)
#define Clr_USART1_CR2(FLAG)                 (*(uint32_t*)0x40011004 &= ~FLAG)
#define Set_USART1_CR3(FLAG)                 (*(uint32_t*)0x40011008 |= FLAG)
#define Clr_USART1_CR3(FLAG)                 (*(uint32_t*)0x40011008 &= ~FLAG)
#define Set_USART1_BRR(FLAG)                 (*(uint32_t*)0x4001100c |= FLAG)
#define Clr_USART1_BRR(FLAG)                 (*(uint32_t*)0x4001100c &= ~FLAG)
#define Set_USART1_GTPR(FLAG)                (*(uint32_t*)0x40011010 |= FLAG)
#define Clr_USART1_GTPR(FLAG)                (*(uint32_t*)0x40011010 &= ~FLAG)
#define Set_USART1_RTOR(FLAG)                (*(uint32_t*)0x40011014 |= FLAG)
#define Clr_USART1_RTOR(FLAG)                (*(uint32_t*)0x40011014 &= ~FLAG)
#define Set_USART1_RQR(FLAG)                 (*(uint32_t*)0x40011018 |= FLAG)
#define Clr_USART1_RQR(FLAG)                 (*(uint32_t*)0x40011018 &= ~FLAG)
#define Set_USART1_ISR(FLAG)                 (*(uint32_t*)0x4001101c |= FLAG)
#define Clr_USART1_ISR(FLAG)                 (*(uint32_t*)0x4001101c &= ~FLAG)
#define Set_USART1_ICR(FLAG)                 (*(uint32_t*)0x40011020 |= FLAG)
#define Clr_USART1_ICR(FLAG)                 (*(uint32_t*)0x40011020 &= ~FLAG)
#define Set_USART1_RDR(FLAG)                 (*(uint32_t*)0x40011024 |= FLAG)
#define Clr_USART1_RDR(FLAG)                 (*(uint32_t*)0x40011024 &= ~FLAG)
#define Set_USART1_TDR(FLAG)                 (*(uint32_t*)0x40011028 |= FLAG)
#define Clr_USART1_TDR(FLAG)                 (*(uint32_t*)0x40011028 &= ~FLAG)
#define Set_USART6_CR1(FLAG)                 (*(uint32_t*)0x40011400 |= FLAG)
#define Clr_USART6_CR1(FLAG)                 (*(uint32_t*)0x40011400 &= ~FLAG)
#define Set_USART6_CR2(FLAG)                 (*(uint32_t*)0x40011404 |= FLAG)
#define Clr_USART6_CR2(FLAG)                 (*(uint32_t*)0x40011404 &= ~FLAG)
#define Set_USART6_CR3(FLAG)                 (*(uint32_t*)0x40011408 |= FLAG)
#define Clr_USART6_CR3(FLAG)                 (*(uint32_t*)0x40011408 &= ~FLAG)
#define Set_USART6_BRR(FLAG)                 (*(uint32_t*)0x4001140c |= FLAG)
#define Clr_USART6_BRR(FLAG)                 (*(uint32_t*)0x4001140c &= ~FLAG)
#define Set_USART6_GTPR(FLAG)                (*(uint32_t*)0x40011410 |= FLAG)
#define Clr_USART6_GTPR(FLAG)                (*(uint32_t*)0x40011410 &= ~FLAG)
#define Set_USART6_RTOR(FLAG)                (*(uint32_t*)0x40011414 |= FLAG)
#define Clr_USART6_RTOR(FLAG)                (*(uint32_t*)0x40011414 &= ~FLAG)
#define Set_USART6_RQR(FLAG)                 (*(uint32_t*)0x40011418 |= FLAG)
#define Clr_USART6_RQR(FLAG)                 (*(uint32_t*)0x40011418 &= ~FLAG)
#define Set_USART6_ISR(FLAG)                 (*(uint32_t*)0x4001141c |= FLAG)
#define Clr_USART6_ISR(FLAG)                 (*(uint32_t*)0x4001141c &= ~FLAG)
#define Set_USART6_ICR(FLAG)                 (*(uint32_t*)0x40011420 |= FLAG)
#define Clr_USART6_ICR(FLAG)                 (*(uint32_t*)0x40011420 &= ~FLAG)
#define Set_USART6_RDR(FLAG)                 (*(uint32_t*)0x40011424 |= FLAG)
#define Clr_USART6_RDR(FLAG)                 (*(uint32_t*)0x40011424 &= ~FLAG)
#define Set_USART6_TDR(FLAG)                 (*(uint32_t*)0x40011428 |= FLAG)
#define Clr_USART6_TDR(FLAG)                 (*(uint32_t*)0x40011428 &= ~FLAG)
#define  _USART2_CR1_M1                                      (0x1 << 28)    // Word length
#define  _USART2_CR1_EOBIE                                   (0x1 << 27)    // End of Block interrupt enable
#define  _USART2_CR1_RTOIE                                   (0x1 << 26)    // Receiver timeout interrupt enable
#define  _USART2_CR1_DEAT4                                   (0x1 << 25)    // Driver Enable assertion time
#define  _USART2_CR1_DEAT3                                   (0x1 << 24)    // DEAT3
#define  _USART2_CR1_DEAT2                                   (0x1 << 23)    // DEAT2
#define  _USART2_CR1_DEAT1                                   (0x1 << 22)    // DEAT1
#define  _USART2_CR1_DEAT0                                   (0x1 << 21)    // DEAT0
#define  _USART2_CR1_DEDT4                                   (0x1 << 20)    // Driver Enable de-assertion time
#define  _USART2_CR1_DEDT3                                   (0x1 << 19)    // DEDT3
#define  _USART2_CR1_DEDT2                                   (0x1 << 18)    // DEDT2
#define  _USART2_CR1_DEDT1                                   (0x1 << 17)    // DEDT1
#define  _USART2_CR1_DEDT0                                   (0x1 << 16)    // DEDT0
#define  _USART2_CR1_OVER8                                   (0x1 << 15)    // Oversampling mode
#define  _USART2_CR1_CMIE                                    (0x1 << 14)    // Character match interrupt enable
#define  _USART2_CR1_MME                                     (0x1 << 13)    // Mute mode enable
#define  _USART2_CR1_M0                                      (0x1 << 12)    // Word length
#define  _USART2_CR1_WAKE                                    (0x1 << 11)    // Receiver wakeup method
#define  _USART2_CR1_PCE                                     (0x1 << 10)    // Parity control enable
#define  _USART2_CR1_PS                                      (0x1 << 9)    // Parity selection
#define  _USART2_CR1_PEIE                                    (0x1 << 8)    // PE interrupt enable
#define  _USART2_CR1_TXEIE                                   (0x1 << 7)    // interrupt enable
#define  _USART2_CR1_TCIE                                    (0x1 << 6)    // Transmission complete interrupt enable
#define  _USART2_CR1_RXNEIE                                  (0x1 << 5)    // RXNE interrupt enable
#define  _USART2_CR1_IDLEIE                                  (0x1 << 4)    // IDLE interrupt enable
#define  _USART2_CR1_TE                                      (0x1 << 3)    // Transmitter enable
#define  _USART2_CR1_RE                                      (0x1 << 2)    // Receiver enable
#define  _USART2_CR1_UESM                                    (0x1 << 1)    // USART enable in Stop mode
#define  _USART2_CR1_UE                                      (0x1 << 0)    // USART enable
#define  _USART2_CR2_ADD4_7                                  (0xf << 28)    // Address of the USART node
#define  _USART2_CR2_ADD0_3                                  (0xf << 24)    // Address of the USART node
#define  _USART2_CR2_RTOEN                                   (0x1 << 23)    // Receiver timeout enable
#define  _USART2_CR2_ABRMOD1                                 (0x1 << 22)    // Auto baud rate mode
#define  _USART2_CR2_ABRMOD0                                 (0x1 << 21)    // ABRMOD0
#define  _USART2_CR2_ABREN                                   (0x1 << 20)    // Auto baud rate enable
#define  _USART2_CR2_MSBFIRST                                (0x1 << 19)    // Most significant bit first
#define  _USART2_CR2_TAINV                                   (0x1 << 18)    // Binary data inversion
#define  _USART2_CR2_TXINV                                   (0x1 << 17)    // TX pin active level inversion
#define  _USART2_CR2_RXINV                                   (0x1 << 16)    // RX pin active level inversion
#define  _USART2_CR2_SWAP                                    (0x1 << 15)    // Swap TX/RX pins
#define  _USART2_CR2_LINEN                                   (0x1 << 14)    // LIN mode enable
#define  _USART2_CR2_STOP                                    (0x3 << 12)    // STOP bits
#define  _USART2_CR2_CLKEN                                   (0x1 << 11)    // Clock enable
#define  _USART2_CR2_CPOL                                    (0x1 << 10)    // Clock polarity
#define  _USART2_CR2_CPHA                                    (0x1 << 9)    // Clock phase
#define  _USART2_CR2_LBCL                                    (0x1 << 8)    // Last bit clock pulse
#define  _USART2_CR2_LBDIE                                   (0x1 << 6)    // LIN break detection interrupt enable
#define  _USART2_CR2_LBDL                                    (0x1 << 5)    // LIN break detection length
#define  _USART2_CR2_ADDM7                                   (0x1 << 4)    // 7-bit Address Detection/4-bit Address Detection
#define  _USART2_CR3_WUFIE                                   (0x1 << 22)    // Wakeup from Stop mode interrupt enable
#define  _USART2_CR3_WUS                                     (0x3 << 20)    // Wakeup from Stop mode interrupt flag selection
#define  _USART2_CR3_SCARCNT                                 (0x7 << 17)    // Smartcard auto-retry count
#define  _USART2_CR3_DEP                                     (0x1 << 15)    // Driver enable polarity selection
#define  _USART2_CR3_DEM                                     (0x1 << 14)    // Driver enable mode
#define  _USART2_CR3_DDRE                                    (0x1 << 13)    // DMA Disable on Reception Error
#define  _USART2_CR3_OVRDIS                                  (0x1 << 12)    // Overrun Disable
#define  _USART2_CR3_ONEBIT                                  (0x1 << 11)    // One sample bit method enable
#define  _USART2_CR3_CTSIE                                   (0x1 << 10)    // CTS interrupt enable
#define  _USART2_CR3_CTSE                                    (0x1 << 9)    // CTS enable
#define  _USART2_CR3_RTSE                                    (0x1 << 8)    // RTS enable
#define  _USART2_CR3_DMAT                                    (0x1 << 7)    // DMA enable transmitter
#define  _USART2_CR3_DMAR                                    (0x1 << 6)    // DMA enable receiver
#define  _USART2_CR3_SCEN                                    (0x1 << 5)    // Smartcard mode enable
#define  _USART2_CR3_NACK                                    (0x1 << 4)    // Smartcard NACK enable
#define  _USART2_CR3_HDSEL                                   (0x1 << 3)    // Half-duplex selection
#define  _USART2_CR3_IRLP                                    (0x1 << 2)    // Ir low-power
#define  _USART2_CR3_IREN                                    (0x1 << 1)    // Ir mode enable
#define  _USART2_CR3_EIE                                     (0x1 << 0)    // Error interrupt enable
#define  _USART2_BRR_DIV_Mantissa                            (0xfff << 4)    // DIV_Mantissa
#define  _USART2_BRR_DIV_Fraction                            (0xf << 0)    // DIV_Fraction
#define  _USART2_GTPR_GT                                     (0xff << 8)    // Guard time value
#define  _USART2_GTPR_PSC                                    (0xff << 0)    // Prescaler value
#define  _USART2_RTOR_BLEN                                   (0xff << 24)    // Block Length
#define  _USART2_RTOR_RTO                                    (0xffffff << 0)    // Receiver timeout value
#define  _USART2_RQR_TXFRQ                                   (0x1 << 4)    // Transmit data flush request
#define  _USART2_RQR_RXFRQ                                   (0x1 << 3)    // Receive data flush request
#define  _USART2_RQR_MMRQ                                    (0x1 << 2)    // Mute mode request
#define  _USART2_RQR_SBKRQ                                   (0x1 << 1)    // Send break request
#define  _USART2_RQR_ABRRQ                                   (0x1 << 0)    // Auto baud rate request
#define  _USART2_ISR_REACK                                   (0x1 << 22)    // REACK
#define  _USART2_ISR_TEACK                                   (0x1 << 21)    // TEACK
#define  _USART2_ISR_WUF                                     (0x1 << 20)    // WUF
#define  _USART2_ISR_RWU                                     (0x1 << 19)    // RWU
#define  _USART2_ISR_SBKF                                    (0x1 << 18)    // SBKF
#define  _USART2_ISR_CMF                                     (0x1 << 17)    // CMF
#define  _USART2_ISR_BUSY                                    (0x1 << 16)    // BUSY
#define  _USART2_ISR_ABRF                                    (0x1 << 15)    // ABRF
#define  _USART2_ISR_ABRE                                    (0x1 << 14)    // ABRE
#define  _USART2_ISR_EOBF                                    (0x1 << 12)    // EOBF
#define  _USART2_ISR_RTOF                                    (0x1 << 11)    // RTOF
#define  _USART2_ISR_CTS                                     (0x1 << 10)    // CTS
#define  _USART2_ISR_CTSIF                                   (0x1 << 9)    // CTSIF
#define  _USART2_ISR_LBDF                                    (0x1 << 8)    // LBDF
#define  _USART2_ISR_TXE                                     (0x1 << 7)    // TXE
#define  _USART2_ISR_TC                                      (0x1 << 6)    // TC
#define  _USART2_ISR_RXNE                                    (0x1 << 5)    // RXNE
#define  _USART2_ISR_IDLE                                    (0x1 << 4)    // IDLE
#define  _USART2_ISR_ORE                                     (0x1 << 3)    // ORE
#define  _USART2_ISR_NF                                      (0x1 << 2)    // NF
#define  _USART2_ISR_FE                                      (0x1 << 1)    // FE
#define  _USART2_ISR_PE                                      (0x1 << 0)    // PE
#define  _USART2_ICR_WUCF                                    (0x1 << 20)    // Wakeup from Stop mode clear flag
#define  _USART2_ICR_CMCF                                    (0x1 << 17)    // Character match clear flag
#define  _USART2_ICR_EOBCF                                   (0x1 << 12)    // End of block clear flag
#define  _USART2_ICR_RTOCF                                   (0x1 << 11)    // Receiver timeout clear flag
#define  _USART2_ICR_CTSCF                                   (0x1 << 9)    // CTS clear flag
#define  _USART2_ICR_LBDCF                                   (0x1 << 8)    // LIN break detection clear flag
#define  _USART2_ICR_TCCF                                    (0x1 << 6)    // Transmission complete clear flag
#define  _USART2_ICR_IDLECF                                  (0x1 << 4)    // Idle line detected clear flag
#define  _USART2_ICR_ORECF                                   (0x1 << 3)    // Overrun error clear flag
#define  _USART2_ICR_NCF                                     (0x1 << 2)    // Noise detected clear flag
#define  _USART2_ICR_FECF                                    (0x1 << 1)    // Framing error clear flag
#define  _USART2_ICR_PECF                                    (0x1 << 0)    // Parity error clear flag
#define  _USART2_RDR_RDR                                     (0x1ff << 0)    // Receive data value
#define  _USART2_TDR_TDR                                     (0x1ff << 0)    // Transmit data value
#define  _USART3_CR1_M1                                      (0x1 << 28)    // Word length
#define  _USART3_CR1_EOBIE                                   (0x1 << 27)    // End of Block interrupt enable
#define  _USART3_CR1_RTOIE                                   (0x1 << 26)    // Receiver timeout interrupt enable
#define  _USART3_CR1_DEAT4                                   (0x1 << 25)    // Driver Enable assertion time
#define  _USART3_CR1_DEAT3                                   (0x1 << 24)    // DEAT3
#define  _USART3_CR1_DEAT2                                   (0x1 << 23)    // DEAT2
#define  _USART3_CR1_DEAT1                                   (0x1 << 22)    // DEAT1
#define  _USART3_CR1_DEAT0                                   (0x1 << 21)    // DEAT0
#define  _USART3_CR1_DEDT4                                   (0x1 << 20)    // Driver Enable de-assertion time
#define  _USART3_CR1_DEDT3                                   (0x1 << 19)    // DEDT3
#define  _USART3_CR1_DEDT2                                   (0x1 << 18)    // DEDT2
#define  _USART3_CR1_DEDT1                                   (0x1 << 17)    // DEDT1
#define  _USART3_CR1_DEDT0                                   (0x1 << 16)    // DEDT0
#define  _USART3_CR1_OVER8                                   (0x1 << 15)    // Oversampling mode
#define  _USART3_CR1_CMIE                                    (0x1 << 14)    // Character match interrupt enable
#define  _USART3_CR1_MME                                     (0x1 << 13)    // Mute mode enable
#define  _USART3_CR1_M0                                      (0x1 << 12)    // Word length
#define  _USART3_CR1_WAKE                                    (0x1 << 11)    // Receiver wakeup method
#define  _USART3_CR1_PCE                                     (0x1 << 10)    // Parity control enable
#define  _USART3_CR1_PS                                      (0x1 << 9)    // Parity selection
#define  _USART3_CR1_PEIE                                    (0x1 << 8)    // PE interrupt enable
#define  _USART3_CR1_TXEIE                                   (0x1 << 7)    // interrupt enable
#define  _USART3_CR1_TCIE                                    (0x1 << 6)    // Transmission complete interrupt enable
#define  _USART3_CR1_RXNEIE                                  (0x1 << 5)    // RXNE interrupt enable
#define  _USART3_CR1_IDLEIE                                  (0x1 << 4)    // IDLE interrupt enable
#define  _USART3_CR1_TE                                      (0x1 << 3)    // Transmitter enable
#define  _USART3_CR1_RE                                      (0x1 << 2)    // Receiver enable
#define  _USART3_CR1_UESM                                    (0x1 << 1)    // USART enable in Stop mode
#define  _USART3_CR1_UE                                      (0x1 << 0)    // USART enable
#define  _USART3_CR2_ADD4_7                                  (0xf << 28)    // Address of the USART node
#define  _USART3_CR2_ADD0_3                                  (0xf << 24)    // Address of the USART node
#define  _USART3_CR2_RTOEN                                   (0x1 << 23)    // Receiver timeout enable
#define  _USART3_CR2_ABRMOD1                                 (0x1 << 22)    // Auto baud rate mode
#define  _USART3_CR2_ABRMOD0                                 (0x1 << 21)    // ABRMOD0
#define  _USART3_CR2_ABREN                                   (0x1 << 20)    // Auto baud rate enable
#define  _USART3_CR2_MSBFIRST                                (0x1 << 19)    // Most significant bit first
#define  _USART3_CR2_TAINV                                   (0x1 << 18)    // Binary data inversion
#define  _USART3_CR2_TXINV                                   (0x1 << 17)    // TX pin active level inversion
#define  _USART3_CR2_RXINV                                   (0x1 << 16)    // RX pin active level inversion
#define  _USART3_CR2_SWAP                                    (0x1 << 15)    // Swap TX/RX pins
#define  _USART3_CR2_LINEN                                   (0x1 << 14)    // LIN mode enable
#define  _USART3_CR2_STOP                                    (0x3 << 12)    // STOP bits
#define  _USART3_CR2_CLKEN                                   (0x1 << 11)    // Clock enable
#define  _USART3_CR2_CPOL                                    (0x1 << 10)    // Clock polarity
#define  _USART3_CR2_CPHA                                    (0x1 << 9)    // Clock phase
#define  _USART3_CR2_LBCL                                    (0x1 << 8)    // Last bit clock pulse
#define  _USART3_CR2_LBDIE                                   (0x1 << 6)    // LIN break detection interrupt enable
#define  _USART3_CR2_LBDL                                    (0x1 << 5)    // LIN break detection length
#define  _USART3_CR2_ADDM7                                   (0x1 << 4)    // 7-bit Address Detection/4-bit Address Detection
#define  _USART3_CR3_WUFIE                                   (0x1 << 22)    // Wakeup from Stop mode interrupt enable
#define  _USART3_CR3_WUS                                     (0x3 << 20)    // Wakeup from Stop mode interrupt flag selection
#define  _USART3_CR3_SCARCNT                                 (0x7 << 17)    // Smartcard auto-retry count
#define  _USART3_CR3_DEP                                     (0x1 << 15)    // Driver enable polarity selection
#define  _USART3_CR3_DEM                                     (0x1 << 14)    // Driver enable mode
#define  _USART3_CR3_DDRE                                    (0x1 << 13)    // DMA Disable on Reception Error
#define  _USART3_CR3_OVRDIS                                  (0x1 << 12)    // Overrun Disable
#define  _USART3_CR3_ONEBIT                                  (0x1 << 11)    // One sample bit method enable
#define  _USART3_CR3_CTSIE                                   (0x1 << 10)    // CTS interrupt enable
#define  _USART3_CR3_CTSE                                    (0x1 << 9)    // CTS enable
#define  _USART3_CR3_RTSE                                    (0x1 << 8)    // RTS enable
#define  _USART3_CR3_DMAT                                    (0x1 << 7)    // DMA enable transmitter
#define  _USART3_CR3_DMAR                                    (0x1 << 6)    // DMA enable receiver
#define  _USART3_CR3_SCEN                                    (0x1 << 5)    // Smartcard mode enable
#define  _USART3_CR3_NACK                                    (0x1 << 4)    // Smartcard NACK enable
#define  _USART3_CR3_HDSEL                                   (0x1 << 3)    // Half-duplex selection
#define  _USART3_CR3_IRLP                                    (0x1 << 2)    // Ir low-power
#define  _USART3_CR3_IREN                                    (0x1 << 1)    // Ir mode enable
#define  _USART3_CR3_EIE                                     (0x1 << 0)    // Error interrupt enable
#define  _USART3_BRR_DIV_Mantissa                            (0xfff << 4)    // DIV_Mantissa
#define  _USART3_BRR_DIV_Fraction                            (0xf << 0)    // DIV_Fraction
#define  _USART3_GTPR_GT                                     (0xff << 8)    // Guard time value
#define  _USART3_GTPR_PSC                                    (0xff << 0)    // Prescaler value
#define  _USART3_RTOR_BLEN                                   (0xff << 24)    // Block Length
#define  _USART3_RTOR_RTO                                    (0xffffff << 0)    // Receiver timeout value
#define  _USART3_RQR_TXFRQ                                   (0x1 << 4)    // Transmit data flush request
#define  _USART3_RQR_RXFRQ                                   (0x1 << 3)    // Receive data flush request
#define  _USART3_RQR_MMRQ                                    (0x1 << 2)    // Mute mode request
#define  _USART3_RQR_SBKRQ                                   (0x1 << 1)    // Send break request
#define  _USART3_RQR_ABRRQ                                   (0x1 << 0)    // Auto baud rate request
#define  _USART3_ISR_REACK                                   (0x1 << 22)    // REACK
#define  _USART3_ISR_TEACK                                   (0x1 << 21)    // TEACK
#define  _USART3_ISR_WUF                                     (0x1 << 20)    // WUF
#define  _USART3_ISR_RWU                                     (0x1 << 19)    // RWU
#define  _USART3_ISR_SBKF                                    (0x1 << 18)    // SBKF
#define  _USART3_ISR_CMF                                     (0x1 << 17)    // CMF
#define  _USART3_ISR_BUSY                                    (0x1 << 16)    // BUSY
#define  _USART3_ISR_ABRF                                    (0x1 << 15)    // ABRF
#define  _USART3_ISR_ABRE                                    (0x1 << 14)    // ABRE
#define  _USART3_ISR_EOBF                                    (0x1 << 12)    // EOBF
#define  _USART3_ISR_RTOF                                    (0x1 << 11)    // RTOF
#define  _USART3_ISR_CTS                                     (0x1 << 10)    // CTS
#define  _USART3_ISR_CTSIF                                   (0x1 << 9)    // CTSIF
#define  _USART3_ISR_LBDF                                    (0x1 << 8)    // LBDF
#define  _USART3_ISR_TXE                                     (0x1 << 7)    // TXE
#define  _USART3_ISR_TC                                      (0x1 << 6)    // TC
#define  _USART3_ISR_RXNE                                    (0x1 << 5)    // RXNE
#define  _USART3_ISR_IDLE                                    (0x1 << 4)    // IDLE
#define  _USART3_ISR_ORE                                     (0x1 << 3)    // ORE
#define  _USART3_ISR_NF                                      (0x1 << 2)    // NF
#define  _USART3_ISR_FE                                      (0x1 << 1)    // FE
#define  _USART3_ISR_PE                                      (0x1 << 0)    // PE
#define  _USART3_ICR_WUCF                                    (0x1 << 20)    // Wakeup from Stop mode clear flag
#define  _USART3_ICR_CMCF                                    (0x1 << 17)    // Character match clear flag
#define  _USART3_ICR_EOBCF                                   (0x1 << 12)    // End of block clear flag
#define  _USART3_ICR_RTOCF                                   (0x1 << 11)    // Receiver timeout clear flag
#define  _USART3_ICR_CTSCF                                   (0x1 << 9)    // CTS clear flag
#define  _USART3_ICR_LBDCF                                   (0x1 << 8)    // LIN break detection clear flag
#define  _USART3_ICR_TCCF                                    (0x1 << 6)    // Transmission complete clear flag
#define  _USART3_ICR_IDLECF                                  (0x1 << 4)    // Idle line detected clear flag
#define  _USART3_ICR_ORECF                                   (0x1 << 3)    // Overrun error clear flag
#define  _USART3_ICR_NCF                                     (0x1 << 2)    // Noise detected clear flag
#define  _USART3_ICR_FECF                                    (0x1 << 1)    // Framing error clear flag
#define  _USART3_ICR_PECF                                    (0x1 << 0)    // Parity error clear flag
#define  _USART3_RDR_RDR                                     (0x1ff << 0)    // Receive data value
#define  _USART3_TDR_TDR                                     (0x1ff << 0)    // Transmit data value
#define  _UART4_CR1_M1                                       (0x1 << 28)    // Word length
#define  _UART4_CR1_EOBIE                                    (0x1 << 27)    // End of Block interrupt enable
#define  _UART4_CR1_RTOIE                                    (0x1 << 26)    // Receiver timeout interrupt enable
#define  _UART4_CR1_DEAT4                                    (0x1 << 25)    // Driver Enable assertion time
#define  _UART4_CR1_DEAT3                                    (0x1 << 24)    // DEAT3
#define  _UART4_CR1_DEAT2                                    (0x1 << 23)    // DEAT2
#define  _UART4_CR1_DEAT1                                    (0x1 << 22)    // DEAT1
#define  _UART4_CR1_DEAT0                                    (0x1 << 21)    // DEAT0
#define  _UART4_CR1_DEDT4                                    (0x1 << 20)    // Driver Enable de-assertion time
#define  _UART4_CR1_DEDT3                                    (0x1 << 19)    // DEDT3
#define  _UART4_CR1_DEDT2                                    (0x1 << 18)    // DEDT2
#define  _UART4_CR1_DEDT1                                    (0x1 << 17)    // DEDT1
#define  _UART4_CR1_DEDT0                                    (0x1 << 16)    // DEDT0
#define  _UART4_CR1_OVER8                                    (0x1 << 15)    // Oversampling mode
#define  _UART4_CR1_CMIE                                     (0x1 << 14)    // Character match interrupt enable
#define  _UART4_CR1_MME                                      (0x1 << 13)    // Mute mode enable
#define  _UART4_CR1_M0                                       (0x1 << 12)    // Word length
#define  _UART4_CR1_WAKE                                     (0x1 << 11)    // Receiver wakeup method
#define  _UART4_CR1_PCE                                      (0x1 << 10)    // Parity control enable
#define  _UART4_CR1_PS                                       (0x1 << 9)    // Parity selection
#define  _UART4_CR1_PEIE                                     (0x1 << 8)    // PE interrupt enable
#define  _UART4_CR1_TXEIE                                    (0x1 << 7)    // interrupt enable
#define  _UART4_CR1_TCIE                                     (0x1 << 6)    // Transmission complete interrupt enable
#define  _UART4_CR1_RXNEIE                                   (0x1 << 5)    // RXNE interrupt enable
#define  _UART4_CR1_IDLEIE                                   (0x1 << 4)    // IDLE interrupt enable
#define  _UART4_CR1_TE                                       (0x1 << 3)    // Transmitter enable
#define  _UART4_CR1_RE                                       (0x1 << 2)    // Receiver enable
#define  _UART4_CR1_UESM                                     (0x1 << 1)    // USART enable in Stop mode
#define  _UART4_CR1_UE                                       (0x1 << 0)    // USART enable
#define  _UART4_CR2_ADD4_7                                   (0xf << 28)    // Address of the USART node
#define  _UART4_CR2_ADD0_3                                   (0xf << 24)    // Address of the USART node
#define  _UART4_CR2_RTOEN                                    (0x1 << 23)    // Receiver timeout enable
#define  _UART4_CR2_ABRMOD1                                  (0x1 << 22)    // Auto baud rate mode
#define  _UART4_CR2_ABRMOD0                                  (0x1 << 21)    // ABRMOD0
#define  _UART4_CR2_ABREN                                    (0x1 << 20)    // Auto baud rate enable
#define  _UART4_CR2_MSBFIRST                                 (0x1 << 19)    // Most significant bit first
#define  _UART4_CR2_TAINV                                    (0x1 << 18)    // Binary data inversion
#define  _UART4_CR2_TXINV                                    (0x1 << 17)    // TX pin active level inversion
#define  _UART4_CR2_RXINV                                    (0x1 << 16)    // RX pin active level inversion
#define  _UART4_CR2_SWAP                                     (0x1 << 15)    // Swap TX/RX pins
#define  _UART4_CR2_LINEN                                    (0x1 << 14)    // LIN mode enable
#define  _UART4_CR2_STOP                                     (0x3 << 12)    // STOP bits
#define  _UART4_CR2_CLKEN                                    (0x1 << 11)    // Clock enable
#define  _UART4_CR2_CPOL                                     (0x1 << 10)    // Clock polarity
#define  _UART4_CR2_CPHA                                     (0x1 << 9)    // Clock phase
#define  _UART4_CR2_LBCL                                     (0x1 << 8)    // Last bit clock pulse
#define  _UART4_CR2_LBDIE                                    (0x1 << 6)    // LIN break detection interrupt enable
#define  _UART4_CR2_LBDL                                     (0x1 << 5)    // LIN break detection length
#define  _UART4_CR2_ADDM7                                    (0x1 << 4)    // 7-bit Address Detection/4-bit Address Detection
#define  _UART4_CR3_WUFIE                                    (0x1 << 22)    // Wakeup from Stop mode interrupt enable
#define  _UART4_CR3_WUS                                      (0x3 << 20)    // Wakeup from Stop mode interrupt flag selection
#define  _UART4_CR3_SCARCNT                                  (0x7 << 17)    // Smartcard auto-retry count
#define  _UART4_CR3_DEP                                      (0x1 << 15)    // Driver enable polarity selection
#define  _UART4_CR3_DEM                                      (0x1 << 14)    // Driver enable mode
#define  _UART4_CR3_DDRE                                     (0x1 << 13)    // DMA Disable on Reception Error
#define  _UART4_CR3_OVRDIS                                   (0x1 << 12)    // Overrun Disable
#define  _UART4_CR3_ONEBIT                                   (0x1 << 11)    // One sample bit method enable
#define  _UART4_CR3_CTSIE                                    (0x1 << 10)    // CTS interrupt enable
#define  _UART4_CR3_CTSE                                     (0x1 << 9)    // CTS enable
#define  _UART4_CR3_RTSE                                     (0x1 << 8)    // RTS enable
#define  _UART4_CR3_DMAT                                     (0x1 << 7)    // DMA enable transmitter
#define  _UART4_CR3_DMAR                                     (0x1 << 6)    // DMA enable receiver
#define  _UART4_CR3_SCEN                                     (0x1 << 5)    // Smartcard mode enable
#define  _UART4_CR3_NACK                                     (0x1 << 4)    // Smartcard NACK enable
#define  _UART4_CR3_HDSEL                                    (0x1 << 3)    // Half-duplex selection
#define  _UART4_CR3_IRLP                                     (0x1 << 2)    // Ir low-power
#define  _UART4_CR3_IREN                                     (0x1 << 1)    // Ir mode enable
#define  _UART4_CR3_EIE                                      (0x1 << 0)    // Error interrupt enable
#define  _UART4_BRR_DIV_Mantissa                             (0xfff << 4)    // DIV_Mantissa
#define  _UART4_BRR_DIV_Fraction                             (0xf << 0)    // DIV_Fraction
#define  _UART4_GTPR_GT                                      (0xff << 8)    // Guard time value
#define  _UART4_GTPR_PSC                                     (0xff << 0)    // Prescaler value
#define  _UART4_RTOR_BLEN                                    (0xff << 24)    // Block Length
#define  _UART4_RTOR_RTO                                     (0xffffff << 0)    // Receiver timeout value
#define  _UART4_RQR_TXFRQ                                    (0x1 << 4)    // Transmit data flush request
#define  _UART4_RQR_RXFRQ                                    (0x1 << 3)    // Receive data flush request
#define  _UART4_RQR_MMRQ                                     (0x1 << 2)    // Mute mode request
#define  _UART4_RQR_SBKRQ                                    (0x1 << 1)    // Send break request
#define  _UART4_RQR_ABRRQ                                    (0x1 << 0)    // Auto baud rate request
#define  _UART4_ISR_REACK                                    (0x1 << 22)    // REACK
#define  _UART4_ISR_TEACK                                    (0x1 << 21)    // TEACK
#define  _UART4_ISR_WUF                                      (0x1 << 20)    // WUF
#define  _UART4_ISR_RWU                                      (0x1 << 19)    // RWU
#define  _UART4_ISR_SBKF                                     (0x1 << 18)    // SBKF
#define  _UART4_ISR_CMF                                      (0x1 << 17)    // CMF
#define  _UART4_ISR_BUSY                                     (0x1 << 16)    // BUSY
#define  _UART4_ISR_ABRF                                     (0x1 << 15)    // ABRF
#define  _UART4_ISR_ABRE                                     (0x1 << 14)    // ABRE
#define  _UART4_ISR_EOBF                                     (0x1 << 12)    // EOBF
#define  _UART4_ISR_RTOF                                     (0x1 << 11)    // RTOF
#define  _UART4_ISR_CTS                                      (0x1 << 10)    // CTS
#define  _UART4_ISR_CTSIF                                    (0x1 << 9)    // CTSIF
#define  _UART4_ISR_LBDF                                     (0x1 << 8)    // LBDF
#define  _UART4_ISR_TXE                                      (0x1 << 7)    // TXE
#define  _UART4_ISR_TC                                       (0x1 << 6)    // TC
#define  _UART4_ISR_RXNE                                     (0x1 << 5)    // RXNE
#define  _UART4_ISR_IDLE                                     (0x1 << 4)    // IDLE
#define  _UART4_ISR_ORE                                      (0x1 << 3)    // ORE
#define  _UART4_ISR_NF                                       (0x1 << 2)    // NF
#define  _UART4_ISR_FE                                       (0x1 << 1)    // FE
#define  _UART4_ISR_PE                                       (0x1 << 0)    // PE
#define  _UART4_ICR_WUCF                                     (0x1 << 20)    // Wakeup from Stop mode clear flag
#define  _UART4_ICR_CMCF                                     (0x1 << 17)    // Character match clear flag
#define  _UART4_ICR_EOBCF                                    (0x1 << 12)    // End of block clear flag
#define  _UART4_ICR_RTOCF                                    (0x1 << 11)    // Receiver timeout clear flag
#define  _UART4_ICR_CTSCF                                    (0x1 << 9)    // CTS clear flag
#define  _UART4_ICR_LBDCF                                    (0x1 << 8)    // LIN break detection clear flag
#define  _UART4_ICR_TCCF                                     (0x1 << 6)    // Transmission complete clear flag
#define  _UART4_ICR_IDLECF                                   (0x1 << 4)    // Idle line detected clear flag
#define  _UART4_ICR_ORECF                                    (0x1 << 3)    // Overrun error clear flag
#define  _UART4_ICR_NCF                                      (0x1 << 2)    // Noise detected clear flag
#define  _UART4_ICR_FECF                                     (0x1 << 1)    // Framing error clear flag
#define  _UART4_ICR_PECF                                     (0x1 << 0)    // Parity error clear flag
#define  _UART4_RDR_RDR                                      (0x1ff << 0)    // Receive data value
#define  _UART4_TDR_TDR                                      (0x1ff << 0)    // Transmit data value
#define  _UART5_CR1_M1                                       (0x1 << 28)    // Word length
#define  _UART5_CR1_EOBIE                                    (0x1 << 27)    // End of Block interrupt enable
#define  _UART5_CR1_RTOIE                                    (0x1 << 26)    // Receiver timeout interrupt enable
#define  _UART5_CR1_DEAT4                                    (0x1 << 25)    // Driver Enable assertion time
#define  _UART5_CR1_DEAT3                                    (0x1 << 24)    // DEAT3
#define  _UART5_CR1_DEAT2                                    (0x1 << 23)    // DEAT2
#define  _UART5_CR1_DEAT1                                    (0x1 << 22)    // DEAT1
#define  _UART5_CR1_DEAT0                                    (0x1 << 21)    // DEAT0
#define  _UART5_CR1_DEDT4                                    (0x1 << 20)    // Driver Enable de-assertion time
#define  _UART5_CR1_DEDT3                                    (0x1 << 19)    // DEDT3
#define  _UART5_CR1_DEDT2                                    (0x1 << 18)    // DEDT2
#define  _UART5_CR1_DEDT1                                    (0x1 << 17)    // DEDT1
#define  _UART5_CR1_DEDT0                                    (0x1 << 16)    // DEDT0
#define  _UART5_CR1_OVER8                                    (0x1 << 15)    // Oversampling mode
#define  _UART5_CR1_CMIE                                     (0x1 << 14)    // Character match interrupt enable
#define  _UART5_CR1_MME                                      (0x1 << 13)    // Mute mode enable
#define  _UART5_CR1_M0                                       (0x1 << 12)    // Word length
#define  _UART5_CR1_WAKE                                     (0x1 << 11)    // Receiver wakeup method
#define  _UART5_CR1_PCE                                      (0x1 << 10)    // Parity control enable
#define  _UART5_CR1_PS                                       (0x1 << 9)    // Parity selection
#define  _UART5_CR1_PEIE                                     (0x1 << 8)    // PE interrupt enable
#define  _UART5_CR1_TXEIE                                    (0x1 << 7)    // interrupt enable
#define  _UART5_CR1_TCIE                                     (0x1 << 6)    // Transmission complete interrupt enable
#define  _UART5_CR1_RXNEIE                                   (0x1 << 5)    // RXNE interrupt enable
#define  _UART5_CR1_IDLEIE                                   (0x1 << 4)    // IDLE interrupt enable
#define  _UART5_CR1_TE                                       (0x1 << 3)    // Transmitter enable
#define  _UART5_CR1_RE                                       (0x1 << 2)    // Receiver enable
#define  _UART5_CR1_UESM                                     (0x1 << 1)    // USART enable in Stop mode
#define  _UART5_CR1_UE                                       (0x1 << 0)    // USART enable
#define  _UART5_CR2_ADD4_7                                   (0xf << 28)    // Address of the USART node
#define  _UART5_CR2_ADD0_3                                   (0xf << 24)    // Address of the USART node
#define  _UART5_CR2_RTOEN                                    (0x1 << 23)    // Receiver timeout enable
#define  _UART5_CR2_ABRMOD1                                  (0x1 << 22)    // Auto baud rate mode
#define  _UART5_CR2_ABRMOD0                                  (0x1 << 21)    // ABRMOD0
#define  _UART5_CR2_ABREN                                    (0x1 << 20)    // Auto baud rate enable
#define  _UART5_CR2_MSBFIRST                                 (0x1 << 19)    // Most significant bit first
#define  _UART5_CR2_TAINV                                    (0x1 << 18)    // Binary data inversion
#define  _UART5_CR2_TXINV                                    (0x1 << 17)    // TX pin active level inversion
#define  _UART5_CR2_RXINV                                    (0x1 << 16)    // RX pin active level inversion
#define  _UART5_CR2_SWAP                                     (0x1 << 15)    // Swap TX/RX pins
#define  _UART5_CR2_LINEN                                    (0x1 << 14)    // LIN mode enable
#define  _UART5_CR2_STOP                                     (0x3 << 12)    // STOP bits
#define  _UART5_CR2_CLKEN                                    (0x1 << 11)    // Clock enable
#define  _UART5_CR2_CPOL                                     (0x1 << 10)    // Clock polarity
#define  _UART5_CR2_CPHA                                     (0x1 << 9)    // Clock phase
#define  _UART5_CR2_LBCL                                     (0x1 << 8)    // Last bit clock pulse
#define  _UART5_CR2_LBDIE                                    (0x1 << 6)    // LIN break detection interrupt enable
#define  _UART5_CR2_LBDL                                     (0x1 << 5)    // LIN break detection length
#define  _UART5_CR2_ADDM7                                    (0x1 << 4)    // 7-bit Address Detection/4-bit Address Detection
#define  _UART5_CR3_WUFIE                                    (0x1 << 22)    // Wakeup from Stop mode interrupt enable
#define  _UART5_CR3_WUS                                      (0x3 << 20)    // Wakeup from Stop mode interrupt flag selection
#define  _UART5_CR3_SCARCNT                                  (0x7 << 17)    // Smartcard auto-retry count
#define  _UART5_CR3_DEP                                      (0x1 << 15)    // Driver enable polarity selection
#define  _UART5_CR3_DEM                                      (0x1 << 14)    // Driver enable mode
#define  _UART5_CR3_DDRE                                     (0x1 << 13)    // DMA Disable on Reception Error
#define  _UART5_CR3_OVRDIS                                   (0x1 << 12)    // Overrun Disable
#define  _UART5_CR3_ONEBIT                                   (0x1 << 11)    // One sample bit method enable
#define  _UART5_CR3_CTSIE                                    (0x1 << 10)    // CTS interrupt enable
#define  _UART5_CR3_CTSE                                     (0x1 << 9)    // CTS enable
#define  _UART5_CR3_RTSE                                     (0x1 << 8)    // RTS enable
#define  _UART5_CR3_DMAT                                     (0x1 << 7)    // DMA enable transmitter
#define  _UART5_CR3_DMAR                                     (0x1 << 6)    // DMA enable receiver
#define  _UART5_CR3_SCEN                                     (0x1 << 5)    // Smartcard mode enable
#define  _UART5_CR3_NACK                                     (0x1 << 4)    // Smartcard NACK enable
#define  _UART5_CR3_HDSEL                                    (0x1 << 3)    // Half-duplex selection
#define  _UART5_CR3_IRLP                                     (0x1 << 2)    // Ir low-power
#define  _UART5_CR3_IREN                                     (0x1 << 1)    // Ir mode enable
#define  _UART5_CR3_EIE                                      (0x1 << 0)    // Error interrupt enable
#define  _UART5_BRR_DIV_Mantissa                             (0xfff << 4)    // DIV_Mantissa
#define  _UART5_BRR_DIV_Fraction                             (0xf << 0)    // DIV_Fraction
#define  _UART5_GTPR_GT                                      (0xff << 8)    // Guard time value
#define  _UART5_GTPR_PSC                                     (0xff << 0)    // Prescaler value
#define  _UART5_RTOR_BLEN                                    (0xff << 24)    // Block Length
#define  _UART5_RTOR_RTO                                     (0xffffff << 0)    // Receiver timeout value
#define  _UART5_RQR_TXFRQ                                    (0x1 << 4)    // Transmit data flush request
#define  _UART5_RQR_RXFRQ                                    (0x1 << 3)    // Receive data flush request
#define  _UART5_RQR_MMRQ                                     (0x1 << 2)    // Mute mode request
#define  _UART5_RQR_SBKRQ                                    (0x1 << 1)    // Send break request
#define  _UART5_RQR_ABRRQ                                    (0x1 << 0)    // Auto baud rate request
#define  _UART5_ISR_REACK                                    (0x1 << 22)    // REACK
#define  _UART5_ISR_TEACK                                    (0x1 << 21)    // TEACK
#define  _UART5_ISR_WUF                                      (0x1 << 20)    // WUF
#define  _UART5_ISR_RWU                                      (0x1 << 19)    // RWU
#define  _UART5_ISR_SBKF                                     (0x1 << 18)    // SBKF
#define  _UART5_ISR_CMF                                      (0x1 << 17)    // CMF
#define  _UART5_ISR_BUSY                                     (0x1 << 16)    // BUSY
#define  _UART5_ISR_ABRF                                     (0x1 << 15)    // ABRF
#define  _UART5_ISR_ABRE                                     (0x1 << 14)    // ABRE
#define  _UART5_ISR_EOBF                                     (0x1 << 12)    // EOBF
#define  _UART5_ISR_RTOF                                     (0x1 << 11)    // RTOF
#define  _UART5_ISR_CTS                                      (0x1 << 10)    // CTS
#define  _UART5_ISR_CTSIF                                    (0x1 << 9)    // CTSIF
#define  _UART5_ISR_LBDF                                     (0x1 << 8)    // LBDF
#define  _UART5_ISR_TXE                                      (0x1 << 7)    // TXE
#define  _UART5_ISR_TC                                       (0x1 << 6)    // TC
#define  _UART5_ISR_RXNE                                     (0x1 << 5)    // RXNE
#define  _UART5_ISR_IDLE                                     (0x1 << 4)    // IDLE
#define  _UART5_ISR_ORE                                      (0x1 << 3)    // ORE
#define  _UART5_ISR_NF                                       (0x1 << 2)    // NF
#define  _UART5_ISR_FE                                       (0x1 << 1)    // FE
#define  _UART5_ISR_PE                                       (0x1 << 0)    // PE
#define  _UART5_ICR_WUCF                                     (0x1 << 20)    // Wakeup from Stop mode clear flag
#define  _UART5_ICR_CMCF                                     (0x1 << 17)    // Character match clear flag
#define  _UART5_ICR_EOBCF                                    (0x1 << 12)    // End of block clear flag
#define  _UART5_ICR_RTOCF                                    (0x1 << 11)    // Receiver timeout clear flag
#define  _UART5_ICR_CTSCF                                    (0x1 << 9)    // CTS clear flag
#define  _UART5_ICR_LBDCF                                    (0x1 << 8)    // LIN break detection clear flag
#define  _UART5_ICR_TCCF                                     (0x1 << 6)    // Transmission complete clear flag
#define  _UART5_ICR_IDLECF                                   (0x1 << 4)    // Idle line detected clear flag
#define  _UART5_ICR_ORECF                                    (0x1 << 3)    // Overrun error clear flag
#define  _UART5_ICR_NCF                                      (0x1 << 2)    // Noise detected clear flag
#define  _UART5_ICR_FECF                                     (0x1 << 1)    // Framing error clear flag
#define  _UART5_ICR_PECF                                     (0x1 << 0)    // Parity error clear flag
#define  _UART5_RDR_RDR                                      (0x1ff << 0)    // Receive data value
#define  _UART5_TDR_TDR                                      (0x1ff << 0)    // Transmit data value
#define  _UART7_CR1_M1                                       (0x1 << 28)    // Word length
#define  _UART7_CR1_EOBIE                                    (0x1 << 27)    // End of Block interrupt enable
#define  _UART7_CR1_RTOIE                                    (0x1 << 26)    // Receiver timeout interrupt enable
#define  _UART7_CR1_DEAT4                                    (0x1 << 25)    // Driver Enable assertion time
#define  _UART7_CR1_DEAT3                                    (0x1 << 24)    // DEAT3
#define  _UART7_CR1_DEAT2                                    (0x1 << 23)    // DEAT2
#define  _UART7_CR1_DEAT1                                    (0x1 << 22)    // DEAT1
#define  _UART7_CR1_DEAT0                                    (0x1 << 21)    // DEAT0
#define  _UART7_CR1_DEDT4                                    (0x1 << 20)    // Driver Enable de-assertion time
#define  _UART7_CR1_DEDT3                                    (0x1 << 19)    // DEDT3
#define  _UART7_CR1_DEDT2                                    (0x1 << 18)    // DEDT2
#define  _UART7_CR1_DEDT1                                    (0x1 << 17)    // DEDT1
#define  _UART7_CR1_DEDT0                                    (0x1 << 16)    // DEDT0
#define  _UART7_CR1_OVER8                                    (0x1 << 15)    // Oversampling mode
#define  _UART7_CR1_CMIE                                     (0x1 << 14)    // Character match interrupt enable
#define  _UART7_CR1_MME                                      (0x1 << 13)    // Mute mode enable
#define  _UART7_CR1_M0                                       (0x1 << 12)    // Word length
#define  _UART7_CR1_WAKE                                     (0x1 << 11)    // Receiver wakeup method
#define  _UART7_CR1_PCE                                      (0x1 << 10)    // Parity control enable
#define  _UART7_CR1_PS                                       (0x1 << 9)    // Parity selection
#define  _UART7_CR1_PEIE                                     (0x1 << 8)    // PE interrupt enable
#define  _UART7_CR1_TXEIE                                    (0x1 << 7)    // interrupt enable
#define  _UART7_CR1_TCIE                                     (0x1 << 6)    // Transmission complete interrupt enable
#define  _UART7_CR1_RXNEIE                                   (0x1 << 5)    // RXNE interrupt enable
#define  _UART7_CR1_IDLEIE                                   (0x1 << 4)    // IDLE interrupt enable
#define  _UART7_CR1_TE                                       (0x1 << 3)    // Transmitter enable
#define  _UART7_CR1_RE                                       (0x1 << 2)    // Receiver enable
#define  _UART7_CR1_UESM                                     (0x1 << 1)    // USART enable in Stop mode
#define  _UART7_CR1_UE                                       (0x1 << 0)    // USART enable
#define  _UART7_CR2_ADD4_7                                   (0xf << 28)    // Address of the USART node
#define  _UART7_CR2_ADD0_3                                   (0xf << 24)    // Address of the USART node
#define  _UART7_CR2_RTOEN                                    (0x1 << 23)    // Receiver timeout enable
#define  _UART7_CR2_ABRMOD1                                  (0x1 << 22)    // Auto baud rate mode
#define  _UART7_CR2_ABRMOD0                                  (0x1 << 21)    // ABRMOD0
#define  _UART7_CR2_ABREN                                    (0x1 << 20)    // Auto baud rate enable
#define  _UART7_CR2_MSBFIRST                                 (0x1 << 19)    // Most significant bit first
#define  _UART7_CR2_TAINV                                    (0x1 << 18)    // Binary data inversion
#define  _UART7_CR2_TXINV                                    (0x1 << 17)    // TX pin active level inversion
#define  _UART7_CR2_RXINV                                    (0x1 << 16)    // RX pin active level inversion
#define  _UART7_CR2_SWAP                                     (0x1 << 15)    // Swap TX/RX pins
#define  _UART7_CR2_LINEN                                    (0x1 << 14)    // LIN mode enable
#define  _UART7_CR2_STOP                                     (0x3 << 12)    // STOP bits
#define  _UART7_CR2_CLKEN                                    (0x1 << 11)    // Clock enable
#define  _UART7_CR2_CPOL                                     (0x1 << 10)    // Clock polarity
#define  _UART7_CR2_CPHA                                     (0x1 << 9)    // Clock phase
#define  _UART7_CR2_LBCL                                     (0x1 << 8)    // Last bit clock pulse
#define  _UART7_CR2_LBDIE                                    (0x1 << 6)    // LIN break detection interrupt enable
#define  _UART7_CR2_LBDL                                     (0x1 << 5)    // LIN break detection length
#define  _UART7_CR2_ADDM7                                    (0x1 << 4)    // 7-bit Address Detection/4-bit Address Detection
#define  _UART7_CR3_WUFIE                                    (0x1 << 22)    // Wakeup from Stop mode interrupt enable
#define  _UART7_CR3_WUS                                      (0x3 << 20)    // Wakeup from Stop mode interrupt flag selection
#define  _UART7_CR3_SCARCNT                                  (0x7 << 17)    // Smartcard auto-retry count
#define  _UART7_CR3_DEP                                      (0x1 << 15)    // Driver enable polarity selection
#define  _UART7_CR3_DEM                                      (0x1 << 14)    // Driver enable mode
#define  _UART7_CR3_DDRE                                     (0x1 << 13)    // DMA Disable on Reception Error
#define  _UART7_CR3_OVRDIS                                   (0x1 << 12)    // Overrun Disable
#define  _UART7_CR3_ONEBIT                                   (0x1 << 11)    // One sample bit method enable
#define  _UART7_CR3_CTSIE                                    (0x1 << 10)    // CTS interrupt enable
#define  _UART7_CR3_CTSE                                     (0x1 << 9)    // CTS enable
#define  _UART7_CR3_RTSE                                     (0x1 << 8)    // RTS enable
#define  _UART7_CR3_DMAT                                     (0x1 << 7)    // DMA enable transmitter
#define  _UART7_CR3_DMAR                                     (0x1 << 6)    // DMA enable receiver
#define  _UART7_CR3_SCEN                                     (0x1 << 5)    // Smartcard mode enable
#define  _UART7_CR3_NACK                                     (0x1 << 4)    // Smartcard NACK enable
#define  _UART7_CR3_HDSEL                                    (0x1 << 3)    // Half-duplex selection
#define  _UART7_CR3_IRLP                                     (0x1 << 2)    // Ir low-power
#define  _UART7_CR3_IREN                                     (0x1 << 1)    // Ir mode enable
#define  _UART7_CR3_EIE                                      (0x1 << 0)    // Error interrupt enable
#define  _UART7_BRR_DIV_Mantissa                             (0xfff << 4)    // DIV_Mantissa
#define  _UART7_BRR_DIV_Fraction                             (0xf << 0)    // DIV_Fraction
#define  _UART7_GTPR_GT                                      (0xff << 8)    // Guard time value
#define  _UART7_GTPR_PSC                                     (0xff << 0)    // Prescaler value
#define  _UART7_RTOR_BLEN                                    (0xff << 24)    // Block Length
#define  _UART7_RTOR_RTO                                     (0xffffff << 0)    // Receiver timeout value
#define  _UART7_RQR_TXFRQ                                    (0x1 << 4)    // Transmit data flush request
#define  _UART7_RQR_RXFRQ                                    (0x1 << 3)    // Receive data flush request
#define  _UART7_RQR_MMRQ                                     (0x1 << 2)    // Mute mode request
#define  _UART7_RQR_SBKRQ                                    (0x1 << 1)    // Send break request
#define  _UART7_RQR_ABRRQ                                    (0x1 << 0)    // Auto baud rate request
#define  _UART7_ISR_REACK                                    (0x1 << 22)    // REACK
#define  _UART7_ISR_TEACK                                    (0x1 << 21)    // TEACK
#define  _UART7_ISR_WUF                                      (0x1 << 20)    // WUF
#define  _UART7_ISR_RWU                                      (0x1 << 19)    // RWU
#define  _UART7_ISR_SBKF                                     (0x1 << 18)    // SBKF
#define  _UART7_ISR_CMF                                      (0x1 << 17)    // CMF
#define  _UART7_ISR_BUSY                                     (0x1 << 16)    // BUSY
#define  _UART7_ISR_ABRF                                     (0x1 << 15)    // ABRF
#define  _UART7_ISR_ABRE                                     (0x1 << 14)    // ABRE
#define  _UART7_ISR_EOBF                                     (0x1 << 12)    // EOBF
#define  _UART7_ISR_RTOF                                     (0x1 << 11)    // RTOF
#define  _UART7_ISR_CTS                                      (0x1 << 10)    // CTS
#define  _UART7_ISR_CTSIF                                    (0x1 << 9)    // CTSIF
#define  _UART7_ISR_LBDF                                     (0x1 << 8)    // LBDF
#define  _UART7_ISR_TXE                                      (0x1 << 7)    // TXE
#define  _UART7_ISR_TC                                       (0x1 << 6)    // TC
#define  _UART7_ISR_RXNE                                     (0x1 << 5)    // RXNE
#define  _UART7_ISR_IDLE                                     (0x1 << 4)    // IDLE
#define  _UART7_ISR_ORE                                      (0x1 << 3)    // ORE
#define  _UART7_ISR_NF                                       (0x1 << 2)    // NF
#define  _UART7_ISR_FE                                       (0x1 << 1)    // FE
#define  _UART7_ISR_PE                                       (0x1 << 0)    // PE
#define  _UART7_ICR_WUCF                                     (0x1 << 20)    // Wakeup from Stop mode clear flag
#define  _UART7_ICR_CMCF                                     (0x1 << 17)    // Character match clear flag
#define  _UART7_ICR_EOBCF                                    (0x1 << 12)    // End of block clear flag
#define  _UART7_ICR_RTOCF                                    (0x1 << 11)    // Receiver timeout clear flag
#define  _UART7_ICR_CTSCF                                    (0x1 << 9)    // CTS clear flag
#define  _UART7_ICR_LBDCF                                    (0x1 << 8)    // LIN break detection clear flag
#define  _UART7_ICR_TCCF                                     (0x1 << 6)    // Transmission complete clear flag
#define  _UART7_ICR_IDLECF                                   (0x1 << 4)    // Idle line detected clear flag
#define  _UART7_ICR_ORECF                                    (0x1 << 3)    // Overrun error clear flag
#define  _UART7_ICR_NCF                                      (0x1 << 2)    // Noise detected clear flag
#define  _UART7_ICR_FECF                                     (0x1 << 1)    // Framing error clear flag
#define  _UART7_ICR_PECF                                     (0x1 << 0)    // Parity error clear flag
#define  _UART7_RDR_RDR                                      (0x1ff << 0)    // Receive data value
#define  _UART7_TDR_TDR                                      (0x1ff << 0)    // Transmit data value
#define  _UART8_CR1_M1                                       (0x1 << 28)    // Word length
#define  _UART8_CR1_EOBIE                                    (0x1 << 27)    // End of Block interrupt enable
#define  _UART8_CR1_RTOIE                                    (0x1 << 26)    // Receiver timeout interrupt enable
#define  _UART8_CR1_DEAT4                                    (0x1 << 25)    // Driver Enable assertion time
#define  _UART8_CR1_DEAT3                                    (0x1 << 24)    // DEAT3
#define  _UART8_CR1_DEAT2                                    (0x1 << 23)    // DEAT2
#define  _UART8_CR1_DEAT1                                    (0x1 << 22)    // DEAT1
#define  _UART8_CR1_DEAT0                                    (0x1 << 21)    // DEAT0
#define  _UART8_CR1_DEDT4                                    (0x1 << 20)    // Driver Enable de-assertion time
#define  _UART8_CR1_DEDT3                                    (0x1 << 19)    // DEDT3
#define  _UART8_CR1_DEDT2                                    (0x1 << 18)    // DEDT2
#define  _UART8_CR1_DEDT1                                    (0x1 << 17)    // DEDT1
#define  _UART8_CR1_DEDT0                                    (0x1 << 16)    // DEDT0
#define  _UART8_CR1_OVER8                                    (0x1 << 15)    // Oversampling mode
#define  _UART8_CR1_CMIE                                     (0x1 << 14)    // Character match interrupt enable
#define  _UART8_CR1_MME                                      (0x1 << 13)    // Mute mode enable
#define  _UART8_CR1_M0                                       (0x1 << 12)    // Word length
#define  _UART8_CR1_WAKE                                     (0x1 << 11)    // Receiver wakeup method
#define  _UART8_CR1_PCE                                      (0x1 << 10)    // Parity control enable
#define  _UART8_CR1_PS                                       (0x1 << 9)    // Parity selection
#define  _UART8_CR1_PEIE                                     (0x1 << 8)    // PE interrupt enable
#define  _UART8_CR1_TXEIE                                    (0x1 << 7)    // interrupt enable
#define  _UART8_CR1_TCIE                                     (0x1 << 6)    // Transmission complete interrupt enable
#define  _UART8_CR1_RXNEIE                                   (0x1 << 5)    // RXNE interrupt enable
#define  _UART8_CR1_IDLEIE                                   (0x1 << 4)    // IDLE interrupt enable
#define  _UART8_CR1_TE                                       (0x1 << 3)    // Transmitter enable
#define  _UART8_CR1_RE                                       (0x1 << 2)    // Receiver enable
#define  _UART8_CR1_UESM                                     (0x1 << 1)    // USART enable in Stop mode
#define  _UART8_CR1_UE                                       (0x1 << 0)    // USART enable
#define  _UART8_CR2_ADD4_7                                   (0xf << 28)    // Address of the USART node
#define  _UART8_CR2_ADD0_3                                   (0xf << 24)    // Address of the USART node
#define  _UART8_CR2_RTOEN                                    (0x1 << 23)    // Receiver timeout enable
#define  _UART8_CR2_ABRMOD1                                  (0x1 << 22)    // Auto baud rate mode
#define  _UART8_CR2_ABRMOD0                                  (0x1 << 21)    // ABRMOD0
#define  _UART8_CR2_ABREN                                    (0x1 << 20)    // Auto baud rate enable
#define  _UART8_CR2_MSBFIRST                                 (0x1 << 19)    // Most significant bit first
#define  _UART8_CR2_TAINV                                    (0x1 << 18)    // Binary data inversion
#define  _UART8_CR2_TXINV                                    (0x1 << 17)    // TX pin active level inversion
#define  _UART8_CR2_RXINV                                    (0x1 << 16)    // RX pin active level inversion
#define  _UART8_CR2_SWAP                                     (0x1 << 15)    // Swap TX/RX pins
#define  _UART8_CR2_LINEN                                    (0x1 << 14)    // LIN mode enable
#define  _UART8_CR2_STOP                                     (0x3 << 12)    // STOP bits
#define  _UART8_CR2_CLKEN                                    (0x1 << 11)    // Clock enable
#define  _UART8_CR2_CPOL                                     (0x1 << 10)    // Clock polarity
#define  _UART8_CR2_CPHA                                     (0x1 << 9)    // Clock phase
#define  _UART8_CR2_LBCL                                     (0x1 << 8)    // Last bit clock pulse
#define  _UART8_CR2_LBDIE                                    (0x1 << 6)    // LIN break detection interrupt enable
#define  _UART8_CR2_LBDL                                     (0x1 << 5)    // LIN break detection length
#define  _UART8_CR2_ADDM7                                    (0x1 << 4)    // 7-bit Address Detection/4-bit Address Detection
#define  _UART8_CR3_WUFIE                                    (0x1 << 22)    // Wakeup from Stop mode interrupt enable
#define  _UART8_CR3_WUS                                      (0x3 << 20)    // Wakeup from Stop mode interrupt flag selection
#define  _UART8_CR3_SCARCNT                                  (0x7 << 17)    // Smartcard auto-retry count
#define  _UART8_CR3_DEP                                      (0x1 << 15)    // Driver enable polarity selection
#define  _UART8_CR3_DEM                                      (0x1 << 14)    // Driver enable mode
#define  _UART8_CR3_DDRE                                     (0x1 << 13)    // DMA Disable on Reception Error
#define  _UART8_CR3_OVRDIS                                   (0x1 << 12)    // Overrun Disable
#define  _UART8_CR3_ONEBIT                                   (0x1 << 11)    // One sample bit method enable
#define  _UART8_CR3_CTSIE                                    (0x1 << 10)    // CTS interrupt enable
#define  _UART8_CR3_CTSE                                     (0x1 << 9)    // CTS enable
#define  _UART8_CR3_RTSE                                     (0x1 << 8)    // RTS enable
#define  _UART8_CR3_DMAT                                     (0x1 << 7)    // DMA enable transmitter
#define  _UART8_CR3_DMAR                                     (0x1 << 6)    // DMA enable receiver
#define  _UART8_CR3_SCEN                                     (0x1 << 5)    // Smartcard mode enable
#define  _UART8_CR3_NACK                                     (0x1 << 4)    // Smartcard NACK enable
#define  _UART8_CR3_HDSEL                                    (0x1 << 3)    // Half-duplex selection
#define  _UART8_CR3_IRLP                                     (0x1 << 2)    // Ir low-power
#define  _UART8_CR3_IREN                                     (0x1 << 1)    // Ir mode enable
#define  _UART8_CR3_EIE                                      (0x1 << 0)    // Error interrupt enable
#define  _UART8_BRR_DIV_Mantissa                             (0xfff << 4)    // DIV_Mantissa
#define  _UART8_BRR_DIV_Fraction                             (0xf << 0)    // DIV_Fraction
#define  _UART8_GTPR_GT                                      (0xff << 8)    // Guard time value
#define  _UART8_GTPR_PSC                                     (0xff << 0)    // Prescaler value
#define  _UART8_RTOR_BLEN                                    (0xff << 24)    // Block Length
#define  _UART8_RTOR_RTO                                     (0xffffff << 0)    // Receiver timeout value
#define  _UART8_RQR_TXFRQ                                    (0x1 << 4)    // Transmit data flush request
#define  _UART8_RQR_RXFRQ                                    (0x1 << 3)    // Receive data flush request
#define  _UART8_RQR_MMRQ                                     (0x1 << 2)    // Mute mode request
#define  _UART8_RQR_SBKRQ                                    (0x1 << 1)    // Send break request
#define  _UART8_RQR_ABRRQ                                    (0x1 << 0)    // Auto baud rate request
#define  _UART8_ISR_REACK                                    (0x1 << 22)    // REACK
#define  _UART8_ISR_TEACK                                    (0x1 << 21)    // TEACK
#define  _UART8_ISR_WUF                                      (0x1 << 20)    // WUF
#define  _UART8_ISR_RWU                                      (0x1 << 19)    // RWU
#define  _UART8_ISR_SBKF                                     (0x1 << 18)    // SBKF
#define  _UART8_ISR_CMF                                      (0x1 << 17)    // CMF
#define  _UART8_ISR_BUSY                                     (0x1 << 16)    // BUSY
#define  _UART8_ISR_ABRF                                     (0x1 << 15)    // ABRF
#define  _UART8_ISR_ABRE                                     (0x1 << 14)    // ABRE
#define  _UART8_ISR_EOBF                                     (0x1 << 12)    // EOBF
#define  _UART8_ISR_RTOF                                     (0x1 << 11)    // RTOF
#define  _UART8_ISR_CTS                                      (0x1 << 10)    // CTS
#define  _UART8_ISR_CTSIF                                    (0x1 << 9)    // CTSIF
#define  _UART8_ISR_LBDF                                     (0x1 << 8)    // LBDF
#define  _UART8_ISR_TXE                                      (0x1 << 7)    // TXE
#define  _UART8_ISR_TC                                       (0x1 << 6)    // TC
#define  _UART8_ISR_RXNE                                     (0x1 << 5)    // RXNE
#define  _UART8_ISR_IDLE                                     (0x1 << 4)    // IDLE
#define  _UART8_ISR_ORE                                      (0x1 << 3)    // ORE
#define  _UART8_ISR_NF                                       (0x1 << 2)    // NF
#define  _UART8_ISR_FE                                       (0x1 << 1)    // FE
#define  _UART8_ISR_PE                                       (0x1 << 0)    // PE
#define  _UART8_ICR_WUCF                                     (0x1 << 20)    // Wakeup from Stop mode clear flag
#define  _UART8_ICR_CMCF                                     (0x1 << 17)    // Character match clear flag
#define  _UART8_ICR_EOBCF                                    (0x1 << 12)    // End of block clear flag
#define  _UART8_ICR_RTOCF                                    (0x1 << 11)    // Receiver timeout clear flag
#define  _UART8_ICR_CTSCF                                    (0x1 << 9)    // CTS clear flag
#define  _UART8_ICR_LBDCF                                    (0x1 << 8)    // LIN break detection clear flag
#define  _UART8_ICR_TCCF                                     (0x1 << 6)    // Transmission complete clear flag
#define  _UART8_ICR_IDLECF                                   (0x1 << 4)    // Idle line detected clear flag
#define  _UART8_ICR_ORECF                                    (0x1 << 3)    // Overrun error clear flag
#define  _UART8_ICR_NCF                                      (0x1 << 2)    // Noise detected clear flag
#define  _UART8_ICR_FECF                                     (0x1 << 1)    // Framing error clear flag
#define  _UART8_ICR_PECF                                     (0x1 << 0)    // Parity error clear flag
#define  _UART8_RDR_RDR                                      (0x1ff << 0)    // Receive data value
#define  _UART8_TDR_TDR                                      (0x1ff << 0)    // Transmit data value
#define  _USART1_CR1_M1                                      (0x1 << 28)    // Word length
#define  _USART1_CR1_EOBIE                                   (0x1 << 27)    // End of Block interrupt enable
#define  _USART1_CR1_RTOIE                                   (0x1 << 26)    // Receiver timeout interrupt enable
#define  _USART1_CR1_DEAT4                                   (0x1 << 25)    // Driver Enable assertion time
#define  _USART1_CR1_DEAT3                                   (0x1 << 24)    // DEAT3
#define  _USART1_CR1_DEAT2                                   (0x1 << 23)    // DEAT2
#define  _USART1_CR1_DEAT1                                   (0x1 << 22)    // DEAT1
#define  _USART1_CR1_DEAT0                                   (0x1 << 21)    // DEAT0
#define  _USART1_CR1_DEDT4                                   (0x1 << 20)    // Driver Enable de-assertion time
#define  _USART1_CR1_DEDT3                                   (0x1 << 19)    // DEDT3
#define  _USART1_CR1_DEDT2                                   (0x1 << 18)    // DEDT2
#define  _USART1_CR1_DEDT1                                   (0x1 << 17)    // DEDT1
#define  _USART1_CR1_DEDT0                                   (0x1 << 16)    // DEDT0
#define  _USART1_CR1_OVER8                                   (0x1 << 15)    // Oversampling mode
#define  _USART1_CR1_CMIE                                    (0x1 << 14)    // Character match interrupt enable
#define  _USART1_CR1_MME                                     (0x1 << 13)    // Mute mode enable
#define  _USART1_CR1_M0                                      (0x1 << 12)    // Word length
#define  _USART1_CR1_WAKE                                    (0x1 << 11)    // Receiver wakeup method
#define  _USART1_CR1_PCE                                     (0x1 << 10)    // Parity control enable
#define  _USART1_CR1_PS                                      (0x1 << 9)    // Parity selection
#define  _USART1_CR1_PEIE                                    (0x1 << 8)    // PE interrupt enable
#define  _USART1_CR1_TXEIE                                   (0x1 << 7)    // interrupt enable
#define  _USART1_CR1_TCIE                                    (0x1 << 6)    // Transmission complete interrupt enable
#define  _USART1_CR1_RXNEIE                                  (0x1 << 5)    // RXNE interrupt enable
#define  _USART1_CR1_IDLEIE                                  (0x1 << 4)    // IDLE interrupt enable
#define  _USART1_CR1_TE                                      (0x1 << 3)    // Transmitter enable
#define  _USART1_CR1_RE                                      (0x1 << 2)    // Receiver enable
#define  _USART1_CR1_UESM                                    (0x1 << 1)    // USART enable in Stop mode
#define  _USART1_CR1_UE                                      (0x1 << 0)    // USART enable
#define  _USART1_CR2_ADD4_7                                  (0xf << 28)    // Address of the USART node
#define  _USART1_CR2_ADD0_3                                  (0xf << 24)    // Address of the USART node
#define  _USART1_CR2_RTOEN                                   (0x1 << 23)    // Receiver timeout enable
#define  _USART1_CR2_ABRMOD1                                 (0x1 << 22)    // Auto baud rate mode
#define  _USART1_CR2_ABRMOD0                                 (0x1 << 21)    // ABRMOD0
#define  _USART1_CR2_ABREN                                   (0x1 << 20)    // Auto baud rate enable
#define  _USART1_CR2_MSBFIRST                                (0x1 << 19)    // Most significant bit first
#define  _USART1_CR2_TAINV                                   (0x1 << 18)    // Binary data inversion
#define  _USART1_CR2_TXINV                                   (0x1 << 17)    // TX pin active level inversion
#define  _USART1_CR2_RXINV                                   (0x1 << 16)    // RX pin active level inversion
#define  _USART1_CR2_SWAP                                    (0x1 << 15)    // Swap TX/RX pins
#define  _USART1_CR2_LINEN                                   (0x1 << 14)    // LIN mode enable
#define  _USART1_CR2_STOP                                    (0x3 << 12)    // STOP bits
#define  _USART1_CR2_CLKEN                                   (0x1 << 11)    // Clock enable
#define  _USART1_CR2_CPOL                                    (0x1 << 10)    // Clock polarity
#define  _USART1_CR2_CPHA                                    (0x1 << 9)    // Clock phase
#define  _USART1_CR2_LBCL                                    (0x1 << 8)    // Last bit clock pulse
#define  _USART1_CR2_LBDIE                                   (0x1 << 6)    // LIN break detection interrupt enable
#define  _USART1_CR2_LBDL                                    (0x1 << 5)    // LIN break detection length
#define  _USART1_CR2_ADDM7                                   (0x1 << 4)    // 7-bit Address Detection/4-bit Address Detection
#define  _USART1_CR3_WUFIE                                   (0x1 << 22)    // Wakeup from Stop mode interrupt enable
#define  _USART1_CR3_WUS                                     (0x3 << 20)    // Wakeup from Stop mode interrupt flag selection
#define  _USART1_CR3_SCARCNT                                 (0x7 << 17)    // Smartcard auto-retry count
#define  _USART1_CR3_DEP                                     (0x1 << 15)    // Driver enable polarity selection
#define  _USART1_CR3_DEM                                     (0x1 << 14)    // Driver enable mode
#define  _USART1_CR3_DDRE                                    (0x1 << 13)    // DMA Disable on Reception Error
#define  _USART1_CR3_OVRDIS                                  (0x1 << 12)    // Overrun Disable
#define  _USART1_CR3_ONEBIT                                  (0x1 << 11)    // One sample bit method enable
#define  _USART1_CR3_CTSIE                                   (0x1 << 10)    // CTS interrupt enable
#define  _USART1_CR3_CTSE                                    (0x1 << 9)    // CTS enable
#define  _USART1_CR3_RTSE                                    (0x1 << 8)    // RTS enable
#define  _USART1_CR3_DMAT                                    (0x1 << 7)    // DMA enable transmitter
#define  _USART1_CR3_DMAR                                    (0x1 << 6)    // DMA enable receiver
#define  _USART1_CR3_SCEN                                    (0x1 << 5)    // Smartcard mode enable
#define  _USART1_CR3_NACK                                    (0x1 << 4)    // Smartcard NACK enable
#define  _USART1_CR3_HDSEL                                   (0x1 << 3)    // Half-duplex selection
#define  _USART1_CR3_IRLP                                    (0x1 << 2)    // Ir low-power
#define  _USART1_CR3_IREN                                    (0x1 << 1)    // Ir mode enable
#define  _USART1_CR3_EIE                                     (0x1 << 0)    // Error interrupt enable
#define  _USART1_BRR_DIV_Mantissa                            (0xfff << 4)    // DIV_Mantissa
#define  _USART1_BRR_DIV_Fraction                            (0xf << 0)    // DIV_Fraction
#define  _USART1_GTPR_GT                                     (0xff << 8)    // Guard time value
#define  _USART1_GTPR_PSC                                    (0xff << 0)    // Prescaler value
#define  _USART1_RTOR_BLEN                                   (0xff << 24)    // Block Length
#define  _USART1_RTOR_RTO                                    (0xffffff << 0)    // Receiver timeout value
#define  _USART1_RQR_TXFRQ                                   (0x1 << 4)    // Transmit data flush request
#define  _USART1_RQR_RXFRQ                                   (0x1 << 3)    // Receive data flush request
#define  _USART1_RQR_MMRQ                                    (0x1 << 2)    // Mute mode request
#define  _USART1_RQR_SBKRQ                                   (0x1 << 1)    // Send break request
#define  _USART1_RQR_ABRRQ                                   (0x1 << 0)    // Auto baud rate request
#define  _USART1_ISR_REACK                                   (0x1 << 22)    // REACK
#define  _USART1_ISR_TEACK                                   (0x1 << 21)    // TEACK
#define  _USART1_ISR_WUF                                     (0x1 << 20)    // WUF
#define  _USART1_ISR_RWU                                     (0x1 << 19)    // RWU
#define  _USART1_ISR_SBKF                                    (0x1 << 18)    // SBKF
#define  _USART1_ISR_CMF                                     (0x1 << 17)    // CMF
#define  _USART1_ISR_BUSY                                    (0x1 << 16)    // BUSY
#define  _USART1_ISR_ABRF                                    (0x1 << 15)    // ABRF
#define  _USART1_ISR_ABRE                                    (0x1 << 14)    // ABRE
#define  _USART1_ISR_EOBF                                    (0x1 << 12)    // EOBF
#define  _USART1_ISR_RTOF                                    (0x1 << 11)    // RTOF
#define  _USART1_ISR_CTS                                     (0x1 << 10)    // CTS
#define  _USART1_ISR_CTSIF                                   (0x1 << 9)    // CTSIF
#define  _USART1_ISR_LBDF                                    (0x1 << 8)    // LBDF
#define  _USART1_ISR_TXE                                     (0x1 << 7)    // TXE
#define  _USART1_ISR_TC                                      (0x1 << 6)    // TC
#define  _USART1_ISR_RXNE                                    (0x1 << 5)    // RXNE
#define  _USART1_ISR_IDLE                                    (0x1 << 4)    // IDLE
#define  _USART1_ISR_ORE                                     (0x1 << 3)    // ORE
#define  _USART1_ISR_NF                                      (0x1 << 2)    // NF
#define  _USART1_ISR_FE                                      (0x1 << 1)    // FE
#define  _USART1_ISR_PE                                      (0x1 << 0)    // PE
#define  _USART1_ICR_WUCF                                    (0x1 << 20)    // Wakeup from Stop mode clear flag
#define  _USART1_ICR_CMCF                                    (0x1 << 17)    // Character match clear flag
#define  _USART1_ICR_EOBCF                                   (0x1 << 12)    // End of block clear flag
#define  _USART1_ICR_RTOCF                                   (0x1 << 11)    // Receiver timeout clear flag
#define  _USART1_ICR_CTSCF                                   (0x1 << 9)    // CTS clear flag
#define  _USART1_ICR_LBDCF                                   (0x1 << 8)    // LIN break detection clear flag
#define  _USART1_ICR_TCCF                                    (0x1 << 6)    // Transmission complete clear flag
#define  _USART1_ICR_IDLECF                                  (0x1 << 4)    // Idle line detected clear flag
#define  _USART1_ICR_ORECF                                   (0x1 << 3)    // Overrun error clear flag
#define  _USART1_ICR_NCF                                     (0x1 << 2)    // Noise detected clear flag
#define  _USART1_ICR_FECF                                    (0x1 << 1)    // Framing error clear flag
#define  _USART1_ICR_PECF                                    (0x1 << 0)    // Parity error clear flag
#define  _USART1_RDR_RDR                                     (0x1ff << 0)    // Receive data value
#define  _USART1_TDR_TDR                                     (0x1ff << 0)    // Transmit data value
#define  _USART6_CR1_M1                                      (0x1 << 28)    // Word length
#define  _USART6_CR1_EOBIE                                   (0x1 << 27)    // End of Block interrupt enable
#define  _USART6_CR1_RTOIE                                   (0x1 << 26)    // Receiver timeout interrupt enable
#define  _USART6_CR1_DEAT4                                   (0x1 << 25)    // Driver Enable assertion time
#define  _USART6_CR1_DEAT3                                   (0x1 << 24)    // DEAT3
#define  _USART6_CR1_DEAT2                                   (0x1 << 23)    // DEAT2
#define  _USART6_CR1_DEAT1                                   (0x1 << 22)    // DEAT1
#define  _USART6_CR1_DEAT0                                   (0x1 << 21)    // DEAT0
#define  _USART6_CR1_DEDT4                                   (0x1 << 20)    // Driver Enable de-assertion time
#define  _USART6_CR1_DEDT3                                   (0x1 << 19)    // DEDT3
#define  _USART6_CR1_DEDT2                                   (0x1 << 18)    // DEDT2
#define  _USART6_CR1_DEDT1                                   (0x1 << 17)    // DEDT1
#define  _USART6_CR1_DEDT0                                   (0x1 << 16)    // DEDT0
#define  _USART6_CR1_OVER8                                   (0x1 << 15)    // Oversampling mode
#define  _USART6_CR1_CMIE                                    (0x1 << 14)    // Character match interrupt enable
#define  _USART6_CR1_MME                                     (0x1 << 13)    // Mute mode enable
#define  _USART6_CR1_M0                                      (0x1 << 12)    // Word length
#define  _USART6_CR1_WAKE                                    (0x1 << 11)    // Receiver wakeup method
#define  _USART6_CR1_PCE                                     (0x1 << 10)    // Parity control enable
#define  _USART6_CR1_PS                                      (0x1 << 9)    // Parity selection
#define  _USART6_CR1_PEIE                                    (0x1 << 8)    // PE interrupt enable
#define  _USART6_CR1_TXEIE                                   (0x1 << 7)    // interrupt enable
#define  _USART6_CR1_TCIE                                    (0x1 << 6)    // Transmission complete interrupt enable
#define  _USART6_CR1_RXNEIE                                  (0x1 << 5)    // RXNE interrupt enable
#define  _USART6_CR1_IDLEIE                                  (0x1 << 4)    // IDLE interrupt enable
#define  _USART6_CR1_TE                                      (0x1 << 3)    // Transmitter enable
#define  _USART6_CR1_RE                                      (0x1 << 2)    // Receiver enable
#define  _USART6_CR1_UESM                                    (0x1 << 1)    // USART enable in Stop mode
#define  _USART6_CR1_UE                                      (0x1 << 0)    // USART enable
#define  _USART6_CR2_ADD4_7                                  (0xf << 28)    // Address of the USART node
#define  _USART6_CR2_ADD0_3                                  (0xf << 24)    // Address of the USART node
#define  _USART6_CR2_RTOEN                                   (0x1 << 23)    // Receiver timeout enable
#define  _USART6_CR2_ABRMOD1                                 (0x1 << 22)    // Auto baud rate mode
#define  _USART6_CR2_ABRMOD0                                 (0x1 << 21)    // ABRMOD0
#define  _USART6_CR2_ABREN                                   (0x1 << 20)    // Auto baud rate enable
#define  _USART6_CR2_MSBFIRST                                (0x1 << 19)    // Most significant bit first
#define  _USART6_CR2_TAINV                                   (0x1 << 18)    // Binary data inversion
#define  _USART6_CR2_TXINV                                   (0x1 << 17)    // TX pin active level inversion
#define  _USART6_CR2_RXINV                                   (0x1 << 16)    // RX pin active level inversion
#define  _USART6_CR2_SWAP                                    (0x1 << 15)    // Swap TX/RX pins
#define  _USART6_CR2_LINEN                                   (0x1 << 14)    // LIN mode enable
#define  _USART6_CR2_STOP                                    (0x3 << 12)    // STOP bits
#define  _USART6_CR2_CLKEN                                   (0x1 << 11)    // Clock enable
#define  _USART6_CR2_CPOL                                    (0x1 << 10)    // Clock polarity
#define  _USART6_CR2_CPHA                                    (0x1 << 9)    // Clock phase
#define  _USART6_CR2_LBCL                                    (0x1 << 8)    // Last bit clock pulse
#define  _USART6_CR2_LBDIE                                   (0x1 << 6)    // LIN break detection interrupt enable
#define  _USART6_CR2_LBDL                                    (0x1 << 5)    // LIN break detection length
#define  _USART6_CR2_ADDM7                                   (0x1 << 4)    // 7-bit Address Detection/4-bit Address Detection
#define  _USART6_CR3_WUFIE                                   (0x1 << 22)    // Wakeup from Stop mode interrupt enable
#define  _USART6_CR3_WUS                                     (0x3 << 20)    // Wakeup from Stop mode interrupt flag selection
#define  _USART6_CR3_SCARCNT                                 (0x7 << 17)    // Smartcard auto-retry count
#define  _USART6_CR3_DEP                                     (0x1 << 15)    // Driver enable polarity selection
#define  _USART6_CR3_DEM                                     (0x1 << 14)    // Driver enable mode
#define  _USART6_CR3_DDRE                                    (0x1 << 13)    // DMA Disable on Reception Error
#define  _USART6_CR3_OVRDIS                                  (0x1 << 12)    // Overrun Disable
#define  _USART6_CR3_ONEBIT                                  (0x1 << 11)    // One sample bit method enable
#define  _USART6_CR3_CTSIE                                   (0x1 << 10)    // CTS interrupt enable
#define  _USART6_CR3_CTSE                                    (0x1 << 9)    // CTS enable
#define  _USART6_CR3_RTSE                                    (0x1 << 8)    // RTS enable
#define  _USART6_CR3_DMAT                                    (0x1 << 7)    // DMA enable transmitter
#define  _USART6_CR3_DMAR                                    (0x1 << 6)    // DMA enable receiver
#define  _USART6_CR3_SCEN                                    (0x1 << 5)    // Smartcard mode enable
#define  _USART6_CR3_NACK                                    (0x1 << 4)    // Smartcard NACK enable
#define  _USART6_CR3_HDSEL                                   (0x1 << 3)    // Half-duplex selection
#define  _USART6_CR3_IRLP                                    (0x1 << 2)    // Ir low-power
#define  _USART6_CR3_IREN                                    (0x1 << 1)    // Ir mode enable
#define  _USART6_CR3_EIE                                     (0x1 << 0)    // Error interrupt enable
#define  _USART6_BRR_DIV_Mantissa                            (0xfff << 4)    // DIV_Mantissa
#define  _USART6_BRR_DIV_Fraction                            (0xf << 0)    // DIV_Fraction
#define  _USART6_GTPR_GT                                     (0xff << 8)    // Guard time value
#define  _USART6_GTPR_PSC                                    (0xff << 0)    // Prescaler value
#define  _USART6_RTOR_BLEN                                   (0xff << 24)    // Block Length
#define  _USART6_RTOR_RTO                                    (0xffffff << 0)    // Receiver timeout value
#define  _USART6_RQR_TXFRQ                                   (0x1 << 4)    // Transmit data flush request
#define  _USART6_RQR_RXFRQ                                   (0x1 << 3)    // Receive data flush request
#define  _USART6_RQR_MMRQ                                    (0x1 << 2)    // Mute mode request
#define  _USART6_RQR_SBKRQ                                   (0x1 << 1)    // Send break request
#define  _USART6_RQR_ABRRQ                                   (0x1 << 0)    // Auto baud rate request
#define  _USART6_ISR_REACK                                   (0x1 << 22)    // REACK
#define  _USART6_ISR_TEACK                                   (0x1 << 21)    // TEACK
#define  _USART6_ISR_WUF                                     (0x1 << 20)    // WUF
#define  _USART6_ISR_RWU                                     (0x1 << 19)    // RWU
#define  _USART6_ISR_SBKF                                    (0x1 << 18)    // SBKF
#define  _USART6_ISR_CMF                                     (0x1 << 17)    // CMF
#define  _USART6_ISR_BUSY                                    (0x1 << 16)    // BUSY
#define  _USART6_ISR_ABRF                                    (0x1 << 15)    // ABRF
#define  _USART6_ISR_ABRE                                    (0x1 << 14)    // ABRE
#define  _USART6_ISR_EOBF                                    (0x1 << 12)    // EOBF
#define  _USART6_ISR_RTOF                                    (0x1 << 11)    // RTOF
#define  _USART6_ISR_CTS                                     (0x1 << 10)    // CTS
#define  _USART6_ISR_CTSIF                                   (0x1 << 9)    // CTSIF
#define  _USART6_ISR_LBDF                                    (0x1 << 8)    // LBDF
#define  _USART6_ISR_TXE                                     (0x1 << 7)    // TXE
#define  _USART6_ISR_TC                                      (0x1 << 6)    // TC
#define  _USART6_ISR_RXNE                                    (0x1 << 5)    // RXNE
#define  _USART6_ISR_IDLE                                    (0x1 << 4)    // IDLE
#define  _USART6_ISR_ORE                                     (0x1 << 3)    // ORE
#define  _USART6_ISR_NF                                      (0x1 << 2)    // NF
#define  _USART6_ISR_FE                                      (0x1 << 1)    // FE
#define  _USART6_ISR_PE                                      (0x1 << 0)    // PE
#define  _USART6_ICR_WUCF                                    (0x1 << 20)    // Wakeup from Stop mode clear flag
#define  _USART6_ICR_CMCF                                    (0x1 << 17)    // Character match clear flag
#define  _USART6_ICR_EOBCF                                   (0x1 << 12)    // End of block clear flag
#define  _USART6_ICR_RTOCF                                   (0x1 << 11)    // Receiver timeout clear flag
#define  _USART6_ICR_CTSCF                                   (0x1 << 9)    // CTS clear flag
#define  _USART6_ICR_LBDCF                                   (0x1 << 8)    // LIN break detection clear flag
#define  _USART6_ICR_TCCF                                    (0x1 << 6)    // Transmission complete clear flag
#define  _USART6_ICR_IDLECF                                  (0x1 << 4)    // Idle line detected clear flag
#define  _USART6_ICR_ORECF                                   (0x1 << 3)    // Overrun error clear flag
#define  _USART6_ICR_NCF                                     (0x1 << 2)    // Noise detected clear flag
#define  _USART6_ICR_FECF                                    (0x1 << 1)    // Framing error clear flag
#define  _USART6_ICR_PECF                                    (0x1 << 0)    // Parity error clear flag
#define  _USART6_RDR_RDR                                     (0x1ff << 0)    // Receive data value
#define  _USART6_TDR_TDR                                     (0x1ff << 0)    // Transmit data value

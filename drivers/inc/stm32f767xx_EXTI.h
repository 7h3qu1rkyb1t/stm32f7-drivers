#define Get_EXTI_IMR(FLAG)                   (*<uint32_t*>0x40013c00 |= FLAG)
#define Get_EXTI_EMR(FLAG)                   (*<uint32_t*>0x40013c04 |= FLAG)
#define Get_EXTI_RTSR(FLAG)                  (*<uint32_t*>0x40013c08 |= FLAG)
#define Get_EXTI_FTSR(FLAG)                  (*<uint32_t*>0x40013c0c |= FLAG)
#define Get_EXTI_SWIER(FLAG)                 (*<uint32_t*>0x40013c10 |= FLAG)
#define Get_EXTI_PR(FLAG)                    (*<uint32_t*>0x40013c14 |= FLAG)
#define Set_EXTI_IMR(FLAG)                   (*<uint32_t*>0x40013c00 &= FLAG)
#define Clr_EXTI_IMR(FLAG)                   (*<uint32_t*>0x40013c00 |= ~FLAG)
#define Set_EXTI_EMR(FLAG)                   (*<uint32_t*>0x40013c04 &= FLAG)
#define Clr_EXTI_EMR(FLAG)                   (*<uint32_t*>0x40013c04 |= ~FLAG)
#define Set_EXTI_RTSR(FLAG)                  (*<uint32_t*>0x40013c08 &= FLAG)
#define Clr_EXTI_RTSR(FLAG)                  (*<uint32_t*>0x40013c08 |= ~FLAG)
#define Set_EXTI_FTSR(FLAG)                  (*<uint32_t*>0x40013c0c &= FLAG)
#define Clr_EXTI_FTSR(FLAG)                  (*<uint32_t*>0x40013c0c |= ~FLAG)
#define Set_EXTI_SWIER(FLAG)                 (*<uint32_t*>0x40013c10 &= FLAG)
#define Clr_EXTI_SWIER(FLAG)                 (*<uint32_t*>0x40013c10 |= ~FLAG)
#define Set_EXTI_PR(FLAG)                    (*<uint32_t*>0x40013c14 &= FLAG)
#define Clr_EXTI_PR(FLAG)                    (*(uint32_t*)0x40013c14 |= ~FLAG)
#define  _EXTI_IMR_MR0                                       (0x1 << 0)    // Interrupt Mask on line 0
#define  _EXTI_IMR_MR1                                       (0x1 << 1)    // Interrupt Mask on line 1
#define  _EXTI_IMR_MR2                                       (0x1 << 2)    // Interrupt Mask on line 2
#define  _EXTI_IMR_MR3                                       (0x1 << 3)    // Interrupt Mask on line 3
#define  _EXTI_IMR_MR4                                       (0x1 << 4)    // Interrupt Mask on line 4
#define  _EXTI_IMR_MR5                                       (0x1 << 5)    // Interrupt Mask on line 5
#define  _EXTI_IMR_MR6                                       (0x1 << 6)    // Interrupt Mask on line 6
#define  _EXTI_IMR_MR7                                       (0x1 << 7)    // Interrupt Mask on line 7
#define  _EXTI_IMR_MR8                                       (0x1 << 8)    // Interrupt Mask on line 8
#define  _EXTI_IMR_MR9                                       (0x1 << 9)    // Interrupt Mask on line 9
#define  _EXTI_IMR_MR10                                      (0x1 << 10)    // Interrupt Mask on line 10
#define  _EXTI_IMR_MR11                                      (0x1 << 11)    // Interrupt Mask on line 11
#define  _EXTI_IMR_MR12                                      (0x1 << 12)    // Interrupt Mask on line 12
#define  _EXTI_IMR_MR13                                      (0x1 << 13)    // Interrupt Mask on line 13
#define  _EXTI_IMR_MR14                                      (0x1 << 14)    // Interrupt Mask on line 14
#define  _EXTI_IMR_MR15                                      (0x1 << 15)    // Interrupt Mask on line 15
#define  _EXTI_IMR_MR16                                      (0x1 << 16)    // Interrupt Mask on line 16
#define  _EXTI_IMR_MR17                                      (0x1 << 17)    // Interrupt Mask on line 17
#define  _EXTI_IMR_MR18                                      (0x1 << 18)    // Interrupt Mask on line 18
#define  _EXTI_IMR_MR19                                      (0x1 << 19)    // Interrupt Mask on line 19
#define  _EXTI_IMR_MR20                                      (0x1 << 20)    // Interrupt Mask on line 20
#define  _EXTI_IMR_MR21                                      (0x1 << 21)    // Interrupt Mask on line 21
#define  _EXTI_IMR_MR22                                      (0x1 << 22)    // Interrupt Mask on line 22
#define  _EXTI_EMR_MR0                                       (0x1 << 0)    // Event Mask on line 0
#define  _EXTI_EMR_MR1                                       (0x1 << 1)    // Event Mask on line 1
#define  _EXTI_EMR_MR2                                       (0x1 << 2)    // Event Mask on line 2
#define  _EXTI_EMR_MR3                                       (0x1 << 3)    // Event Mask on line 3
#define  _EXTI_EMR_MR4                                       (0x1 << 4)    // Event Mask on line 4
#define  _EXTI_EMR_MR5                                       (0x1 << 5)    // Event Mask on line 5
#define  _EXTI_EMR_MR6                                       (0x1 << 6)    // Event Mask on line 6
#define  _EXTI_EMR_MR7                                       (0x1 << 7)    // Event Mask on line 7
#define  _EXTI_EMR_MR8                                       (0x1 << 8)    // Event Mask on line 8
#define  _EXTI_EMR_MR9                                       (0x1 << 9)    // Event Mask on line 9
#define  _EXTI_EMR_MR10                                      (0x1 << 10)    // Event Mask on line 10
#define  _EXTI_EMR_MR11                                      (0x1 << 11)    // Event Mask on line 11
#define  _EXTI_EMR_MR12                                      (0x1 << 12)    // Event Mask on line 12
#define  _EXTI_EMR_MR13                                      (0x1 << 13)    // Event Mask on line 13
#define  _EXTI_EMR_MR14                                      (0x1 << 14)    // Event Mask on line 14
#define  _EXTI_EMR_MR15                                      (0x1 << 15)    // Event Mask on line 15
#define  _EXTI_EMR_MR16                                      (0x1 << 16)    // Event Mask on line 16
#define  _EXTI_EMR_MR17                                      (0x1 << 17)    // Event Mask on line 17
#define  _EXTI_EMR_MR18                                      (0x1 << 18)    // Event Mask on line 18
#define  _EXTI_EMR_MR19                                      (0x1 << 19)    // Event Mask on line 19
#define  _EXTI_EMR_MR20                                      (0x1 << 20)    // Event Mask on line 20
#define  _EXTI_EMR_MR21                                      (0x1 << 21)    // Event Mask on line 21
#define  _EXTI_EMR_MR22                                      (0x1 << 22)    // Event Mask on line 22
#define  _EXTI_RTSR_TR0                                      (0x1 << 0)    // Rising trigger event configuration of line 0
#define  _EXTI_RTSR_TR1                                      (0x1 << 1)    // Rising trigger event configuration of line 1
#define  _EXTI_RTSR_TR2                                      (0x1 << 2)    // Rising trigger event configuration of line 2
#define  _EXTI_RTSR_TR3                                      (0x1 << 3)    // Rising trigger event configuration of line 3
#define  _EXTI_RTSR_TR4                                      (0x1 << 4)    // Rising trigger event configuration of line 4
#define  _EXTI_RTSR_TR5                                      (0x1 << 5)    // Rising trigger event configuration of line 5
#define  _EXTI_RTSR_TR6                                      (0x1 << 6)    // Rising trigger event configuration of line 6
#define  _EXTI_RTSR_TR7                                      (0x1 << 7)    // Rising trigger event configuration of line 7
#define  _EXTI_RTSR_TR8                                      (0x1 << 8)    // Rising trigger event configuration of line 8
#define  _EXTI_RTSR_TR9                                      (0x1 << 9)    // Rising trigger event configuration of line 9
#define  _EXTI_RTSR_TR10                                     (0x1 << 10)    // Rising trigger event configuration of line 10
#define  _EXTI_RTSR_TR11                                     (0x1 << 11)    // Rising trigger event configuration of line 11
#define  _EXTI_RTSR_TR12                                     (0x1 << 12)    // Rising trigger event configuration of line 12
#define  _EXTI_RTSR_TR13                                     (0x1 << 13)    // Rising trigger event configuration of line 13
#define  _EXTI_RTSR_TR14                                     (0x1 << 14)    // Rising trigger event configuration of line 14
#define  _EXTI_RTSR_TR15                                     (0x1 << 15)    // Rising trigger event configuration of line 15
#define  _EXTI_RTSR_TR16                                     (0x1 << 16)    // Rising trigger event configuration of line 16
#define  _EXTI_RTSR_TR17                                     (0x1 << 17)    // Rising trigger event configuration of line 17
#define  _EXTI_RTSR_TR18                                     (0x1 << 18)    // Rising trigger event configuration of line 18
#define  _EXTI_RTSR_TR19                                     (0x1 << 19)    // Rising trigger event configuration of line 19
#define  _EXTI_RTSR_TR20                                     (0x1 << 20)    // Rising trigger event configuration of line 20
#define  _EXTI_RTSR_TR21                                     (0x1 << 21)    // Rising trigger event configuration of line 21
#define  _EXTI_RTSR_TR22                                     (0x1 << 22)    // Rising trigger event configuration of line 22
#define  _EXTI_FTSR_TR0                                      (0x1 << 0)    // Falling trigger event configuration of line 0
#define  _EXTI_FTSR_TR1                                      (0x1 << 1)    // Falling trigger event configuration of line 1
#define  _EXTI_FTSR_TR2                                      (0x1 << 2)    // Falling trigger event configuration of line 2
#define  _EXTI_FTSR_TR3                                      (0x1 << 3)    // Falling trigger event configuration of line 3
#define  _EXTI_FTSR_TR4                                      (0x1 << 4)    // Falling trigger event configuration of line 4
#define  _EXTI_FTSR_TR5                                      (0x1 << 5)    // Falling trigger event configuration of line 5
#define  _EXTI_FTSR_TR6                                      (0x1 << 6)    // Falling trigger event configuration of line 6
#define  _EXTI_FTSR_TR7                                      (0x1 << 7)    // Falling trigger event configuration of line 7
#define  _EXTI_FTSR_TR8                                      (0x1 << 8)    // Falling trigger event configuration of line 8
#define  _EXTI_FTSR_TR9                                      (0x1 << 9)    // Falling trigger event configuration of line 9
#define  _EXTI_FTSR_TR10                                     (0x1 << 10)    // Falling trigger event configuration of line 10
#define  _EXTI_FTSR_TR11                                     (0x1 << 11)    // Falling trigger event configuration of line 11
#define  _EXTI_FTSR_TR12                                     (0x1 << 12)    // Falling trigger event configuration of line 12
#define  _EXTI_FTSR_TR13                                     (0x1 << 13)    // Falling trigger event configuration of line 13
#define  _EXTI_FTSR_TR14                                     (0x1 << 14)    // Falling trigger event configuration of line 14
#define  _EXTI_FTSR_TR15                                     (0x1 << 15)    // Falling trigger event configuration of line 15
#define  _EXTI_FTSR_TR16                                     (0x1 << 16)    // Falling trigger event configuration of line 16
#define  _EXTI_FTSR_TR17                                     (0x1 << 17)    // Falling trigger event configuration of line 17
#define  _EXTI_FTSR_TR18                                     (0x1 << 18)    // Falling trigger event configuration of line 18
#define  _EXTI_FTSR_TR19                                     (0x1 << 19)    // Falling trigger event configuration of line 19
#define  _EXTI_FTSR_TR20                                     (0x1 << 20)    // Falling trigger event configuration of line 20
#define  _EXTI_FTSR_TR21                                     (0x1 << 21)    // Falling trigger event configuration of line 21
#define  _EXTI_FTSR_TR22                                     (0x1 << 22)    // Falling trigger event configuration of line 22
#define  _EXTI_SWIER_SWIER0                                  (0x1 << 0)    // Software Interrupt on line 0
#define  _EXTI_SWIER_SWIER1                                  (0x1 << 1)    // Software Interrupt on line 1
#define  _EXTI_SWIER_SWIER2                                  (0x1 << 2)    // Software Interrupt on line 2
#define  _EXTI_SWIER_SWIER3                                  (0x1 << 3)    // Software Interrupt on line 3
#define  _EXTI_SWIER_SWIER4                                  (0x1 << 4)    // Software Interrupt on line 4
#define  _EXTI_SWIER_SWIER5                                  (0x1 << 5)    // Software Interrupt on line 5
#define  _EXTI_SWIER_SWIER6                                  (0x1 << 6)    // Software Interrupt on line 6
#define  _EXTI_SWIER_SWIER7                                  (0x1 << 7)    // Software Interrupt on line 7
#define  _EXTI_SWIER_SWIER8                                  (0x1 << 8)    // Software Interrupt on line 8
#define  _EXTI_SWIER_SWIER9                                  (0x1 << 9)    // Software Interrupt on line 9
#define  _EXTI_SWIER_SWIER10                                 (0x1 << 10)    // Software Interrupt on line 10
#define  _EXTI_SWIER_SWIER11                                 (0x1 << 11)    // Software Interrupt on line 11
#define  _EXTI_SWIER_SWIER12                                 (0x1 << 12)    // Software Interrupt on line 12
#define  _EXTI_SWIER_SWIER13                                 (0x1 << 13)    // Software Interrupt on line 13
#define  _EXTI_SWIER_SWIER14                                 (0x1 << 14)    // Software Interrupt on line 14
#define  _EXTI_SWIER_SWIER15                                 (0x1 << 15)    // Software Interrupt on line 15
#define  _EXTI_SWIER_SWIER16                                 (0x1 << 16)    // Software Interrupt on line 16
#define  _EXTI_SWIER_SWIER17                                 (0x1 << 17)    // Software Interrupt on line 17
#define  _EXTI_SWIER_SWIER18                                 (0x1 << 18)    // Software Interrupt on line 18
#define  _EXTI_SWIER_SWIER19                                 (0x1 << 19)    // Software Interrupt on line 19
#define  _EXTI_SWIER_SWIER20                                 (0x1 << 20)    // Software Interrupt on line 20
#define  _EXTI_SWIER_SWIER21                                 (0x1 << 21)    // Software Interrupt on line 21
#define  _EXTI_SWIER_SWIER22                                 (0x1 << 22)    // Software Interrupt on line 22
#define  _EXTI_PR_PR0                                        (0x1 << 0)    // Pending bit 0
#define  _EXTI_PR_PR1                                        (0x1 << 1)    // Pending bit 1
#define  _EXTI_PR_PR2                                        (0x1 << 2)    // Pending bit 2
#define  _EXTI_PR_PR3                                        (0x1 << 3)    // Pending bit 3
#define  _EXTI_PR_PR4                                        (0x1 << 4)    // Pending bit 4
#define  _EXTI_PR_PR5                                        (0x1 << 5)    // Pending bit 5
#define  _EXTI_PR_PR6                                        (0x1 << 6)    // Pending bit 6
#define  _EXTI_PR_PR7                                        (0x1 << 7)    // Pending bit 7
#define  _EXTI_PR_PR8                                        (0x1 << 8)    // Pending bit 8
#define  _EXTI_PR_PR9                                        (0x1 << 9)    // Pending bit 9
#define  _EXTI_PR_PR10                                       (0x1 << 10)    // Pending bit 10
#define  _EXTI_PR_PR11                                       (0x1 << 11)    // Pending bit 11
#define  _EXTI_PR_PR12                                       (0x1 << 12)    // Pending bit 12
#define  _EXTI_PR_PR13                                       (0x1 << 13)    // Pending bit 13
#define  _EXTI_PR_PR14                                       (0x1 << 14)    // Pending bit 14
#define  _EXTI_PR_PR15                                       (0x1 << 15)    // Pending bit 15
#define  _EXTI_PR_PR16                                       (0x1 << 16)    // Pending bit 16
#define  _EXTI_PR_PR17                                       (0x1 << 17)    // Pending bit 17
#define  _EXTI_PR_PR18                                       (0x1 << 18)    // Pending bit 18
#define  _EXTI_PR_PR19                                       (0x1 << 19)    // Pending bit 19
#define  _EXTI_PR_PR20                                       (0x1 << 20)    // Pending bit 20
#define  _EXTI_PR_PR21                                       (0x1 << 21)    // Pending bit 21
#define  _EXTI_PR_PR22                                       (0x1 << 22)    // Pending bit 22

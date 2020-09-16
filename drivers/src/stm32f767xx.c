#include "stm32f767xx.h"

void exti_init(Exti_Config_R* config){
    RCC_SYSCFG_Clk_en();
    // unmask interrupt
    EXTI->EXTI_IMR |=  (1 << config->exti_num);
    // Set mode
    if (config->mode == EXTI_MODE_RISING){
        EXTI->EXTI_RTSR |= (1 << config->exti_num);
        EXTI->EXTI_FTSR &= ~(1 << config->exti_num);
    } else if (config->mode == EXTI_MODE_FALLING){
        EXTI->EXTI_RTSR &= ~(1 << config->exti_num);
        EXTI->EXTI_FTSR |= (1 << config->exti_num);
    } else {
        EXTI->EXTI_RTSR |= (1 << config->exti_num);
        EXTI->EXTI_FTSR |= (1 << config->exti_num);
    }
    // Set syscfg register
    if(config->exti_num <= 0xF){                 // if it is > 0xB then these are software exti intr
        uint8_t sys_cfg_reg = config->exti_num/4;
        uint8_t cfg_offset = (config->exti_num % 4) * 4;
        SYSCFG->SYSCFG_EXTICR[sys_cfg_reg] |= config->port << cfg_offset;
    }
}

void IRQ_Configure(uint8_t intr, uint8_t state, uint8_t priority){
    uint8_t int_reg = intr / 32;
    uint8_t bit_offset = intr % 32;
    // set or reset interrupt
    if (state){
        NVIC->NVIC_ISER[int_reg] |= (1<< bit_offset);
    } else {
        NVIC->NVIC_ICER[int_reg] |= (1<< bit_offset);
    }
    // set priority
    uint8_t prt_reg = intr / 4;
    uint8_t prt_offset = (intr % 4) * 8 + 4 ;
    NVIC->NVIC_IPR[prt_reg] |= (priority << prt_offset);
}

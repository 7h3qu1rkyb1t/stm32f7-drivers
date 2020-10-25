#include "stm32f767xx_I2C.h"

int ahb_presc[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
int apb_presc[] = {1, 2, 4, 8, 16};

uint8_t* calc_timings(uint32_t sdc_clk, uint32_t i2c_clk){
    static uint8_t timings[5] = {0,0,0,4,2};
    /* formula for calculating scl_clk
     * (F_i2cclk/F_scl_clk) = (SCLL+1 + SCLH+1)*(PRESC + 1)
     */
    float clk_ratio = (float)i2c_clk/(float)sdc_clk;
    float delay = 300/1000000000;
    clk_ratio -= delay*(float)i2c_clk;
    uint8_t presc, scl_l, scl_h;
    // if ratio is such that clk is less than minimum possible clk then provide minimum clk
    if (clk_ratio > 4096.0){
        scl_h = scl_l = 128;
        presc = 16;
    } else {
        // minimum deviation is difference when multiplied presc and scl_width to that of expected clk
        float minimum_deviation = 16.0;
        uint8_t presc_min = (uint8_t)ceil(clk_ratio /256.0);
        presc = presc_min;
        float deviation;
        // prescalar is selected such that deviation is minimum
        for(presc_min; presc_min <=16; presc_min++){
            deviation = fmod(clk_ratio , (float)presc_min);
            if (minimum_deviation > deviation){
                minimum_deviation = deviation;
                presc = presc_min;
            }
        }
        // -2 because result may be 256 which may overflow, since we are subtracting scl_h & _l by 1
        uint8_t scl_width = (uint8_t)(clk_ratio / (float)presc) - 2;
        scl_h = scl_width / 2;
        scl_l = scl_width - scl_h;
        presc -=1;
    }
    timings[0] = presc;
    timings[1] = scl_h;
    timings[2] = scl_l;
    /* duty = duty > 99 ? 99 */
    /*     : duty < 1 ? 1 */
    /*     : duty;             // if duty is greater than 99 then 99 else if less than 1 then 1 else duty */
    /* uint8_t SCLL, SCLH; */
    /* if (duty == 50){ */
    /*     SCLL = SCLH = 127; */
    /* } else if (duty <50){ */
    /*     SCLL = 128; */
    /*     SCLH = (100*SCLL)/duty - SCLL; */
    /* } else{ */
    /*     SCLH = 128; */
    /*     SCLL = (100*SCLH)/duty - SCLH; */
    /* } */
    return timings;
}

I2C_Config_t I2C_Init(I2C_RegDef_t* handle, uint16_t own_address, I2C_ClkSrc clk_src, uint32_t speed){
    // TODO: add compilation checks for parameters
    I2C_Config_t config;
    config.reg_handle = handle;
    // NOTE: if clk fails check here
    I2C_interfaces interface = _GET_I2C_Interface(handle);
    // clr PE
    handle->CR1 &= ~_I2C_CR1_PE;

    // configure RCC_DKCCFGR for clk source selection
    uint32_t clk ;
    // first clear and then set 
    RCC->DKCFGR2 &= ~(3 << (interface*2 + 16));
    if (clk_src == RCC_ClkSrc_PClk){ 
        // no need to set anything its 0 anyway
        // assumed to be clk as HSI. TODO: later implement full calculation of clk
        uint8_t ahb_presc_indx = Get_RCC_CFGR(_RCC_CFGR_HPRE) >> 4 ;
        ahb_presc_indx = ahb_presc_indx < 8 ? 1 : ((ahb_presc_indx & 0x7f) +1);
        uint8_t apb_presc_indx = Get_RCC_CFGR(_RCC_CFGR_PPRE2)>>13;
        ahb_presc_indx = ahb_presc_indx < 4 ? 1 : ((ahb_presc_indx & 0x7) +1);      // if less than 4 then no deviding

        clk = 16000000 / (ahb_presc[ahb_presc_indx] * apb_presc[apb_presc_indx] );
    } else if(clk_src == RCC_ClkSrc_SysClk) {
        // SysClk
        RCC->DKCFGR2 |= (1 << (interface*2 + 16));
        if(Get_RCC_CR(_RCC_CR_PLLON)){
            // TODO implement pll clock calculation default 48 MHz is assumed
            clk = 48000000U;
        } else{
            if(Get_RCC_CR(_RCC_CR_HSEON)){
                // TODO: calculate HSE clk
                clk = 4000000U;
            }else{
                // HSI Clock 16MHz
                clk = 16000000U;
            }
        }
    } else {
        // HSI
        RCC->DKCFGR2 |= (2 << (interface*2 + 16));
        clk = 16000000U;            // 16MHz is HSI
    }

    // configure ANOFF and DNF in CR1: By default AN is on and DNF is off
    // configure PRESCL, SDADEL, SCLDEL, SCLH, SCLL in TIMNGR
    uint8_t * timings = calc_timings(speed, clk);
    uint8_t PRESC = timings[0];
    uint8_t SCLH = timings[1];
    uint8_t SCLL = timings[2];
    uint8_t SCLDEL = timings[3];
    uint8_t SDADEL = timings[4];
    // configure NOSTRETCH CR1      :: By default it is reset 
    // in slave mode enable hardware byte control && enable clock stretch
    // enable reload                :: no need default hardware byte control
    // nbytes = 1 to get control over each byte :: disable by default
    /* handle->CR1 = ( _I2C_CR1_SBC | _I2C_CR1_NOSTRETCH ); */

    // Set PE bit in CR1
    handle->CR1 |= _I2C_CR1_PE;
    return config;
}

void I2C_deInit(I2C_interfaces interface){
}

void I2C_StartMaster(I2C_RegDef_t* handle){
}

void I2C_StopMaster(I2C_RegDef_t* handle){
}

void I2C_Reset(I2C_RegDef_t* handle){
    // Clr PE
    // wait for 3 cycles
    // Check PE
    // Set PE
}

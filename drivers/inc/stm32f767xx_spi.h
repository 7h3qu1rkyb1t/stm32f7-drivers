#include "stm32f767xx.h"


/* 
 * spi config flags
 */

#define SPI_Config_CPHA     (1 << 0 )
#define SPI_Config_CPOL     (1 << 1 )
#define SPI_Config_MASTER   (1 << 2 )
#define SPI_Config_LSB_FST  (1 << 3 )
#define SPI_Config_SSI      (1 << 4 )
#define SPI_Config_SSM      (1 << 5 )
#define SPI_Config_RX_ONLY  (1 << 6 )
#define SPI_Config_CRC_16B  (1 << 7 )
#define SPI_Config_CRC_NEXT (1 << 8 )
#define SPI_Config_CRC_EN   (1 << 9 )
#define SPI_Config_BIDIOE   (1 << 10)
#define SPI_Config_BIDIEN   (1 << 11)
#define SPI_Config_RXDMAEN  (1 << 12)
#define SPI_Config_TXDMAEN  (1 << 13)
#define SPI_Config_SSOE     (1 << 14)
#define SPI_Config_NSSP     (1 << 15)
#define SPI_Config_FRF      (1 << 16)
#define SPI_Config_ERRIE    (1 << 17)
#define SPI_Config_RXNEIE   (1 << 18)
#define SPI_Config_TXEIE    (1 << 19)
#define SPI_Config_FRXTH    (1 << 20)
#define SPI_Config_LDMA_RX  (1 << 21)
#define SPI_Config_LDMA_TX  (1 << 22)


typedef enum {
    SPI_Status_RXNE     ,
    SPI_Status_TXE      ,
    SPI_Status_CHSIDE   ,
    SPI_Status_UDR      ,
    SPI_Status_CRC_ERR  ,
    SPI_Status_MODF     ,
    SPI_Status_OVR      ,
    SPI_Status_BSY      ,
    SPI_Status_FRE      ,
    SPI_Status_FRLVL    ,
    SPI_Status_FTLVL    ,
} SPI_Status_Flags;

typedef enum {
    SPI_Mode_Slave,
    SPI_Mode_Master,
}SPI_Device_mode;

typedef enum {
    SPI_Bus_Full_duplex,
    SPI_Bus_Half_duplex,        // TODO: desc
    SPI_Bus_Simplex             // Recieve only mode for transmit only just disconnect Rx pin
}SPI_BusConfig;

typedef enum {
    SPI_CPHA_First,           // data is available in first transition
    SPI_CPHA_Second           // data is available in second transition
}SPI_CPHA;

typedef enum {
    SPI_CPOL_LOW,           // idle low clk
    SPI_CPOL_HIGH           // idle high clk
}SPI_CPOL;

typedef enum {
    SPI_SSM_RESET,          // slave management is done by hardware
    SPI_SSM_SET             // slave management is done by software
}SPI_SSM;

typedef enum {
    SPI_pclk_div_by_2,
    SPI_pclk_div_by_4,
    SPI_pclk_div_by_8,
    SPI_pclk_div_by_16,
    SPI_pclk_div_by_32,
    SPI_pclk_div_by_64,
    SPI_pclk_div_by_128,
    SPI_pclk_div_by_256
}SPI_SPEED;

typedef enum {
    RCC_SPI1,
    RCC_SPI2,
    RCC_SPI3,
    RCC_SPI4,
    RCC_SPI5,
    RCC_SPI6
}SPI_Interfaces;

typedef struct {
    SPI_Device_mode device_mode;    // Slave or Master
    SPI_BusConfig bus_config;       // Mode of the bus. For simplex transmit only mode use full duplex and ignore miso
    uint8_t ds;                     // data frame size (4-16) bits allowed
    SPI_CPHA cpha;                  // clock phase (data read on first or second cycle)
    SPI_CPOL cpol;                  // Clock polarity (idle state of clk)
    SPI_SSM ssm;                    // software slave management
    SPI_SPEED speed;                // spi clk speed
}SPI_I2s_Config_t;

typedef struct {
    SPI_I2S_RegDef_t* handle;
    SPI_I2s_Config_t config;
}SPI_Handle_t;

/* fuctions */

// Initialization
void SPI_Init(SPI_Handle_t* PinHandler);
void SPI_DeInit(SPI_Interfaces interface);

// clock control
void RCC_SPI_ClkCtrl(SPI_Interfaces interface, uint8_t State);

// Data send and recieve
void SPI_SendData(SPI_I2S_RegDef_t* reg, uint8_t* tx_buf, uint32_t size);
void SPI_ReceiveData(SPI_I2S_RegDef_t* reg, uint8_t* rx_buf, uint32_t size);

// Interupt handling
void SPI_irq_config(uint8_t irq_num, uint8_t state);            // SET or RESET state
void SPI_IRQ_set_priority(uint8_t irq_num, uint32_t priority);
void SPI_IRQ_Handling(SPI_Handle_t* handle);

// Enable or disable SPI
void SPI_Control(SPI_I2S_RegDef_t* reg_handle, uint8_t state);
uint32_t SPI_Status(SPI_I2S_RegDef_t* reg_handle, SPI_Status_Flags item);

/*
 * Configure SPI
 * Should be used after initialization
 * flags are from enum spi_flags
 */
void SPI_Config(SPI_Handle_t handler, uint32_t flags);

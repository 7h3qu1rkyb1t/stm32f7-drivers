################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/src/stm32f767xx.c \
../drivers/src/stm32f767xx_gpio.c \
../drivers/src/stm32f7xx_spi.c 

OBJS += \
./drivers/src/stm32f767xx.o \
./drivers/src/stm32f767xx_gpio.o \
./drivers/src/stm32f7xx_spi.o 

C_DEPS += \
./drivers/src/stm32f767xx.d \
./drivers/src/stm32f767xx_gpio.d \
./drivers/src/stm32f7xx_spi.d 


# Each subdirectory must supply rules for building sources it contributes
drivers/src/stm32f767xx.o: ../drivers/src/stm32f767xx.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DSTM32 -DSTM32F7 -DDEBUG -DSTM32F767ZITx -c -I../Inc -I"/home/gireesh/playground/embedded/cube_workspace/udemy/drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"drivers/src/stm32f767xx.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
drivers/src/stm32f767xx_gpio.o: ../drivers/src/stm32f767xx_gpio.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DSTM32 -DSTM32F7 -DDEBUG -DSTM32F767ZITx -c -I../Inc -I"/home/gireesh/playground/embedded/cube_workspace/udemy/drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"drivers/src/stm32f767xx_gpio.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"
drivers/src/stm32f7xx_spi.o: ../drivers/src/stm32f7xx_spi.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DSTM32 -DSTM32F7 -DDEBUG -DSTM32F767ZITx -c -I../Inc -I"/home/gireesh/playground/embedded/cube_workspace/udemy/drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"drivers/src/stm32f7xx_spi.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"


################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Utilities/Components/stmpe811/stmpe811.c 

OBJS += \
./Utilities/Components/stmpe811/stmpe811.o 

C_DEPS += \
./Utilities/Components/stmpe811/stmpe811.d 


# Each subdirectory must supply rules for building sources it contributes
Utilities/Components/stmpe811/stmpe811.o: ../Utilities/Components/stmpe811/stmpe811.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32 -DSTM32F746xx -DSTM32F746NGHx '-D__packed=__attribute__((__packed__))' -DSTM32F7 -DSTM32F746G_DISCO -DDEBUG '-D__weak=__attribute__((weak))' -c -I"C:/Users/nesat/STM32CubeIDE/workspace_1.0.1/LEDCONTROLLER/hal_stm_lvgl" -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I"C:/Users/nesat/STM32CubeIDE/workspace_1.0.1/LEDCONTROLLER/Utilities/STM32746G-Discovery" -I../Drivers/STM32F7xx_HAL_Driver/Inc -I"C:/Users/nesat/STM32CubeIDE/workspace_1.0.1/LEDCONTROLLER/Drivers/CMSIS/Include" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.0.1/LEDCONTROLLER/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/nesat/Documents/GitHub/lv_port_stm32f746_disco_atollic - Kopya" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.0.1/LEDCONTROLLER/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I../Inc -I../Drivers/CMSIS/Include -I"C:/Users/nesat/STM32CubeIDE/workspace_1.0.1/LEDCONTROLLER/lvgl" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.0.1/LEDCONTROLLER/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Utilities/Components/stmpe811/stmpe811.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"


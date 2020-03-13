################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Startup/startup_stm32f746nghx.s 

OBJS += \
./Startup/startup_stm32f746nghx.o 


# Each subdirectory must supply rules for building sources it contributes
Startup/%.o: ../Startup/%.s
	arm-none-eabi-gcc -mcpu=cortex-m7 -g3 -c -I"C:/Users/nesat/STM32CubeIDE/workspace_1.0.1/LEDCONTROLLER/hal_stm_lvgl" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.0.1/LEDCONTROLLER/lvgl" -I"C:/Users/nesat/STM32CubeIDE/workspace_1.0.1/LEDCONTROLLER/Utilities/STM32746G-Discovery" -x assembler-with-cpp --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"


################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include lvgl/src/lv_themes/subdir.mk
-include lvgl/src/lv_objx/subdir.mk
-include lvgl/src/lv_misc/subdir.mk
-include lvgl/src/lv_hal/subdir.mk
-include lvgl/src/lv_font/subdir.mk
-include lvgl/src/lv_draw/subdir.mk
-include lvgl/src/lv_core/subdir.mk
-include lvgl/porting/subdir.mk
-include ledsurucu/subdir.mk
-include hal_stm_lvgl/touchpad/subdir.mk
-include hal_stm_lvgl/tft/subdir.mk
-include Utilities/STM32746G-Discovery/subdir.mk
-include Utilities/Components/wm8994/subdir.mk
-include Utilities/Components/ts3510/subdir.mk
-include Utilities/Components/stmpe811/subdir.mk
-include Utilities/Components/st7789h2/subdir.mk
-include Utilities/Components/st7735/subdir.mk
-include Utilities/Components/s5k5cag/subdir.mk
-include Utilities/Components/ov9655/subdir.mk
-include Utilities/Components/otm8009a/subdir.mk
-include Utilities/Components/mfxstm32l152/subdir.mk
-include Utilities/Components/ft6x06/subdir.mk
-include Utilities/Components/ft5336/subdir.mk
-include Utilities/Components/exc7200/subdir.mk
-include Utilities/Components/adv7533/subdir.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include Drivers/STM32F7xx_HAL_Driver/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
LEDCONTROLLER.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
LEDCONTROLLER.list \


# All Target
all: LEDCONTROLLER.elf secondary-outputs

# Tool invocations
LEDCONTROLLER.elf: $(OBJS) $(USER_OBJS) C:\Users\nesat\STM32CubeIDE\workspace_1.0.1\LEDCONTROLLER\STM32F746NGHX_FLASH.ld
	arm-none-eabi-gcc -o "LEDCONTROLLER.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m7 -T"C:\Users\nesat\STM32CubeIDE\workspace_1.0.1\LEDCONTROLLER\STM32F746NGHX_FLASH.ld" --specs=nosys.specs -Wl,-Map="LEDCONTROLLER.map" -Wl,--gc-sections -static -L"C:\Users\nesat\STM32CubeIDE\workspace_1.0.1\LEDCONTROLLER\Debug\ledsurucu" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

LEDCONTROLLER.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "LEDCONTROLLER.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

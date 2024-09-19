################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
001_DIO_BASICS.lss \

FLASH_IMAGE += \
001_DIO_BASICS.hex \

EEPROM_IMAGE += \
001_DIO_BASICS.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: 001_DIO_BASICS.elf secondary-outputs

# Tool invocations
001_DIO_BASICS.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,001_DIO_BASICS.map -mmcu=atmega32 -o "001_DIO_BASICS.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

001_DIO_BASICS.lss: 001_DIO_BASICS.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S 001_DIO_BASICS.elf  >"001_DIO_BASICS.lss"
	@echo 'Finished building: $@'
	@echo ' '

001_DIO_BASICS.hex: 001_DIO_BASICS.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex 001_DIO_BASICS.elf  "001_DIO_BASICS.hex"
	@echo 'Finished building: $@'
	@echo ' '

001_DIO_BASICS.eep: 001_DIO_BASICS.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex 001_DIO_BASICS.elf  "001_DIO_BASICS.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: 001_DIO_BASICS.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 001_DIO_BASICS.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) 001_DIO_BASICS.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

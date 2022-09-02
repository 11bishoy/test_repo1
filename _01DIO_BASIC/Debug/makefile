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
_01DIO_BASIC.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: _01DIO_BASIC.elf secondary-outputs

# Tool invocations
_01DIO_BASIC.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,_01DIO_BASIC.map -mmcu=atmega32 -o "_01DIO_BASIC.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

_01DIO_BASIC.lss: _01DIO_BASIC.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S _01DIO_BASIC.elf  >"_01DIO_BASIC.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: _01DIO_BASIC.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 _01DIO_BASIC.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) _01DIO_BASIC.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

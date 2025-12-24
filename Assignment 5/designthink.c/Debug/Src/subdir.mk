################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/itm.c \
../Src/main.c \
../Src/my_led.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/itm.o \
./Src/main.o \
./Src/my_led.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/itm.d \
./Src/main.d \
./Src/my_led.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DB_G473E_ZEST1S -DSTM32G473QETx -DSTM32G4 -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/itm.cyclo ./Src/itm.d ./Src/itm.o ./Src/itm.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/my_led.cyclo ./Src/my_led.d ./Src/my_led.o ./Src/my_led.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src


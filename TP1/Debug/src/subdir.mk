################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/TP1.c \
../src/utn_lib.c \
../src/utn_ope.c 

OBJS += \
./src/TP1.o \
./src/utn_lib.o \
./src/utn_ope.o 

C_DEPS += \
./src/TP1.d \
./src/utn_lib.d \
./src/utn_ope.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '



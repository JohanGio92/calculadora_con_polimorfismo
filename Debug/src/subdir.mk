################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Consola.cpp \
../src/Opcion.cpp \
../src/Sumatoria.cpp \
../src/calculadora_con_polimorfismo.cpp 

OBJS += \
./src/Consola.o \
./src/Opcion.o \
./src/Sumatoria.o \
./src/calculadora_con_polimorfismo.o 

CPP_DEPS += \
./src/Consola.d \
./src/Opcion.d \
./src/Sumatoria.d \
./src/calculadora_con_polimorfismo.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


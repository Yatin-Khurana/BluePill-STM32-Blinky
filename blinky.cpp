#define STM32F1X_LD
#include<stm32f10x.h>
#include "RTE_Device.h"                 // Keil::Device:Startup
#include "RTE_Components.h"             // Component selection
#include "GPIO_STM32F10x.h"             // Keil::Device:GPIO
void delay(int del){
	for(int x=0;x<=1000;x++)
	for(int y=0;y<=1000;y++);
}
int main(){
	GPIOC->CRH |= GPIO_CRH_MODE13;
	while(1){
		GPIOC->BSRR |= 1<<13;
		delay(1000);
		GPIOC->BSRR |= 1<<29;
		delay(1000);
	}
	return 0;
}

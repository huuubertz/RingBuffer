// korzystamy z biblioteki od STM32Cube Hal
// poslozy nam do obslugi ukladow peryferyjnych
#include "stm32f4xx_hal.h"

int main(void){
	// zeby skorzytsac z biblioteki musimy ja zainicializowac
	HAL_Init();
	
	// zeby wlaczyc taktownie na ukladzie GPIOG korzystamy z makra
	__GPIOG_CLK_ENABLE();
	
	while(1){
		
	}
		
}
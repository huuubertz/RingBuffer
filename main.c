#include "stm32f4xx_hal.h"

/**
 * Introduces a noticable delay in program execution
 */
void delay(void)
{
  int i;
        
  for (i=0; i < 100000; i++) {
    ;
  }
} /* delay */

/** 
 * Application entry point
 */
int main(void)
{
  // Initialize STM32Cube HAL library
  HAL_Init();
  // Initialize LED pins
  LED_Init();
	
	__GPIOG_CLK_ENABLE();
	
  
  // Blink the LED on pin PG.13
  while (1) {
    // turn the LED on
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_SET);
    // introduce some delay
    delay();
    // turn the LED off
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_RESET);
    // introduce some delay
    delay();
  } // while (1)
        
} /* main */
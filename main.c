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

/**
 * This function configures the LED pins
 */
void LED_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct;
 
  // GPIO Ports Clock Enable
  __GPIOG_CLK_ENABLE();
 
  // Configure GPIO pin PG13
  GPIO_InitStruct.Pin   = GPIO_PIN_13;
  GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;        // push-pull output
  GPIO_InitStruct.Pull  = GPIO_PULLDOWN;              // pull-down enabled
  GPIO_InitStruct.Speed = GPIO_SPEED_LOW;             // analog pin bandwidth limited
  HAL_GPIO_Init(GPIOG, &GPIO_InitStruct);
        
} /* LED_Init */

int main(void)
{
  // Initialize STM32Cube HAL library
  HAL_Init();
  // Initialize LED pins
  LED_Init();
	
	__GPIOG_CLK_ENABLE();
	
  
  // Blink the LED on pin PG.13
  while (1) {
		/*
    // turn the LED on
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_SET);
    // introduce some delay
    delay();
    // turn the LED off
    HAL_GPIO_WritePin(GPIOG, GPIO_PIN_13, GPIO_PIN_RESET);
    // introduce some delay
    delay();
		*/
  } // while (1)
        
} /* main */

/**
 * System Tick Interrupt Service Routine 
 */
void SysTick_Handler(void)
{
    // nothing to do here yet
        
} /* SysTick_Handler */

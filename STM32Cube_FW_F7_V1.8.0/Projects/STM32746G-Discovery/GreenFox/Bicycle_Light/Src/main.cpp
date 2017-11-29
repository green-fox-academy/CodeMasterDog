 /**
  ******************************************************************************
  * @file    Templates/Src/main.c 
  * @author  MCD Application Team
  * @version V1.0.3
  * @date    22-April-2016 
  * @brief   STM32F7xx HAL API Template project 
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/** @addtogroup STM32F7xx_HAL_Examples
  * @{
  */

/** @addtogroup Templates
  * @{
  */ 

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
//#define HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, GPIO_PIN_SET) LED01_ON;
#define LED00_ON HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, GPIO_PIN_SET)
#define LED01_ON HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_SET)
#define LED02_ON HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_SET)
#define LED03_ON HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET)
#define LED04_ON HAL_GPIO_WritePin(GPIOG, GPIO_PIN_7, GPIO_PIN_SET)
#define LED05_ON HAL_GPIO_WritePin(GPIOI, GPIO_PIN_0, GPIO_PIN_SET)
#define LED06_ON HAL_GPIO_WritePin(GPIOH, GPIO_PIN_6, GPIO_PIN_SET)
#define LED07_ON HAL_GPIO_WritePin(GPIOI, GPIO_PIN_3, GPIO_PIN_SET)
#define LED00_OFF HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, GPIO_PIN_RESET)
#define LED01_OFF HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_RESET)
#define LED02_OFF HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_RESET)
#define LED03_OFF HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET)
#define LED04_OFF HAL_GPIO_WritePin(GPIOG, GPIO_PIN_7, GPIO_PIN_RESET)
#define LED05_OFF HAL_GPIO_WritePin(GPIOI, GPIO_PIN_0, GPIO_PIN_RESET)
#define LED06_OFF HAL_GPIO_WritePin(GPIOH, GPIO_PIN_6, GPIO_PIN_RESET)
#define LED07_OFF HAL_GPIO_WritePin(GPIOI, GPIO_PIN_3, GPIO_PIN_RESET)


/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);
void Light_Up_All(int);
void switch_off_ALL();
void chase_light(int, int);

/* Private functions ---------------------------------------------------------*/
void Light_Up_All(int var)
{
	if (var == 0) {
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOG, GPIO_PIN_7, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOH, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_3, GPIO_PIN_SET);
	} else {
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOG, GPIO_PIN_7, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOH, GPIO_PIN_6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_3, GPIO_PIN_SET);
		HAL_Delay(var);
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOH, GPIO_PIN_6, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOG, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOI, GPIO_PIN_3, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);
		HAL_Delay(var);
	}
}

void switch_off_ALL()
{
	HAL_GPIO_WritePin(GPIOI, GPIO_PIN_0, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOH, GPIO_PIN_6, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOG, GPIO_PIN_7, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOI, GPIO_PIN_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_7, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOG, GPIO_PIN_6, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET);

}

void chase_light(int var1, int var2)
{
	if (var2 == 0) {
	Light_Up_All(0);
	HAL_Delay(var1);
	LED00_OFF;
	HAL_Delay(var1);
	LED00_ON;

	LED01_OFF;
	HAL_Delay(var1);
	LED01_ON;

	LED02_OFF;
	HAL_Delay(var1);
	LED02_ON;

	LED03_OFF;
	HAL_Delay(var1);
	LED03_ON;

	LED04_OFF;
	HAL_Delay(var1);
	LED04_ON;

	LED05_OFF;
	HAL_Delay(var1);
	LED05_ON;

	LED06_OFF;
	HAL_Delay(var1);
	LED06_ON;

	LED07_OFF;
	HAL_Delay(var1);
	LED07_ON;
	} else {
	Light_Up_All(0);
	HAL_Delay(var1);

	LED07_OFF;
	HAL_Delay(var1);
	LED07_ON;

	LED06_OFF;
	HAL_Delay(var1);
	LED06_ON;

	LED05_OFF;
	HAL_Delay(var1);
	LED05_ON;

	LED04_OFF;
	HAL_Delay(var1);
	LED04_ON;

	LED03_OFF;
	HAL_Delay(var1);
	LED03_ON;

	LED02_OFF;
	HAL_Delay(var1);
	LED02_ON;

	LED01_OFF;
	HAL_Delay(var1);
	LED01_ON;

	LED00_OFF;
	HAL_Delay(var1);
	LED00_ON;


	}



	/*
	Light_Up_All(0);
	GPIOC->ODR = GPIOC->ODR & 0000000000000000;
	*/
}

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  /* This project template calls firstly two functions in order to configure MPU feature 
     and to enable the CPU Cache, respectively MPU_Config() and CPU_CACHE_Enable().
     These functions are provided as template implementation that User may integrate 
     in his application, to enhance the performance in case of use of AXI interface 
     with several masters. */ 
  
  /* Configure the MPU attributes as Write Through */
  MPU_Config();

  /* Enable the CPU Cache */
  CPU_CACHE_Enable();

  /* STM32F7xx HAL library initialization:
       - Configure the Flash ART accelerator on ITCM interface
       - Configure the Systick to generate an interrupt each 1 msec
       - Set NVIC Group Priority to 4
       - Low Level Initialization
     */
  HAL_Init();

  /* Configure the System clock to have a frequency of 216 MHz */
  SystemClock_Config();

  //TODO:
  //Initialization the push button and the led with using BSP
  BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);
  BSP_LED_Init(LED_GREEN);

  __HAL_RCC_GPIOC_CLK_ENABLE();    // we need to enable the GPIOA port's clock first
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();
  __HAL_RCC_GPIOI_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();

  	//Leds
  	GPIO_InitTypeDef Led_00;           // create a config structure
  	Led_00.Pin = GPIO_PIN_7;            // this is about PIN 0
  	Led_00.Mode = GPIO_MODE_OUTPUT_PP;  // Configure as output with push-up-down enabled
  	Led_00.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
  	Led_00.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	GPIO_InitTypeDef Led_01;
	Led_01.Pin = GPIO_PIN_6;
	Led_01.Mode = GPIO_MODE_OUTPUT_PP;
	Led_01.Pull = GPIO_PULLDOWN;
	Led_01.Speed = GPIO_SPEED_HIGH;

	GPIO_InitTypeDef Led_02;
	Led_02.Pin = GPIO_PIN_6;
	Led_02.Mode = GPIO_MODE_OUTPUT_PP;
	Led_02.Pull = GPIO_PULLDOWN;
	Led_02.Speed = GPIO_SPEED_HIGH;

	GPIO_InitTypeDef Led_03;
	Led_03.Pin = GPIO_PIN_4;
	Led_03.Mode = GPIO_MODE_OUTPUT_PP;
	Led_03.Pull = GPIO_PULLDOWN;
	Led_03.Speed = GPIO_SPEED_HIGH;

	GPIO_InitTypeDef Led_04;
	Led_04.Pin = GPIO_PIN_7;
	Led_04.Mode = GPIO_MODE_OUTPUT_PP;
	Led_04.Pull = GPIO_PULLDOWN;
	Led_04.Speed = GPIO_SPEED_HIGH;

	GPIO_InitTypeDef Led_05;
	Led_05.Pin = GPIO_PIN_0;
	Led_05.Mode = GPIO_MODE_OUTPUT_PP;
	Led_05.Pull = GPIO_PULLDOWN;
	Led_05.Speed = GPIO_SPEED_HIGH;

	GPIO_InitTypeDef Led_06;
	Led_06.Pin = GPIO_PIN_6;
	Led_06.Mode = GPIO_MODE_OUTPUT_PP;
	Led_06.Pull = GPIO_PULLDOWN;
	Led_06.Speed = GPIO_SPEED_HIGH;

	GPIO_InitTypeDef Led_07;
	Led_07.Pin = GPIO_PIN_3;
	Led_07.Mode = GPIO_MODE_OUTPUT_PP;
	Led_07.Pull = GPIO_PULLDOWN;
	Led_07.Speed = GPIO_SPEED_HIGH;

	//Button
	GPIO_InitTypeDef Button_00;
	Button_00.Pin = GPIO_PIN_2;
	Button_00.Mode = GPIO_MODE_INPUT;
	Button_00.Pull = GPIO_PULLUP;
	Button_00.Speed = GPIO_SPEED_LOW;

	HAL_GPIO_Init(GPIOC, &Led_00);
	HAL_GPIO_Init(GPIOC, &Led_01);
	HAL_GPIO_Init(GPIOG, &Led_02);
	HAL_GPIO_Init(GPIOB, &Led_03);
	HAL_GPIO_Init(GPIOG, &Led_04);
	HAL_GPIO_Init(GPIOI, &Led_05);
	HAL_GPIO_Init(GPIOH, &Led_06);
	HAL_GPIO_Init(GPIOI, &Led_07);
	HAL_GPIO_Init(GPIOI, &Button_00);

	int counter = 0;

//  while (1)  {

	 if (HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_2) == 0) {
		  ++counter;
		  HAL_Delay(400);

	  }
	/*  if (counter == 0)
		  switch_off_ALL();

	  if (counter == 1)
		  Light_Up_All(0);

	  if (counter == 2)
  		  Light_Up_All(250);

	  if (counter == 3)
		  counter = 0;
*/
	 //Light_Up_All(0);
	 //HAL_Delay(1000);

 for (unsigned int i = 0; i < 7; ++i) {
		 chase_light(100, 0);
		 chase_light(50, 1);
	 }

	 //Light_Up_All(0);
	 //chase_light();


 //}














}


/**
  * @brief  System Clock Configuration
  *         The system Clock is configured as follow : 
  *            System Clock source            = PLL (HSE)
  *            SYSCLK(Hz)                     = 216000000
  *            HCLK(Hz)                       = 216000000
  *            AHB Prescaler                  = 1
  *            APB1 Prescaler                 = 4
  *            APB2 Prescaler                 = 2
  *            HSE Frequency(Hz)              = 25000000
  *            PLL_M                          = 25
  *            PLL_N                          = 432
  *            PLL_P                          = 2
  *            PLL_Q                          = 9
  *            VDD(V)                         = 3.3
  *            Main regulator output voltage  = Scale1 mode
  *            Flash Latency(WS)              = 7
  * @param  None
  * @retval None
  */
static void SystemClock_Config(void)
{
  RCC_ClkInitTypeDef RCC_ClkInitStruct;
  RCC_OscInitTypeDef RCC_OscInitStruct;

  /* Enable HSE Oscillator and activate PLL with HSE as source */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 25;
  RCC_OscInitStruct.PLL.PLLN = 432;  
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 9;
  if(HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /* activate the OverDrive to reach the 216 Mhz Frequency */
  if(HAL_PWREx_EnableOverDrive() != HAL_OK)
  {
    Error_Handler();
  }
  
  /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2 
     clocks dividers */
  RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;  
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;  
  if(HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @param  None
  * @retval None
  */
static void Error_Handler(void)
{
  /* User may add here some code to deal with this error */
  while(1)
  {
  }
}

/**
  * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
  * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
  *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
  * @param  None
  * @retval None
  */
static void MPU_Config(void)
{
  MPU_Region_InitTypeDef MPU_InitStruct;
  
  /* Disable the MPU */
  HAL_MPU_Disable();

  /* Configure the MPU attributes as WT for SRAM */
  MPU_InitStruct.Enable = MPU_REGION_ENABLE;
  MPU_InitStruct.BaseAddress = 0x20010000;
  MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
  MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
  MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
  MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
  MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
  MPU_InitStruct.Number = MPU_REGION_NUMBER0;
  MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
  MPU_InitStruct.SubRegionDisable = 0x00;
  MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

  HAL_MPU_ConfigRegion(&MPU_InitStruct);

  /* Enable the MPU */
  HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
}

/**
  * @brief  CPU L1-Cache enable.
  * @param  None
  * @retval None
  */
static void CPU_CACHE_Enable(void)
{
  /* Enable I-Cache */
  SCB_EnableICache();

  /* Enable D-Cache */
  SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t* file, uint32_t line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
  }
}
#endif

/**
  * @}
  */ 

/**
  * @}
  */ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

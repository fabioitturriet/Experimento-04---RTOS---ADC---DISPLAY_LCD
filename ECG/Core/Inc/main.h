/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define VSYNC_FREQ2_Pin GPIO_PIN_13
#define VSYNC_FREQ2_GPIO_Port GPIOJ
#define WIFI_RST_Pin GPIO_PIN_14
#define WIFI_RST_GPIO_Port GPIOJ
#define DSI_RESET_Pin GPIO_PIN_15
#define DSI_RESET_GPIO_Port GPIOJ
#define ADS_DAISY_Pin GPIO_PIN_8
#define ADS_DAISY_GPIO_Port GPIOC
#define ADS_DRDY_Pin GPIO_PIN_6
#define ADS_DRDY_GPIO_Port GPIOF
#define ADS_DRDY_EXTI_IRQn EXTI9_5_IRQn
#define ADS_RESET_Pin GPIO_PIN_2
#define ADS_RESET_GPIO_Port GPIOC
#define RENDER_TIME2_Pin GPIO_PIN_5
#define RENDER_TIME2_GPIO_Port GPIOJ
#define PW_KEY_Pin GPIO_PIN_4
#define PW_KEY_GPIO_Port GPIOA
#define WIFI_CH_PD_Pin GPIO_PIN_7
#define WIFI_CH_PD_GPIO_Port GPIOH
#define ADS_CS_Pin GPIO_PIN_0
#define ADS_CS_GPIO_Port GPIOJ
#define FRAMERATE_Pin GPIO_PIN_1
#define FRAMERATE_GPIO_Port GPIOJ
#define ADS_CLKSEL_Pin GPIO_PIN_14
#define ADS_CLKSEL_GPIO_Port GPIOB
void   MX_I2C4_Init(void);
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

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
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Moteur2_Pin GPIO_PIN_15
#define Moteur2_GPIO_Port GPIOA
#define PIR_SCREEN_Pin GPIO_PIN_3
#define PIR_SCREEN_GPIO_Port GPIOI
#define Trig_Pin GPIO_PIN_2
#define Trig_GPIO_Port GPIOI
#define LCD_BL_CTRL_Pin GPIO_PIN_3
#define LCD_BL_CTRL_GPIO_Port GPIOK
#define LCD_DISP_Pin GPIO_PIN_12
#define LCD_DISP_GPIO_Port GPIOI
#define ALARME_Pin GPIO_PIN_0
#define ALARME_GPIO_Port GPIOI
#define Moteur1_Pin GPIO_PIN_8
#define Moteur1_GPIO_Port GPIOA
#define FRAME_RATE_Pin GPIO_PIN_7
#define FRAME_RATE_GPIO_Port GPIOC
#define RENDER_TIME_Pin GPIO_PIN_6
#define RENDER_TIME_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_6
#define LED1_GPIO_Port GPIOG
#define PIR_ALARME_Pin GPIO_PIN_6
#define PIR_ALARME_GPIO_Port GPIOH
#define Echo_Pin GPIO_PIN_15
#define Echo_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */
extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim2;

void Servo_SetAngle(TIM_HandleTypeDef *htim, uint32_t Channel, uint8_t angle);
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

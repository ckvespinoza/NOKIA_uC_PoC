/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f3xx_hal.h"

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
#define H_RESET_REQ_Pin GPIO_PIN_4
#define H_RESET_REQ_GPIO_Port GPIOE
#define S_RESET_REQ_Pin GPIO_PIN_5
#define S_RESET_REQ_GPIO_Port GPIOE
#define USER_Btn_Pin GPIO_PIN_13
#define USER_Btn_GPIO_Port GPIOC
#define PGOOD_RAIL_0_Pin GPIO_PIN_3
#define PGOOD_RAIL_0_GPIO_Port GPIOF
#define PGOOD_RAIL_1_Pin GPIO_PIN_5
#define PGOOD_RAIL_1_GPIO_Port GPIOF
#define H_RESET_Pin GPIO_PIN_7
#define H_RESET_GPIO_Port GPIOF
#define S_RESET_Pin GPIO_PIN_8
#define S_RESET_GPIO_Port GPIOF
#define TEST_EN_Pin GPIO_PIN_9
#define TEST_EN_GPIO_Port GPIOF
#define PGOOD_RAIL_2_Pin GPIO_PIN_10
#define PGOOD_RAIL_2_GPIO_Port GPIOF
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOF
#define LD1_Pin GPIO_PIN_0
#define LD1_GPIO_Port GPIOB
#define EDSM_EN_Pin GPIO_PIN_1
#define EDSM_EN_GPIO_Port GPIOG
#define LD3_Pin GPIO_PIN_14
#define LD3_GPIO_Port GPIOB
#define USB_PowerSwitchOn_Pin GPIO_PIN_6
#define USB_PowerSwitchOn_GPIO_Port GPIOG
#define USB_OverCurrent_Pin GPIO_PIN_7
#define USB_OverCurrent_GPIO_Port GPIOG
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define EN_RAIL_0_Pin GPIO_PIN_10
#define EN_RAIL_0_GPIO_Port GPIOC
#define EN_RAIL_1_Pin GPIO_PIN_11
#define EN_RAIL_1_GPIO_Port GPIOC
#define EN_RAIL_2_Pin GPIO_PIN_12
#define EN_RAIL_2_GPIO_Port GPIOC
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define LD2_Pin GPIO_PIN_7
#define LD2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

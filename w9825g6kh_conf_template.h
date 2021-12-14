/**
  ******************************************************************************
  * @file    w9825g6kh_conf.h
  * @author  MCD Application Team
  * @brief   This file contains some configurations required for the
  *          W9825G6KH SDRAM memory.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef W9825G6KH_CONF_H
#define W9825G6KH_CONF_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32xxxx_hal.h"
   
/** @addtogroup BSP
  * @{
  */
  
/** @addtogroup Components
  * @{
  */

/** @addtogroup W9825G6KH
  * @{
  */

/** @addtogroup W9825G6KH_Exported_Constants
  * @{
  */  
#define REFRESH_COUNT       ((uint32_t)0x03F4)   /* SDRAM refresh counter (132Mhz SD clock, 8192K cycles) */
   
#define W9825G6KH_TIMEOUT   ((uint32_t)0xFFFF)

#ifdef __cplusplus
}
#endif

#endif /* W9825G6KH_CONF_H */
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
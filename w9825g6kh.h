/**
  ******************************************************************************
  * @file    w9825g6kh.h
  * @author  MCD Application Team
  * @brief   This file contains all the description of the w9825g6kh SDRAM
  *          memory.
  *
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
#ifndef W9825G6KH_H
#define W9825G6KH_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "w9825g6kh_conf.h"
/** @addtogroup BSP
  * @{
  */

/** @addtogroup Components
  * @{
  */

/** @addtogroup W9825G6KH
  * @{
  */

/** @defgroup W9825G6KH_Exported_Types Exported Types
  * @{
  */
typedef struct
{
  uint32_t TargetBank;           /*!< Target Bank                             */
  uint32_t RefreshMode;          /*!< Refresh Mode                            */
  uint32_t RefreshRate;          /*!< Refresh Rate                            */
  uint32_t BurstLength;          /*!< Burst Length                            */
  uint32_t BurstType;            /*!< Burst Type                              */
  uint32_t CASLatency;           /*!< CAS Latency                             */
  uint32_t OperationMode;        /*!< Operation Mode                          */
  uint32_t WriteBurstMode;       /*!< Write Burst Mode                        */
} W9825G6KH_Context_t;

/**
  * @}
  */

/** @defgroup w9825g6kh_Exported_Constants
  * @{
  */
#define W9825G6KH_OK                         (0)
#define W9825G6KH_ERROR                      (-1)

/* Register Mode */
#define W9825G6KH_BURST_LENGTH_1              0x00000000U
#define W9825G6KH_BURST_LENGTH_2              0x00000001U
#define W9825G6KH_BURST_LENGTH_4              0x00000002U
#define W9825G6KH_BURST_LENGTH_8              0x00000004U
#define W9825G6KH_BURST_TYPE_SEQUENTIAL       0x00000000U
#define W9825G6KH_BURST_TYPE_INTERLEAVED      0x00000008U
#define W9825G6KH_CAS_LATENCY_2               0x00000020U
#define W9825G6KH_CAS_LATENCY_3               0x00000030U
#define W9825G6KH_OPERATING_MODE_STANDARD     0x00000000U
#define W9825G6KH_WRITEBURST_MODE_PROGRAMMED  0x00000000U
#define W9825G6KH_WRITEBURST_MODE_SINGLE      0x00000200U

/* Command Mode */
#define W9825G6KH_NORMAL_MODE_CMD             0x00000000U
#define W9825G6KH_CLK_ENABLE_CMD              0x00000001U
#define W9825G6KH_PALL_CMD                    0x00000002U
#define W9825G6KH_AUTOREFRESH_MODE_CMD        0x00000003U
#define W9825G6KH_LOAD_MODE_CMD               0x00000004U
#define W9825G6KH_SELFREFRESH_MODE_CMD        0x00000005U
#define W9825G6KH_POWERDOWN_MODE_CMD          0x00000006U

/**
  * @}
  */

/** @addtogroup W9825G6KH_Private_Functions
  * @{
  */
int32_t W9825G6KH_Init(SDRAM_HandleTypeDef *Ctx, W9825G6KH_Context_t *pRegMode);
int32_t W9825G6KH_ClockEnable(SDRAM_HandleTypeDef *Ctx, uint32_t Interface);
int32_t W9825G6KH_Precharge(SDRAM_HandleTypeDef *Ctx, uint32_t Interface);
int32_t W9825G6KH_ModeRegConfig(SDRAM_HandleTypeDef *Ctx, W9825G6KH_Context_t *pRegMode);
int32_t W9825G6KH_TimingConfig(SDRAM_HandleTypeDef *Ctx, FMC_SDRAM_TimingTypeDef *pTiming);
int32_t W9825G6KH_RefreshMode(SDRAM_HandleTypeDef *Ctx, uint32_t Interface, uint32_t RefreshMode);
int32_t W9825G6KH_RefreshRate(SDRAM_HandleTypeDef *Ctx, uint32_t RefreshCount);
int32_t W9825G6KH_EnterPowerMode(SDRAM_HandleTypeDef *Ctx, uint32_t Interface);
int32_t W9825G6KH_ExitPowerMode(SDRAM_HandleTypeDef *Ctx, uint32_t Interface);
int32_t W9825G6KH_Sendcmd(SDRAM_HandleTypeDef *Ctx, FMC_SDRAM_CommandTypeDef *SdramCmd);

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* W9825G6KH_H */

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
/* -----------------------------------------------------------------------------
  Filename:    FrTrcv_30_Tja1080_Cfg.c
  Description: Toolversion: 11.00.11.01.01.01.24.00.00.00
               
               Serial Number: CBD1010124
               Customer Info: Nexteer
                              Package: BMW MSR SIP BAC3.0   
                              Micro: TI TMS570 TMS570LS30306
                              Compiler: Code Composer Studio 4.9.0
               
               
               Generator Fwk   : GENy 
               Generator Module: FrTrcv_Tja1080
               
               Configuration   : c:\Build\BMW\ses_dev_ea3\BMW_MCV_UKL_EPS_TMS570_F40_Working\BMW_UKL_MCV_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570PSFC66
               
               Channel "A_FlexRay":
                       Databasefile: 
                       Bussystem:    FlexRay
                       Node:         EPS_A_FlexRay_1_FrIfConfig

  Generated by , 2016-02-09  08:25:11
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - DrvTrans_Tja1080FrAsrPreCompileCRC */
/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */

#include "FrTrcv_30_Tja1080.h"
#include "FrTrcv_30_Tja1080_Cfg.h"


#if FRTRCV_MEM_MAPPING == STD_ON
#define FRTRCV_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
#endif

CONST(uint8, FRTRCV_CONST) FrTrcv_MaxNumOfBtrBusses = MAX_NUM_OF_BTR_BUSSES;
/* -----------------------------------------------------------------------------
    &&&~ Data definition
 ----------------------------------------------------------------------------- */

/* Transceiver initial state and capabilities */
CONST(FrTrcv_GenConfigType, FRTRCV_CONST) FrTrcv_Config[MAX_NUM_OF_BTR_BUSSES] = 
{
  
  {
    FRTRCV_TRCVMODE_RECEIVEONLY /* FrTrcv_BusLowPowerMode */, 
    FRTRCV_TRCVMODE_STANDBY /* FrTrcv_InitState */, 
    32 /* FrTrcv_WakeupSourceRef */, 
    FRTRCV_WAKEUP_POLLING /* FrTrcv_WakeupByNodeUsedPolling */, 
    5 /* FrTrcv_ReadOutWS */
  }
};


#if FRTRCV_PROD_ERROR_DETECT == STD_ON
CONST(Dem_EventIdType, FRTRCV_CONST) FrTrcv_DEM_E_NoControl = FRTRCV_E_FR_NO_TRCV_CONTROL;
#endif

CONST(uint32, FRTRCV_CONST) FrTrcv_GeneratorVersion = 0x011701;
#if FRTRCV_MEM_MAPPING == STD_ON
#define FRTRCV_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
#endif

/* END of Checksum exclude for
  - DrvTrans_Tja1080FrAsrPreCompileCRC */

/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 214596022
      #error "The magic number of the generated file <c:\Build\BMW\ses_dev_ea3\BMW_MCV_UKL_EPS_TMS570_F40_Working\BMW_UKL_MCV_EPS_TMS570\SwProject\Source\GenData\FrTrcv_30_Tja1080_Cfg.c> is different. Please check time and date of generated files!"
  #endif
#else
  #error "The magic number is not defined in the generated file <c:\Build\BMW\ses_dev_ea3\BMW_MCV_UKL_EPS_TMS570_F40_Working\BMW_UKL_MCV_EPS_TMS570\SwProject\Source\GenData\FrTrcv_30_Tja1080_Cfg.c> "

#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */


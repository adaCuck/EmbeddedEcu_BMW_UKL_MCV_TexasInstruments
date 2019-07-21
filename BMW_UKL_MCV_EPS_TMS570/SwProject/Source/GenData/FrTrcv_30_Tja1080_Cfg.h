/* -----------------------------------------------------------------------------
  Filename:    FrTrcv_30_Tja1080_Cfg.h
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

#if !defined(FRTRCV_30_TJA1080_CFG_H)
#define FRTRCV_30_TJA1080_CFG_H

/* -----------------------------------------------------------------------------
    &&&~ Version
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - DrvTrans_Tja1080FrAsrPreCompileCRC */
#define DRVTRANS_TJA1080_FR_ASR_DLL_VERSION  0x0117
#define DRVTRANS_TJA1080_FR_ASR_DLL_RELEASE_VERSION 0x01
#define DRVTRANS_TJA1080FRASR_GENTOOL_GENY_MAJOR_VERSION 0x01
#define DRVTRANS_TJA1080FRASR_GENTOOL_GENY_MINOR_VERSION 0x17
#define DRVTRANS_TJA1080FRASR_GENTOOL_GENY_PATCH_VERSION 0x01
/* END of Checksum exclude for
  - DrvTrans_Tja1080FrAsrPreCompileCRC */


/* -----------------------------------------------------------------------------
    &&&~ Constants
 ----------------------------------------------------------------------------- */

/* START of Checksum include for
  - DrvTrans_Tja1080FrAsrPreCompileCRC */
#define MAX_NUM_OF_BTR_BUSSES                1
/* Main Function call cycle time in ms */
#define FRTRCV_MAIN_FUNCTION_CYCLE_TIME      5
/* Pre-processor switch to enable the single channel API */
#define FRTRCV_API_OPTIMIZATION               STD_OFF
/* Pre-processor switch to enable the Development Error Tracer. */
#define FRTRCV_DEV_ERROR_DETECT               STD_ON
/* Pre-processor switch to enable the Diagnostic Event Manager. */
#define FRTRCV_PROD_ERROR_DETECT              STD_ON
/* Pre-processor switch for enabling Memory Mapping. */
#define FRTRCV_MEM_MAPPING                    STD_ON
/* Pre-processor switch for enabling version info support. ON/OFF */
#define FRTRCV_VERSION_INFO_API               STD_ON
/* Pre-processor switch for enabling Transceiver Diagnosis. ON/OFF */
#define FRTRCV_TRCV_DIAGNOSIS                 STD_ON
/* Pre-processor switch for enabling WUP interrupt support. ON/OFF */
#define FRTRCV_WUPINT_CBK                     STD_OFF
/* END of Checksum include for
  - DrvTrans_Tja1080FrAsrPreCompileCRC */


/* -----------------------------------------------------------------------------
    &&&~ Linktime / Precompile CRC
 ----------------------------------------------------------------------------- */

/* START of Checksum exclude for
  - DrvTrans_Tja1080FrAsrPreCompileCRC */
#define FRTRCV_CRC_CHECK                     STD_OFF
#define FRTRCV_PRECOMPILE_CRC32              (uint32) 0xA7F9343E
/* END of Checksum exclude for
  - DrvTrans_Tja1080FrAsrPreCompileCRC */



/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 214596022
      #error "The magic number of the generated file <c:\Build\BMW\ses_dev_ea3\BMW_MCV_UKL_EPS_TMS570_F40_Working\BMW_UKL_MCV_EPS_TMS570\SwProject\Source\GenData\FrTrcv_30_Tja1080_Cfg.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 214596022
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* FRTRCV_30_TJA1080_CFG_H */
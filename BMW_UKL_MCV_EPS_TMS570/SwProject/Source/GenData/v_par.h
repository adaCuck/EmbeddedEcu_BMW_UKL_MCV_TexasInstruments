/* -----------------------------------------------------------------------------
  Filename:    v_par.h
  Description: Toolversion: 11.00.11.01.01.01.24.00.00.00
               
               Serial Number: CBD1010124
               Customer Info: Nexteer
                              Package: BMW MSR SIP BAC3.0   
                              Micro: TI TMS570 TMS570LS30306
                              Compiler: Code Composer Studio 4.9.0
               
               
               Generator Fwk   : GENy 
               Generator Module: GenTool_GenyVcfgNameDecorator
               
               Configuration   : c:\Build\BMW\ses_dev_ea3\BMW_MCV_UKL_EPS_TMS570_F40_Working\BMW_UKL_MCV_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570PSFC66
               
               Channel "A_FlexRay":
                       Databasefile: 
                       Bussystem:    FlexRay
                       Node:         EPS_A_FlexRay_1_FrIfConfig

  Generated by , 2016-02-09  08:25:10
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

#if !defined(__V_PAR_H__)
#define __V_PAR_H__

/* -----------------------------------------------------------------------------
    &&&~ BaseEnv_PHF_Includes
 ----------------------------------------------------------------------------- */

#include "v_cfg.h"
#include "v_def.h"


/* -----------------------------------------------------------------------------
    &&&~ GENy Version Information
 ----------------------------------------------------------------------------- */

#define VGEN_DELIVERY_VERSION_BYTE_0         0x11
#define VGEN_DELIVERY_VERSION_BYTE_1         0x00
#define VGEN_DELIVERY_VERSION_BYTE_2         0x11
#define VGEN_DELIVERY_VERSION_BYTE_3         0x01
#define VGEN_DELIVERY_VERSION_BYTE_4         0x01
#define VGEN_DELIVERY_VERSION_BYTE_5         0x01
#define VGEN_DELIVERY_VERSION_BYTE_6         0x24
#define VGEN_DELIVERY_VERSION_BYTE_7         0x00
#define VGEN_DELIVERY_VERSION_BYTE_8         0x00
#define VGEN_DELIVERY_VERSION_BYTE_9         0x00
#define kGENyVersionNumberOfBytes            10
/* ROM CATEGORY 4 START */
V_MEMROM0 extern  V_MEMROM1 vuint8 V_MEMROM2 kGENyVersion[kGENyVersionNumberOfBytes];
/* ROM CATEGORY 4 END */




/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 214596022
      #error "The magic number of the generated file <c:\Build\BMW\ses_dev_ea3\BMW_MCV_UKL_EPS_TMS570_F40_Working\BMW_UKL_MCV_EPS_TMS570\SwProject\Source\GenData\v_par.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 214596022
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* __V_PAR_H__ */

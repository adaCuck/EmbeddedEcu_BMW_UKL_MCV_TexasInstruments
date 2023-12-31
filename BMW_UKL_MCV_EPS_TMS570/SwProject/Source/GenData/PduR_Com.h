/* -----------------------------------------------------------------------------
  Filename:    PduR_Com.h
  Description: Toolversion: 11.00.11.01.01.01.24.00.00.00
               
               Serial Number: CBD1010124
               Customer Info: Nexteer
                              Package: BMW MSR SIP BAC3.0   
                              Micro: TI TMS570 TMS570LS30306
                              Compiler: Code Composer Studio 4.9.0
               
               
               Generator Fwk   : GENy 
               Generator Module: PduR
               
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

#if !defined(PDUR_COM_H)
#define PDUR_COM_H

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "PduR.h"


#define PDUR_START_SEC_CODE
/* PRQA S 5087 1 */ /* RULE 19.1: The memory abstraction concept uses includes of MemMap.h at any place in the source code. This is required by AUTOSAR. */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

/**
\brief    The function serves to request the transmission of an IF layer I-PDU.\n
          The PDU Router evaluates the Com I-PDU handle and performs appropriate handle and port conversion.
          The call is routed to a lower IF module using the appropriate I-PDU handle of the destination layer.
\param    ComTxPduId        ID of the Com I-PDU to be transmitted
\param    PduInfoPtr        Payload information of the I-PDU (pointer to data and data length)
\return   Std_ReturnType

          E_OK              The request was accepted by the PDU Router and by the destination layer.\n
          E_NOT_OK          The PDU Router is in the PDUR_UNINIT state\n
                            or the ComTxPduId is not valid\n
                            or the ComTxPduId is not forwarded in this identity\n
                            or the PduInfoPtr is not valid

                            or the request was not accepted by the destination layer.\n
\pre      PduR_Init() is executed sucessfully and the PDU Router is in PDUR_ONLINE state. 
\context  The function can be called on interrupt and task level and has not to be interrupted by other
          PduR_ComTransmit calls for the same ComTxPduId.
\note     The function is called by Com.
*/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType ComTxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr);


#define PDUR_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* RULE 19.1: The memory abstraction concept uses includes of MemMap.h at any place in the source code. This is required by AUTOSAR. */
#include "MemMap.h"


/* begin Fileversion check */
#ifndef SKIP_MAGIC_NUMBER
#ifdef MAGIC_NUMBER
  #if MAGIC_NUMBER != 214596022
      #error "The magic number of the generated file <c:\Build\BMW\ses_dev_ea3\BMW_MCV_UKL_EPS_TMS570_F40_Working\BMW_UKL_MCV_EPS_TMS570\SwProject\Source\GenData\PduR_Com.h> is different. Please check time and date of generated files!"
  #endif
#else
  #define MAGIC_NUMBER 214596022
#endif  /* MAGIC_NUMBER */
#endif  /* SKIP_MAGIC_NUMBER */

/* end Fileversion check */

#endif /* PDUR_COM_H */

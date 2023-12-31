/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2011 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Ap_ChkPtAp9.h
 *     Workspace:  C:/_swb/BMW/BMW_UKL_MCV_EPS_TMS570-MCV_UKL/BMW_UKL_MCV_EPS_TMS570/SwProject/ChkPt/autosar/Ap_ChkPt.dcf
 *     SW-C Type:  Ap_ChkPtAp9
 *  Generated at:  Wed Sep 10 11:02:54 2014
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <Ap_ChkPtAp9> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_CHKPTAP9_H
# define _RTE_AP_CHKPTAP9_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"

typedef P2CONST(struct Rte_CDS_Ap_ChkPtAp9, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_100msEnd_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_100msStart_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_10msEndB_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_10msStartB_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_2msEndA_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_2msEndB_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_2msStartA_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_2msStartB_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_4msEnd_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_4msStart_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_5msEnd_CP_CheckpointReached(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_ChkPtAp9_ChkPtAp9_5msStart_CP_CheckpointReached(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_ChkPtAp9_100msEnd_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_100msEnd_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_100msStart_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_100msStart_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_10msEndB_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_10msEndB_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_10msStartB_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_10msStartB_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_2msEndA_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_2msEndA_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_2msEndB_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_2msEndB_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_2msStartA_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_2msStartA_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_2msStartB_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_2msStartB_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_4msEnd_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_4msEnd_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_4msStart_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_4msStart_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_5msEnd_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_5msEnd_CP_CheckpointReached
# define Rte_Call_ChkPtAp9_5msStart_CP_CheckpointReached Rte_Call_Ap_ChkPtAp9_ChkPtAp9_5msStart_CP_CheckpointReached




# define RTE_START_SEC_AP_CHKPTAP9_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_100msEnd_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_100msEnd_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_100msEnd_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_100msStart_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_100msStart_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_100msStart_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_10msEndB_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_10msEndB_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_10msEndB_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_10msStartB_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_10msStartB_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_10msStartB_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_2msEndA_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_2msEndA_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_2msEndA_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_2msEndB_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_2msEndB_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_2msEndB_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_2msStartA_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_2msStartA_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_2msStartA_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_2msStartB_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_2msStartB_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_2msStartB_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_4msEnd_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_4msEnd_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_4msEnd_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_4msStart_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_4msStart_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_4msStart_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_5msEnd_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 5ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_5msEnd_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_5msEnd_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAp9_5msStart_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 5ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPtAp9_5msStart_CP_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_CHKPTAP9_APPL_CODE) ChkPtAp9_5msStart_Per(void);

# define RTE_STOP_SEC_AP_CHKPTAP9_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_WdgM_CheckpointReached_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1410365741
#    error "The magic number of the generated file <C:/Users/cz7lt6/Desktop/ChkPt/Ap_ChkPtAp9/Rte_Ap_ChkPtAp9.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1410365741
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_CHKPTAP9_H */

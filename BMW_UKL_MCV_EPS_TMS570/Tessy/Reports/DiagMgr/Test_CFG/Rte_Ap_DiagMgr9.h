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
 *          File:  Rte_Ap_DiagMgr9.h
 *     Workspace:  C:/SynergyWorkArea/BMW_I431/BMW_UKL_MCV_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *     SW-C Type:  Ap_DiagMgr9
 *  Generated at:  Wed Jun 26 09:53:29 2013
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C <Ap_DiagMgr9> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_DIAGMGR9_H
# define _RTE_AP_DIAGMGR9_H

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

typedef P2CONST(struct Rte_CDS_Ap_DiagMgr9, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTrq_HwNm_f32 (0.0F)
# define Rte_InitValue_IgnCnt_Cnt_u16 (0U)
# define Rte_InitValue_MEC_Cnt_enum (0U)
# define Rte_InitValue_MfgDiagInhibit_Cnt_lgc (FALSE)
# define Rte_InitValue_MtrTrq_MtrNm_f32 (0.0F)
# define Rte_InitValue_VehSpd_Kph_f32 (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagMgr9_HwTrq_HwNm_f32(P2VAR(Float, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagMgr9_IgnCnt_Cnt_u16(P2VAR(UInt16, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagMgr9_MEC_Cnt_enum(P2VAR(ManufModeType, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagMgr9_MfgDiagInhibit_Cnt_lgc(P2VAR(Boolean, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagMgr9_MtrTrq_MtrNm_f32(P2VAR(Float, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) data);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_Ap_DiagMgr9_VehSpd_Kph_f32(P2VAR(Float, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) data);
FUNC(Rte_ModeType_StaMd_Mode, RTE_CODE) Rte_Mode_Ap_DiagMgr9_SystemState_Mode(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagMgr9_DemIf_DemShutdown(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagMgr9_DemIf_RestartDem(void);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagMgr9_DemIf_SetEventStatus(UInt8 EventId, NxtrDiagMgrStatus EventStatus);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagMgr9_DemIf_SetOperationCycleState(NxtrOpCycle NxtrOperationCycleId, NxtrOpCycleState NxtrCycleState);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Ap_DiagMgr9_DiagMgr9_Per_CP0_CheckpointReached(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTrq_HwNm_f32 Rte_Read_Ap_DiagMgr9_HwTrq_HwNm_f32
# define Rte_Read_IgnCnt_Cnt_u16 Rte_Read_Ap_DiagMgr9_IgnCnt_Cnt_u16
# define Rte_Read_MEC_Cnt_enum Rte_Read_Ap_DiagMgr9_MEC_Cnt_enum
# define Rte_Read_MfgDiagInhibit_Cnt_lgc Rte_Read_Ap_DiagMgr9_MfgDiagInhibit_Cnt_lgc
# define Rte_Read_MtrTrq_MtrNm_f32 Rte_Read_Ap_DiagMgr9_MtrTrq_MtrNm_f32
# define Rte_Read_VehSpd_Kph_f32 Rte_Read_Ap_DiagMgr9_VehSpd_Kph_f32


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_SystemState_Mode Rte_Mode_Ap_DiagMgr9_SystemState_Mode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_DemIf_DemShutdown Rte_Call_Ap_DiagMgr9_DemIf_DemShutdown
# define Rte_Call_DemIf_RestartDem Rte_Call_Ap_DiagMgr9_DemIf_RestartDem
# define Rte_Call_DemIf_SetEventStatus Rte_Call_Ap_DiagMgr9_DemIf_SetEventStatus
# define Rte_Call_DemIf_SetOperationCycleState Rte_Call_Ap_DiagMgr9_DemIf_SetOperationCycleState
# define Rte_Call_DiagMgr9_Per_CP0_CheckpointReached Rte_Call_Ap_DiagMgr9_DiagMgr9_Per_CP0_CheckpointReached




# define RTE_START_SEC_AP_DIAGMGR9_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagMgr9_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DemIf_SetOperationCycleState(NxtrOpCycle NxtrOperationCycleId, NxtrOpCycleState NxtrCycleState)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGMGR9_APPL_CODE) DiagMgr9_Init(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagMgr9_Per
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_DiagMgr9_Per_CP0_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_CheckpointReached_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGMGR9_APPL_CODE) DiagMgr9_Per(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagMgr9_Trns
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on exiting of Mode <OFF> of ModeDeclarationGroupPrototype <Mode> of PortPrototype <SystemState>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGMGR9_APPL_CODE) DiagMgr9_Trns(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagMgr_Per2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *     and not in Mode(s) <OFF>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DemIf_SetEventStatus(UInt8 EventId, NxtrDiagMgrStatus EventStatus)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DemIf_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGMGR9_APPL_CODE) DiagMgr_Per2(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagMgr_SCom_ClearBlackBox
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ClearBlackBox> of PortPrototype <DiagMgr_SCom>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DiagMgr_SCom_ClearBlackBox(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGMGR9_APPL_CODE) DiagMgr_SCom_ClearBlackBox(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagMgr_SCom_GetNTCInfo
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetNTCInfo> of PortPrototype <DiagMgr_SCom>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DiagMgr_SCom_GetNTCInfo(NTCNumber NTC_Cnt_T_enum, UInt8 *Param_Ptr_T_u08, UInt8 *Status_Ptr_T_u08, UInt8 *AgingCounter_Ptr_T_u08)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGMGR9_APPL_CODE) DiagMgr_SCom_GetNTCInfo(NTCNumber NTC_Cnt_T_enum, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) Param_Ptr_T_u08, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) Status_Ptr_T_u08, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) AgingCounter_Ptr_T_u08);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagMgr_SCom_ReadStrgArray
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadStrgArray> of PortPrototype <DiagMgr_SCom>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DiagMgr_SCom_ReadStrgArray(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGMGR9_APPL_CODE) DiagMgr_SCom_ReadStrgArray(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagMgr_SCom_ResetNTCStatus
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ResetNTCStatus> of PortPrototype <DiagMgr_SCom>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DiagMgr_SCom_ResetNTCStatus(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGMGR9_APPL_CODE) DiagMgr_SCom_ResetNTCStatus(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagMgr_StaCtrl_Shutdown
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Shutdown> of PortPrototype <DiagMgr_StaCtrl>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DemIf_DemShutdown(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void DiagMgr_StaCtrl_Shutdown(void)
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGMGR9_APPL_CODE) DiagMgr_StaCtrl_Shutdown(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DiagMgr_Trns1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on exiting of Mode <OFF> of ModeDeclarationGroupPrototype <Mode> of PortPrototype <SystemState>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DemIf_RestartDem(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_DemIf_SetOperationCycleState(NxtrOpCycle NxtrOperationCycleId, NxtrOpCycleState NxtrCycleState)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, RTE_AP_DIAGMGR9_APPL_CODE) DiagMgr_Trns1(void);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrDiagMgr9_GetNTCActive
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetNTCActive> of PortPrototype <NxtrDiagMgr9>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NxtrDiagMgr9_GetNTCActive(NTCNumber NTC_Cnt_T_enum, Boolean *NTCActive_Ptr_T_lgc)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGMGR9_APPL_CODE) NxtrDiagMgr9_GetNTCActive(NTCNumber NTC_Cnt_T_enum, P2VAR(Boolean, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) NTCActive_Ptr_T_lgc);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrDiagMgr9_GetNTCFailed
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetNTCFailed> of PortPrototype <NxtrDiagMgr9>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NxtrDiagMgr9_GetNTCFailed(NTCNumber NTC_Cnt_T_enum, Boolean *NTCFailed_Ptr_T_lgc)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGMGR9_APPL_CODE) NxtrDiagMgr9_GetNTCFailed(NTCNumber NTC_Cnt_T_enum, P2VAR(Boolean, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) NTCFailed_Ptr_T_lgc);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrDiagMgr9_GetNTCStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetNTCStatus> of PortPrototype <NxtrDiagMgr9>
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NxtrDiagMgr9_GetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 *Status_Ptr_T_u08)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGMGR9_APPL_CODE) NxtrDiagMgr9_GetNTCStatus(NTCNumber NTC_Cnt_T_enum, P2VAR(UInt8, AUTOMATIC, RTE_AP_DIAGMGR9_APPL_VAR) Status_Ptr_T_u08);

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrDiagMgr9_SetNTCStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetNTCStatus> of PortPrototype <NxtrDiagMgr9>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTrq_HwNm_f32(Float *data)
 *   Std_ReturnType Rte_Read_IgnCnt_Cnt_u16(UInt16 *data)
 *   Std_ReturnType Rte_Read_MEC_Cnt_enum(ManufModeType *data)
 *   Std_ReturnType Rte_Read_MfgDiagInhibit_Cnt_lgc(Boolean *data)
 *   Std_ReturnType Rte_Read_MtrTrq_MtrNm_f32(Float *data)
 *   Std_ReturnType Rte_Read_VehSpd_Kph_f32(Float *data)
 *
 * Mode Interfaces:
 * ================
 *   Rte_ModeType_StaMd_Mode Rte_Mode_SystemState_Mode(void)
 *   Modes of Rte_ModeType_StaMd_Mode:
 *   - RTE_MODE_StaMd_Mode_DISABLE
 *   - RTE_MODE_StaMd_Mode_OFF
 *   - RTE_MODE_StaMd_Mode_OPERATE
 *   - RTE_MODE_StaMd_Mode_WARMINIT
 *   - RTE_TRANSITION_StaMd_Mode
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NxtrDiagMgr9_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NxtrDiagMgr_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(Std_ReturnType, RTE_AP_DIAGMGR9_APPL_CODE) NxtrDiagMgr9_SetNTCStatus(NTCNumber NTC_Cnt_T_enum, UInt8 Param_Cnt_T_u08, NxtrDiagMgrStatus Status_Cnt_T_enum);

# define RTE_STOP_SEC_AP_DIAGMGR9_APPL_CODE
# include "MemMap.h"


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_DemIf_E_NOT_OK (1U)

# define RTE_E_NxtrDiagMgr_E_NOT_OK (1U)

# define RTE_E_WdgM_CheckpointReached_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1372251295
#    error "The magic number of the generated file <C:/SynergyWorkArea/CBD_DiagMgrnew/DiagMgr/utp/contract/Ap_DiagMgr9/Rte_Ap_DiagMgr9.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1372251295
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_DIAGMGR9_H */

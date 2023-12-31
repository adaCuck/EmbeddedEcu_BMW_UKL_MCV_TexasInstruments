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
 *          File:  Components/Rte_Ap_MtrCtrlOpConv.h
 *     Workspace:  c:/Build/BMW/ses_dev_ea3/BMW_MCV_UKL_EPS_TMS570_F40_Working/BMW_UKL_MCV_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *  Generated at:  Tue Feb  9 10:51:21 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_AP_MTRCTRLOPCONV_H
# define _RTE_AP_MTRCTRLOPCONV_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_CommutationOffset_Cnt_u16 (0U)
#  define Rte_InitValue_CurrentGainSvc_Cnt_b32 (0U)
#  define Rte_InitValue_DeadTimeComp_Uls_f32 (0.0F)
#  define Rte_InitValue_ModulationIndex_Uls_f32 (0.0F)
#  define Rte_InitValue_ModulationIndexFinal_Uls_f32 (0.0F)
#  define Rte_InitValue_MtrTrqCmdSign_Cnt_s16 (0)
#  define Rte_InitValue_PhaseAdvance_Cnt_s16 (0)
#  define Rte_InitValue_PhaseAdvanceFinal_Cnt_u16 (0U)
#  define Rte_InitValue_TorqueCmdMRF_MtrNm_f32 (0.0F)
# endif


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for implicit communication
 *********************************************************************************************************************/

extern VAR(Rte_tsTask_1ms_10, RTE_VAR_NOINIT) Rte_Task_1ms_10;

#  define RTE_STOP_SEC_VAR_Ap_10_NOINIT_UNSPECIFIED
#  include "MemMap.h"
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

#  define Rte_IRead_MtrCtrlOpConv_Per1_CurrentGainSvc_Cnt_b32() \
  (Rte_Task_1ms_10.Rte_RB.Rte_Ap_MtrCtrlOpConv_MtrCtrlOpConv_Per1.Rte_CurrentGainSvc_Cnt_b32.value)

#  define Rte_IRead_MtrCtrlOpConv_Per1_ModulationIndex_Uls_f32() \
  (Rte_Task_1ms_10.Rte_TB.Rte_I_VltgCtrl_ModIdx_Uls_f32.value)

#  define Rte_IRead_MtrCtrlOpConv_Per1_PhaseAdvance_Cnt_s16() \
  (Rte_Task_1ms_10.Rte_TB.Rte_I_VltgCtrl_PhsAdv_Cnt_s16.value)

#  define Rte_IRead_MtrCtrlOpConv_Per1_TorqueCmdMRF_MtrNm_f32() \
  (Rte_Task_1ms_10.Rte_RB.Rte_Ap_MtrCtrlOpConv_MtrCtrlOpConv_Per1.Rte_TorqueCmdMRF_MtrNm_f32.value)

#  define Rte_IWrite_MtrCtrlOpConv_Per1_CommutationOffset_Cnt_u16(data) \
  ( \
    Rte_Task_1ms_10.Rte_TB.Rte_I_MtrCtrlOpConv_CommutationOffset_Cnt_u16.value = (data) \
  )

#  define Rte_IWriteRef_MtrCtrlOpConv_Per1_CommutationOffset_Cnt_u16() \
  (&Rte_Task_1ms_10.Rte_TB.Rte_I_MtrCtrlOpConv_CommutationOffset_Cnt_u16.value)

#  define Rte_IWrite_MtrCtrlOpConv_Per1_DeadTimeComp_Uls_f32(data) \
  ( \
    Rte_Task_1ms_10.Rte_TB.Rte_I_MtrCtrlOpConv_DeadTimeComp_Uls_f32.value = (data) \
  )

#  define Rte_IWriteRef_MtrCtrlOpConv_Per1_DeadTimeComp_Uls_f32() \
  (&Rte_Task_1ms_10.Rte_TB.Rte_I_MtrCtrlOpConv_DeadTimeComp_Uls_f32.value)

#  define Rte_IWrite_MtrCtrlOpConv_Per1_ModulationIndexFinal_Uls_f32(data) \
  ( \
    Rte_Task_1ms_10.Rte_TB.Rte_I_MtrCtrlOpConv_ModulationIndexFinal_Uls_f32.value = (data) \
  )

#  define Rte_IWriteRef_MtrCtrlOpConv_Per1_ModulationIndexFinal_Uls_f32() \
  (&Rte_Task_1ms_10.Rte_TB.Rte_I_MtrCtrlOpConv_ModulationIndexFinal_Uls_f32.value)

#  define Rte_IWrite_MtrCtrlOpConv_Per1_MtrTrqCmdSign_Cnt_s16(data) \
  ( \
    Rte_Task_1ms_10.Rte_TB.Rte_I_MtrCtrlOpConv_MtrTrqCmdSign_Cnt_s16.value = (data) \
  )

#  define Rte_IWriteRef_MtrCtrlOpConv_Per1_MtrTrqCmdSign_Cnt_s16() \
  (&Rte_Task_1ms_10.Rte_TB.Rte_I_MtrCtrlOpConv_MtrTrqCmdSign_Cnt_s16.value)

#  define Rte_IWrite_MtrCtrlOpConv_Per1_PhaseAdvanceFinal_Cnt_u16(data) \
  ( \
    Rte_Task_1ms_10.Rte_TB.Rte_I_MtrCtrlOpConv_PhaseAdvanceFinal_Cnt_u16.value = (data) \
  )

#  define Rte_IWriteRef_MtrCtrlOpConv_Per1_PhaseAdvanceFinal_Cnt_u16() \
  (&Rte_Task_1ms_10.Rte_TB.Rte_I_MtrCtrlOpConv_PhaseAdvanceFinal_Cnt_u16.value)


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_AP_MTRCTRLOPCONV_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_AP_MTRCTRLOPCONV_APPL_CODE) MtrCtrlOpConv_Per1(void);

# define RTE_STOP_SEC_AP_MTRCTRLOPCONV_APPL_CODE
# include "MemMap.h"

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1455040902
#    error "The magic number of the generated file <c:/Build/BMW/ses_dev_ea3/BMW_MCV_UKL_EPS_TMS570_F40_Working/BMW_UKL_MCV_EPS_TMS570/SwProject/Source/GenDataRte/Production/Components/Rte_Ap_MtrCtrlOpConv.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1455040902
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_AP_MTRCTRLOPCONV_H */

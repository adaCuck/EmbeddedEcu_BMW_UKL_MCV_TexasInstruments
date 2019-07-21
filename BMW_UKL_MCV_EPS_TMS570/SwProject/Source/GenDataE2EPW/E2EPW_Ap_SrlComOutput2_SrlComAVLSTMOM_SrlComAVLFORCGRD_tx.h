/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 1.1.0)
 ** Module: E2EPW_Ap_SrlComOutput2_SrlComAVLSTMOM_SrlComAVLFORCGRD_tx.h
 ** Thu, 25-Oct-2012, 11:23:29
 **/

/**********************************************************
 * MISRA RULE Msg(3:3210) VIOLATION:
 * Error Message : Msg(3:3210) The global identifier
 *   '<name>' is declared but is not used.
 * Justification : Library function
 **********************************************************/
/* PRQA S 3210 EOF */
#ifndef E2EPW_Ap_SrlComOutput2_SrlComAVLSTMOM_SrlComAVLFORCGRD_TX_H
#define E2EPW_Ap_SrlComOutput2_SrlComAVLSTMOM_SrlComAVLFORCGRD_TX_H

#include "Rte_Ap_SrlComOutput2.h"
#include "Rte_Type.h"
#include "E2E_P01.h"

#define E2EPW_START_SEC_CODE
#include "Memmap.h"

/**********************************************************
 * Function name: E2EPW_Init_SrlComAVLSTMOM_AVL_FORC_GRD_tx ()
 * Description:   Initialize the transmission-state (eg. after
 *                an application/communication reset.
 * Parameter:     None
 * Return value:  None
 * Remarks:       Call this function after an application or
 *                communication reset.
 **********************************************************/
extern FUNC (void, E2EPW_CODE) E2EPW_Init_SrlComAVLSTMOM_AVL_FORC_GRD_tx (void);

/**********************************************************
 * Function name: E2EPW_Get_SenderState_SrlComAVLSTMOM_AVL_FORC_GRD ()
 * Description:   Returns the current E2Elib transmission
 *                -state.
 * Parameter:     None
 * Return value:  The current E2Elib transmission-status
 * Remarks:       Not required for usage. For debugging or
 *                similar reasons.
 **********************************************************/
extern FUNC ( P2VAR ( E2E_P01SenderStateType
             , AUTOMATIC
             , E2EPW_APPL_DATA
             )
     , E2EPW_CODE
     )
    E2EPW_Get_SenderState_SrlComAVLSTMOM_AVL_FORC_GRD (void);

/**********************************************************
 * Function name: E2EPW_Write_SrlComAVLSTMOM_AVL_FORC_GRD (RT_SG_AVL_FORC_GRD *  AppData);
 * Description:   Protects data with E2Elib, transmits it
 *                with Rte_Write_<p>_<o> and return an
 *                error-code.
 *   Parameter AppData:
 *                The data to be protected and transmitted.
 * Return value:  Error-code
 * Remarks:       None
 **********************************************************/
extern FUNC (uint32, E2EPW_CODE) E2EPW_Write_SrlComAVLSTMOM_AVL_FORC_GRD
    (P2VAR (RT_SG_AVL_FORC_GRD, AUTOMATIC, E2EPW_APPL_DATA) AppData);

#define E2EPW_STOP_SEC_CODE
#include "Memmap.h"

#endif
/*  << EOF >>  */

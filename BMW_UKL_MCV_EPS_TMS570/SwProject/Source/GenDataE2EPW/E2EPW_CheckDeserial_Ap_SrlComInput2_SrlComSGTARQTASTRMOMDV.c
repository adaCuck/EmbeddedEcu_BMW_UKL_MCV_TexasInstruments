/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 1.1.0)
 ** Module: E2EPW_CheckDeserial_Ap_SrlComInput2_SrlComSGTARQTASTRMOMDV.c
 ** Mon, 08-Feb-2016, 13:57:57
 **/

/* ------------------------------------------------------- */
/*                 SUPRESSED MISRA VIOLATONS               */
/* ------------------------------------------------------- */
/* Error Message : Msg(4:5087) #include statements in a    */
/*   file should only be preceded by other preprocessor    */
/*   directives or comments. MISRA-C:2004 Rule 19.1        */
/* Justification : Inclusion of memmap.h is AUTOSAR        */
/*   specific.                                             */
/* PRQA S 5087 EOF                                         */

#include "E2EPW_CheckDeserial_Ap_SrlComInput2_SrlComSGTARQTASTRMOMDV.h"

#define E2EPW_START_SEC_CODE_LIB
#include "Memmap.h"

/*****************************************************************
 * Function name      : E2EPW_CheckDeserial_SrlComSGTARQTASTRMOMDV
 * Description        : Checks if the signals in the de-serialized
 *                      protected data element are in a valid
 *                      range, considering their bit length in the
 *                      protected pdu area.
 * Parameter pde (in) : pointer to protected data element
 * Return value       : 0                    deserial check passed
 *                      E2EPW_DESERIAL_ERR   deserial check failed
 * Remarks            : none
 ****************************************************************/
FUNC (uint8, E2EPW_CODE) E2EPW_CheckDeserial_SrlComSGTARQTASTRMOMDV
    ( P2CONST (SG_TAR_QTA_STRMOM_DV, AUTOMATIC, E2EPW_APPL_DATA) pde )
{
    VAR (uint8, AUTOMATIC) ret = 0;

    if ((pde->ALIV_TAR_QTA_STMOM_DV & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->QU_TAR_FACT_STMOM_FTAX & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->QU_TAR_QTA_STMOM_DV & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->TAR_QTA_STMOM_DV & 0xf000u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->CTR_DEAC_EPS_FNS & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    return ret;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "Memmap.h"

/*  << EOF >>  */

/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 1.1.0)
 ** Module: E2EPW_Marshal_Ap_SrlComInput2_SrlComVYAWVEH.c
 ** Thu, 19-May-2016, 09:57:18
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

/* Error Message : Msg(4:0310) Casting to different object */
/*   pointer type. MISRA-C:2004 Rule 11.4;                 */
/*   REFERENCE - ISO-6.3.4 Cast Operators                  */
/* Justification : Marshal code works on direct byte       */
/*   access for different application types.               */
/* PRQA S 0310 EOF                                         */

/* Error Message : Msg(4:3757) Implicit conversion: int    */
/*   to unsigned char.  MISRA-C:2004 Rule 10.1             */
/* Justification : Marshal code generator ensures no loss  */
/*   of data during endianness conversion.                 */
/* PRQA S 3757 EOF                                         */

#include "E2EPW_Marshal_Ap_SrlComInput2_SrlComVYAWVEH.h"

#define E2EPW_START_SEC_CODE_LIB
#include "Memmap.h"

/*****************************************************************
 * Function name      : E2EPW_Marshal_SrlComVYAWVEH
 * Description        : Generates the bus representation of a
 *                      protected pdu area by packing the signals
 *                      of the protected data element into it (so
 *                      called 'Marshaling').
 * Parameter pde (in) : pointer to protected data element
 * Parameter ppa (out): pointer to protected pdu area
 * Return value       : void
 * Remarks            : none
 ****************************************************************/
FUNC (void, E2EPW_CODE) E2EPW_Marshal_SrlComVYAWVEH
    ( P2CONST (SG_VYAW_VEH, AUTOMATIC, E2EPW_APPL_DATA) pde
    , P2VAR (uint8, AUTOMATIC, E2EPW_APPL_DATA) ppa
    )
{
    P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA) src;

    /* packing signal VYAW_VEH_ERR_AMP */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VYAW_VEH_ERR_AMP);
    ppa[4]  = src[1];
    ppa[5]  = src[0] & 0x0f;

    /* packing signal VYAW_VEH_0x0C_0x04 */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VYAW_VEH_0x0C_0x04);
    ppa[1] &= 0x0f;
    ppa[1] |= (src[0] << 4) & 0xf0;

    /* packing signal VYAW_VEH */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->VYAW_VEH);
    ppa[2]  = src[1];
    ppa[3]  = src[0];

    /* packing signal QU_VYAW_VEH */
    src = (P2CONST (uint8, AUTOMATIC, E2EPW_APPL_DATA)) &(pde->QU_VYAW_VEH);
    ppa[5] |= (src[0] << 4) & 0xf0;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "Memmap.h"

/*  << EOF >>  */
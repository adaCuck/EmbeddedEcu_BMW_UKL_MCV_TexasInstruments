
#ifndef DEM_API_DEPEND_H
/** \brief preprocessor exclusion definition */
#define DEM_API_DEPEND_H

/** \file
 ** \brief AUTOSAR Dem Diagnostic Event Manager
 **
 ** This file contains all configuration dependent external API declarations
 ** of the AUTOSAR module Dem.
 **
 ** \project AUTOSAR Standard Core
 ** \author Georg Drenkhahn
 ** \author Marko Schneider
 ** \author 3SOFT GmbH, 91058 Erlangen, Germany
 **
 ** $Id: Dem_Api_Depend.h.m4 2480 2011-03-21 16:00:06Z olho2924 $
 ** Release: $3SOFT_DELIVERY_VERSION_INFORMATION$
 **
 ** \controller independent
 ** \compiler   independent
 ** \hardware   independent
 **
 ** Copyright 2005,2006 by 3SOFT GmbH
 ** All rights exclusively reserved for 3SOFT GmbH,
 ** unless expressly agreed to otherwise */

/** \addtogroup Dem Diagnostic Event Manager
 ** @{ */

/*==================[inclusions]============================================*/

#include <Std_Types.h>                            /* AUTOSAR standard types */

/*
 * Attention should be paid to the fact, that 'Dem_Api_Cfg[_Specific].h' must
 * not directly or indirectly include 'Dem_Api_Static[_Specific].h'.
 */

/* 1. The following include provides the 'DEM_INCLUDE_RTE'-switch */
#include <Dem_Api_Cfg_Specific.h>            /* Generated API configuration */

#if (DEM_INCLUDE_RTE == STD_ON)

/* 2. The following include has to be done before including header-file(s)
 *    depending on the provided RTE type definitions */
#include <Rte_Type.h>                               /* API generated by RTE */

#else

/* 2. The following include has to be done before including header-file(s)
 *    depending on the provided RTE type definitions */
#include <Dem_RteInternal_Static_Specific.h>     /* API, Dem <-> SWC I-face */

/* 3. The following include depends on RTE type definitions included before */
#include <Dem_RteApi_Static_Specific.h>     /* API, Dem <-> SWC, BSW I-face */
#include <Dem_RteApi_Depend_Specific.h>     /* API, Dem <-> SWC, BSW I-face */

#endif

/* 3. The following include depends on RTE type definitions included before */
#include <Dem_Api_Static_Specific.h>      /* Module public API, static part */


/*==================[macros]================================================*/

/*------------------[AUTOSAR specification version identification check]----*/

#if (!defined DEM_AR_MAJOR_VERSION) /* configuration check */
#error DEM_AR_MAJOR_VERSION must be defined
#endif /* if (!defined DEM_AR_MAJOR_VERSION) */

/* major version check */
#if (DEM_AR_MAJOR_VERSION != 2U)
#error DEM_AR_MAJOR_VERSION wrong (!= 2U)
#endif /* if DEM_AR_MAJOR_VERSION */

#if (!defined DEM_AR_MINOR_VERSION) /* configuration check */
#error DEM_AR_MINOR_VERSION must be defined
#endif /* if (!defined DEM_AR_MINOR_VERSION) */

/* minor version check */
#if (DEM_AR_MINOR_VERSION < 1U)
#error DEM_AR_MINOR_VERSION wrong (< 1U)
#endif /* if DEM_AR_MINOR_VERSION */

#if (!defined DEM_AR_PATCH_VERSION) /* configuration check */
#error DEM_AR_PATCH_VERSION must be defined
#endif /* if (!defined DEM_AR_PATCH_VERSION) */

/* patch version check */
#if (DEM_AR_PATCH_VERSION < 1U)
#error DEM_AR_PATCH_VERSION wrong (< 1U)
#endif /* if DEM_AR_PATCH_VERSION */

/*------------------[AUTOSAR module version identification check]-----------*/

#if (!defined DEM_SW_MAJOR_VERSION) /* configuration check */
#error DEM_SW_MAJOR_VERSION must be defined
#endif /* if (!defined DEM_SW_MAJOR_VERSION) */

/* major version check */
#if (DEM_SW_MAJOR_VERSION != 3U)
#error DEM_SW_MAJOR_VERSION wrong (!= 3U)
#endif /* if DEM_SW_MAJOR_VERSION */

#if (!defined DEM_SW_MINOR_VERSION) /* configuration check */
#error DEM_SW_MINOR_VERSION must be defined
#endif /* if (!defined DEM_SW_MINOR_VERSION) */

/* minor version check */
#if (DEM_SW_MINOR_VERSION < 3U)
#error DEM_SW_MINOR_VERSION wrong (< 3U)
#endif /* if DEM_SW_MINOR_VERSION */

#if (!defined DEM_SW_PATCH_VERSION) /* configuration check */
#error DEM_SW_PATCH_VERSION must be defined
#endif /* if (!defined DEM_SW_PATCH_VERSION) */

/* patch version check */
#if (DEM_SW_PATCH_VERSION < 3U)
#error DEM_SW_PATCH_VERSION wrong (< 3U)
#endif /* if DEM_SW_PATCH_VERSION */

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

#if (DEM_USE_INDICATOR == STD_ON)

/** \brief Reads the MIL-Status
 **
 ** This function shall be used to read the MIL-Status required for ISO15031-5
 **
 ** Configuration: This function shall only be supported and implemented by
 ** OBD-relevant ECUs.
 **
 ** \service_id    ::DEM_SID_GetMILStatus
 ** \reentrancy    non reentrant
 ** \synchronisity synchronous
 **
 ** \param[out] MILStatus  Returns the status of the MIL
 **
 ** \return success of operation
 ** \retval E_OK     Operation was successful
 ** \retval E_NOT_OK Operation failed or is not supported
 **
 ** \note Not fully implemented yet.
 **/
extern FUNC(Std_ReturnType, DEM_CODE) Dem_GetMILStatus(
   P2VAR(Dem_IndicatorStatusType, AUTOMATIC, DEM_APPL_DATA) MILStatus);

#endif /* DEM_USE_INDICATOR */

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/** @} doxygen end group definition */
#endif /* ifndef DEM_API_DEPEND_H */
/*==================[end of file]===========================================*/

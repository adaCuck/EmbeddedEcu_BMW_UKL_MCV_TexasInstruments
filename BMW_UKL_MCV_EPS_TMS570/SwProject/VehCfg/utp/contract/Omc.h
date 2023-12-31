#ifndef OMC_H
#define OMC_H

typedef enum
{
   VSM_MM_MODE_NORMAL     = 0x00u,
   VSM_MM_MODE_ASSEMBLY   = 0x01u,
   VSM_MM_MODE_TRANSPORT  = 0x02u,
   VSM_MM_MODE_BMW_FLASH  = 0x03u
} Vsm_OperatingModeType;

/* get current operational mode                   */
extern FUNC( Std_ReturnType, AUTOMATIC )
		 Vsm_GetMode( Vsm_OperatingModeType *mode );

#endif
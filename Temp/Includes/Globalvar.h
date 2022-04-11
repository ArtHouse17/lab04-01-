/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1649683876_1_
#define _BUR_1649683876_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL struct ACP10AXIS_typ gAxis01;
_GLOBAL plcbit active_deactive_taming;
_GLOBAL plcbit led1;
_GLOBAL plcbit led2;
_GLOBAL plcbit led3;
_GLOBAL plcbit led4;
_GLOBAL plcbit gAxis01_ModuleOk;
_GLOBAL plcbit active_deactive;
_GLOBAL plcbit led[4];
_GLOBAL signed short speed_minus_50;
_GLOBAL signed short speed_plus_50;
_GLOBAL struct SdcDiDoIf_typ gAxis01_DiDoIf;
_GLOBAL struct SdcDrvIf16_typ gAxis01_DrvIf;
_GLOBAL struct SdcHwCfg_typ gAxis01_HW;
_GLOBAL signed short TrueSpeed;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1649683876_1_ */


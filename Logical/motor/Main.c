
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	speed=0;

	EVIRD.ENABLE=1;
}

void _CYCLIC ProgramCyclic(void)
{
 	DRIVE(&EVIRD);
	
		EVIRD.ENABLE=active_deactive;
}

void _EXIT ProgramExit(void)
{

}



#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	 i=0;
}

void _CYCLIC ProgramCyclic(void)
{
	if(active_deactive_taming==1){
		led1=!led1;
		if(i%5==0){led1=!led1;}
		if(i%10==0){led2=!led2;}
		if(i%20==0){led3=!led3;}
		if(i%30==0){led4=!led4;}
		i++;
	}

}

void _EXIT ProgramExit(void)
{

}


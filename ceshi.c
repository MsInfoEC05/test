#include <STC89C52.H>
#include <typedef.h>

void main()
{		 
	while(1)
	{
		P35 = !p35;
		for(i=100;i>0;i--);
	}
}
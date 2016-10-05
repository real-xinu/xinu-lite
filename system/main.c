/*  main.c  - main */

#include <xinu.h>

process	main(void)
{
	recvclr();
	while (TRUE) {
        kprintf("main()\n");
        sleepms(2000);
	}
	return OK;
    
}

#include <stdio.h>
#include <windows.h>
#include <unistd.h>
void main()
{
	int i;
	int msleep(unsigned int tms) {
    return usleep(tms * 1000);
    }
	for(i=0; i<100; i++)
	{
		printf("\n\t\t\t\t\t\t i am UNSTOPPABLE.....\n \a");
		usleep(200000);
	}
}
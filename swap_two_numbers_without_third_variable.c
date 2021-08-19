#include <stdio.h>
void main()
{
	int n=101;
	int a;
	int b=0;
	while(n!=0)
	{
		a=n%10;
		b=(b*10)+a;
		n=n/10;
	    printf("\n%d  %d",a,b);
	}
}
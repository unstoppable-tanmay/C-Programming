#include <stdio.h>
void main()
{
	int n;
	printf("enter thr value to be calculated for fabonacci series ");
	scanf("%d",&n);
	int a=0;
	int b=1;
	int c=1;
	while(c<=n)
	{
		a=b;
		b=c;
		c=a+b;
	    printf("\n%d + %d = %d",b,a,c);  	
    }
}
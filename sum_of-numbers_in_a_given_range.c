#include <stdio.h>
#include <string.h>

void main()
{
	int sum=0,c,d;
	printf("enter the first range ");
	scanf("%d",&c);
	int a=c;
	printf("enter the second range ");
	scanf("%d",&d);
	while(a<=d)
	{
		sum=sum+a;
		a++;
	}
	printf("\n\nsum of digits of the integer is %d\n\n\n\n\n\n\n\n\n",sum);
}
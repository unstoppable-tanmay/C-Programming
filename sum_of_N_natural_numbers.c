#include <stdio.h>
#include <string.h>

void main()
{
	int sum=0,n,a=0;
	printf("enter the number till added ");
	scanf("%d",&n);
	while(a!=n)
	{
		a++;
		sum=sum+a;
	}
	printf("\n\nsum of digits of the integer is %d\n\n\n\n\n\n\n\n\n",sum);
}

#include <stdio.h>
#include <string.h>

void main()
{
	int n,a=0,reverse=0;
	printf("enter the number to be reversed ");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		reverse=(10*reverse)+a;
		n=n/10;
	}
	printf("\n\n\nthe reverse of tghe number is %d\n\n\n\n\n",reverse);
}
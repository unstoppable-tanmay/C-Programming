#include <stdio.h>
#include <string.h>

void main()
{
	int n;
	int count=0;
	printf("enter a number ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("\n\n\n\n\n\nthe number in the digit in the integer is %d\n\n\n\n\n\n\n",count);
}
#include <stdio.h>
#include <string.h>

void main()
{
	int a;
	int b;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	if(a < b)
	{
		printf("\n\nthe greast integer is %d\n\n\n\n\n\n\n\n\n",b);
	}
	else if(b < a)
	{
		printf("\n\nthe greast integer is %d\n\n\n\n\n\n\n\n\n",a);
	}
	else 
	{
		printf("\n\nthe two integers are equal\n\n\n\n\n\n\n\n\n");
	}
}
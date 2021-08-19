#include <stdio.h>

void sum(int a,int b,int c)
{
	if(a>b && a>c)
	{
		printf("%d is the greatest number.",a);
	}
	if(b>c && b>a)
	{
		printf("%d is the greatest number.",b);
	}
	if(c>a && c>b)
	{
		printf("%d is the greatest number.",c);
	}
	if(a==b && b==c)
	{
	    printf("numbers are equal.");	
	}
	printf("\n\n\n\n\n\n\n\n\n\n");
}
void main()
{
	int a;
	int b;
	int c;
	printf("enter the first number ");
	scanf("%d",&a);
	printf("enter the second number ");
	scanf("%d",&b);
	printf("enter the third number ");
	scanf("%d",&c);
	sum(a,b,c);
}
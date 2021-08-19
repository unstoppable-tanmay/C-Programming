#include <stdio.h>
#include <string.h>

void main()
{
	char a[1];
	printf("enter any value(but only one)-- ");
	scanf("%c",a);
	int i = a[0];
	if(i<=90 && i>=65)
	{
		printf("\n\nit is a charactor");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	else if(i<=122 && i>=97)
	{
		printf("\n\nit is a charactor");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	else if(i<=47 && i>=33)
	{
		printf("\n\nit is a special charactor..");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	else if(i<=57 && i>=48)
	{
		printf("\n\nit is a number..");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	else if(i<=64 && i>=58)
	{
		printf("\n\nit is a special charactor..");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	else if(i<=96 && i>=91)
	{
		printf("\n\nit is a special charactor..");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	else if(i<=127 && i>=123)
	{
		printf("\n\nit is a special charactor..");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	else{
		printf("\n\n");
		printf(" \t  \t it is not a charactor.");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
}

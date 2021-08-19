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
		printf("it is a charactor");
	}
	else if(i<=122 && i>=97)
	{
		printf("it is a charactor");
	}
	else{
		printf("\n\n");
		printf(" \t  \t it is not a charactor.");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}
}
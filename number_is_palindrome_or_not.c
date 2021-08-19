#include <stdio.h>
void main()
{
	int num,fin=0,rem;
	printf("Enter a number to check palindrome or not ");
	scanf("%d",&num);
	int temp=num;
	while(temp!=0)
	{
	   rem=temp%10;
	   fin=(fin*10)+rem;
	   temp=temp/10;
	}
	if(num==fin)
	{
		printf("\n\nthis is a palindrome.\n\n\n\n\n\n");
	}
	else
	{
		printf("\n\nthis is not a palindrome.\n\n\n\n\n\n");
	}
}
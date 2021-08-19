#include <stdio.h>

void main()
{
	int a,rem;
	printf("enter a number--");
	scanf("%d",&a);
	rem = a%2;
	if(rem == 0)
	{
		printf("number is even.");
	}
	else{
		printf("\n number is odd.");
	}
}
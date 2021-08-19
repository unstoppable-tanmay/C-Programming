#include <stdio.h>
#include <string.h>

int sum(int n)
{
	int count=0;
	int temp=n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	int A[count-1];
	int i=0;
	int sum=0;
	while(temp!=0)
	{
		A[count-1] = temp%10;
		i++;
	    temp=temp/10;
	    sum=sum+A[count-1];
	}
	return sum;
}
void main()
{
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	
	printf("\n\n\sum of digits of the integer is %d\n\n\n\n\n\n\n\n\n",sum(n));
}
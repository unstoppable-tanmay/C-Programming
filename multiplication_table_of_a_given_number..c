#include <stdio.h>
#include <math.h>
 
int search(int b)
{
	if(b<10)
	{
		printf(" ");
	}
	if(b<100)
	{
		printf(" ");
	}
	if(b<1000 && b>=100)
	{
		printf("");
	}
	return 0;
} 
void main()
{
	int n,i,z;
	char a='_';
	printf("enter the number to multiplication table(limit is 30) ");
	scanf("%d",&n);
	printf("\n\n");
	for(i=1;i<=n;i++)
	{
	    int temp=0;
		for(z=1;z<=n;z++)
		{
			temp=temp+i;
			printf("%c   %d",search(temp),temp);
	    }
		printf("\n");
	}
	printf("\n\n\n\n\n\n");
}           
#include <stdio.h>
void main()
{
	int a,b,lcm,hcf,i;
	printf("Enter first number ");
	scanf("%d",&a);
	printf("Enter second number ");
	scanf("%d",&b);
	lcm=(a>b) ? a : b;
	while(1){
		if(lcm%a==0 && lcm%b==0)
		{
		    printf("\n\n\tthe LCM of %d and %d is %d.\n",a,b,lcm);
		    break;
		}
		++lcm;
	}
	for(i=1;i<=a || i<=b;i++)
	{
	    if(a%i==0 && b%i==0)
	    {
		    hcf=i;	
		}
    }
	printf("\n\tthe HCF of %d and %d is %d.\n\n\n\n\n\n\n",a,b,hcf);
}
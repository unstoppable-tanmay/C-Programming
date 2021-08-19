#include <stdio.h>
#include <dos.h>
void main()
{
	double r,h,a1,a2,af;
	printf("what is the radius of the cylinder --");
	scanf("%lf",&r);
	printf("what is the height of the cylinder --");
	scanf("%lf",&h);
	
	double pi = 3.14;
	a1 = 2*pi*r*h;
	a2 = 2*pi*r*r;
	af = a1+a2;
	
	printf("\n \n Q.1");
	printf("\n you have a cylinder of radius %.2lf and height %.2lf find the surface area of it.");
	sleep(1);
	printf("\n \n Ans--");
	sleep(1);
	printf("\n \n \t \t by the formula  Area = (2*pi*r*h)+(pi*r*r) \n");
	sleep(1);
	printf("\n \t \t so,  Area = 2*3.14*%.2lf*%.2lf  + 3.14*%.2lf*%.2lf = %.2lf",r,h,r,r,af);
	sleep(1);
	printf("\n \n \t ~so the area is %.2lf",af);
	printf("\n \n \n \n \n \n \n \n \n \n \n \n \n ");
}
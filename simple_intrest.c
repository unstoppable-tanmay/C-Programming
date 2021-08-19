#include <stdio.h>
#include <dos.h> 
void main()
{
    float p, t, r, I;
    printf("what is your principle amount - ");
    scanf("%f", &p);
    printf("what is your time - ");
    scanf("%f", &t);
    printf("what is your rate of interest - ");
    scanf("%f", &r);
    I = p * t * r;
    I = I/100;
    printf("\n Q.1 \n  you take %.2f money for %.2f year in the rate of interest of %.2f , so what is the interest ?",p,t,r);
    printf("\n \n Ans-- \n");
    sleep(1);
    printf("\t By the formula (p*t*r)/100 \n \n  ");
    sleep(1);
    printf("\t \t (%.2f * %.2f * %.2f)/100 = %.2f",p,t,r,I);
    sleep(1);
    printf("\n \n \t ~so your interest is - %.2f", I);
    printf("\n \n \n \n \n \n \n \n \n");
}
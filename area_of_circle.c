#include <stdio.h>
#include <dos.h>
void main()
{
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    float pi = 3.14;
    float a = pi * r * r;
    printf("\n Ans-- \n \n");
    printf("\t we know that area of the circle is = \n ");
    sleep(1);
    printf("\t \t \t \t \t \t pi*r*r \n \n");
    sleep(1);
    printf("\t \t so by the formula 3.14 * %.2f = %.3f",r,a);
    sleep(1);
    printf("\n \n \t ~ so the area is %.3f .",a);
    printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n");
}
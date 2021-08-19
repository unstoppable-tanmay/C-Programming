#include <stdio.h>
#include <dos.h>
#include <ctype.h>
#include <math.h>
#include <unistd.h>
void main()
{
	char a[30];
	char b[30];
	char c[100];
	char d[100];
	char e[80];
	char f[200];
	char g[3];
	int i;
	printf("your name-- ");
	gets(a);
	printf("your age-- ");
	gets(g);
	printf("your last quallification-- ");
	gets(b);
	printf("known language-- ");
	gets(c);
	printf("your hobby-- ");
	gets(d);
	printf("your projects-- ");
	gets(e);
	printf("about you-- ");
	gets(f);
	for(i=0; a[i]!='\0'; i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i] = a[i] - 32;
		}
	}
	printf("\n \n \n \n \n \n \n \n");
	printf("*********************************************************");
	printf("\n\t \t \t -RESUME-\a");
	sleep(1);
	printf("\n\n\t         \t~%s~\a",a);
	sleep(1);
	printf("\n\n\t  Age- %s years\a",g);
	sleep(1);
	printf(" \t Nearly completed %s\a",b);
	sleep(1);
	printf("\n\n   About you-- \n \t \t %s\a",f);
	sleep(1);
	printf("\n   Languages-- \n \t \t %s\a",c);
	sleep(1);
	printf("\n   My hobbies-- \n \t \t %s\a",d);
	sleep(1);
	printf("\n   My projects-- \n \t \t %s\a",e);
	printf("\n*********************************************************");
	printf("\n \n \n \n \n \n \n \n");
}
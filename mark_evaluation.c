#include <stdio.h>
#include <dos.h>
#include <ctype.h>
#include <math.h>
#include <unistd.h>
int add(int numbers[], int size)
{
	int sum = 0;
	
	for(int i = 0; i < size; i++){
		sum += numbers[i];
	}
	return sum;
}
void main()
{
	int o,e,h,s,m,g;
	printf("your mark in Odia-- ");
	scanf("%d",&o);
	printf("your mark in English-- ");
	scanf("%d",&e);
	printf("your mark in Sanskrit/Hindi-- ");
	scanf("%d",&h);
	printf("your mark in Scince-- ");
	scanf("%d",&s);
	printf("your mark in Math-- ");
	scanf("%d",&m);
	printf("your mark in History & Geography-- ");
	scanf("%d",&g);
	int array[] = {o,e,h,s,m,g};
	int a = add(array,6);
	float p = (float)a/6;
	printf("\n\n\n\n\n \t      10th MARK-SHEET \a");
	printf("\n  ________________________________________");
	printf("\n |                                        |");
	sleep(1);
	printf("\n |\t    Sub    \tMark  Percentage  | \a");
	printf("\n |                                        |");
	sleep(1);
	printf("\n |\t   Odia    \t %d \t %d%%\a      |",o,o);
	sleep(1);
	printf("\n |\t  English  \t %d \t %d%%\a      |",e,e);
	sleep(1);
	printf("\n |\t Sanskrit  \t %d \t %d%%\a      |",h,h);
	sleep(1);
	printf("\n |\t  Scince   \t %d \t %d%%\a      |",s,s);
	sleep(1);
	printf("\n |\t   Math    \t %d \t %d%%\a      |",m,m);
	sleep(1);
	printf("\n |\t History  \t %d \t %d%%\a      |",g,g);
	sleep(1);
	printf("\n |\t           \t    \t          |");
	printf("\n |\t  Total   \t %d \t %.2f%%\a   |",add(array,6),p);
	printf("\n |________________________________________| ");
	printf("\nYou have scored %d, that is %.2f%% .",add(array,6),p);
	printf("\n\nThis is UNSTOPPABLE.....\n\n\n\n\n\n");
}
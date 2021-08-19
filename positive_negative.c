#include <stdio.h>
#include <string.h>

int change(char a)
{
	int num = 0;
	num = a-'0';
	return num;
}
int main()
{
	char a[4];
	char first;
	int second;
	printf("Enter a number- ");
	gets(a);
    first = a[0];
    second = (int)(first);
    if(second == 45)
    {
    	printf("\n\nThis is a negative int\n\n\n\n\n");
	}
	else
	{
    	printf("\n\nThis is a poditive int\n\n\n\n\n");	
	}
	return 0;
}
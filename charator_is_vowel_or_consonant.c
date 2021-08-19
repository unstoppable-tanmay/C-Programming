#include <stdio.h>
#include <string.h>

void main()
{
	char new[1];
	printf("type a character--");
	scanf("%s",new);
	
	if(strcmp(new, "a") == 0)
	{
		printf("The Character is a vowel");
	}
	else if(strcmp(new, "e") == 0)
	{
		printf("The Character is a vowel");
	}
	else if(strcmp(new, "i") == 0)
	{
		printf("The Character is a vowel");
	}
	else if(strcmp(new, "o") == 0)
	{
		printf("The Character is a vowel");
	}
	else if(strcmp(new, "u") == 0)
	{
		printf("The Character is a vowel");
	}
	else
	{
		printf("\n The Character is a consonant");
	}
	printf("\n\n\n\n\n\n");
}
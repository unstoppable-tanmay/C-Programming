#include <stdio.h>
#include <string.h>
void main()
{
	char a[3];
	printf("is it raining(yes/no)?? ");
	scanf("%s",a);
	if(strcmp(a, "yes") == 0)
	{
		printf("take umbrella bro...");
	}
	else if(strcmp(a, "Yes") == 0)
	{
		printf("take umbrella bro...");
	}
	else if(strcmp(a, "YES") == 0)
	{
		printf("take umbrella bro...");
	}
	else if(strcmp(a, "ya") == 0)
	{
		printf("take umbrella bro...");
	}
	else if(strcmp(a, "hmm") == 0)
	{
		printf("take umbrella bro...");
	}
	else if(strcmp(a, "hnn") == 0)
	{
		printf("take umbrella bro...");
	}
	else if(strcmp(a, "hm") == 0)
	{
		printf("take umbrella bro...");
	}
	else if(strcmp(a, "hn") == 0)
	{
		printf("take umbrella bro...");
	}
	else
	{
		printf("go bro, no need of umbrella.....");
	}
}

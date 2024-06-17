#include<stdio.h>
int main()
{
	char cdeta;
	
	printf("Enter the character :");
	scanf(" %c",&cdeta);
	
	if((cdeta >= 'a' && cdeta <= 'z') || (cdeta >= 'A' && cdeta <= 'Z'))
	{
		printf("It is an alpherbert");
	}
	else
	{
		printf("It is not an alpherbert");
		
	}
	return 0;
	}

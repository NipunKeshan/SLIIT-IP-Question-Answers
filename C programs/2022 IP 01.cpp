#include<stdio.h>
int main()
{
	
	char char1, char2;
	int i,j,line;
	
	printf("Enter the character 1 :");
	scanf(" %c",&char1);
	
	printf("Enter the character 2 :");
	scanf(" %c",&char2);
	
	printf("Enter the lines you want :");
	scanf(" %d",&line);
	
	for(i=0; i < line; i++)
	{
		for(j=0; j<i; j++)
		{
			if(j % 2 == 0)
			{
				printf("%c",char1);
				
			}
			else if(j%2 !=0)
			{
				printf("%c",char2);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}

#include<stdio.h>
int main()
{
	int i,j;
	
	int rat[3][4];
	
	for(i=0 ; i<=3; i++)
	{
		for(j=0; j<=4; j++)
		{
			printf("Enter the rating :");
			scanf("%d",&rat[i][j]);
		}
	}
	
	for(i=0 ; i<=3; i++)
	{
		for(j=0; j<=4; j++)
		{
			
			printf("%d\n",rat[i][j]);
		}
	}
	return 0;
}

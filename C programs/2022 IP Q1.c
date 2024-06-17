#include<stdio.h>
int main()
{
	int a[4][4];
	int i,j;
	
	for(i=0;i<4; i++)
	{
		printf("Values for row %d ",i+1);
		for(j=0;j<4; j++)
		{
			printf("\n\tEnter element %d :",j+1);
			scanf("%d",&a[i][j]);
		}
		
	}
	
	for(i=0;i<4; i++)
	{
		
		for(j=0;j<4; j++)
		{
			printf(" %d\t",a[i][j]);
			
		}
		printf("\n");
	}
	
	if(a[1][1] == 1 && a[2][2] == 1 && a[3][3] == 1 && a[4][4] == 1  && a[2][1] == 0 && a[3][1] == 0 && a[4][1] == 0 && a[1][2] == 0 && a[2][3] == 0 && a[3][2] == 0 && a[4][2] == 0 && a[1][3] == 0 && a[2][3] == 0 && a[3][4] == 0 && a[1][4] == 0 && a[2][4] == 0 && a[3][4] == 0 )
	{
		printf("It is a Identity matrix");
		
	}
	
	else if(a[1][1] == 0 && a[2][2] == 0 && a[3][3] == 0 && a[4][4] == 0  && a[2][1] == 1 && a[3][1] == 1 && a[4][1] == 1 && a[1][2] == 1 && a[2][3] == 1 && a[3][2] == 1 && a[4][2] == 1 && a[1][3] == 1 && a[2][3] == 1 && a[3][4] == 1 && a[1][4] == 1 && a[2][4] == 1 && a[3][4] == 1 )

	{
		printf("Its not a adjency matrix");
	}
	return 0;
}

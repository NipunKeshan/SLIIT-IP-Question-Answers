#include<stdio.h>
int main()
{
	
	int rev[3][4];
	float ave[3];
	int i,j,k,l,max;
	
	for(i=0; i<3; i++)
	{
		printf("MOVIE %d :\n",i+1);
		
		for(j=0; j<4; j++)
		{
			
		printf("Enter the reviwer %d review : ",j+1);
		scanf("%d",&rev[i][j]);
		
		}
	
		printf("\n");
	}
	
	
	for(k=0; k<3; k++)
	{
		
		for(l=0; l<4; l++)
		{
			
		printf("%d\t ",rev[k][l]);
		
		}
	
		printf("\n");
	}
	
	for(k=0; k<3; k++)
	{
		
		for(l=0; l<4; l++)
		{
			
		ave[k]+= rev[k][l];
		
		}
		printf("\n%d movie average review is : %.2f",k+1,ave[k] / 4);
	
		printf("\n");
	}
	
	max = 0;
	
	for(i=0; i<4; i++)
	{
		if(ave[i] > max)
		{
			max = ave[i] / 4;
		}
	}
	
	printf("The highest rate is %d",max);
	
	
	return 0;
	
}
















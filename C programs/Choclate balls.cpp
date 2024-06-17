#include<stdio.h>
int main()
{
	float a[3][5];
	int i,j;
	float total;
	
	for(i=0; i<3; i++)
	{
		printf("Enter the row %d  :",i+1);
		
		for(j=0;j<5;j++)
		{
			printf("\nEnter the element %d :",j+1);
			scanf("%f",&a[i][j]);
			
		}
		printf("\n");
		
	}
	
		for(i=0; i<3; i++)
	{
		
		for(j=0;j<5;j++)
		{
			printf(" %.2f ",a[i][j]);
				
		}
		printf("\n");
		
	}
	
		for(i=0; i<3; i++)
	{
		
		for(j=0;j<5;j++)
		{
			total += a[i][j];
			
				
		}
		printf("The Avarage size is : %.2f\n",total / 5.0);
		
	}
	
	
}

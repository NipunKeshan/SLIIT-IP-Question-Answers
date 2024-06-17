#include<stdio.h>
int main()
{
   	float marks[5][2];
   	float finalmarks[50];
   	
   	int i,j;
   	
   	for(i=0; i<5; i++)
   	{
   		for(j=0; j<2; j++)
   		{
   			printf("Enter the number [%d][%d] :",i+1,j+1);
   			scanf("%f",&marks[i][j]);
   			
		}
	}
	
	for(i=0; i<5; i++)
   	{
   		for(j=0; j<2; j++)
   		{
   			printf("%.2f\t",marks[i][j]);
   				
		}
		printf("\n");
	}
	
	for (i = 0 ; i < 5 ; i++)
   {
   
        finalmarks[i] = marks[i][0] * 40.0 / 100 + marks[i][1] * 60.0 / 100 ;
        printf("final marks of %d student : %d \n" , i+1 , finalmarks[i]);
   
   }

	
	return 0;
}

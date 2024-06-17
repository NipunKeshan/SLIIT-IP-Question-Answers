#include<stdio.h>
int main()
{
	
	float avg,num,count,sum;
	
	count = 1.0;
	sum = 0;
	
	
	
	while(num != 9999)
	{
		printf("Enter the number :");
	    scanf("%f",&num);
	    
		if(num != 9999)
		{
		sum = sum + num;
		
		avg = sum / count;
		
		count = count + 1;
		
		printf("The average is : %.2f\n",avg);
		}
		 
	}
	
	return 0;
}


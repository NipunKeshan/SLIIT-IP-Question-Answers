#include<stdio.h>
int main()
{
	 
	int count;
	float total,ave,mark;
	
	count = 1;
	total = 0;
	
	while(mark != -1)
	{
		printf("Enter the marks :");
		scanf("%f",&mark);
		
		total = total + mark;
		
		count = count + 1;
		
	}
	printf("The total is %.2f\n\n",total);
	
	ave = total / 10.0;
	
	printf("The ave is %.2f",ave);
	
	return 0;
	
}

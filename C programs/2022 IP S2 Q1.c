//2022 IP Paper session 2
//Question 1
#include<stdio.h>
int main()
{
	
	float num;
	int count;
	count = 0;
    while(count != 1 )
    {
    	printf("Enter the digit number :");
	    scanf("%f",&num);
	
	if(num >= 1000 && num <= 9999)
    {
    	
		printf("It is a palindrom\n");
    	count = count + 1;
	}
	
	else
	{
		
		printf("Invalid number\n");
		
	}
	}
	
	return 0;	
}

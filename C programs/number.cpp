#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number :");
	scanf("%d",&number);
	
	if(number < 0)
	{
		number = number * -1;
		printf("%d",number);
	}
	else
	{
		printf("%d",number);
		
		return 0;
	}
}

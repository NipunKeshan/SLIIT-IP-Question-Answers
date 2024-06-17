#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number :");
	scanf("%d",&num);
	
	if(num < 0)
	{
		num = num * -1;
		printf("%d",num);
	}
	else
	{
	 printf("%d",num);
	}
	return 0;
}

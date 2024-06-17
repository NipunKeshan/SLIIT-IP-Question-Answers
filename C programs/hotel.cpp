#include<stdio.h>
int main()
{
	float total, discount;
	char type,A,B,C,D;
	printf("Enter the type :");
	scanf("%c",&type);
	if(type == A)
	{
		discount = 8000 * 3 / 100;
		total = 8000 - discount;
		printf("Your amount is %.2f",total);
		
	}
	else
	{
		discount = 9500 * 5 / 100;
		total = 9500 - discount;
		printf("Your amount is %.2f",total);
	}
	
	return 0;
}

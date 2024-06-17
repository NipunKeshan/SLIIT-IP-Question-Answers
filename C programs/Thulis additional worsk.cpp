#include<stdio.h>
int main()
{
	float num1,num2,sum,diff,mul,div;
	
	printf("Enter the two numbers :");
	scanf("%f",&num1);
	printf("Enter the two numbers :");
	scanf("%f",&num2);
	
	sum = num1 + num2;
	diff = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
	
	printf("The sum of the given numbers : %.lf\n",sum);
	printf("The different of the given numbers : %.lf\n",diff);
	printf("The product of the given numbers : %.lf\n",mul);
	printf("The quotient of the given numbers : %f\n",div);
	
	return 0;
	
}

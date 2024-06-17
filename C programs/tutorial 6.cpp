#include<stdio.h>
int add(int num1, int num2);
int multiply(int num1,int num2);
int square(int num1,int num2);
int main()
{
	int num1,num2,addition,mul;
	
	printf("Enter the number 1 : ");
	scanf("%d",&num1);
	
	printf("Enter the number 2 : ");
	scanf("%d",&num2);
	
	addition = add(num1,num2);
	mul = multiply(num1,num2);
	
	
	printf("Sum is %d\n",addition);
	printf("Multiplication is %d\n",mul);

	
	return 0;
}
int add(int num1, int num2)
{
	int adddd;
	adddd = num1 + num2;
	return adddd; 
}
int multiply(int num1,int num2)
{
	int mulll;
	mulll = num1 * num2;
	return mulll;
}



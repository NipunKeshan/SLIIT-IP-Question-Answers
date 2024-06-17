#include<stdio.h>
int main()
{
	int num1,num2,sum,div,sub,mul;
	
	char ope;
	
	printf("enter the numbers : ");
	scanf("%d %d",&num1,&num2);
	
	printf("Enter the character :");
	scanf(" %c",&ope);
	
	switch(ope)
	{
		case '+' : sum = num1 + num2;
		           printf("%d",sum);
		           break ;
		case '/' : div = num1 / num2;
		           printf("%d",div);
				   break ;
		case '-' : sub = num1 - num2;
		           printf("%d",sub);
		           break;
		case '*' : mul = num1 * num2;
		           printf("%d",mul);
		       	   break ;	    		            
	}
	return 0;
}

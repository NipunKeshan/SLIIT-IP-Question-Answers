#include<stdio.h>
float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);

int main()
{
	float amount,interestRate,final1,final2,final3;
	int i;
	
	printf("Enter Initial Amount to be invested : ");
	scanf("%f",&amount);
	
	printf("Enter Annual interest Rate(in percentage) :");
	scanf("%f",&interestRate);
	
	for(i=1; i<=5; i++)
	{
		
		final1 = calcAnnualInterest( interestRate, amount);
		final2 = findTotalAmount( interestRate,  amount );
		printf("Amount after year %d : %.2f\n",i,final2);
		amount = final2;
	}
	
	return 0; 
	
}

float calcAnnualInterest(float interestRate, float amount)
{
	float interest;
	
	if(amount < 1000000)
	{
		interest = amount * interestRate / 100;
	}
	
	else
	{
		interest = amount * interestRate + 0.5;
	}
	
	return interest;
}

float findTotalAmount(float interestRate, float amount)
{
	 float tot,interest;
	 
	 tot = amount + interest;
	 return tot;
	 
}

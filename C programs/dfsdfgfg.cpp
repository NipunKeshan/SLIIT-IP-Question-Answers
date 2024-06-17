#include<stdio.h>
double calculateAmount(int type, double initial);
void printDetails(int type, double initial, double balance);
int checkEligibility(double balance);

int main()
{
	int type;
	float initial,balance,cal1;
	
	printf("Enter the account type :");
	scanf("%d",&type);
	
	printf("Enter the initial balance :");
	scanf("%f",&initial);
	
	cal1 =  calculateAmount( type,  initial);
	
	printDetails( type,  initial,  balance);
	
	checkEligibility( balance);

	return 0;
}

double calculateAmount(int type, double initial)
{
	float inte,tot;
	
	if(type==1)
	{
		inte = initial * 4.0 / 100.0;
		
	}
	
	else if(type==2)
	{
		inte = initial * 7.0 / 100.0;
		
	}
	else if(type==3)
	{
		inte = initial * 10.0 / 100.0;
		
	}
	
	tot = inte + initial;
	
		
	return tot;
	
}

void printDetails(int type, double initial, double balance)
{
	float tot,cal1;
	printf("The total balance is : %.2f\n",cal1);
}

int checkEligibility(double balance)
{
	float initial;
	if(initial >5000)
	{
		printf("You are elegeble for raffle draw");
		return 1;
		
	}
	else if(initial < 5000)
	{
		printf("You are not elegeble for raffle draw");
		return 2;
		
	}
	
}

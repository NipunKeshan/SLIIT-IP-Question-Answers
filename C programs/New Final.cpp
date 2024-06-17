#include<stdio.h>
float calcInterest(int fdType, float depositAmount);
float calcTax(float annualInterest);
void displayDetails(float interest, float taxAmount);

int main()
{
	int fdType;
	float depositAmount,annualInterest,interest,taxAmount,cal3;
	
	printf("Enter the Fixed deposit type :");
	scanf("%d",&fdType);
	
	printf("Enter the deposit Amount :");
	scanf("%f",&depositAmount);
	
	annualInterest =  calcInterest( fdType,  depositAmount);
	taxAmount =   calcTax( annualInterest);
	
	cal3 = annualInterest - taxAmount;
	
    displayDetails( interest,  taxAmount);
	
	
	return 0;
	
}

float calcInterest(int fdType, float depositAmount)
{
	float interest,annualInterest;
	
	if(fdType == 1)
	{
		annualInterest = depositAmount * 16.0 / 100;
		
	}
	
	else if(fdType == 2)
	{
		annualInterest = depositAmount * 15.0 / 100;
		
	}
	
	else if(fdType == 3)
	{
		annualInterest = depositAmount * 15.5 / 100;
		
	}
	
	else if(fdType == 4)
	{
		annualInterest = depositAmount * 17.5 / 100;
		
	}
	
	return annualInterest;
	
}

float calcTax(float annualInterest)
{
	float taxAmount;
	
	taxAmount = annualInterest * 5.0 / 100;
	
	return taxAmount;
	
}

void displayDetails(float interest, float taxAmount)
{
	float cal3,annualInterest;
	printf("Annual interest\t Tax amount \t Amount Payable\n");
	printf("%.2f\t %.2f \t %.2f",annualInterest,taxAmount,cal3);
	return ;
}




















#include <stdio.h>
#include <assert.h>
#include <math.h>
float calclnterest (int FDType,float depositAmount);
float calcTax(float annuallnterest);
void displayDetails(float interest, float taxAmount);
int main (void)
{
	assert(fabs(calclnterest(1,100000.00) - 16000) < 0.001);
	
	int FDType;
	float  depositAmount, payable, annualInterest, taxAmount;
	
	printf("Fixed Deposit Type : ");
	scanf("%d", &FDType);
	
	while( FDType != -1)
	{
	printf("Deposit Amount : ");
	scanf("%f", &depositAmount);
	
	annualInterest = calclnterest(FDType, depositAmount);
	
	taxAmount = calcTax(annualInterest); 
	
	displayDetails (annualInterest, taxAmount);
	
	printf("Do you want to exit funtion enter -1");
	printf("\nFixed Deposit Type : ");
	scanf("%d", &FDType);
    }
	return 0;
}
float calclnterest (int FDType,float depositAmount)
{
	float interest;
	
	if(FDType == 1)
	{	
		interest = depositAmount * 16.0 / 100;
	}
	else if(FDType == 2)
	{	
		interest = depositAmount * 15.0 / 100;
	}
	else if(FDType == 3)
	{
		interest = depositAmount * 15.5 / 100;
	}
	else if(FDType == 4)
	{
		interest = depositAmount * 17.5 / 100;
	}
	
	return interest;
}
float calcTax(float annuallnterest)
{
	float tax;
	
	tax = annuallnterest * 0.05;
	
	return tax;
}
void displayDetails(float interest, float taxAmount)
{
	float payable;
	payable=interest-taxAmount;
	printf("\tAnnual Interest\tTax amount\tAmount Payable\n");
	
	printf("\t%.2f\t\t%.2f\t\t%.2f\n", interest, taxAmount, payable);
}


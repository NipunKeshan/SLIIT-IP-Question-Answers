#include<stdio.h>
float calclnterest (int FDType,float depositAmount);
float calcTax(float annuallnterest);
void displayDetails(float interest, float taxAmount);

int main()
{
	int fdType;
	float dAmm,annuallnterest,interest,taxAmount;
	
	printf("Enter the Fixed deposit type : ");
	scanf("%d",&fdType);
	printf("Enter the deposit amount :");
	scanf("%f",&dAmm);
	
	while(fdType != -1)
	{
		
		annuallnterest= calclnterest ( fdType, dAmm);
		taxAmount =  calcTax( annuallnterest);
		displayDetails( interest, taxAmount);
		
		printf("Enter the Fixed deposit type : ");
		scanf("%d",&fdType);
		printf("Enter the deposit amount :");
		scanf("%f",&dAmm);
		
	}
	
	return 0;
}
float calclnterest (int FDType,float depositAmount)
{
	float interest;
	if(FDType == 1)
	{
		interest = depositAmount * 16.00 / 100.0;
		
	}
	else if(FDType == 2)
	{
		interest = depositAmount * 15.00 / 100.0;
		
	}
	else if(FDType == 3)
	{
		interest = depositAmount * 15.50 / 100.0;
		
	}
	else if(FDType == 4)
	{
		interest = depositAmount * 17.50 / 100.0;
		
	}
	
	return interest;
	
}

float calcTax(float annuallnterest)
{
	float tax;
	tax = annuallnterest * 5.0 / 100;
	return tax;
	
}

void displayDetails(float interest, float taxAmount)
{
	
	
	printf("\tAnnual Interest\tTax amount\tAmount Payable\n");
	
	printf("\t%.2f\t\t%.2f\t\t%.2f\n", interest, taxAmount,interest-taxAmount);
	
	return ;
}























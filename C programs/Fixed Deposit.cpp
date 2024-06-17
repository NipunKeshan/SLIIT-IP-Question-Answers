#include<stdio.h>
float calcInterest(int fDtype, float depositAmount);
float calcTax(float interest);
int main()
{
	int fDtype;
	float depositAmount,interest,cal,tax;
	
	printf("Enter the type :");
	scanf("%d",&fDtype);
	
	printf("Enter the deposit amount :");
	scanf("%f",&depositAmount);
	
	cal = calcInterest( fDtype,  depositAmount);
	
	tax = calcTax( interest);
	
	printf("\n Your Annual Interest is : %.2f",cal);
	
	printf("\n Your Final Ineterest Amount is : %.2f",tax);
	
	return 0;
	
}

float calcInterest(int fDtype, float depositAmount)
{
	
	float inte;
	
	if(fDtype == 1)
	{
	    
		inte = depositAmount * (16.0 / 100);
		
	}
	else if(fDtype == 2)
	{
	    
		inte = depositAmount * (15.0 / 100);
		
		
		
	}
	else if(fDtype == 3)
	{
	    
		inte = depositAmount * (15.5 / 100);
		
		
	}
	else if(fDtype == 4)
	{
	    
		inte = depositAmount * (17.0 / 100);
		
		
	}
		return inte;
}

float calcTax(float interest)
{
	
	float tot,inte,tot1;
	
	tot = inte * 5.0 / 100;
	tot1 = inte - tot;
	return tot1;
	
}























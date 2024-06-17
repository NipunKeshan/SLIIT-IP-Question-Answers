#include <stdio.h>
int main()
{
	//variables
	int tp,t;
	char selection;
	float tot;
	
	//process
	tot = 0;
	printf("Enter the Time Period :");
	scanf("%d",&tp);
	
	printf("Enter the Number of Times :");
	scanf("%d",&t);
	
	printf("Enter Peak Time(Y/N) :");
	scanf(" %c",&selection);
	
	if(selection=='Y' || selection=='y')
	{
		if(tp<45)
		{
			printf("Total Amount to be Paid :Rs.%.2lf",tot=(t*7500));
		}
		else if(tp>45 && tp<60)
		{
			printf("Total Amount to be Paid :Rs.%.2lf",tot=(t*12000));
		}
		else if(tp>60)
		{
			printf("Total Amount to be Paid :Rs.%.2lf",tot=(t*25000));
		}
	}
	else if(selection=='N'||selection=='n')
	{
		if(tp<45)
		{
			tot= (t*7500.0)+(t*7500*25/100.0);
			printf("Total Amount to be Paid :Rs.%.2lf",tot);
		}
		else if(tp>45 && tp<60)
		{
			tot=(t*12000)+(t*12000*25/100.0);
			printf("Total Amount to be Paid :Rs.%.2lf",tot);
		}
		else if(tp>60)
		{
			tot=(t*25000)+(t*25000*25/100.0);
			printf("Total Amount to be Paid :Rs.%.2lf",tot);
		}
	}
	
	return 0;
}

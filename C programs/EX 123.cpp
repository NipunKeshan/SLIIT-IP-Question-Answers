#include<stdio.h>
int main()
{
	int type, guest,days;
	float tot;
	
	printf("Input Room Option :");
	scanf("%d",&type);
	
	printf("Number of guest :");
	scanf("%d",&guest);
	
	printf("Number of days :");
	scanf("%d",&days);
	
	if(type == 1)
	{
		if(guest == 2)
		{
			tot = 45000 * days;
		}
		
		else if(guest >= 3 && guest <= 5)
		{
			tot = 44000 * days;
		}
		
		else if(guest > 5)
		{
			tot = 43000 * days;
		}
		
	} 
	
	else if(type == 2)
	{
		if(guest == 2)
		{
			tot = 40000 * days;
		}
		
		else if(guest >= 3 && guest <= 5)
		{
			tot = 38000 * days;
		}
		
		else if(guest > 5)
		{
			tot = 35000 * days;
		}
		
	}
	
	else if(type == 1)
	{
		if(guest == 2)
		{
			tot = 37500 * days;
		}
		
		else if(guest >= 3 && guest <= 5)
		{
			tot = 35000 * days;
		}
		
		else if(guest > 5)
		{
			tot = 32000 * days;
		}
		
	}
	
	else
	{
		printf("Invalid type");
	}
	
	printf("Total is %.2f",tot);
	
	return 0;
	
}

#include<stdio.h>
int main()
{
	
	int type,days;
	char bord,card,F,H,G,S,B;
	float total,amount,dis;
	
	printf("Enter type of room :");
	scanf("%d",&type);
	
	printf("Enter Accommodation Basis(F/H) : ");
	scanf(" %c",&bord);
	
	printf("Enter No of Days :");
	scanf("%d",&days);
	
	printf("Enter reward card type :");
	scanf(" %c",&card);
	
	if(type == 1)
	{
		if(bord == 'F')
		{
			total = days * 25555.0; 
		}
		
		else if(bord == 'H')
		{
			total = days * 17250.0; 
		}
		
	}
	
	else if(type == 2)
	{
		if(bord == 'F')
		{
			total = days * 17500.0; 
		}
		
		else if(bord == 'H')
		{
			total = days * 12250.0; 
		}
		
	}
	
	else if(type == 3)
	{
		if(bord == 'F')
		{
			total = days * 9000.0; 
		}
		
		else if(bord == 'H')
		{
			total = days * 7250.0; 
		}
		
	}
	
	else
	{
		printf("Invalid type");
	}
	
	if(card == 'G')
	{
		dis = total * 12.5 / 100;
		amount = total - dis;
		
	}
	
	else if(card == 'S')
	{
		dis = total * 11.5 / 100;
		amount = total - dis;
		
	}
	
	else if(card == 'B')
	{
		dis = total * 9.5 / 100;
		amount = total - dis;
		
	}
	
	printf("Amount(Rs.) : %.2f",amount);
	
	return 0;
}



























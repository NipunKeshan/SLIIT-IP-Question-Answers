//This program wil displays the ABC Hotel (pvt)
#include<stdio.h>
int main()
{
	float total,discount,amount;
	int type,days;
	char basis,card,G,F,H,S,B;
	printf("Enter type of room :");
	scanf("%d",&type);
	
	if(type == 1)
	{
		printf("Enter Accomadation basis(F/H) :");
		scanf(" %c",&basis);
		
		if(basis == F);
		{
			printf("Enter no of days :");
			scanf("%d",&days);
			
			total = days * 25555.00;
			
			printf("Enter the card type :/n");
			scanf(" %c",&card);
			
			if(card == G)
			{
				discount = total * 12.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == S)
			{
				discount = total * 11.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == B)
			{
				discount = total * 9.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
		
			else if(basis == H);
		{
			printf("Enter no of days :");
			scanf("%d",&days);
			
			total = days * 17250.00;
			
			printf("Enter the card type :/n");
			scanf(" %c",&card);
			
			if(card == G)
			{
				discount = total * 12.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == S)
			{
				discount = total * 11.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == B)
			{
				discount = total * 9.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
		}
}
		else if(type == 2)
	{
		printf("Enter Accomadation basis(F/H) :");
		scanf(" %c",&basis);
		
		if(basis == F);
		{
			printf("Enter no of days :");
			scanf("%d",&days);
			
			total = days * 17500.00;
			
			printf("Enter the card type :/n");
			scanf(" %c",&card);
			
			if(card == G)
			{
				discount = total * 12.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == S)
			{
				discount = total * 11.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == B)
			{
				discount = total * 9.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(basis == H);
		{
			printf("Enter no of days :");
			scanf("%d",&days);
			
			total = days * 12250.00;
			
			printf("Enter the card type :/n");
			scanf(" %c",&card);
			
			if(card == G)
			{
				discount = total * 12.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == S)
			{
				discount = total * 11.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == B)
			{
				discount = total * 9.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
		}
	}
		else if(type == 3)
	{
		printf("Enter Accomadation basis(F/H) :");
		scanf(" %c",&basis);
		
		if(basis == F);
		{
			printf("Enter no of days :");
			scanf("%d",&days);
			
			total = days * 9000.00;
			
			printf("Enter the card type :/n");
			scanf(" %c",&card);
			
			if(card == G)
			{
				discount = total * 12.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == S)
			{
				discount = total * 11.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == B)
			{
				discount = total * 9.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(basis == H);
		{
			printf("Enter no of days :");
			scanf("%d",&days);
			
			total = days * 7250.00;
			
			printf("Enter the card type :/n");
			scanf(" %c",&card);
			
			if(card == G)
			{
				discount = total * 12.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == S)
			{
				discount = total * 11.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
			else if(card == B)
			{
				discount = total * 9.5 / 100;
				amount = total - discount;
				printf("Amount(Rs.) : %.2f",amount);
			}
		}
	}
	return 0;
}

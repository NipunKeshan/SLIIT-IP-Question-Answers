//VERSION C-------------------------------------------------------------------------
#include<stdio.h>
int main()
{
	int option,num,top;
	float price;
	char size,opt2,L,M,P,Y,y;
	
	price = 0;
	
	printf("Input pizza option :");
	scanf("%d",&option);
	
	printf("Size of the Pizza ( P/M/L) :");
	scanf(" %c",&size);
	
	printf("Number of Pizzas :");
	scanf("%d",&num);
	
	if(option == 1)
	{
		if(size == 'P')
		{
			price = price + 560.0 * num;
		}
		
		else if(size == 'M')
		{
			price = price + 920.0 * num;
		}
		
		else if(size == 'L')
		{
			price = price + 1800.0 * num;
		}
		
	}
	
	else if(option == 2)
	{
		if(size == 'P')
		{
			price = price + 340.0 * num;
		}
		
		else if(size == 'M')
		{
			price = price + 660.0 * num;
		}
		
		else if(size == 'L')
		{
			price = price + 1300.0 * num;
		}
		
	}
	
	else if(option == 3)
	{
		if(size == 'P')
		{
			price = price + 760.0 * num;
		}
		
		else if(size == 'M')
		{
			price = price + 1100.0 * num;
		}
		
		else if(size == 'L')
		{
			price = price + 2100.0 * num;
		}
		
	}
	
	else
	{
		printf("Invalid option");
	}
	
	printf("Do you need any extra toppings ( y/n) :");
	scanf(" %c",&opt2);
	
	if(opt2 == 'Y' || opt2 == 'y')
	{
		printf("Input your option :");
		scanf("%d",&top);
		
		if(top == 1)
		{
			price = price + 320.0;
			
		}
		else if(top == 2)
		{
			price = price + 140.0;
			
		}
		else if(top == 3)
		{
			price = price + 130.0;
			
		}
		else if(top == 4)
		{
			price = price + 150.0;
			
		}
	}
	
	printf("Total price Rs. %.2f",price);
	
	return 0;
}







































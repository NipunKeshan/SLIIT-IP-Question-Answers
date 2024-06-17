//This program will displays  the "PIZZA PARADISE" price list.
#include<stdio.h>
int main()
{
	int input,total,option;
	char l,m,p,size,y,n,toping;
	total = 0;
	printf("input pizza option");
	scanf("%d",&input);
	
	if(input == 1)
	{
		printf("Size of the pizza (P/M/L) :");
		scanf("%c",&size);
		
		if(size == p)
		{
			total = total + 560;
			while( toping != n)
			{
				printf("Do you need any extra toppings (y/n) :");
				scanf("%c",&toping);
				
				if(toping == y)
				{
					printf("Input your option :");
					scanf("%d",&option);
					
					if(option == 1)
					{
						total = total + 320; 
					}
					else if(option == 2)
					{
						total = total + 140;
						
					}
					else if(option == 3)
					{
						total = total + 130;
						
					}
					else if(option == 4)
					{
						total =total + 150;
					}
				}
				
			}
		}
			if(size == m)
		{
			total = total + 920;
			while( toping != n)
			{
				printf("Do you need any extra toppings (y/n) :");
				scanf("%c",&toping);
				
				if(toping == y)
				{
					printf("Input your option :");
					scanf("%d",&option);
					
					if(option == 1)
					{
						total = total + 320; 
					}
					else if(option == 2)
					{
						total = total + 140;
						
					}
					else if(option == 3)
					{
						total = total + 130;
						
					}
					else if(option == 4)
					{
						total =total + 150;
					}
				}
				
			}
	}   	if(size == l)
		{
			total = total + 1800;
			while( toping != n)
			{
				printf("Do you need any extra toppings (y/n) :");
				scanf("%c",&toping);
				
				if(toping == y)
				{
					printf("Input your option :");
					scanf("%d",&option);
					
					if(option == 1)
					{
						total = total + 320; 
					}
					else if(option == 2)
					{
						total = total + 140;
						
					}
					else if(option == 3)
					{
						total = total + 130;
						
					}
					else if(option == 4)
					{
						total =total + 150;
					}
				}
				
			}
}


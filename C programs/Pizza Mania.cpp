#include<stdio.h>
int main()
{
	int option,add,total;
	char size,P,p,M,m,L,l,n,N,y,Y,toping;
	
	total = 0;
	
	printf("Enter the pizza option : ");
	scanf("%d",&option);
	
	if(option == 1)
	{
		printf("Enter the size of the pizza :");
		scanf(" %c",&size);
		
		if(size == 'p' || size == 'P')
		{
			total = total + 560;
			
			while(toping != 'n' )
			{
				printf("Do you need any extra option : ");
				scanf(" %c",&toping);
				
				if(toping == 'y')
				{
					printf("Input yur option :");
					scanf("%d",&add);
					
					if(add == 1)
					{
						total = total + 320;
					}
					else if(add == 2)
					{
						total = total + 140;
					}
					else if(add == 3)
					{
						total = total + 130;
					}
					else if(add == 4)
					{
						total = total + 150;
					}
				}
			}
		}
		if(size == 'm' || size == 'M')
		{
			total = total + 920;
			
			while(toping != 'n' || toping != 'N')
			{
				printf("Do you need any extra option : ");
				scanf(" %c",&toping);
				
				if(toping == 'y' || toping == 'Y')
				{
					printf("Input yur option :");
					scanf("%d",&add);
					
					if(add == 1)
					{
						total = total + 320;
					}
					else if(add == 2)
					{
						total = total + 140;
					}
					else if(add == 3)
					{
						total = total + 130;
					}
					else if(add == 4)
					{
						total = total + 150;
					}
				}
			}
		}
		if(size == 'l' || size == 'L')
		{
			total = total + 1800;
			
			while(toping != 'n')
			{
				printf("Do you need any extra option : ");
				scanf(" %c",&toping);
				
				if(toping == 'y' || toping == 'Y' )
				{
					printf("Input yur option :");
					scanf("%d",&add);
					
					if(add == 1)
					{
						total = total + 320;
					}
					else if(add == 2)
					{
						total = total + 140;
					}
					else if(add == 3)
					{
						total = total + 130;
					}
					else if(add == 4)
					{
						total = total + 150;
					}
				}
			}
		}
	}
	
		else if(option == 2)
	{
		printf("Enter the size of the pizza :");
		scanf(" %c",&size);
		
		if(size == 'p' || size == 'P')
		{
			total = total + 340;
			
			while(toping != 'n')
			{
				printf("Do you need any extra option : ");
				scanf(" %c",&toping);
				
				if(toping == 'y' || toping == 'Y')
				{
					printf("Input yur option : ");
					scanf("%d",&add);
					
					if(add == 1)
					{
						total = total + 320;
					}
					else if(add == 2)
					{
						total = total + 140;
					}
					else if(add == 3)
					{
						total = total + 130;
					}
					else if(add == 4)
					{
						total = total + 150;
					}
				}
			}
		}
		else if(size == 'm' || size == 'M')
		{
			total = total + 660;
			
			while(toping != 'n')
			{
				printf("Do you need any extra option : ");
				scanf(" %c",&toping);
				
				if(toping == 'y' || toping == 'Y')
				{
					printf("Input yur option : ");
					scanf("%d",&add);
					
					if(add == 1)
					{
						total = total + 320;
					}
					else if(add == 2)
					{
						total = total + 140;
					}
					else if(add == 3)
					{
						total = total + 130;
					}
					else if(add == 4)
					{
						total = total + 150;
					}
				}
			}
		}
		if(size == 'l' || size == 'L')
		{
			total = total + 1300;
			
			while(toping != 'n')
			{
				printf("Do you need any extra option : ");
				scanf(" %c",&toping);
				
				if(toping == 'y' || toping == 'Y')
				{
					printf("Input yur option :");
					scanf("%d",&add);
					
					if(add == 1)
					{
						total = total + 320;
					}
					else if(add == 2)
					{
						total = total + 140;
					}
					else if(add == 3)
					{
						total = total + 130;
					}
					else if(add == 4)
					{
						total = total + 150;
					}
				}
			}
		}
	}
	
	
	else if(option == 3)
	{
		printf("Enter the size of the pizza :");
		scanf(" %c",&size);
		
		if(size == 'p' || size == 'P')
		{
			total = total + 760;
			
			while(toping != 'n')
			{
				printf("Do you need any extra option : ");
				scanf(" %c",&toping);
				
				if(toping == 'y' || toping == 'Y')
				{
					printf("Input yur option :");
					scanf("%d",&add);
					
					if(add == 1)
					{
						total = total + 320;
					}
					else if(add == 2)
					{
						total = total + 140;
					}
					else if(add == 3)
					{
						total = total + 130;
					}
					else if(add == 4)
					{
						total = total + 150;
					}
				}
			}
		}
		else if(size == 'm' || size == 'M')
		{
			total = total + 1100;
			
			while(toping != 'n')
			{
				printf("Do you need any extra option : ");
				scanf(" %c",&toping);
				
				if(toping == 'y' || toping == 'Y')
				{
					printf("Input yur option :");
					scanf("%d",&add);
					
					if(add == 1)
					{
						total = total + 320;
					}
					else if(add == 2)
					{
						total = total + 140;
					}
					else if(add == 3)
					{
						total = total + 130;
					}
					else if(add == 4)
					{
						total = total + 150;
					}
				}
			}
		}
		else if(size == 'l' || size == 'L')
		{
			total = total + 2100;
			
			while(toping != 'n')
			{
				printf("Do you need any extra option : ");
				scanf(" %c",&toping);
				
				if(toping == 'y' || toping == 'Y')
				{
					printf("Input yur option :");
					scanf("%d",&add);
					
					if(add == 1)
					{
						total = total + 320;
					}
					else if(add == 2)
					{
						total = total + 140;
					}
					else if(add == 3)
					{
						total = total + 130;
					}
					else if(add == 4)
					{
						total = total + 150;
					}
				}
			}
		}
	}
	printf("Total price Rs. : %d",total);
	return 0;
	
}

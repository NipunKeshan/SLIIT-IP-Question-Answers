#include<stdio.h>
int main()
{
	int type;
	char size,card,cus,odr;
	float total,dis,total1;
	
	total = 0;
	
	while(type != -1)
	{
		printf("Input the pizza type : ");
		scanf("%d",&type);
		
		if(type == 1)
		{
			printf("Input the pizza size :");
			scanf(" %c",&size);
			
			if(size == 'L' || size == 'l')
			{
				total = total + 1720;
				
			}
			else if(size == 'M' || size == 'm')
			{
				total = total + 975;
				
			}
			else
			{
				printf("Invalid type");
			}	
		}
		else if(type == 2)
		{
			printf("Input the pizza size :");
			scanf(" %c",&size);
			
			if(size == 'L' || size == 'l')
			{
				total = total + 1820;
				
			}
			else if(size == 'M' || size == 'm')
			{
				total = total + 1000;
				
			}
			else
			{
				printf("Invalid type");
			}
		}
		
	}
    
	
	printf("Are you paying by credit card (Y/N): ");
    scanf(" %c",&card);
    
    printf("Are you a loyality customer (Y/N): ");
    scanf(" %c",&cus);
    
    
    printf("Is this an online oder (Y/N): ");
    scanf(" %c",&odr);
    
    
    if(card == 'y' || card == 'Y')
    {
    	dis =  total * 20.0 / 100;
	}
    
    else if(cus == 'y' || cus == 'Y')
    {
    	dis =  total * 15.0 / 100;
	}
    
    else if(odr == 'y' || odr == 'Y')
    {
    	dis =  total * 5.0 / 100;
	}
    
    total1 = total - dis;
    
    printf("Total bill amount : %.2f\n",total);
    printf("Discount : %.2f\n",dis);
    printf("Net amount : %.2f\n",total1);
    
    
    return 0;
    
}

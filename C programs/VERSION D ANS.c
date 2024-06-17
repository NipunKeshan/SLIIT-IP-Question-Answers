//VERSION E-------------------------------------------------------------------------
#include<stdio.h>
int main()
{
	int chil;
	float price;
	char opt,opt2,A,B,C,D,F,I,type;
	
	price = 0;
	
	printf("Insurance Type :");
	scanf(" %c",&type);
	
	printf("Family or Individual ( F- family and I – individual) :");
	scanf(" %c",&opt);
	

	
	if(type == 'A')
	{
		if(opt == 'F')
		{
			printf("Number of childrens :");
	        scanf("%d",&chil);
	        
	        if(chil > 2)
	        {
	        	chil = chil - 2;
	        	
	        	price = 5200.0 * 0.1 * chil;
			}
	        
			price = price + 5200.0; 
		}
		
		else if(opt == 'I')
		{
			price = price + 4500.0 ;
		}
		
		
		
	}
	
	else if(type == 'B')
	{
		if(opt == 'F')
		{
			printf("Number of childrens :");
	        scanf("%d",&chil);
	        
	        if(chil > 2)
	        {
	        	chil = chil - 2;
	        	
	        	price = 4300.0 * 0.1 * chil;
			}
	        
			price = price + 4300.0; 
		}
		
		else if(opt == 'I')
		{
			price = price + 3100.0;
		}
		
	}
	
	else if(type == 'C')
	{
		if(opt == 'F')
		{
		printf("Number of childrens :");
	        scanf("%d",&chil);
	        
	        if(chil > 2)
	        {
	        	chil = chil - 2;
	        	
	        	price = 4800.0 * 0.1 * chil;
			}
	        
			price = price + 4800.0; 
		}
		
		else if(opt == 'I')
		{
			price = price + 3600.0;
		}
		
	}
	
	else if(type == 'D')
	{
		if(opt == 'F')
		{
			printf("Number of childrens :");
	        scanf("%d",&chil);
	        
	        if(chil > 2)
	        {
	        	chil = chil - 2;
	        	
	        	price = 3800.0 * 0.1 * chil;
			}
	        
			price = price + 3800.0; 
		}
		
		else if(opt == 'I')
		{
			price = price + 3300.0 ;
		}
		
	}
	
	else
	{
		printf("Invalid option");
	}
	
	
	printf("Total price Rs. %.2f",price);
	
	return 0;
}

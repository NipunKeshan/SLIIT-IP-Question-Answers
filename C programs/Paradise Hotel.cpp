//This programme will displays the total expenditure of "PARADISE LANKA" hotel.
#include <stdio.h>
int main()
{
	int type,guest,days,total,typeA;
	char y,n,other;
	printf("Input the room option :");
	scanf("%d",&type);
	
	if(type == 1)
	{
		printf("Number of guest :");
		scanf("%d",&guest);
		
		printf("Number of days :");
		scanf("%d",&days);
		
		if( guest == 2)
		{
			total = 45000 * days;
			
		}
		else if( guest <2 && guest < 6)
		{ 
		     total = 44000 * days;
		     
		}
		else if(guest > 5)
		{
			total = 43000 * days;
		}
	}
		else if(type == 2)
	{
		printf("Number of guest :");
		scanf("%d",&guest);
		
		printf("Number of days :");
		scanf("%d",&days);
		
		if( guest == 2)
		{
			total = 40000 * days;
			
		}
		else if( guest <2 && guest < 6)
		{ 
		     total = 38000 * days;
		     
		}
		else if(guest > 5)
		{
			total = 35000 * days;
		}
	}
		else if(type == 3)
	{
		printf("Number of guest :");
		scanf("%d",&guest);
		
		printf("Number of days :");
		scanf("%d",&days);
		
		if( guest == 2)
		{
			total = 37500 * days;
			
		}
		else if( guest <2 && guest < 6)
		{ 
		     total = 35000 * days;
		     
		}
		else if(guest > 5)
		{
			total = 32000 * days;
		}
	}

	printf("Do you want any other tours :");
    scanf("%c",&other);
	
	while(other != n){
		
		
		printf("Enter the additional tour type :");
		scanf("%d",&typeA);
		
		if(typeA == 1)
		{
			total = total + 3500;
		}
		else if(typeA == 2)
		{
			total = total + 1000;
		}
		else if(typeA == 3)
		{
			total = total + 1500;
		}
		else if(typeA == 4)
		{
			total = total + 2000;
		}
		printf("Do you want any other tours :");
	    scanf("%c",&other);	
	}
	printf("Total price is %d",total);
	return 0;
}

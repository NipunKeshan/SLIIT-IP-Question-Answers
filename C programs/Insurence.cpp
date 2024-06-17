#include<stdio.h>
int main()
{
	int total,children,child,additional;
	char type,A,B,C,D,S,N,pakage,F,I;
	
	total = 0;
	
	printf("Insurence type : ");
	scanf("%c",&type);
	
	if(type == A)
	{
		printf("Family of Individual :");
		scanf("%c",&pakage);
		
		if(pakage == F)
		{
			printf("Number of children :");
			scanf("%d",&children);
			
			if(children > 2)
			{
				child = children - 2;
				additional = child * 5200.00 * 0.1;
				total = 5200 + additional;
			}
			else if(children <= 2)
			{
				total = total + 5200;
			}
		}
		else if(pakage == I)
		{
			total = total + 4500;
		}
	}
	else if(type == N)
	{
		printf("Family of Individual :");
		scanf("%c",&pakage);
		
		if(pakage == F)
		{
			printf("Number of children :");
			scanf("%d",&children);
			
			if(children > 2)
			{
				child = children - 2;
				additional = child * 4300.00 * 0.1;
				total = 4300 + additional;
			}
			else if(children <= 2)
			{
				total = total + 4300;
			}
		}
		else if(pakage == I)
		{
			total = total + 3100;
		}
	}
	else if(type == D)
	{
		printf("Family of Individual :");
		scanf("%c",&pakage);
		
		if(pakage == F)
		{
			printf("Number of children :");
			scanf("%d",&children);
			
			if(children > 2)
			{
				child = children - 2;
				additional = child * 4800.00 * 0.1;
				total = 4800 + additional;
			}
			else if(children <= 2)
			{
				total = total + 4800;
			}
		}
		else if(pakage == I)
		{
			total = total + 3600;
		}
	}
	else if(type == S)
	{
		printf("Family of Individual :");
		scanf("%c",&pakage);
		
		if(pakage == F)
		{
			printf("Number of children :");
			scanf("%d",&children);
			
			if(children > 2)
			{
				child = children - 2;
				additional = child * 3800.00 * 0.1;
				total = 3800 + additional;
			}
			else if(children <= 2)
			{
				total = total + 3800;
			}
		}
		else if(pakage == I)
		{
			total = total + 3300;
		}
	}
	
	printf("Total Amount : %d",total);
	
	return 0;
	
}

#include<stdio.h>
int main()
{
	int total,children,child,additional,pakage,type;
	char A,B,C,D;

	
	printf("Insurence type : ");
	type = getchar();
	
	if(type == A)
	{
		printf("Family of Individual :");
		scanf("%d",&pakage);
		
		if(pakage==1)
		{
			printf("Number of children :");
			scanf("%d",&children);
			
			if(children > 2)
			{
				child = children - 2;
				additional = child * 5200.00 * 0.1;
				total = 5200 + additional;
					printf("Total Amount : %d",total);
			}
			else
			{
				total = total + 5200;
					printf("Total Amount : %d",total);
			}
		}
		else
		{
			total = total + 4500;
				printf("Total Amount : %d",total);
		}
	}
	else if(type == B)
	{
		printf("Family of Individual :");
		scanf("%c",&pakage);
		
		if(pakage==1)
		{
			printf("Number of children :");
			scanf("%d",&children);
			
			if(children > 2)
			{
				child = children - 2;
				additional = child * 4300.00 * 0.1;
				total = 4300 + additional;
					printf("Total Amount : %d",total);
			}
			else
			{
				total = total + 4300;
					printf("Total Amount : %d",total);
			}
		}
		else
		{
			total = total + 3100;
				printf("Total Amount : %d",total);
		}
	}
	else if(type == C)
	{
		printf("Family of Individual :");
		scanf("%d",&pakage);
		
		if(pakage==1)
		{
			printf("Number of children :");
			scanf("%d",&children);
			
			if(children > 2)
			{
				child = children - 2;
				additional = child * 4800.00 * 0.1;
				total = 4800 + additional;
					printf("Total Amount : %d",total);
			}
			else
			{
				total = total + 4800;
					printf("Total Amount : %d",total);
			}
		}
		else
		{
			total = total + 3600;
				printf("Total Amount : %d",total);
		}
	}
	else if(type == D)
	{
		printf("Family of Individual :");
		scanf("%d",&pakage);
		
		if(pakage==1)
		{
			printf("Number of children :");
			scanf("%d",&children);
			
			if(children > 2)
			{
				child = children - 2;
				additional = child * 3800.00 * 0.1;
				total = 3800 + additional;
					printf("Total Amount : %d",total);
			}
			else if(children <= 2)
			{
				total = total + 3800;
					printf("Total Amount : %d",total);
			}
		}
		else
		{
			total = total + 3300;
				printf("Total Amount : %d",total);
		}
	}
	

	
	return 0;
	
}

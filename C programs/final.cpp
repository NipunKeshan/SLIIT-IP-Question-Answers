#include<stdio.h>
int main()
{
	int type,psg,count,exr;
	char clas,opt;
	
	printf("Fly with me \n");
	
	printf("Enter the type :");
	scanf("%d",&type);
	
	printf("Enter the class you want :");
	scanf(" %c",&clas);
	
	printf("ENter the no of passengers :");
	scanf("%d",&psg);
	
	if(type == 1)
	{
		if(clas == 'E')
		{
		
			count = count + 36500;
		
		}
		
		else if(clas == 'B')
		{
			
			count = count + 77600;
			
		}
		
	}
	
	else if(type == 2)
	{
		if(clas == 'E')
		{
		
			count = count + 35800;
		
		}
		
		else if(clas == 'B')
		{
			
			count = count + 76500;
			
		}
		
	}
	
	else if(type == 3)
	{
		if(clas == 'E')
		{
		
			count = count + 54600;
		
		}
		
		else if(clas == 'B')
		{
			
			count = count + 84700;
			
		}
		
	}
	
	
	else if(type == 4)
	{
		if(clas == 'E')
		{
		
			count = count + 28500;
		
		}
		
		else if(clas == 'B')
		{
			
			count = count + 42800;
			
		}
		
	}
	
	count = count * psg;
	
	while(opt != 'N')
	{
		
		printf("Do you need any extra services(Y/N) :");
		scanf(" %c",&opt);
		
		if(opt == 'Y')
		{
			printf("Input your option :");
			scanf("%d",&exr);
			
			if(exr == 1)
			{
				count = count + 7800;
				
			}
			
			else if(exr == 2)
			{
				count = count + 1500;
				
			}
			
			else if(exr == 3)
			{
				count = count + 19500;
				
			}
			
			else if(exr == 4)
			{
				count = count + 2000;
				
			}
			
		}
		
		
	}
	
	printf("Total price : %d",count);
	
	return 0;
}

#include<stdio.h>
int main()
{
   int type,total,toping;
   char size,p,m,l,option,y,n;
   
   total = 0; 
   printf("Input pizza option :");
   scanf("%d", &type);
   
   if(type == 1)
   {
   	printf("Size of the pizza : ");
   	scanf("%c", &size);
   	
   	if(size == p)
   	{
   	total = total + 560;
   }
   else if(size == m)
   {
   	total = total + 920;
   }
	else if(size == l)
	{ 
	total = total + 1800;
	}
		else
	{ 
	  printf("Invalid type");
		}
   }
   
    else if(type == 2)
   {
   	printf("Size of the pizza : ");
   	scanf("%c", &size);
   	
    if(size = p)
   	{
   		total = total + 340;
	   }
   else if(size == m)
   {
   	total = total + 660;
   }
	else if(size == l)
	{ total = total + 1300;
		}
	else
	{ 
	  printf("Invalid type");
		}	
   
    
    }
	
	else if(type == 3)
   {
   	printf("Size of the pizza : ");
   	scanf("%c", &size);
   	
    if(size == p)
   	{
   		total = total + 760;
	   }
   else if(size == m)
   {
   	total = total + 1100;
   }
	else if(size == l)
	{ total = total + 2100;
		}
		else
	{ 
	  printf("Invalid type");
		}
   }
   
   else{
   	printf("Invalid type");
   }
   
   while( option != n)
   {
   	printf("Do you need any extra topings :");
   	scanf("%c",& option);
   	
   	if(option == y)
   	{
   		printf("Input you option");
   		scanf("%d",&toping);
   		
   		if(toping == 1)
   		{
   			total = total + 320;
	    }
	   else if(toping == 2)
	   {
	   	total = total + 140;
	   }
	   else if(toping == 3)
	   {
	   	total = total + 130;
	   }
	   else if(toping == 4)
	   {
	   	total = total + 150;
	   }
	   else 
	    { 
	      printf("Invalid type");
		}
   }
   else
   {
   	 total = total + 0;
   }
   }
   printf("Total price Rs. %d",total);
   return 0;
}

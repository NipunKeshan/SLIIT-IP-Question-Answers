//This program will displays the gifts of the cumstermers they own
#include<stdio.h>
int main()
{
   int  type, days;
   float amount1,amount,dis;
   printf("Book type :");
   scanf("%d",&type);
   printf("Rented days : ");
   scanf("%d",&days);
   if(type == 1)
   {
   	printf("Rental per day  : Rs. 10.00\n");
   	 if( days > 14)
   	 {
   	 	amount1 = days * 10.00;
   	 	dis = amount1 * 10.00 / 100 ;
   	 	amount = dis + amount1;
   	 	printf("Rental Amount : Rs %.2f\m",amount);
		}
	  else
	  {
	  	amount = days * 10.00;
	  	printf("Rental Amount : Rs %.2f\n",amount);
		  }	
   	
   }
   else
   {
   	printf("Rental per day  : Rs. 8.00\n");
   	 if( days > 14)
   	 {
   	 	amount1 = days * 8.00;
   	 	dis = amount1 * 10.00 / 100;
   	 	amount = dis + amount1;
   	 	printf("Rental Amount : Rs %.2f\n",amount);
		}
	  else
	  {
	  	amount = days * 8.00;
	  	printf("Rental Amount : Rs %.2f\n",amount);
		  }	
   }
   return 0;

}

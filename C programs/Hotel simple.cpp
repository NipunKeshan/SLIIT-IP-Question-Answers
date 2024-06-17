//This program will displays the total cost of the pakage given from a travel agency for a Holiday Resort.
#include<stdio.h>
int main()
{
	float discount,total;
    char A,B,C,D,type;
    
	printf("Enter the pakage type :");
    type = getchar();	
	
	if(type == A)
	{
		discount = 8000.0 * 0.03;
		total = 8000.0 - discount;
		printf("Your Amount is : %.2f",total);
		}
	else if(type == B)
	{
		discount = 9500.00 * 0.05;
		total = 9500.00 - discount;
		printf("Your Amount is : %.2f",total);
		}	
	else if(type == C)
	{
		discount = 12500.00 * 0.07;
		total = 12500.00 - discount;
		printf("Your Amount is : %.2f",total);
		}	
	
		return 0;	
}

#include<stdio.h>
int main()
{
	int type;
	float bill,discount,total;
	printf("Enter 1 if you are registed customer \n");
	printf("Enter 2 if you are unregisted customer \n");
	printf("Enter the type : ");
	scanf("%d",&type);
	
	if(type == 1)
	{
		printf("Enter the bill amount : ");
		scanf("%f",&bill);
		
		if(bill <= 2000)
		{
			discount = bill * 15 / 100;
			total = bill - discount;
			printf("Discount Amount : Rs. %.2f\n",discount);
			printf("Final Bill Amount : Rs. %.2f\n",total);
		}
		else
		{
		   discount = bill * 25 / 100;
			total = bill - discount;
			printf("Discount Amount : Rs. %.2f\n",discount);
			printf("Final Bill Amount : Rs. %.2f\n",total);
		}
	}
	else if(type == 2)
	{
			printf("Enter the bill amount : ");
		    scanf("%f",&bill);
		    
		    if(bill > 3000)
		    {
		    discount = bill * 15 / 100;
			total = bill - discount;
			printf("Discount Amount : Rs. %.2f\n",discount);
			printf("Final Bill Amount : Rs. %.2f\n",total);
			}
			else
			{
				printf("Final Bill Amount : Rs. %.2f\n",bill);
			}
	}
	else
	{
		printf("Invalid type");
	}
	return 0;
}

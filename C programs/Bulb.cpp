#include<stdio.h>
int main()
{
	int balance,nbalance,amount,type;
	char w,W,d,D;
	char opt;
	
	printf("Enter the amount");
	scanf("%d",&amount);
	
	printf("Enter the balance");
	scanf("%d",&balance);
	
	printf("Enter the option  you want");
	scanf(" %c",&opt);
	
	if (type=='w' || type=='W')
	{
		printf("You have selected to withdraw money");
		
		nbalance=balance - amount ;
		printf("The new balance is:%d\n",nbalance);
	}
	else if (type=='d' || type=='D')
	{
		printf("You have selected to deposit money");
		
		nbalance= balance + amount;
		printf("The new balance is:%d\n",nbalance);
				
	}
	else
	    printf("You have selected an invalid transaction type");
	    
	    
    return 0;
	
	
} 
	
	
	
	
	


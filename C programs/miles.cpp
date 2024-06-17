#include<stdio.h>
int main()
{
	int mark,count,tot,count1;
	
	count = 1;
	count1 = 1;
	tot = 0;
	
	while(count1 <=3)
	{
		printf("\nEnter the students mark %d:\n",count1);
		
		while(count <=4)
		{
			printf("Enter the mark %d:",count);
			scanf("%d",&mark);
			
			count = count +1;
			tot = tot + mark;
			
		}
		
		count = 1;
		printf("The total is %d",tot);
		
		count1 = count1 + 1;
	}
	
	return 0;
}

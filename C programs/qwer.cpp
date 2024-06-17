/*
#include<stdio.h>
int main()
{
	int count;
	char num[4];
	
	count = 0;
	
	while(count!=1)
	{
		printf("\nEnter a four digit number :");
	    scanf("%s",&num);
	    
	    if(num[0] == num[3] && num[1] == num[2])
	    {
	    	
			printf("It is a palindrome");
	    	count = count + 1;
		}
		
		else
		{
			
			printf("Inavlid number");
			
		}
		
	}
	
	return 0;
	
}
*/

/*
#include<stdio.h>
int main()
{
	int userRating[5];
	int i,j,k;
	
	for(i=0; i<5; i++)
	{
		printf("Enter the number :");
		scanf("%d",&userRating[i]);
		
		if(userRating[i] == -99)
		{
			break;
		}
	}
	
	printf("\n\n\n");
	
	for(j=0; j<5; j++)
	{
		printf("%d\t",j+1);
		
		for(k=0; k<userRating[j]; k++)
		{
			printf("*");
			
		}
		printf("\n");
		
	}
	
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int i,j;
	int image[4][4];
	
	for(i=0; i<4; i++)
	{
		printf("Values for row %d\n",i+1);
		
		for(j=0;j<4; j++)
		{
			printf("Enter element %d :",j+1);
			scanf("%d",&image[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<4; i++)
	{
		
		for(j=0;j<4; j++)
		{
			if(image[i][j] > 55)
			{
				printf("1\t");
			}
			
			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}
	
	return 0;
	
}

*/

#include<stdio.h>
int main()
{
	char rev[3];
	int i;
	
	
	
		printf("Enter the character :");
		scanf("%s",&rev);

	
	for(i=3; i>=0; i--)
	{
		printf("%c\t",rev[i]);
	}
	return 0;
}
































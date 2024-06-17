/*#include<stdio.h>
int main()
{
	char char1,char2;
	int line,i,j;
	
	printf("Enter the 1st character :");
	scanf(" %c",&char1);
	
	printf("Enter the 2nd character :");
	scanf(" %c",&char2);
	
	printf("Enter the number of lines :");
	scanf(" %d",&line);
	
	for(i=0;i<line; i++)
	{
		for(j=0; j<=i; j++)
		{
			if(j%2 == 0)
			{
				printf(" %c",char1);
			}
			
			else if(j % 2 )
			{
				printf(" %c",char2);
			}
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
	int numArr[8];
	int num,i,k,l,j;
	
	for(i=0;i<8; i++)
	{
		printf("Enter the element %d :",i+1);
		scanf("%d",&numArr[i]);
	
	}
	
	for(j=0; j<8; j++)
	{
		printf("%d\t",numArr[j]);
	}
	
	

		
		printf("\nEnter the number :");
		scanf("%d",&num);
		
		
	
	
	for(k=num; k < 8; k++)
	{
		printf("%d\t",numArr[k]);
	}
	
	
	
    for(l=0; l<num; l++)
    {
    	printf("%d\t",numArr[l]);
    	
	}
	
	return 0;
	
}
*/

/*
#include<stdio.h>
int main()
{
	int identityArr[4][4];
	int i,j;
	int count = 0;
	int count1 = 0;
	int count2 = 0;
	for(i=0;i<4;i++)
	{
		printf("values for row %d\n",i+1);
		
		for(j=0; j<4; j++)
		{
			printf("Enter element %d : ",j+1);
			scanf("%d",&identityArr[i][j]);
		}
		printf("\n");
		
	}
	
	for(i=0;i<4;i++)
	{
		
		for(j=0; j<4; j++)
		{
			printf("%d\t",identityArr[i][j]);
		
		}
		printf("\n");
		
	}
	
	
	
    for(i=0;i<4;i++)
    {
    	if(identityArr[i][i] == 1 );
    	{
    		count1 = count1 + 1;
    		
		}
	}
	
	for(i=0;i<4;i++)
	{
		
		for(j=0; j<4; j++)
		{
			if(i!=j)
			{
				if(identityArr[i][j] == 0)
				{
					count2= count2 +1;
				}
			}
		
		}
		
		
	}
	
	if(count1 == 4 && count2 == 12)
	{
		printf("It is a Identitty matrix");
		
	}
	else
	{
		printf("It is not a identity matrix");
	}
	
	
}
*/

/*
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=0; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",i);
			
		}
		printf("\n");
	}
	
	return 0;
}
*/

/*#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<i; j++)
		{
			for(k=0; k<j; k++)
			{
				printf("[%d\t%d\t%d]\n",i,j,k);
				
			}
			
		}
		
		
	}
	
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int i;
	
	for(i=0;i<=5;i++)
	{
		if(i==3){
			continue;
		}
		printf("%d",i);

	
	}
	
	return 0;
}




































































































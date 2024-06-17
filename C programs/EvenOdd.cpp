#include<stdio.h>
int main()
{
	int numArray[6];
	int even[6];
	int odd[6];
	int i,j,r,k,l;
	
	for(i=0; i<6; i++)
	{
		printf("Enter the number %d :",i+1);
		scanf("%d",&numArray[i]);
	}
	
	for(j=0; j<6; j++)
	{
		r = numArray[j]  % 2;
		
		if(r == 0)
		{
			even[j] = numArray[j];
			
		}
		
		else if(r == 1)
		{
			odd[j] = numArray[j];
		}
	}
	
	printf("\nEven numbers\t");
	
	for(k=0; k<6; k++)
	{
		printf("%d\t",even[k]);
	}
	
	printf("\nodd numbers\t");
	
		for(l=0; l<6; l++)
	{
		printf("%d\t",odd[l]);
	}
	
	return 0;
	
}

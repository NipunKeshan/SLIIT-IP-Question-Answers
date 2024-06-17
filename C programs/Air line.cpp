#include<stdio.h>
int main()
{
	char b[4] = { 1,4,2,3};
	char a[100];
	char c[4];
	int i,count,j;
	
	count = count + 1;
	
	FILE * ptr;
	
	ptr = fopen("answers.dat", "w");
	
	if(ptr == NULL)
	{
		printf("File not open correclty");
		
	}
	
	for(i =0 ;i <4; i++ )
	{
		printf("\nEnter the ID : ");
		scanf(" %s",&a[i]);
		
		for(j=0; j<4; j++)
		{
		    printf("Enter the answers : ");
		    scanf(" %d",&c[i]);
		    
		    if(c[i] == b[i])
		    {
		    	count = count + 1;
		    	
			}
		}
		printf("Answers is : %d",count);
		fprintf(ptr," %s",a);
		fprintf(ptr,"\t%s",c);
		fprintf(ptr,"\t %d",count);
	}
	
	fclose(ptr);
	
	return 0;
	
	
}

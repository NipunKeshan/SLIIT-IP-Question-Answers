/*
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char name[100];
	char name2[20];
	char num[50];
	int corre;
	
	
	FILE * ptr;
	
	ptr = fopen("Directory.dat","w");
	
	if(ptr == NULL)
	{
		printf("File not open correctly");
		return -1;
		
	}
	
	for(i=0; i<5; i++)
	{
		printf("Enter the name :");
		scanf("%s",name);
		
		printf("Enter the number :");
		scanf("%s",num);
		
		fprintf(ptr,"%s\t%s\n",name,num);
		
	}
	
	fclose(ptr);
	
	printf("\nEnter the name :");
	scanf("%s",name2);
	
	ptr = fopen("Directory.dat","r");
	
	for(i=0;i<5;i++)
	{
	   fscanf(ptr,"%s\t%s\n",&name,&num);
	   
	   corre = strcmp(name2,name);
	   
	   if(corre == 0)
	   {
	   	
		   printf("%s",num);
	   break;
	   }
	    if(corre != 0)
	   {
	   
	   printf("Invalid number");
	   	break;
	   }
	 
	}
	  
	   
	fclose(ptr);
	
	return 0;
	
}
*/

#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=10; i>0; i--)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
			
		}
		printf("\n");
		
	}
	return 0;
}







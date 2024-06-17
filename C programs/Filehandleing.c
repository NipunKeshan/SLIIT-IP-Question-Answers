#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,tem;
	
	char name[20];
	char num[100];
	char  name1[50];
	
	FILE * ptr;
	
	ptr = fopen("Directory.dat","w");
	
	for(i=0; i<5; i++)
	{
		printf("Enter the name :");
		scanf("%s",name);
		
		printf("Enter the telephone number :");
		scanf("%s",num);
		
		fprintf(ptr,"%s\t%s\n",name,num);
		
	}
	
	fclose(ptr);
	
	printf("Enter the name : ");
	scanf("%s",name1);
	
	ptr = fopen("Directory.dat","r");
	
	if(ptr == NULL)
	{
		printf("File not open correctly");
		return -1;
	}
	
	for(j=0; j<5; j++)
	{
		tem= strcmp(name1,name);
		
		if(tem==1)
		{
			fprintf(ptr,"%s",num[j]);
			
		}
		else if(tem== 0)
		{
			fprintf(ptr,"Invalid name");
		}
		
	}
	
	fclose(ptr);
	
	return 0;
	
	
}












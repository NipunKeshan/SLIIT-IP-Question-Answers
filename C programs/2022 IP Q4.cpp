#include<stdio.h>
int main()
{
	
	char name[50];
	char num[100];
	int i;
	
	FILE * ptr;
	
	ptr= fopen("Directory.dat","w");
	
	if(ptr == NULL)
	{
		printf("File not open correctly");
		return -1;
		
	}
	
	for(i=1; i<=5; i++)
	{
		printf("Enter the name :");
		scanf("%s",name[i]);
		
		printf("Enter the num :");
		scanf("%s",num[i]);
		
		fprintf(ptr,"%s\t%s",name[i],num[i]);
		
	}
	
	fclose(ptr);
	
	return 0;
	
}

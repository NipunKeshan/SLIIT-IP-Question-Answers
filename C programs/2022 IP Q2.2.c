#include<stdio.h>
int main()
{
	char name[100];
	char num[150];
	int i;
	
	FILE * ptr;
	
	ptr = fopen("Directory.dat","w");
	
	for(i=0;i<5;i++)
	{
		printf("Enter the name :");
		scanf("%s",name);
		
		printf("Enter the number :");
		scanf("%s",num);
		
		fprintf(ptr,"\n%s\t%s",name,num);
		
	}
	
	fclose(ptr);
	
	return 0;
	
}

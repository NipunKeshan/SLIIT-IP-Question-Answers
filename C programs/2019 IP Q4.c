#include<stdio.h>
int main()
{
	char num[100];
	char name[50];
	
	FILE * ptr;
	
	ptr = fopen("loyalty.dat","w");
	
	printf("Enter the Id : ");
	scanf("%s",num);
	
	printf("Enter the name : ");
	scanf("%s",name);
	
	fprintf(ptr,"%s\t%s",num,name);
	
	fclose(ptr);
	
	return 0;
	
}

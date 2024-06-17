#include<stdio.h>
int main()
{
	char num[50];
	char name[50];
	char atte[50];
	
	int i;
	
	FILE* cfptr;
	
	cfptr = fopen("attendence.dat", "w");
	
	if(cfptr == NULL)
	{
		printf("File not open open correctly");
		return -1;
	}
	
	for(i=0; i<2; i++)
	{
		printf(" Enter employee number :");
		scanf("%s",&num[i]);
		
		printf(" Enter employee name :");
		scanf("%s",&name[i]);
		
		printf(" Enter employee attendence :");
		scanf("%s",&atte[i]);
		
		fprintf(cfptr,"%s\t%s\t%s\t",num[i],name[i],atte[i]);
	}
	
	fclose(cfptr);
	
	return 0;
	
}


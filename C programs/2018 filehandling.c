#include<stdio.h>
int main()
{
	int no[50];
	char name[100];
	int inte[20];
	int i;
	
	FILE * ptr;
	
	ptr = fopen("attendance.dat","w");
	
	if(ptr == NULL)
	{
		printf("File not open correctly");
		return -1;
	}
	
	for(i=0; i<2; i++)
	{
		
      printf("Eneter the id number :");
      scanf("%d",&no);
      
      printf("Eneter the name :");
      scanf("%s",&name);
      
      printf("Eneter the id number :");
      scanf("%d",&inte);
      
      fprintf(ptr," %d\t%s\t%d\n",no,name,inte);
 
	}
	
	
	fclose(ptr);
	
	return 0;
	
}

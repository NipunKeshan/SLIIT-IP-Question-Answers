#include<stdio.h>
int main()
{
	char ID[10];
	char name[30];
	double avgMarks;
	int i;
	
	FILE * ptr;
	
	ptr = fopen("marks.dat","w");
	
	if(ptr == NULL)
	{
		printf("File not open correctly");
		return -1;
		
	}
	for(i=1; i<=5 ; i++)
	{
		printf("Plz input the student ID ");
		scanf("%s",ID);
		printf("Plz input the name ");
		scanf("%s",name);
		printf("Plz input the average Marks ");
		scanf("%f",&avgMarks);
	    fprintf(ptr,"%s%s%.2f\n",ID,name,avgMarks);
	}
	
	fclose(ptr);
	return 0;
	
	
}

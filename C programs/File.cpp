#include<stdio.h>
int main()
{
	int a,id,itemNo,Qun;
	
	FILE * ptr;
	
	ptr = fopen("Oders.dat","w");
	
	if(ptr == NULL)
	{
		printf("File not open correctly");
		return -1;
		
	}
	
	fprintf(ptr,"oder Id\titemNo\tquentity");
	
	for(a=0; a<5; a++)
	{
		printf("Enter oder id :");
		scanf("%d",&id);
		fprintf(ptr,"%d\t",id);
		
		printf("Enter item No :");
		scanf("%d",&itemNo);
		fprintf(ptr,"%d\t",itemNo);
		
		printf("Enter quantity :");
		scanf("%d",&Qun);
		fprintf(ptr,"%d\t",Qun);
		
	
	}
	fclose(ptr);
	return 0;
}

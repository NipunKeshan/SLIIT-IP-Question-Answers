#include<stdio.h>
int main()
{
	char id[100];
	int mark[4];
	int m1[4]={1,3,4,2};
	int i,j,ma,k,l;
	
	
	FILE * ptr;
	
	ptr=fopen("marks.dat","w");
	
	for(i=0; i<3 ; i++)
	{
		printf("Enter the id : ");
		scanf("%s",id);
		for(j=0; j<4; j++)
		{
			printf("Enter the Number :");
			scanf("%d",&mark[j]);
			
			
		}
		for(k=0; k<j; k++)
			{
				if(mark[k] == m1[k])
				{
					ma = ma +1;
				}
			}
		fprintf(ptr,"\n%s",id);
		for(l=0;l<4;l++)
		{
			fprintf(ptr,"%d\t",mark[l]);
		}
		fprintf(ptr,"%d",ma);
	}
	fclose(ptr);
	
	return 0;
}

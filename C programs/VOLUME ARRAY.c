#include<stdio.h>
int main()
{
	int a[4][3];
	int  vol[4];
	int i,j,k,l,m,n;
	
	for(i=0; i<4; i++)
	{
	    printf("Enter the box %d length :",i+1);
	    scanf("%d",&a[i][0]);
	    
	    printf("Enter the box %d width :",i+1);
	    scanf("%d",&a[i][1]);
	    
	    printf("Enter the box %d height :",i+1);
	    scanf("%d",&a[i][2]);
	    
	}
	
	for(k=0; k<4; k++)
	{
		
		for(l=0; l<3; l++)
		{
			printf("%d\t",a[k][l]);
		}
		printf("\n");
	}
	
	for(m=0; m<4; m++)
	{
		vol[m] = a[m][0] * a[m][1] * a[m][2];
		printf("Volume of %d box is %d \n",m+1,vol[m]);
	}
	 
	
	
	return 0;
	
}






















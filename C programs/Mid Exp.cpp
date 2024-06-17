#include<stdio.h>
int main()
{
	int x=5,y=8,z=8;
	
	x=y==z && x!=y;
	
	printf("%d",x);
	
	return 0;
}

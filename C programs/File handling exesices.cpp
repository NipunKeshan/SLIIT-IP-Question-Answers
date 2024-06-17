#include<stdio.h>
#include<string.h>
int main()
{
	
	char name[] = "Hello";
	int len1;
	
	len1 = strlen(name);
	
	printf("The length of %s is : %d",name,len1);
	
	return 0;	
}

#include<stdio.h>
int main()
{
	int number = 10;
	
	FILE * ptr;
	
	ptr = fopen("number.dat","w");
	
	if(ptr == NULL)
	{
		printf("File not open correctly ");
		return -1;
		
	}
	fprintf(ptr, "%d\n",number);
	
	fclose(ptr);
	
	return 0;
}

#include<stdio.h>
int main()
{
	int grade;
	printf("Enter the char :");
	grade = getchar();
	
	switch(grade)
	{
		case 'A' : printf("Passed");
		           break;
		case 'B' : printf("Failed");
		           break;
        default : printf("Hee");				              
			}
	return 0;		
}

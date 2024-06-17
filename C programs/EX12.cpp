#include <stdio.h>
int main (void)
{
int marks[5][2] = {0};
int finalmarks[5] = {0} ;
int i ;
for (i = 0 ; i < 5 ; i++)
{
printf("%d student :\n" , i+1);
printf("Enter component 1 marks : ");
scanf("%d" , &marks[i][0]);
printf("Enter component 2 marks : ");
scanf("%d" , &marks[i][1]);
puts(" ");
}
for (i = 0 ; i < 5 ; i++)
{
finalmarks[i] = marks[i][0] * 40 / 100 + marks[i][1] * 60 / 100 ;
printf("final marks of %d student : %d \n" , i+1 , finalmarks[i]);

}
return 0 ;
}


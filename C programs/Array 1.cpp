#include <Stdio.h>
int main (void)
{
int boxes[4][3] = {0};
int volume[3] = {0} ;
int i , j ;
for (i = 0 ; i < 4 ; i++)
{
printf("%d box\n" , i+1);
printf("input length : ");
scanf("%d" , &boxes[i][0]);
printf("input Width : ");
scanf("%d" , &boxes[i][1]);

printf("input height : ");
scanf("%d" , &boxes[i][2]);
puts(" ");
}
for (i = 0 ; i < 4 ; i++)
{
for (j = 0 ; j < 3 ; j++)
{
volume[i] += boxes[i][j] ;
}
printf("%d box volume : %d\n" , i+1 , volume[i]);
}
return 0 ;
}


#include<stdio.h>
#include<math.h>
struct center{
int x; int y;	
}c1,c2;
int main()
{ 
 c1.x = 4;
 c2.x = 3;
 c1.y = 2;
 c1.y = 6;
 
float distance;
distance = sqrt(pow(c1.x-c2.x,2) + pow(c1.y-c2.y,2));
printf("%.2f",distance);
return 0;
	
}

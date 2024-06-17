#include<stdio.h>
float circleArea(float radius);
int main()
{
	float radius,area;
	printf("Enter the radius :");
	scanf("%f",&radius);
	
	area = circleArea(radius);
	
	printf("The radius is %.2f",area);
	
	return 0;
}
float circleArea(float radius)
{
	float circle;
	circle = 22.0 / 7 * radius * radius;
	return circle;
}

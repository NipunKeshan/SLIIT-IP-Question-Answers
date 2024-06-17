#include<stdio.h>
float calcincrement(float salary, int noofYearsWorked);
float caltotalsalary(float salary, float increment);
int main()
{
	float salary,total,increment,Increment,cal,caltotal;
	int noofYearsWorked;
	printf("Enter the salary :");
	scanf("%f",&salary);
	
	printf("Enter the no of years worked :");
	scanf("%d",&noofYearsWorked);
	
	if( noofYearsWorked > 2)
	{
		increment = calcincrement(salary,noofYearsWorked);
		printf("Your increment is %f",increment);
		total = caltotalsalary(salary,increment);
		printf("Total salary : %f",total);
	}
	else
	{
		printf("Your increment is 0 ");
		total = salary;
		printf("Total salary : %f",total);
	}
	return 0;
}

float calcincrement(float salary, int noofYearsWorked)
{
	float increment;
	increment = noofYearsWorked * 0.1 * salary;
	return increment;
}
float caltotalsalary(float salary, float increment)
{
	float total; 
	total = salary + increment;
	return total;
}

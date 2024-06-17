#include<stdio.h>
#include<assert.h>
float calRemainingFuel(int vehicleType, float UsedFuelQuota);
float calFuelcost(int vehicleType, float UsedFuelQuota);
void  displayDetails(int vehicleType, float UsedFuelQuota, float remainingQuata, float cost);

int main()
{
	int vehicleType;
	float UsedFuelQuota,remainingQuata,cost,cal1,cal2;
	
	assert(calRemainingFuel(1 ,3) == 2);
	assert(calRemainingFuel(2 ,3) ==17);
	
	
	printf("Enter the vehicle type :");
	scanf("%d",&vehicleType);
	
	printf("Enter the used fuel quata : ");
	scanf("%f",&UsedFuelQuota);
	
	
	 cal1 = calRemainingFuel( vehicleType, UsedFuelQuota);
	 
	 cal2 = calFuelcost( vehicleType,  UsedFuelQuota);
	 
	 displayDetails( vehicleType,  UsedFuelQuota,  remainingQuata,  cost);
	 
	 
	return 0;
	
}

float calRemainingFuel(int vehicleType, float UsedFuelQuota)
{
	float remainingQuata;
	
	if(vehicleType == 1)
	{
		remainingQuata = 5.00 - UsedFuelQuota;
		
	}
	
	else if(vehicleType == 2)
	{
		remainingQuata = 20.00 - UsedFuelQuota;
		
	}
	
	else if(vehicleType == 3)
	{
		remainingQuata = 20.00 - UsedFuelQuota;
		
	}
	
	else if(vehicleType == 4)
	{
		remainingQuata = 30.00 - UsedFuelQuota;
		
	}
	
	return remainingQuata;
	
}

float calFuelcost(int vehicleType, float UsedFuelQuota)
{
	float cost;
	
	if(vehicleType == 1)
	{
		cost = 370.0 * UsedFuelQuota;
		
	}
	
	else if(vehicleType == 2)
	{
		cost = 370.00 * UsedFuelQuota;
		
	}
	
	else if(vehicleType == 3)
	{
		cost = 510.00 * UsedFuelQuota;
		
	}
	
	else if(vehicleType == 4)
	{
		cost = 370.00 * UsedFuelQuota;
		
	}
	
	return cost;
	
}

void  displayDetails(int vehicleType, float UsedFuelQuota, float remainingQuata, float cost)
{
	float cal1,cal2;
	printf("Vehicle type\t Quata used\t Quata Remaining\t Fuel Cost\n");
	printf("%d\t\t%.2f\t\t\t%.2f\t\t%2.f ", vehicleType,  UsedFuelQuota,  cal1,  cal2);
	
	return ;
	
}









































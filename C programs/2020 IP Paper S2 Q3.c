#include<stdio.h>

float calcRemainingFuel(int vehicleType, float usedFuelQuota);
float calcFuelcost (int vehicleType, float usedFuelQuota);
void displayDetails(int type, float usedFuelQuota, float remainingQuota, float cost);

int main()
{
	
	int type,vehicleType;
	float usedFuelQuota,cal1,remainingQuota,cost;
	
	while(vehicleType != -1)
	{
		printf("Enter the vehicle type :");
	scanf("%d",&vehicleType);
	
	printf("Enter the used fuel quata :");
	scanf("%f",&usedFuelQuota);
	
	calcRemainingFuel( vehicleType, usedFuelQuota);
	
	calcFuelcost( vehicleType,  usedFuelQuota);
	
	displayDetails( type,  usedFuelQuota,  remainingQuota,  cost);
	}
	
	return 0;
	
}

float calcRemainingFuel(int vehicleType, float usedFuelQuota)
{
	float remainingQuota;

	
	if(vehicleType == 1)
	{
	 remainingQuota = 5.0 - usedFuelQuota;
	}
	
	else if(vehicleType == 2)
	{
	 remainingQuota = 20.0 - usedFuelQuota;
	}
	
	else if(vehicleType == 3)
	{
	 remainingQuota = 20.0 - usedFuelQuota;
	}
	
	else if(vehicleType == 4)
	{
	 remainingQuota = 30.0 -  usedFuelQuota;
	}
	
	return remainingQuota;
}

float calcFuelcost(int vehicleType, float usedFuelQuota)
{
	float cost2;
	
	if(vehicleType == 1)
	{
	 cost2 = 370 * usedFuelQuota;
	}
	
	else if(vehicleType == 2)
	{
	 cost2 = 370 * usedFuelQuota;
	}
	
	else if(vehicleType == 3)
	{
	 cost2 = 510 * usedFuelQuota;;
	}
	
	else if(vehicleType == 4)
	{
	 cost2 = 370 * usedFuelQuota;
	}
	
	return cost2;
	
}

void displayDetails(int type, float usedFuelQuota, float remainingQuota, float cost)
{
	
	float cal,cost2;
	int vehicleType;
	
	printf("Vehicle type\t");
	printf("Quata used\t");
	printf("Quata remainning\t");
	printf("Fuel cost\t\n");
	printf("%d\t",vehicleType);
	printf("%.2f\t\t",usedFuelQuota);
	printf("%.2f\t\t\t",remainingQuota);
	printf("%.2f\t\t\t",cost2);
	
	return ;
	
}
















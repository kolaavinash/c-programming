#include<stdio.h>
int main()
{
	float units;
	printf("Enter the units:");
	scanf("%f",&units);
	if(units>=601)
	{
		units=units-600;
		units=390+1.0*units;
		printf("%f",units);
	}
	else if(units>=401)
	{       
		units=units-400;
		units=230+0.80*units;
		printf("%f",units);
	}
	else if(units>=201)
	{
		units=units-200;
		units=100+0.65*units;
		printf("%f",units);
	}
	else if(units>=0)
	{
		units=100;
		printf("%f",units);
	}
}

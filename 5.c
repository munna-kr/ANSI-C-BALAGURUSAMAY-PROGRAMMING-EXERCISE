// distance = speed x time
// Program to find speed of vehicle..

#include <stdio.h>

int main()
{
	float distance, speed, time;
	printf("Enter the Distance (in kilometre) travelled by the car:\n");
	scanf("%f", &distance);
	printf("Enter the time taken (in hours):\n");
	scanf("%f", &time);
	speed = (distance/time);
	printf("Speed of car = %0.2f km/hr\n", speed);

	return 0;
}

#include <stdio.h>

#define PI 3.14


int main()
{
	float radius = 10.0;
	float volume = 0.0;
	float radius_squared = radius * radius * radius;

	volume = (4.0f/3.0f) * PI * radius_squared;


	printf("VOLUME: %2.f\n", volume);





return 0;
}

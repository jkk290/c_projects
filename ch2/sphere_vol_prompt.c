/* Calculate the volume of a sphere with a 10-meter radius */

#include <stdio.h>

int main(void)
{
	float pi = 3.14159f;	
	float radius;
	float vol;

	printf("Enter sphere radius (example: 10.0): ");
	scanf("%f", &radius);
	vol = (4.0f / 3.0f) * pi * (radius * radius * radius);

	printf("Sphere volume: %.2f\n", vol);
	
	return 0;
}

/* Displays a description of a given wind speed (in Knots) using the Beaufort scale */

#include <stdio.h>

int main(void)
{
	int wind_speed;
	printf("Enter the wind speed (in Knots): ");
	scanf("%d", &wind_speed);

	if (wind_speed > 63) {
		printf("Hurricane\n");
	} else if (wind_speed > 47) {
		printf("Storm\n");
	} else if (wind_speed > 27) {
		printf("Gale\n");
	} else if (wind_speed > 3) {
		printf("Breeze\n");
	} else if (wind_speed >= 1) {
		printf("Light air\n");
	} else {
		printf("Calm\n");
	}

	return 0;
}

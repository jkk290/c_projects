/* Converts 24-hour time to 12-hour */

#include <stdio.h>

int main(void)
{
	int hours, mins;
	printf("Enter a 24-hour time(XX:YY): ");
	scanf("%d:%d", &hours, &mins);

	if (hours == 0) {
		printf("Equivalent 12-hour time: 12:%.2d AM\n", mins);
	} else if (hours == 12) {
		printf("Equivalent 12-hour time: %d:%.2d PM\n", hours, mins);
	} else if (hours < 12) {
		printf("Equivalent 12-hour time: %d:%.2d AM\n", hours, mins);
	} else {
		printf("Equivalent 12-hour time: %d:%.2d PM\n", hours - 12, mins);
	}

	return 0;
}

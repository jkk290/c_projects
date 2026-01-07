/* Takes a given 12-hour time and prints its 24-hour equivalent */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int hours, mins;
	char indicator;
	printf("Enter a 12-hour time: ");
	scanf("%2d:%2d", &hours, &mins);
	indicator = getchar();

	while (indicator != '\n') {
		if (toupper(indicator) == 'P') {
			hours += 12;
			break;
		} else if (toupper(indicator) == 'A') {
			break;
		}
		indicator = getchar();
	}

	printf("Equivalent 24-hour time: %.2d:%.2d\n", hours, mins);

	return 0;
}

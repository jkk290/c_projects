/* Compares given dates and displays which date is earlier on the calendar */

#include <stdio.h>

int main(void)
{
	int m, d, y;
	int earliest_m = 0;
	int earliest_d = 0;
	int earliest_y = 0;
	
	while (1) {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%2d/%2d/%2d", &m, &d, &y);

		if (m == 0 && d == 0 && y ==0) {
			break;
		}

		if (earliest_m == 0 && earliest_d == 0 && earliest_y == 0) {
			earliest_m = m;
			earliest_d = d;
			earliest_y = y;
		}

		if (y < earliest_y) {
			earliest_y = y;
			earliest_m = m;
			earliest_d = d;
		} else if (y == earliest_y && m < earliest_m) {
			earliest_m = m;
			earliest_d = d;
		} else if (y == earliest_y && m == earliest_m && d < earliest_d) {
			earliest_d = d;
		}

	}

	printf("%.2d/%.2d/%.2d is the earliest date\n", earliest_m, earliest_d, earliest_y);

	return 0;
}

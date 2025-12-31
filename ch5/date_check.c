/* Compares to given dates and displays which date is earlier on the calendar */

#include <stdio.h>

int main(void)
{
	int m1, d1, y1, m2, d2, y2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &m1, &d1, &y1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &m2, &d2, &y2);

	if (y1 < y2) {
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2);
	} else if (y1 == y2 && m1 == m2 && d1 == d2) {
		printf("Same date entered\n");
	} else if (y1 == y2 && m1 < m2) {
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2);
	} else if (y1 == y2 && m1 == m2 && d1 < d2) {
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2);
	} else {
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2, d2, y2, m1, d1, y1);
	}

	return 0;
}

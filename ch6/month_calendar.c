/* Takes a number of days in the month and the day of the week in which the month begins
 * and prints a one-month calendar */

#include <stdio.h>

int main(void)
{
	int days, starting_day;

	printf("Enter number of days in month: ");
	scanf("%d", &days);
	if (days > 31) {
		printf("Invalid days entered\n");
		return 1;
	}

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &starting_day);
	if (starting_day < 1 || starting_day > 7) {
		printf("Invalid starting day entered\n");
		return 1;
	}

	int weekday_count = 1;
	while (weekday_count < starting_day) {
		printf("   ");
		weekday_count++;
	}

	for (int i = 1; i <= days; i++) {
		printf("%2d", i);
		if (weekday_count == 7) {
			printf("\n");
			weekday_count = 1;
			continue;
		}
		printf(" ");
		weekday_count++;
	}

	printf("\n");

	return 0;
}

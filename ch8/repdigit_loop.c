/* Checks numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;
	bool repeated = false;

	while (1) {
		printf("Enter a number: ");
		scanf("%ld", &n);
		
		if (n <= 0) {
			break;
		}

		digit = n % 10;
		if (digit_seen[digit]) {
			repeated = true;
		} else {
			digit_seen[digit] = true;
		}
	}

	if (repeated) {
		printf("Repeated digits\n");
	} else {
		printf("No repeated digit\n");
	}

	return 0;
}

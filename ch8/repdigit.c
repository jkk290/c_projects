/* Checks numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;
	bool rep_digits[10] = {false};
	bool repeated = false;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
			repeated = true;
			rep_digits[digit] = true;
		} else {
			digit_seen[digit] = true;
		}
		n /= 10;
	}

	if (repeated) {
		printf("Repeated digits: ");
		for (int i = 0; i < 10; i++) {
			if (rep_digits[i]) {
				printf("%d ", i);
			}
		}
		printf("\n");
	} else {
		printf("No repeated digit\n");
	}

	return 0;
}

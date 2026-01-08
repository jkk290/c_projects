/* Takes a number a prints a table showing how many times each digit appears */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int digit;
	long n;
	int rep_digits[10] = {0};

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		rep_digits[digit]++;
		n /= 10;
	}

	printf("Digit:       0  1  2  3  4  5  6  7  8  9\n");
	printf("Occurrences: ");
	for (int i = 0; i < 10; i++) {
		printf("%d  ", rep_digits[i]);
	}
	printf("\n");

	return 0;
}

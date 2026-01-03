/* Takes a fraction and displays it reduced to its lowest terms */

#include <stdio.h>

int main(void)
{
	int numerator, denominator;
	printf("Enter a fraction (x/y): ");
	scanf("%d/%d", &numerator, &denominator);

	int m = numerator;
	int n = denominator;
	int remainder;
	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	int gcd = m;
	printf("In lowest terms: %d/%d\n", numerator / gcd, denominator / gcd);

	return 0;
}

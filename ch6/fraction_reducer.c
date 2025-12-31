/* Takes a fraction and displays it reduced to its lowest terms */

#include <stdio.h>

int main(void)
{
	int m, n;
	printf("Enter a fraction (x/y): ");
	scanf("%d %d", &m, &n);

	int remainder;
	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	printf("Greatest common divisor: %d\n", m);

	return 0;
}

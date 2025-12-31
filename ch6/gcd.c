/* Takes 2 integers and displays their greatest common divisor(GCD) */

#include <stdio.h>

int main(void)
{
	int m, n;
	printf("Enter two integers separated by spaces: ");
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

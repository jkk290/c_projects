/* Takes a positive integer and displays its factorial */
/* n value until unable to compute factorial */
/* short - 7, int - 16, long -25, float - 34, double - 170, long double - 1754 */

#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter a positive integer: ");
	scanf("%d", &num);

	long double value = 1.0f;

	for (int i = num; i > 0; i--) {
		value *= i;
	}

	printf("Factorial of %d: %Lf\n", num, value);

	return 0;
}

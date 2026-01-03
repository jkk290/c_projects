/* Approximates e by computing the value of 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! where n is an 
 * integer entered by the user */

#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter an non-negative integer: ");
	scanf("%d", &num);

	float e = 1.0f;

	for (int i = 1; i <= num; i++) {
		int factorial = 1;
		for (int j = 1; j <= i; j++) {
			factorial *= j;
		}

		e += 1.0f / factorial; 
	}

	printf("Approximate value of e when n is %d: %.6f\n", num, e);

	return 0;
}

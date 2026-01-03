/* Approximates e by computing the value of 1 + 1/1! + 1/2! + 1/3! + ... + 1/n! until e is less than a 
 * number entered by the user*/

#include <stdio.h>

int main(void)
{
	float num;
	printf("Enter a floating-point number for e: ");
	scanf("%f", &num);

	/* for (int i = 1; i <= num; i++) {
		int factorial = 1;
		for (int j = 1; j <= i; j++) {
			factorial *= j;
		}

		e += 1.0f / factorial; 
	} */

	float e = 1.0f;
	int i = 1;

	do {
		int factorial = 1;
		for (int j = 1; j <= i; j++) {
			factorial *= j;
		}
		
		e += 1.0f / factorial;
		i++;
	} while (e < num);

	printf("Term where e is less than given value: 1/%d\n", i);

	return 0;
}

/* Continously prompts for a non-negative number until a negative number or 0 is entered. Then displays 
 * the largest non-negative number entered */

#include <stdio.h>

int main(void)
{
	float num;
	float largest = 0.0f;

	while (1) {
		printf("Enter a number: ");
		scanf("%f", &num);

		if (num <= 0) {
			break;
		}

		if (num > largest) {
			largest = num;
		}
	}
	
	if (largest == 0.0f) {
		printf("Only negative number and/or 0 entered\n");
		return 0;
	}

	printf("The largest number entered was %.2f\n", largest);

	return 0;
}

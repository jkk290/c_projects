/* Takes a given expression, computes and displays its value */
/* Operands are floats, operators are +, -, *, and / */
/* Expression is evaluated from left to right (no operator takes precedence) */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	float value = 0.0f;
	float num;
	char ch;
	
	printf("Enter an expression: ");
	scanf("%f", &num);
	value += num;
	ch = getchar();

	do {
		scanf("%f", &num);

		if (ch == '+') {
			value += num;
		} else if (ch == '-') {
			value -= num;
		} else if (ch == '*') {
			value *= num;
		} else if (ch == '/') {
			value /= num;
		}

		ch = getchar();
	} while (ch != '\n');

	printf("Value of expression: %.2f\n", value);

	return 0;
}

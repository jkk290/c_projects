/* Either add, subtract, multiply, or divide two fractions */

#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char sign;

	printf("Enter fractions to add (x1/y1 + x2/y2): ");
	scanf("%d/%d %c %d/%d", &num1, &denom1, &sign, &num2, &denom2);

	switch (sign) {
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '-':
			result_num = num1 * denom2 - num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = denom1 * num2;
			break;
	}

	int m = result_num;
	int n = result_denom;
	int remainder;
	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	int gcd = m;

	printf("The value is %d/%d\n", result_num / gcd, result_denom / gcd);

	return 0;
}

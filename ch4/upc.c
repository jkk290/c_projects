/* Computes a Universal Product Code check digit */
/* Add first, third, fifth, seventh, ninth, and eleventh digits */
/* Add second, fourth, sixth, eigth, and tenth digits */
/* Multiply the first sum by 3 and add it to the second sum */
/* Subtract 1 from the total */
/* Compute the remainder when the adjusted total is divided by 10 */
/* Subtract the remainder from 9 */

#include <stdio.h>

int main(void)
{
	int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
	printf("Enter the first 11 digits of a UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);
	
	int sum1 = d1 + d3 + d5 + d7 + d9 + d11;
	int sum2 = d2 + d4 + d6 + d8 + d10;
	int total = (sum1 * 3) + sum2;
	total--;
	int remainder = total % 10;
	int check_digit = 9 - remainder;

	printf("Check digit: %d\n", check_digit);

	return 0;
}

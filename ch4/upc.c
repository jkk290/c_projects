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
	int upc;
	printf("Enter the first 11 digits of a UPC: ");
	scanf("%11d", &upc);

	int d1 = upc % 100000000;
	printf("%d\n", d1);

	return 0;
}

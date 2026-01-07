/* Uses Newton's method to compute the square root of a positive float */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double x;
	printf("Enter a positive number: ");
	scanf("%lf", &x);

	double y = 1.0;
	double prev_y, xy, avg, difference, product;

	do {
		xy = fabs(x) / fabs(y);
		avg = (fabs(xy) + fabs(y)) / 2;
		prev_y = y;
		y = avg;

		difference = fabs(prev_y) - fabs(y);
		if (difference < 0) {
			difference = -difference;
		}
		product = .00001 * fabs(y);
	} while (difference > product);

	printf("Square root: %f\n", y);

	return 0;
}

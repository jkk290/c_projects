/* Displays the largest and smallest of the 4 given integers */

#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4;
	printf("Enter four integers separated by spaces: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	int sm, lg;

	if (n1 < n2) {
		sm = n1;
		lg = n2;
	} else {
		sm = n2;
		lg = n1;
	}
	
	if (n3 < sm) {
		sm = n3;
	} else if (n3 > lg) {
		lg = n3;
	}

	if (n4 < sm) {
		sm = n4;
	} else if (n4 > lg) {
		lg = n4;
	}

	printf("The smallest integer is %d and the largest integer is %d\n", sm, lg);

	return 0;
}

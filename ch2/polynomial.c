#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Enter a value for x: ");
	scanf("%d", &x);

	int val = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;

	printf("Polynomial value: %d\n", val);

	return 0;
}

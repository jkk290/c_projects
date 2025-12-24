#include <stdio.h>

int main(void)
{
	int area_code, part_a, part_b;

	printf("Enter phone number: ");
	scanf("(%d) %d-%d", &area_code, &part_a, &part_b);

	printf("You entered %d.%d.%d\n", area_code, part_a, part_b);

	return 0;
}

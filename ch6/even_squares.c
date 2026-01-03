/* Takes a number and prints all even squares between 1 and the number */

#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	int limit = 0;
	int squared = 1;
	while (limit < num) {
		if ((squared * squared) % 2 == 0) {
			printf("%d\n", squared * squared);
		}
		limit = squared * squared;
		squared++;
	}

	return 0;
}

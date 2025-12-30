/* Takes an integer and displays it in octal */

#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter a number between 0 and 32767: ");
	scanf("%5d", &num);
	
	int d5 = num % 8;
	num = num / 8;
	int d4 = num % 8;
	num = num / 8;
	int d3 = num % 8;
	num = num / 8;
	int d2 = num % 8;
	num = num / 8;
	int d1 = num % 8;

	printf("In octal, your number is: %d%d%d%d%d\n", d1, d2, d3, d4, d5);

	return 0;
}

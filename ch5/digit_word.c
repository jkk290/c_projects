/* Takes a two-digit number and displays the English word for the number */

#include <stdio.h>

int main(void)
{
	int num;
	printf("Enter a two-digit number: ");
	scanf("%2d", &num);
	
	switch (num) {
		case 19: printf("You entered the number nineteen\n"); return 0;
		case 18: printf("You entered the number eighteen\n"); return 0;
		case 17: printf("You entered the number seventeen\n"); return 0;
		case 16: printf("You entered the number sixteen\n"); return 0;
		case 15: printf("You entered the number fifteen\n"); return 0;
		case 14: printf("You entered the number fourteen\n"); return 0;
		case 13: printf("You entered the number thirteen\n"); return 0;
		case 12: printf("You entered the number twelve\n"); return 0;
		case 11: printf("You entered the number eleven\n"); return 0;
	}
	
	printf("You entered the number ");

	switch (num / 10) {
		case 9: printf("ninety"); break;
		case 8: printf("eighty"); break;
		case 7: printf("seventy"); break;
		case 6: printf("sixty"); break;
		case 5: printf("fifty"); break;
		case 4: printf("forty"); break;
		case 3: printf("thirty"); break;
		case 2: printf("twenty"); break;
		case 1: printf("ten\n"); return 0;
	}

	switch (num % 10) {
		case 9: printf("-nine\n"); break;
		case 8: printf("-eight\n"); break;
		case 7: printf("-seven\n"); break;
		case 6: printf("-six\n"); break;
		case 5: printf("-five\n"); break;
		case 4: printf("-four\n"); break;
		case 3: printf("-three\n"); break;
		case 2: printf("-two\n"); break;
		case 1: printf("-one\n"); break;
		case 0: printf("\n"); break;
	}

	return 0;
}

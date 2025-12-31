/* Takes a given numerical grade and displays its letter equivalent */

#include <stdio.h>

int main(void)
{
	int num_grade;
	printf("Enter numerical grade: ");
	scanf("%d", &num_grade);

	if (num_grade > 100 || num_grade < 0) {
		printf("Invalid grade entered\n");
		return 1;
	} else if (num_grade == 100) {
		printf("Letter grade: A\n");
		return 0;
	} else if (num_grade == 0) {
		printf("Letter grade: F\n");
		return 0;
	}

	int first_digit = num_grade / 10;

	switch (first_digit) {
		case 9: printf("Letter grade: A\n"); break;
		case 8: printf("Letter grade: B\n"); break;
		case 7: printf("Letter grade: C\n"); break;
		case 6: printf("Letter grade: D\n"); break;
		case 5: /* Fall through */ 
		default: printf("Letter grade: F\n"); break;
	}

	return 0;
}

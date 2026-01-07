/* Takes a first and last name, displays the name formatted as lastName, firstNameInitial. */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	printf("Enter a first and last name: ");
	ch = getchar();

	char first_initial = 0;
	bool parse_first = true;

	while (ch != '\n') {
		if ((ch != ' ') && (first_initial == 0)) {
			first_initial = ch;
		} else if ((parse_first == true) && (first_initial != 0) && (ch == ' ')) {
			parse_first = false;
		} else if ((parse_first == false) && (first_initial != 0) && (ch != ' ')) {
			printf("%c", ch);
		}

		ch = getchar();
	}

	printf(", %c.\n", first_initial);

	return 0;
}

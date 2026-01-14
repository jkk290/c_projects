/* Takes a first and last name, displays the name formatted as lastName, firstNameInitial. */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char last_name[20] = {'\0'};
	char ch;
	printf("Enter a first and last name: ");
	ch = getchar();

	char first_initial = 0;
	bool parse_first = true;
	int i = 0;

	while (ch != '\n') {
		if ((ch != ' ') && (first_initial == 0)) {
			first_initial = ch;
		} else if ((parse_first == true) && (first_initial != 0) && (ch == ' ')) {
			parse_first = false;
		} else if ((parse_first == false) && (first_initial != 0) && (ch != ' ')) {
			last_name[i] = ch;
		}
		i++;
		ch = getchar();
	}

	printf("You entered the name: ");
	for (int j = 0; j < (sizeof(last_name) / sizeof(last_name[0])); j++) {
		if (last_name[j] != '\0') {
			printf("%c", last_name[j]);
		}
	}
	printf(", %c.\n", first_initial);

	return 0;
}

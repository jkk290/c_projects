/* Takes a given sentence and prints out the words in the sentence reversed*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	char a[50] = {'\0'};
	char term_char;

	printf("Enter a sentence: ");
	ch = getchar();
	
	int i = 0;
	while ((ch != '.') && (ch != '!') && (ch != '?')) {
		a[i] = ch;
		i++;
		ch = getchar();
	}
	term_char = ch;

	int letter_count = 0;
	bool word_found = false;
	
	for (int j = 49; j >= 0; j--) {
		if (a[j] == '\0') {
			continue;
		}

		if (j == 0) {
			for (int l = 0; a[l] != ' '; l++) {
				printf("%c", a[l]);
			}
			break;
		}

		if (!word_found) {
			if (a[j] == ' ') {
				word_found = true;
				letter_count++;
			} else {
				letter_count++;
			}
		} else if (word_found) {
			for (int k = 1; k <= letter_count; k++){
				printf("%c", a[j + 1 + k]);
				}
			printf(" ");
			letter_count = 0;
			word_found = false;
		}
	}

	printf("%c\n", term_char);

	return 0;
}

/* Tests if 2 given words are anagrams */

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define INT_CHAR_OFFSET 97

int main(void)
{
	int letters[26] = {0};
	char ch;

	printf("Enter first word: ");
	ch = getchar();

	while (ch != '\n') {
		if (isalpha(ch)) {
			letters[tolower(ch) - INT_CHAR_OFFSET] += 1;
		}
		
		ch = getchar();
	}

	printf("Enter second word: ");
	ch = getchar();

	while (ch != '\n') {
		if (isalpha(ch)) {
			letters[tolower(ch) - INT_CHAR_OFFSET] -= 1;
		}

		ch = getchar();
	}

	bool anagram = true;

	for (int i = 0; i < (int) (sizeof(letters) / sizeof(letters[0])); i++) {
		if (letters[i] != 0) {
			anagram = false;
			break;
		}
	}

	if (anagram) {
		printf("The words are anagrams.\n");
	} else {
		printf("The words are not anagrams.\n");
	}

	return 0;
}

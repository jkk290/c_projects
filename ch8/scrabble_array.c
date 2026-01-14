/* Takes a word and displays its value in the game Scrabble */
/* 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	const int scores[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 7, 4, 10};

	char ch, upper;
	int value = 0;

	printf("Enter a word: ");
	ch = getchar();

	while (ch != '\n') {
		upper = toupper(ch);

		value += scores[upper - 65];

		ch = getchar();

	}

	printf("Scrabble value: %d\n", value);

	return 0;
}

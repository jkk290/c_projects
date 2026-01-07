/* Takes a sentence and displays its average word length */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch, prev_ch;
	float word_count = 0.0f;
	float letter_count = 0.0f;

	printf("Enter a sentence: ");
	ch = getchar();
	if (ch != ' ') {
		word_count++;
	}

	while (ch != '\n') {
		if (ch != ' ') {
			letter_count++;
		}

		if ((prev_ch == ' ') && (ch != ' ')) {
			word_count++;
		}

		prev_ch = ch;
		ch = getchar();
	}

	printf("Average word length: %.1f\n", letter_count / word_count);

	return 0;
}

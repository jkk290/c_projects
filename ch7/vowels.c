/* Takes a center and diplays the count of vowels */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int vowel_count = 0;
	char ch;

	printf("Enter a sentence: ");
	ch = getchar();

	while (ch != '\n') {
		char upper = toupper(ch);
		
		switch (upper) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				vowel_count++;
				break;
		}

		ch = getchar();
	}

	printf("Your sentence contains %d vowels.\n", vowel_count);

	return 0;
}

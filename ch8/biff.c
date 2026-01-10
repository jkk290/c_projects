/* Takes a given sentence and displays it in B1FF-speak */
/* A > 4, B > 8, E > 3, I > 1, O > 0, S > 5.  Append 10 !'s */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int i = 0;
	char ch;
	char chs[64];
	printf("Enter message: ");
	ch = getchar();

	while (ch != '\n') {
		chs[i] = toupper(ch);
		i++;
		ch = getchar();
	}

	printf("In B1FF-speak: ");

	for (int j = 0; j <= i; j++) {
		switch (chs[j]) {
				case 'A':
					printf("4");
					break;
				case 'B':
					printf("8");
					break;
				case 'E':
					printf("3");
					break;
				case 'I':
					printf("1");
					break;
				case 'O':
					printf("0");
					break;
				case 'S':
					printf("5");
					break;
				default:
					printf("%c", chs[j]);
					break;
		}
	}

	printf("!!!!!!!!!!\n");

	return 0;
}

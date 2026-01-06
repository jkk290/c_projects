/* Translates an alphabetic phone number into numeric form */
/* 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PQRS, 8=TUV, 9=WXYZ */

#include <stdio.h>

int main(void)
{
	char ch;
	printf("Enter phone number: ");
	ch = getchar();

	while (ch != '\n') {
		switch (ch) {
			case 'a': case 'b': case 'c': case 'A': case 'B': case 'C':
				printf("%d", 2);
				break;
			case 'd': case 'e': case 'f': case 'D': case 'E': case 'F':
				printf("%d", 3);
				break;
			case 'g': case 'h': case 'i': case 'G': case 'H': case 'I':
				printf("%d", 4);
				break;
			case 'j': case 'k': case 'l': case 'J': case 'K': case 'L':
				printf("%d", 5);
				break;
			case 'm': case 'n': case 'o': case 'M': case 'N': case 'O':
				printf("%d", 6);
				break;
			case 'p': case 'q': case 'r': case 's': case 'P': case 'Q': case 'R': case 'S':
				printf("%d", 7);
				break;
			case 't': case 'u': case 'v': case 'T': case 'U': case 'V':
				printf("%d", 8);
				break;
			case 'w': case 'x': case 'y': case 'z': case 'W': case 'X': case 'Y': case 'Z':
				printf("%d", 9);
				break;
			default:
				printf("%c", ch);
		}
		ch = getchar();
	}

	printf("\n");

	return 0;
}

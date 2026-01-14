/* Translates an alphabetic phone number into numeric form */
/* 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PQRS, 8=TUV, 9=WXYZ */

#include <stdio.h>

int main(void)
{
	char number[15];
	char ch;
	printf("Enter phone number: ");
	ch = getchar();

	int i = 0;
	char converted;

	while (ch != '\n') {
		switch (ch) {
			case 'a': case 'b': case 'c': case 'A': case 'B': case 'C':
				converted = '2';
				break;
			case 'd': case 'e': case 'f': case 'D': case 'E': case 'F':
				converted = '3';
				break;
			case 'g': case 'h': case 'i': case 'G': case 'H': case 'I':
				converted = '4';
				break;
			case 'j': case 'k': case 'l': case 'J': case 'K': case 'L':
				converted = '5';
				break;
			case 'm': case 'n': case 'o': case 'M': case 'N': case 'O':
				converted = '6';
				break;
			case 'p': case 'q': case 'r': case 's': case 'P': case 'Q': case 'R': case 'S':
				converted = '7';
				break;
			case 't': case 'u': case 'v': case 'T': case 'U': case 'V':
				converted = '8';
				break;
			case 'w': case 'x': case 'y': case 'z': case 'W': case 'X': case 'Y': case 'Z':
				converted = '9';
				break;
			default:
				converted = ch;
		}
		
		number[i] = converted;
		i++;
		ch = getchar();
	}

	printf("In numeric form: ");
	for (int j = 0; j < (int) (sizeof(number) / sizeof(number[0])); j++) {
		printf("%c", number[j]);
	}

	printf("\n");

	return 0;
}

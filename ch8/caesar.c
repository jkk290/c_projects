/* Encrypts a given message using a Caesar cipher */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	char msg[80] = {'\0'};

	printf("Enter message to be encrypted: ");
	ch = getchar();

	int i = 0;
	while (ch != '\n') {
		msg[i] = ch;
		i++;
		ch = getchar();
	}

	int n;
	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);

	char encrypted[i];
	int j = 0;

	while (j < i) {
		if ((msg[j] >= 'A') && (msg[j] <= 'Z')) {
			encrypted[j] = ((msg[j] - 'A') + n) % 26 + 'A';
			j++;
		} else if ((msg[j] >= 'a') && (msg[j] <= 'z')) {
			encrypted[j] = ((msg[j] - 'a') + n) % 26 + 'a';
			j++;
		} else {
			encrypted[j] = msg[j];
			j++;
		}
	}

	printf("Encrypted message: ");
	for (int k = 0; k < (int) (sizeof(encrypted) / sizeof(encrypted[0])); k++) {
		printf("%c", encrypted[k]);
	}
	printf("\n");

	return 0;
}

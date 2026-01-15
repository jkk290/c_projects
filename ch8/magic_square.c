/* Creates a magic square of a specific size */

#include <stdio.h>

int main(void)
{
	int n;
	
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	int magic_square[n][n];
	int row, col, prev_row, prev_col;
	int count = 1;

	/* Starting at middle of row 0 */
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((i == 0) && (j == n / 2)) {
				magic_square[i][j] = count;
			} else {
				magic_square[i][j] = 0;
			}
		}
	}
	row = 0;
	col = n / 2;
	count++;

	while (count <= (n * n)) {
		prev_row = row;
		prev_col = col;

		if (row - 1 < 0) {
			row = n - 1;
		} else {
			row -= 1;
		}

		if (col + 1 > (n - 1)) {
			col = 0;
		} else {
			col += 1;
		}
		
		if (magic_square[row][col] != 0) {
			if ((prev_row + 1) > (n - 1)) {
				row = 0;
			} else {
				row = prev_row + 1;
				col = prev_col;
			}
		}
		
		magic_square[row][col] = count;
		count++;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf(" %5d ", magic_square[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");

	return 0;
}

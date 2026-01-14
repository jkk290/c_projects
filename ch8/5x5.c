/* Reads a 5x5 array of ints and prints the row sums and column sums */

#include <stdio.h>

int main(void)
{
	int a[5][5];
	int row;

	for (row = 0; row < 5; row++) {
		printf("Enter row %d: ", row + 1);
		scanf("%d %d %d %d %d", &a[row][0],&a[row][1], &a[row][2], &a[row][3], &a[row][4]);
	}

	int row_totals, col_totals;

	printf("\nRow totals: ");

	for (int i = 0; i < 5; i++) {
		row_totals = 0;
		for (int j = 0; j < 5; j++) {
			row_totals += a[i][j];					
		}
		printf("%d ", row_totals);
	}
	printf("\n");

	printf("Column totals: ");
	for (int i = 0; i < 5; i++) {
		col_totals = 0;
		for (int j = 0; j < 5; j++) {
			col_totals += a[j][i];
		}
		printf("%d ", col_totals);
	}
	printf("\n");

	return 0;
}

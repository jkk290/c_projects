/* Randomly walks through a 10x10 array, taking steps A to Z until unable to move up, right, left, 
 * or down; never revisiting an element */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char a[10][10] = {{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
					  {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
					  {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
					  {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
					  {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
					  {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
					  {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
					  {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, 
					  {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
					  {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}}; 
	int move;
	/* 0 = up
	 * 1 = down
	 * 2 = left
	 * 3 = right */
	int pos_x = 0;
	int pos_y = 0;
	
	srand((unsigned) time(NULL));
	
	char step = 'A';
	int attempts = 0;
	a[pos_y][pos_x] = 'A';

	while (step < 'Z') {
		move = rand() % 4;
		/* 0 = up
		 * 1 = down
		 * 2 = left
		 * 3 = right */
		if (attempts > 50) {
			break;
		}

		if ((move == 0) && (pos_y - 1 >= 0) && a[pos_y - 1][pos_x] == '.') {
			pos_y -= 1;
			step++;
			a[pos_y][pos_x] = step;
		} else if ((move == 1) && (pos_y + 1 <= 9) && a[pos_y + 1][pos_x] == '.') {
			pos_y += 1;
			step++;
			a[pos_y][pos_x] = step;
		} else if ((move == 2) && (pos_x - 1 >= 0) && a[pos_y][pos_x - 1] == '.') {
			pos_x -= 1;
			step++;
			a[pos_y][pos_x] = step;
		} else if ((move == 3) && (pos_x + 1 <= 9) && a[pos_y][pos_x + 1] == '.') {
			pos_x += 1;
			step++;
			a[pos_y][pos_x] = step;
		} else {
			attempts++;
		}
	}			

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

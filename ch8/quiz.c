/* Takes 5 given quiz grades for each 5 students, then computes the total score and average score 
 * for each student, and the average score, high score, and low score for each quiz */

#include <stdio.h>

int main(void)
{
	int a[5][5];
	int student;

	for (student = 0; student < 5; student++) {
		printf("Enter student %d: ", student + 1);
		scanf("%d %d %d %d %d", &a[student][0],&a[student][1], &a[student][2], &a[student][3], &a[student][4]);
	}

	int student_totals, col_totals;
	int high_score = 0;
	int low_score = 100;
	int total_scores = 0;
	float avg_score;


	for (int i = 0; i < 5; i++) {
		student_totals = 0;
		for (int j = 0; j < 5; j++) {
			total_scores += a[i][j];
			student_totals += a[i][j];					
			if (a[i][j] > high_score) {
				high_score = a[i][j];
			}

			if (a[i][j] < low_score) {
				low_score = a[i][j];
			}
		}
		printf("\nStudent %d total score: %d\n", i + 1, student_totals);
		float avg = 0.0f;
		avg = (float) student_totals / 5.0f;
		printf("Student %d average score: %.1f\n", i + 1, avg); 
	}

	printf("Highest score: %d\n", high_score);
	printf("Lowest score: %d\n", low_score);
	avg_score = (float) total_scores / 25.0f;
	printf("Average score: %.1f\n", avg_score);
	printf("\n");

	return 0;
}

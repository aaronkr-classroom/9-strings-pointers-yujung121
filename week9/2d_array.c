// 2d_array.c
#include <stdio.h>

#define STU_NUM 3
#define GARDES 4

int main(void) {
	int grades[STU_NUM][GARDES] = {
		{85, 45, 70, 93}, // 학생1
		{74, 86, 93, 45}, // 학생2
		{67, 37, 99, 97}  // 학생3
	};

	// 각 학생의 성적 출력
	printf("Student grades:\n");
	for (int i = 0; i < STU_NUM; i++) { // 학생의 개수
		printf("STudent %d: ", i + 1);
		for (int j = 0; j < GARDES; j++) { // 성적의 개수
			printf("%d ", grades[i][j]); // grade[학생][성적]
		}
		printf("\n");
	}

	// 학생의 평균 성적 출력
	printf("\nEach Student's Average:\n");
	for (int i = 0; i < STU_NUM; i++) {
		int sum = 0;
		for (int j = 0; j < GARDES; j++) {
			sum += grades[i][j];
		}
		float average = sum / (float)GARDES;
		printf("Student %d: %.2f\n", i+1, average);
	}

	getch();
	return 0;
}
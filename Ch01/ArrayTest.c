#include <stdio.h>

int main(void) {
	int a[4][5] = { {1, 3, 5, 7, 9},
				{11, 13, 15, 17, 19},
				{21, 23, 25, 27, 29},
				{31, 33, 35, 37, 39} };
	int i, j, b[4][5];
	char h[5], n[11];

	printf("학번: "); gets_s(h, 5);
	printf("이름: "); gets_s(n, 10);

	for (i = 1; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			b[j][i] = a[i][j];
		}
	}
	for (i = 1; i < 4; i++) {
		for (j = 1; j < 6; j++) {
			printf(" % 5d", b[4][i]);
		}
		printf("\n");
	}
	printf("\n학번: % s\n이름: % s\n", h, n);

	return 0;
}
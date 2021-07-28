// 50. Calculate the Sum & Difference of the Matrices

#include <stdio.h>

int main() {
	int r, c;
	printf("ROW COL: ");
	scanf("%d %d", &r, &c);

	int a[r][c], b[r][c];
	printf("MATRIX 1:\n");
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) 
			scanf("%d", &a[i][j]);

	printf("MATRIX 2:\n");
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) 
			scanf("%d", &b[i][j]);

	int sum[r][c], diff[r][c];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			sum[i][j] = a[i][j] + b[i][j];
			diff[i][j] = a[i][j] - b[i][j];
		}
	}

	printf("SUM:\n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) 
			printf("%d ", sum[i][j]);
		printf("\n");
	}

	printf("DIFF:\n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) 
			printf("%d ", diff[i][j]);
		printf("\n");
	}
}
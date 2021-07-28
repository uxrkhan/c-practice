// 49. Compute the Product of Two Matrices

#include <stdio.h>

int main() {
	int r1, c1;
	printf("ROW1 COL1: ");
	scanf("%d %d", &r1, &c1);

	int a[r1][c1];
	printf("MATRIX 1:\n");
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++) 
			scanf("%d", &a[i][j]);

	int r2, c2;
	printf("ROW2 COL2: ");
	scanf("%d %d", &r2, &c2);

	int b[r2][c2];
	printf("MATRIX 2:\n");
	for (int i = 0; i < r2; i++)
		for (int j = 0; j < c2; j++) 
			scanf("%d", &b[i][j]);

	if (c1 != r2) {
		printf("Cannot multiply matrices!");
		return 0;
	}
	
	int prod[r1][c2];
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) {
			prod[i][j] = 0;
			for (int k = 0; k < c1; k++) {
				prod[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	printf("PRODUCT MATRIX:\n");
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) 
			printf("%d ", prod[i][j]);
		printf("\n");
	}

}
// 51. Perform Matrix Multiplication using Recursion

#include<stdio.h>

int r1, r2, c1, c2;

void matrixProdRecursive(int a[r1][c1], int b[r2][c2], int prod[r1][c2]) {
	static int i = 0, j = 0, k = 0;
	if (i >= r1) 
		return;

	if (j < c2) {
		if (k < c1) {
			prod[i][j] += a[i][k] * b[k][j];
			k++;
			matrixProdRecursive(a, b, prod);
		}
		k = 0;
		j++;
		matrixProdRecursive(a, b, prod);
	}
	j = 0;
	i++;
	matrixProdRecursive(a, b, prod);
}


int main() {
	printf("ROW1 COL1: ");
	scanf("%d %d", &r1, &c1);

	int a[r1][c1];
	printf("MATRIX 1:\n");
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c1; j++) 
			scanf("%d", &a[i][j]);

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
	for (int i = 0; i < r1; i++)
		for (int j = 0; j < c2; j++) 
			prod[i][j] = 0;
	matrixProdRecursive(a, b, prod);
	
	printf("PRODUCT MATRIX:\n");
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c2; j++) 
			printf("%d ", prod[i][j]);
		printf("\n");
	}

}
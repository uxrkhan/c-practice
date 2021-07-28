// 61. do the Sum of the Main & Opposite Diagonal Elements of a MxN Matrix

#include <stdio.h>

int main() {
	int r, c;
	printf("ROW COL: ");
	scanf("%d %d", &r, &c);

	printf("MATRIX:\n");
	int a[r][c];
	for (int i = 0; i < r; i++) 
		for (int j = 0; j < c; j++)
			scanf("%d", &a[i][j]);

	int sum_diag_main = 0, sum_diag_opp = 0;
	for (int i = 0; i < r && i < c; i++) {
		sum_diag_main += a[i][i];
	}
	for (int i = 0; i < r && i < c; i++) {
		sum_diag_opp += a[i][c - i - 1];
	}
	printf("SUM OF DIAGONALS: %d", sum_diag_main + sum_diag_opp);
}
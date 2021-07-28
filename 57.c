// 57. Calculate the Sum of the Elements of each Row & Column

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

	for (int i = 0; i < r; i++) {
		int rowSum = 0;	
		for (int j = 0; j < c; j++) {
			rowSum += a[i][j];
		}
		printf("ROW %d SUM: %d\n", i + 1, rowSum);
	}

	for (int j = 0; j < c; j++) {
		int colSum = 0;
		for (int i = 0; i < r; i++) {
			colSum += a[i][j];
		}
		printf("COL %d SUM: %d\n", j + 1, colSum);
	}
	
}
// 54. Determine if a given Matrix is a Sparse Matrix

#include <stdio.h>

int r, c;

int isSparse(int a[r][c]) {
	int zeros = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (a[i][j] == 0)
				zeros++;
			if (zeros > r * c / 2)
				return 1;
		}
	}
	return 0;
}

int main() {
	printf("ROW COL: ");
	scanf("%d %d", &r, &c);

	int a[r][c];
	printf("MATRIX:\n");
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) 
			scanf("%d", &a[i][j]);

	isSparse(a) ?
		printf("SPARSE MATRIX!") :
		printf("NOT A SPARSE MATRIX!");
}
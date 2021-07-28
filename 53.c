// 53. Check if a given Matrix is an Identity Matrix

#include <stdio.h>

int r, c;

int isIdentity(int a[r][c]) {
	if (r != c) 
		return 0;	

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (i == j && a[i][j] != 1)
				return 1;
			if (i != j && a[i][j] != 0) 
				return 0;
		}
	}

	return 1;
}

int main() {
	printf("ROW COL: ");
	scanf("%d %d", &r, &c);

	int a[r][c];
	printf("MATRIX:\n");
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) 
			scanf("%d", &a[i][j]);

	isIdentity(a) ? printf("IDENTITY MATRIX!") : printf("NOT AN IDENTITY MATRIX!");
}
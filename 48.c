// 48. Find the Transpose of a given Matrix

#include <stdio.h>

int main() {
	int r, c;
	printf("ROW COL: ");
	scanf("%d %d", &r, &c);

	int a[r][c];
	printf("MATRIX :\n");
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) 
			scanf("%d", &a[i][j]);

	int transp[c][r];
	for (int i = 0; i < c; i++) 
		for (int j = 0; j < r; j++)
			transp[i][j] = a[j][i];

	printf("TRANSPOSE:\n");
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) 
			printf("%d ", transp[i][j]);
		printf("\n");
	}

}
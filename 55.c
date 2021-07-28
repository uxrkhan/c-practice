// 55. Interchange any two Rows & Columns in the given Matrix

#include <stdio.h>

int r, c;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


void swapRowCol(int a[r][c], int r1, int r2, int c1, int c2) {
	for (int j = 0; j < c; j++) {
		// swap a[r1][j] and a[r2][j]
		swap(&a[r1][j], &a[r2][j]);
	}

	printf("AFTER SWAPPING TWO ROWS:\n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) 
			printf("%d ", a[i][j]);
		printf("\n");
	}

	for (int i = 0; i < r; i++) {
		swap(&a[i][c1], &a[i][c2]);
	}

	printf("AFTER SWAPPING TWO COLS:\n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) 
			printf("%d ", a[i][j]);
		printf("\n");
	}

} 

int main() {

	printf("ROW, COL: ");
	scanf("%d %d", &r, &c);

	int a[r][c];
	printf("MATRIX:\n");
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) 
			scanf("%d", &a[i][j]);

	int r1, r2, c1, c2;
	printf("2 ROWS TO SWAP: ");
	scanf("%d %d", &r1, &r2);
	printf("2 COLS TO SWAP: ");
	scanf("%d %d", &c1, &c2);

	swapRowCol(a, r1, r2, c1, c2);
}

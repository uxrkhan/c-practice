// 59. Accept a Matrix of Order MxN & Interchange the Diagonals

#include <stdio.h>

int r, c;

void swapDiagonals(int arr[r][c]) {
	for (int i = 0; i < r && i < c; i++) {
		int temp = arr[i][i];
		arr[i][i] = arr[i][c-1-i];
		arr[i][c-1-i] = temp;
	}
}

int main() {
	printf("ROW COL: ");
	scanf("%d %d", &r, &c);

	printf("MATRIX:\n");
	int a[r][c];
	for (int i = 0; i < r; i++) 
		for (int j = 0; j < c; j++)
			scanf("%d", &a[i][j]);

	swapDiagonals(a);

	printf("SWAPPED DIAGONALS:\n");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

}

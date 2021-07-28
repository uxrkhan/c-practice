// 64. Display Lower Triangular Matrix

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	printf("MATRIX:\n");
	int a[n][n];
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);

	printf("LOWER TRIANGULAR MATRIX:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i >= j) 
				printf("%d ", a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
}
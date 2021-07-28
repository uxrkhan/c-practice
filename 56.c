// 56. Sort Rows of the Matrix in Ascending & Columns in Descendng Order

#include <stdio.h>
#include <stdlib.h>

int n;

int asc(const void * a, const void * b) {
	return *(int *)a - *(int *)b;
}

int des(const void * a, const void * b) {
	return *(int *)b - *(int *)a;
}

void transpose(int a[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			int temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
}


void sortRowCol(int a[n][n]) {
	for (int i = 0; i < n; i++)
		qsort(a[i], n, sizeof(int), asc);

	transpose(a);
	
	for (int i = 0; i < n; i++) 
		qsort(a[i], n, sizeof(int), des);
	
	transpose(a);
}

int main() {
	printf("SIZE: ");
	scanf("%d", &n);
	printf("MATRIX:\n");

	int a[n][n];
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	sortRowCol(a);
	printf("AFTER SORTING:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}	
}
// 4. Compute the Sum of two One-Dimensional Arrays using Malloc

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m;
	printf("SIZE 1: ");
	scanf("%d", &n);

	int *arr1 = (int *)malloc(sizeof(int) * n);
	printf("ARRAY 1: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);

	printf("SIZE 2: ");
	scanf("%d", &m);

	int *arr2 = (int *)malloc(sizeof(int) * m);
	printf("ARRAY 2: ");
	for (int i = 0; i < m; i++)
		scanf("%d", &arr2[i]);

	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += arr1[i];
	}
	for(int i = 0; i < m; i++) {
		sum += arr2[i];
	}

	printf("SUM: %d", sum);
}
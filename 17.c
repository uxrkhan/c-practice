// 17. Merge the Elements of 2 Sorted Array

#include <stdio.h>
#include <stdlib.h>

int *merge(int* arr1, int* arr2, int n, int m) {
	int *merged = (int *)malloc(sizeof(int)*(n + m));
	if (merged == NULL) {
		printf("Memory could not be allocated!\n");
	}
	int i = 0, j = 0, k = 0;
	while (i < n && j < m) {
		if (arr1[i] < arr2[j]) {
			merged[k++] = arr1[i++];
		} else {
			merged[k++] = arr2[j++];
		}
	}
	while (i < n) {
		merged[k++] = arr1[i++];
	}
	while (j < m) {
		merged[k++] = arr2[j++];
	}
	return merged;
}

int main() {
	int n;
	printf("SIZE 1: ");
	scanf("%d", &n);

	int arr1[n];
	printf("SORTED ARRAY 1: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	
	int m;
	printf("SIZE 2: ");
	scanf("%d", &m);

	int arr2[m];
	printf("SORTED ARRAY 2: ");
	for (int i = 0; i < m; i++)
		scanf("%d", &arr2[i]);

	int *merged = merge(arr1, arr2, n, m);
	for (int i = 0; i < n+m; i++) {
		printf("%d ", merged[i]);
	}
}
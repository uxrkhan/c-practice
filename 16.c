// 16. Merge and Sort Elements of 2 different Arrays

#include <stdio.h>
#include <malloc.h>

void sort(int *arr, int n) {
	for (int i = 0; i < n-1; i++) {
		int pos = i;
		for (int j = i; j < n; j++) {
			if (arr[pos] > arr[j]) {
				pos = j;
			}
		}
		int temp = arr[pos];
		arr[pos] = arr[i];
		arr[i] = temp;
	}
}

int *merge(int *arr1, int *arr2, int n, int m) {
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
	int n, m;
	printf("SIZE 1: ");
	scanf("%d", &n);

	int arr1[n];
	printf("ARRAY 1: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);

	printf("SIZE 2: ");
	scanf("%d", &m);

	int arr2[m];
	printf("ARRAY 2: ");
	for (int i = 0; i < m; i++)
		scanf("%d", &arr2[i]);

	sort(arr1, n);
	sort(arr2, m);

	int *merged = merge(arr1, arr2, n, m);
	printf("\nSORTED AND MERGED ARRAY: ");
	for (int i = 0; i < n+m; i++) 
		printf("%d ", merged[i]);
	
}
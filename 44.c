// 44. Find Union & Intersection of 2 Arrays

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define min(a,b) (a < b ? a : b)

int compare(const void* a, const void* b) {
	return *(int *)a - *(int *)b; 
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

	int un[n+m], in[min(n,m)];
	int p = 0, q = 0;
	// if (n < m) 
	// 	qsort(arr1, n, sizeof(int), compare);
	// else
	// 	qsort(arr2, m, sizeof(int), compare);
	qsort(arr1, n, sizeof(int), compare);
	qsort(arr2, m, sizeof(int), compare);


	// intersection
	int i = 0, j = 0;
	while (i < n && j < m) {
		if (arr1[i] < arr2[j]) {
			i++;
		} else if (arr1[i] > arr2[j]) {
			j++;
		} else {
			in[p++] = arr1[i];
			i++;
			j++; 
		}
	}
	printf("INTERSECTION: ");
	for (i = 0; i < p; i++) {
		printf("%d ", in[i]);
	}

	// union
	i = 0, j = 0;
	while (i < n && j < m) {
		if (arr1[i] < arr2[j]) {
			un[q++] = arr1[i++];

		} else if (arr2[i] > arr2[j]) {
			un[q++] = arr2[j++];
		} else {
			un[q++] = arr1[i];
			i++;
			j++;
		}
	}
	while (i < n) {
		un[q++] = arr1[i++];
	}
	while (j < m) {
		un[q++] = arr2[j++];
	}
	printf("\nUNION: ");
	for (i = 0; i < q; i++) {
		printf("%d ", un[i]);
	}
}
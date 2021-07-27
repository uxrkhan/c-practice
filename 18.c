// 18. Sort N Numbers in Ascending Order using Bubble Sort

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	// sorting
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-1; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	printf("SORTED ARRAY: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

} 
// 14. Sort the Array in Descending Order

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
		int pos = i;
		for (int j = i; j < n; j++) {
			if (arr[j] > arr[pos]) {
				pos = j;
			}
		}
		int temp = arr[pos];
		arr[pos] = arr[i];
		arr[i] = temp;
	}

	printf("SORTED ARRAY: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}
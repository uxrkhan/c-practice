// 6. Find the Largest Two Numbers in a given Array

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int firstIndex = 0, secondIndex = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > arr[firstIndex]) {
			secondIndex = firstIndex;
			firstIndex = i;
		}
		if (arr[secondIndex] < arr[i] && arr[i] < arr[firstIndex]) {
			secondIndex = i;
		}
	}

	printf("LARGEST TWO: %d %d", arr[firstIndex], arr[secondIndex]);
}
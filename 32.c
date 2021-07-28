// 32. Print the Alternate Elements in an Array

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("ALTERNATE: ");
	for (int i = 0; i < n; i += 2) {
		printf("%d ", arr[i]);
	}

}
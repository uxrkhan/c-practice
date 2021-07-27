// 3. Calculate Sum of all Elements of an Array using Pointers as Arguments

#include <stdio.h>

int sumUsingPointers(int *ptr, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += *(ptr + i);
	}
	return sum;
}

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++) {
		scanf("%d,", &arr[i]);
	}

	int sum = sumUsingPointers(arr, n);
	printf("SUM: %d", sum);
}
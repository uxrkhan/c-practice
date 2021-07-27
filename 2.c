// 2. Calculate the Sum of the Array Elements using Pointer

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++) {
		scanf("%d,", &arr[i]);
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += *(arr + i);
	}
	printf("SUM: %d\n", sum);
}

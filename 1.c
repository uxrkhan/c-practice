// 1. Calculate Sum & Average of an Array

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
		sum += arr[i];
	}
	printf("SUM: %d\n", sum);

	float average = sum / (float)n;
	printf("AVERAGE: %.2f", average);
}

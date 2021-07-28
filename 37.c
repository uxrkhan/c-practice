// 37. Segregate 0s on Left Side & 1s on right side of the Array

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int n_zeros = 0, n_ones = 1; 
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0)
			n_zeros++;
		else
			n_ones++;
	}

	for (int i = 0; i < n_zeros; i++) {
		arr[i] = 0;
	}
	for (int i = n_zeros; i < n_ones + n_zeros; i++) {
		arr[i] = 1;
	}

	printf("SEGREGATED ARRAY: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
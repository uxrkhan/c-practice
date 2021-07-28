// 33. Find the Odd Element given an Array with only two Different Element

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

	int xor = arr[0];
	for (int i = 1; i < n; i++) {
		xor = xor ^ arr[i];
	}

	printf("ODD: %d", xor);
}
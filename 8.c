// 8. Find the Largest Number in an Array

#include <stdio.h> 

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int maxIndex = 0;
	for (int i = 0; i < n; i++) {
		if (arr[maxIndex] < arr[i]) {
			maxIndex = i;
		}
	}

	printf("LARGEST: %d", arr[maxIndex]);
}
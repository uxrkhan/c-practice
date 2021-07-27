// 12. Cyclically Permute the Elements of an Array

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int first = arr[0];
	for (int i = 0; i < n-1; i++) {
		arr[i] = arr[i+1];
	}
	arr[n-1] = first;

	printf("NEW ARR: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}
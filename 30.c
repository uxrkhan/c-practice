// 30. Find the Number of Elements in an Array

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	unsigned int num = sizeof(arr) / sizeof(int);
	printf("NUMBER OF ELEMENTS: %d", num);
}
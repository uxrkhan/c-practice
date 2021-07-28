// 29. Print the kth Element in the Array

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int k;
	printf("K: ");
	scanf("%d", &k);

	printf("Kth ELEMENT: %d", arr[k-1]);
}
// 34. Increment Every Element of the Array by One & Print Incremented Array

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

	printf("INCREMENTED: ");
	for (int i = 0; i < n; i++) {
		arr[i]++;
		printf("%d ", arr[i]);
	}
}
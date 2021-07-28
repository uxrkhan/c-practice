// 40. Input an Array, Store the Squares of these Elements in an Array & Print it

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int squared[n];
	printf("SQUARED: ");
	for (int i = 0; i < n; i++) {
		squared[i] = arr[i] * arr[i];
		printf("%d ", squared[i]);
	}
}
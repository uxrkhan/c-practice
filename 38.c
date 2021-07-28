// 38. Find 2 Elements in the Array such that Difference between them is Largest

#include <stdio.h>
#include <limits.h>

#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int largest = INT_MIN, smallest = INT_MAX;
	for (int i = 0; i < n; i++) {
		largest = max(largest, arr[i]);
		smallest = min(smallest, arr[i]);
	}

	printf("RESULT: %d %d", smallest, largest);
}
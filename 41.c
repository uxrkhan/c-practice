// 41. Find the two Elements such that their Sum is Closest to Zero

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define min(a, b) (a < b ? a : b)

int compare(const void* a, const void* b) {
	int int_a = *((int *) a);
	int int_b = *((int *) b);

	if (int_a == int_b) return 0;
	else if (int_a < int_b) return -1;
	else return 1;
}

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	// algo
	qsort(arr, n, sizeof(int), compare);

	int left = 0, right = n - 1, min_sum = INT_MAX;
	while (left < right - 1) {
		if (arr[left] + arr[right] == 0) {
			break;
		}
		if (abs(arr[left+1] + arr[right]) < abs(arr[left] + arr[right-1])) {
			min_sum = min(min_sum, abs(arr[left+1] + arr[right]));
			left++;
		} else {
			min_sum = min(min_sum, abs(arr[left] + arr[right-1]));
			right--;
		}
	}

	printf("RESULT: %d %d", arr[left], arr[right]);
}
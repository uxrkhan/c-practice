// 23. find the Biggest Number in an Array of Numbers using Recursion

#include <stdio.h>

int getLargest(int arr[], int n, int maxSoFar) {
	if (n == 0)
		return maxSoFar;
	if (maxSoFar < arr[n-1])
		maxSoFar = arr[n-1];
	return getLargest(arr, n-1, maxSoFar);
}

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++) {
		scanf("%d,", &arr[i]);
	}

	int largest = getLargest(arr, n, arr[n-1]);
	printf("LARGEST: %d", largest);

}
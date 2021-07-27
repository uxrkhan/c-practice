// 22. accept Sorted Array and do Search using Binary Search

#include <stdio.h>

int binSearch(int arr[], int n, int key) {
	int low = 0, high = n-1, mid;
	while (low < high) {
		mid = (low + high) / 2;
		if (key == arr[mid]) {
			return mid;
		} else if (key < arr[mid]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return -1;
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

	int key;
	printf("KEY: ");
	scanf("%d", &key);

	int pos = binSearch(arr, n, key);
	if (pos < 0) 
		printf("ERROR: Could not find the key!");
	else 
		printf("INDEX: %d", pos);

}
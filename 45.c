// 45. Find Ceiling & Floor of X given a Sorted Array & a value X

#include <stdio.h>

int getCeil(int arr[], int n, int key) {
	int low = 0, high = n-1, mid;
	while (low != high) {
		mid = (low + high) / 2;	
		if (arr[mid] < key) {
			low = mid + 1;
		} else if (key < arr[mid]) {
			high = mid - 1;
		}
	}
}

int getFloor(int arr[], int n, int key) {

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

	int low = 0, high = n-1, mid;
	while (low != high) {
		mid = (low + high) / 2;	
		if (arr[mid] < key) {
			low = mid + 1;
		} else if (key < arr[mid]) {
			high = mid - 1;
		}
	}
	int ceil, floor;
	if (arr[low] > key) {
		ceil = arr[low - 1];
		floor = arr[low];
	} else {
		ceil = arr[low];
		floor = arr[low + 1];
	}
	printf("CEIL: %d\nFLOOR: %d", ceil, floor);
} 
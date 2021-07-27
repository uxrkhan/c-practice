// 21. Read an Array and Search for an Element

#include <stdio.h>

int search(int arr[], int n, int key) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == key) 
			return i;
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

	int pos = search(arr, n, key);
	if (pos < 0) 
		printf("ERROR: Could not find the key!");
	else 
		printf("INDEX: %d", pos);

}
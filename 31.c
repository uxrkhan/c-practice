// 31. Check Array bounds while Inputing Elements into the Array

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n], max_index = 0, min_index = 0;
	printf("ARRAY: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > arr[max_index]) max_index = i;
		if (arr[i] < arr[min_index]) min_index = i;
	}

	printf("MIN: %d, MAX: %d", arr[min_index], arr[max_index]);

}
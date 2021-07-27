// 19. Split an Array from Specified Position & Add First Part to the End

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++) {
		scanf("%d,", &arr[i]);
	}

	int pos;
	printf("POS: ");
	scanf("%d", &pos);

	for (int i = 0; i < pos; i++) {
		int first = arr[0];
		for (int j = 0; j < n; j++) {
			arr[j] = arr[j+1];
		}
		arr[n-1] = first;
	}

	printf("SPLIT AND SWAPPED ARRAY: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

// 20. Accept an Array & Swap Elements using Pointers

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

	int pos1, pos2;
	printf("POS 1: ");
	scanf("%d", &pos1);
	printf("POS 2: ");
	scanf("%d", &pos2);

	int tempPtr = *(arr + pos1);
	*(arr + pos1) = *(arr + pos2);
	*(arr + pos2) = tempPtr;

	printf("SWAPPED ARRAY: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

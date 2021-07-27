// 10. Insert an Element in a Specified Position in a given Array

#include <stdio.h>

#define MAX_SIZE 10000

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[MAX_SIZE];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int num, pos;
	printf("NUM: ");
	scanf("%d", &num);
	printf("POS: ");
	scanf("%d", &pos);

	for (int i = n; i >= pos; i--) {
		arr[i+1] = arr[i];
	}
	arr[pos] = num;
	n++;

	printf("NEW ARR: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

}
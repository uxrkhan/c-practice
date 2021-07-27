// 11. Delete the Specified Integer from an Array

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int num;
	printf("NUM: ");
	scanf("%d", &num);

	int pos;
	int found = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == num) {
			pos = i;
			found = 1;
			break;
		}
	}
	if (!found) {
		printf("Cannot find the number!");
		return 0;
	}

	for (int i = pos; i < n-1; i++) {
		arr[i] = arr[i+1];
	}
	n--;

	printf("NEW ARR: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

}
// 9. Put Even & Odd Elements of an Array in 2 Separate Arrays

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int nOdd = 0, nEven = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2)
			nOdd++;
	}
	nEven = n - nOdd;

	int odd[nOdd], even[nEven];
	int j = 0, k = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2) {
			odd[j++] = arr[i];
		} else {
			even[k++] = arr[i];
		}
	}

	printf("EVEN: ");
	for (int i = 0; i < nEven; i++)
		printf("%d ", even[i]);
	printf("\nODD: ");
	for (int i = 0; i < nOdd; i++)
		printf("%d ", odd[i]);

}
// 27. Print the Number of Odd & Even Numbers in an Array

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

	printf("EVEN: %d\n", nEven);
	printf("ODD: %d", nOdd);
}
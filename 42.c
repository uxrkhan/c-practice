// 42. Find if a given Integer X appears more than N/2 times in a Sorted Array of N Integers

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int key;
	printf("KEY: ");
	scanf("%d", &key);

	int mid;
	if (n % 2) 
		mid = (n + 1) / 2;
	else
		mid = n / 2;

	int found = 0;
	for (int i = 0; i < mid; i++) {
		if (arr[i] == key && arr[i + n / 2] == key) {
			found = 1;
			printf("%d occurs more than N/2 times!", key);
			break;
		}
	} 
	if (!found)
		printf("%d does not occur more than N/2 times!", key);
}

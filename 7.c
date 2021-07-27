// 7. Find the Second Largest & Smallest Elements in an Array

#include <stdio.h>
#include <limits.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int min = INT_MAX, secondMin = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if (min < arr[i] && arr[i] < secondMin) {
            secondMin = arr[i];
        }
    }

    printf("SMALLEST TWO: %d %d", min, secondMin);
}
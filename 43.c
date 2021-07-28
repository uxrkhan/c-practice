// 43. Find the Median of the Elements after Merging these 2 Sorted Arrays with Same Size

#include <stdio.h>

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr1[n];
	printf("ARRAY 1: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);

	int arr2[n];
	printf("ARRAY 2: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr2[i]);

	// merge
	int i = 0, j = 0, med1, med2, count = 0;
	while (count <= n) {
		if (i == n) {
			med1 = med2;
			med2 = arr2[0];
			break;
		} else if (j == n) {
			med1 = med2;
			med2 = arr1[0];
			break;
		} 
		if (arr1[i] <= arr2[j]) {
			med1 = med2;
			med2 = arr1[i++];
		} else {
			med1 = med2;
			med2 = arr2[j++];
		}
		count++;
	}
	printf("MEDIAN: %d", (med1 + med2) / 2);

}
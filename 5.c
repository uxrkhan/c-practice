// 5. Find the Sum of Contiguous Subarray within a 1 – D Array of Numbers which has the Largest Sum

#include <stdio.h>
#include <limits.h>

#define max(a, b) (a > b ? a : b)

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int maxSum = INT_MIN, currSum = 0;
	for (int i = 0; i < n; i++) {
		currSum += arr[i];
		if (maxSum < currSum) 
			maxSum = currSum;
		if (currSum < 0) 
			currSum = 0;
	} 

	printf("RESULT: %d", maxSum);
}
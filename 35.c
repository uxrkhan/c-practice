// 35. Find the Number of Non Repeated Elements in an Array

#include <stdio.h>
#include <limits.h>
#include <string.h>

#define min(a, b) (a < b ? a : b) 
#define max(a, b) (a > b ? a : b)

int main() {
	int n;
	printf("SIZE: ");
	scanf("%d", &n);

	int arr[n];
	printf("ARRAY: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int largest = INT_MIN, smallest = INT_MAX;
	for (int i = 0; i < n; i++) {
		largest = max(largest, arr[i]);
		smallest = min(smallest, arr[i]);
	}

	int hash_size = largest - smallest + 1;
	int hash[hash_size];
	for (int i = 0; i < hash_size; i++) 
		hash[i] = 0;

	for (int i = 0; i < n; i++) {
		hash[arr[i] - smallest]++;
	}

	
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (hash[arr[i] - smallest] == 1) {
			count++;
		}
	}

	printf("\nNON-REPEATING: %d", count);
}
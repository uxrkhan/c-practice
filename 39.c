// 39. Input a String & Store their Ascii Values in an Integer Array & Print the Array

#include <stdio.h>

#define MAX_STR_SIZE 100

int main() {
	char str[MAX_STR_SIZE];
	printf("STRING: ");
	scanf("%s", str);

	int n = 0;
	while (str[n] != '\0') {
		n++;
	}
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = str[i];
	}

	printf("ASCII ARRAY: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
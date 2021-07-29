// 74. Find the Length of a String without using the Built-in Function

#include <stdio.h>

int main() {
	char str[100]; 
	printf("STRING: ");
	scanf("%s", str);

	int len = 0;
	while (str[len] != '\0') {
		len++;
	}

	printf("LENGTH: %d", len);
}
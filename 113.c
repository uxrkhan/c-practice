// 113. find First and Last Occurrence of given Character in a String

#include <stdio.h>
#include <string.h>

int main() {
	char s[100], c;
	printf("STRING: ");
	gets(s);
	printf("CHAR: ");
	scanf("%c", &c);

	int left = 0, right = strlen(s) - 1;
	while (left++ < strlen(s)) {
		if (s[left] == c) {
			break;
		}
	}
	while (right-- >= 0) {
		if (s[right] == c) {
			break;
		}
	}

	if (left == strlen(s) || right == -1) 
		printf("CHARACTER NOT FOUND IN STRING!");
	else 
		printf("FIRST OCCURENCE: %d, LAST OCCURENCE: %d", left, right);

	return 0;
}
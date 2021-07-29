// 90. find the Length of the String using Recursion

#include <string.h>
#include <stdio.h>

int getLenRec(char s[], int i) {
	if (s[i] == '\0') {
		return i;
	} 
	return getLenRec(s, i + 1);
}

int main() {
	char s[100];
	printf("STRING: ");
	gets(s);

	int len = getLenRec(s, 0);

	printf("LENGTH: %d", len);
}
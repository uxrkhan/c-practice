// 79. Reverse the String using Recursion

#include <stdio.h>
#include <string.h>

void reverseString(char s[], int start, int end) {
	if (start >= end) 
		return;

	char temp = s[start];
	s[start] = s[end];
	s[end] = temp;

	reverseString(s, start + 1, end - 1);
}

int main() {

	char s[100];
	printf("STRING: ");
	scanf("%s", s);

	reverseString(s, 0, strlen(s)-1);

	printf("REVERSED STRING: %s", s);
}
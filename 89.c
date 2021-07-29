// 89. find the First Capital Letter in a String without using Recursion

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
	char s[100];
	printf("STRING: ");
	gets(s);

	int pos = -1;
	for (int i = 0; s[i] != '\0'; i++) {
		if (isupper(s[i])) {
			pos = i;
			break;
		}
	}

	if (pos != -1) 
		printf("POSITION OF FIRST CAPITAL LETTER: %d", pos);
	else
		printf("NO CAPITAL LETTERS FOUND!");
}
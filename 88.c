// 88. find the First Capital Letter in a String using Recursion

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int getPosFirstCapital(char s[], int i) {
	if (s[i] == '\0') {
		return -1;
	} else if (isupper(s[i])) {
		return i;
	}
	return getPosFirstCapital(s, i + 1);
}

int main() {
	char s[100];
	printf("STRING: ");
	gets(s);

	int pos = getPosFirstCapital(s, 0);

	if (pos != -1) 
		printf("POSITION OF FIRST CAPITAL LETTER: %d", pos);
	else
		printf("NO CAPITAL LETTERS FOUND!");
}
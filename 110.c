// 110. Count the Number of Occurrence of each Character Ignoring the Case of Alphabets & Display them

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char s[100];
	printf("STRING: ");
	gets(s);

	int hash[256] = {0}, n = strlen(s);

	for (int i = 0; i < n; i++) {
		hash[tolower(s[i])]++;
	}

	for (int i = 0; i < 256; i++) {
		if (hash[i] > 0) {
			printf("%c - %d times\n", i, hash[i]);
		}
	}
}
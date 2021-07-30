// 105. Count Number of Words in a given Text Or Sentence

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWords(char s[]) {
	int n = strlen(s), j = 0, k = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == ' ' || s[i] == '.' || s[i] == ',' || s[i] == '?') {
			if (i != 0) {
				if (isalnum(s[i-1])) {
					k++;
					j = 0;
				}
			}
		} else {
			j++;
		}
	}
	return k+1;
}

int main() {
	char s[1000];
	printf("STRING: ");
	gets(s);
	
	int n = countWords(s);
	printf("NO. OF WORDS: %d", n);
}

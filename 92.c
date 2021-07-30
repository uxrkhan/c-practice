// 92. Find the Frequency of Substring in the given String

#include <stdio.h>
#include <string.h>

int isEqual(char str[], char s, char word[]) {
	int n = strlen(word);
	for (int i = s, j = 0; i < s + n; i++, j++) {
		if (str[i] != word[j])
			return 0;
	}
	return 1;
}

int main() {
	char s[100];
	printf("SENTENCE: ");
	gets(s);

	char word[100];
	printf("WORD: ");
	gets(word);

	int n = strlen(s), count = 0;
	for(int i = 0; i <= n-strlen(word); i++) {
		if (isEqual(s, i, word))
			count++;
	}

	printf("COUNT: %d", count);
}

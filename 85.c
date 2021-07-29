// 85. Find the Frequency of the Word ‘the’ in a given Sentence

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

	int n = strlen(s), count = 0;
	for(int i = 0; i <= n-3; i++) {
		if (isEqual(s, i, "the"))
			count++;
	}

	printf("COUNT: %d", count);
}

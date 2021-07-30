// 102. Count the Number of Unique Words

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int inSet(char set[][100], int n, char *word) {
	for (int i = 0; i < n; i++) {
		if (strcmp(set[i], word) == 0) {
			return 1;
		}
	}
	return 0;
}

int main() {
	char s[100], set[50][100];
	printf("STRING: ");
	gets(s);

	int n = strlen(s), count = 0;
	for (int i = 1; i <= strlen(s); i++) {
		if (s[i] == ' ' || s[i] == '\0') {
			int j;
			for (j = i-1; j >= 0; j--) {
				if (s[j] == ' ') {
					break;
				}
			}
			char curr[50];
			memcpy(curr, s + j + 1, i - j - 1);
			curr[i - j - 1] = '\0';
			
			if (!inSet(set, count, curr)) {
				strcpy(set[count], curr);
				count++;
			}
		}
	}

	printf("%d UNIQUE WORDS:\n", count);
	for (int i = 0; i < count; i++) {
		printf("%s\n", set[i]);
	}

}
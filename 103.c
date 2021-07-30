// 103. Search a Word & Replace it with the Specified Word

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int str2words(char s[], char words[][1000]) {
	int n = strlen(s), j = 0, k = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == ' ' || s[i] == '.' || s[i] == ',' || s[i] == '?') {
			if (i != 0) {
				if (isalnum(s[i-1])) {
					words[k][j] = '\0';
					k++;
					j = 0;
				}
			}
		} else {
			words[k][j] = s[i];
			j++;
		}
	}
	words[k][j] = '\0';
	return k+1;
}

int main() {
	char s[1000], key[1000], rep[1000], words[100][1000];
	printf("STRING: ");
	gets(s);
	printf("WORD TO REPLACE: ");
	gets(key);
	printf("REPLACE WITH: ");
	gets(rep);

	int n1 = strlen(s);
	int n2 = strlen(key);
	int n3 = strlen(rep);

	int n_words = str2words(s, words);
	int found = 0;
	for (int i = 0; i < n_words; i++) {
		if (strcmp(key, words[i]) == 0) {
			found = 1;
			strcpy(words[i], rep);
		}
	}

	if (!found) { 
		printf("WORD NOT FOUND!");
	} else {
		printf("EDITED STRING: ");
		for (int i = 0; i < n_words; i++) {
			printf("%s ", words[i]);
		}	
	}
}
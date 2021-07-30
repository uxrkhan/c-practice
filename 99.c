// 99. List All Lines containing a given String

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINES 1000
#define MAX_LENGTH 1000

int string2words(char s[], char words[][MAX_LENGTH]) {
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


int main(int argc, char **argv) {
	if (argc == 1) {
		printf("PLEASE ENTER A WORD AS ARGUMENT!");
		return 0;
	}
	char word[MAX_LENGTH];
	strcpy(word, argv[1]);
	printf("TARGET WORD: %s\n", word);

	FILE *in = fopen("lines.txt", "r");
	char lines[MAX_LINES][MAX_LENGTH];
	int n_lines = 0;

	char c;
	int j = 0;
	while ((c = fgetc(in)) != EOF) {
		if (c == '\n') {
			lines[n_lines][j] = '\0';
			j = 0;
			n_lines++;
		} else {
			lines[n_lines][j] = c;
			j++;
		}
	}

	int matching_line_indices[MAX_LINES] = {0}, n_matching_lines = 0;
	for (int i = 0; i < n_lines; i++) {
		// printf("%s\n", lines[i]);
		char words[MAX_LENGTH][MAX_LENGTH];
		int n_words = string2words(lines[i], words);
		for (int k = 0; k < n_words; k++) {
			if (strcmp(words[k], word) == 0) {
				matching_line_indices[i] = 1;
				n_matching_lines++;
			}
		}
	}

	printf("MATCHING LINES:\n");
	for (int i = 0; i < n_matching_lines; i++) {
		if (matching_line_indices[i]) {
			printf("%s\n", lines[i]);
		}
	}

	fclose(in);
	return 0;
}
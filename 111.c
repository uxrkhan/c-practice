// 111. Count the Occurrences of each C Keyword using Array Structure

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NKEYS 32

struct dict {
	char word[10];
	int count;
};

// keywords arranged in alphabetic order (important for binary search)
struct dict keywords[NKEYS] = {
	"auto", 0, "break", 0, "case", 0,
	"char", 0, "const", 0, "continue", 0,
	"default", 0, "do", 0, "double", 0,
	"else", 0, "enum", 0, "extern", 0,
	"float", 0, "for", 0, "goto", 0,
	"if", 0, "int", 0, "long", 0,
	"register", 0, "return", 0, "short", 0,
	"signed", 0, "sizeof", 0, "static", 0,
	"struct", 0, "switch", 0, "typedef", 0,
	"union", 0, "unsigned", 0, "void", 0,
	"volatile", 0, "while", 0
};

int binSearchKeyword(char unit[]) {
	int low = 0, high = NKEYS - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (strcmp(unit, keywords[mid].word) < 0) 
			high = mid - 1;
		else if (strcmp(unit, keywords[mid].word) > 0) 
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}

int main() {
	char s[100], unit[10];
	printf("STRING: ");
	gets(s);

	int n = strlen(s), j = 0;
	for (int i = 0; i < n; i++) {
		while (i < strlen(s) && s[i] != ' ' && isalpha(s[i])) {
			unit[j++] = tolower(s[i++]);
		}
		if (j != 0) {
			unit[j] = '\0';
			int pos = binSearchKeyword(unit);
			if (pos != -1) {
				keywords[pos].count++;
			}
			j = 0;
		}
	}

	printf("KEYWORD FREQUENCIES:\n");
	int found = 0;
	for (int i = 0; i < NKEYS; i++) {
		if (keywords[i].count > 0) {
			found = 1;
			printf("%s - %d\n", keywords[i].word, keywords[i].count);
		}
	}
	if (!found) {
		printf("NO KEYWORDS FOUND!");
	}
}
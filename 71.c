// 71. Concatenate two Strings Lexically

#include <stdio.h>
#include <string.h>

char *lexConcat(char s1[], char s2[]) {
	if (strcmp(s1, s2) < 0) {
		strcat(s1, s2);
		return s1;
	}
	strcat(s2, s1);
	return s2;
}

int main() {
	char s1[100], s2[100];
	printf("STRING 1: ");
	scanf("%s", s1);
	printf("STRING 2: ");
	scanf("%s", s2);
	
	char *lex = lexConcat(s1, s2);
	printf("LEXICALLY CONCATENATED STRING: %s", lex);
}
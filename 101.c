// 100. Insert Character/Word in any Desired Location in a String

#include <stdio.h>
#include <string.h>

int main() {
	char s[1000], w[1000];
	int pos;
	printf("STRING: ");
	gets(s);
	printf("WORD: ");
	gets(w);
	printf("POSITION: ");
	scanf("%d", &pos);

	int n1 = strlen(s);
	int n2 = strlen(w);
	if (pos < 0 || pos > n1) {
		printf("INVALID POSITION!");
		return 0;
	}

	for (int i = n1 + n2 - 1; i > pos + n2 - 1; i--) {
		s[i] = s[i - n2];
	}
	s[n1 + n2] = '\0';

	for (int i = pos, j = 0; j < n2; i++, j++) {
		s[i] = w[j];
	}

	printf("AFTER INSERTING: %s", s);
}
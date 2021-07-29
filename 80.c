// 80. Reverse every Word of given String

#include <stdio.h>
#include <string.h>

int isEqual(char str[], int s, int e, char word[]) {
	for (int i = s, j = 0; i <= e; i++, j++) {
		if (str[i] != word[j])
			return 0;
	}
	return 1;
}

void reverseSubstring(char str[], int s, int e) {
	int n = e - s + 1;
	for (int i = 0; i < n / 2; i++) {
		char temp = str[i+s];
		str[i+s] = str[n-i-1+s];
		str[n-i-1+s] = temp;
	}
}

int main() {
	char s[100], word[100], words[30][30];
	printf("STRING: ");
	scanf("%[^\n]s", s);
	printf("WORD: ");
	scanf("%s", word);

	int n1 = strlen(s), n2 = strlen(word);

	int pos = -1;
	for (int i = 0; i <= n1-n2; i++) {
		if (isEqual(s, i, i+n2-1, word)) {
			pos = i;
			break;
		}
	}

	if (pos != -1) {
		reverseSubstring(s, pos, pos + n2 -1);
		printf("STRING: %s", s);
	} else {
		printf("WORD NOT FOUND.");
	}
}
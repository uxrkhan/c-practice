// 82. Delete All Repeated Words in String

#include <stdio.h>
#include <string.h>

int main() {
	char str[100], words[30][30], final[30][30];
	printf("STRING: ");
	scanf("%[^\n]s", str);

	int n = strlen(str), j = 0, k = 0, l, nwords;
	for (int i = 0; i < n; i++) {
		if (str[i] == ' ') {
			words[k][j] = '\0';
			j = 0;
			k++;		} else {
			words[k][j] = str[i];
			j++;
		}
	}
	words[k][j] = '\0';
	nwords = k+1;

	l = 0;
	for (int i = 0; i < nwords; i++) {
		int count = 0;
		for (j = 0; j < nwords; j++) {
			if (strcmp(words[i], words[j]) == 0) {
				count++;
			}
		}
		if (count == 1) {
			strcpy(final[l++], words[i]);
		}
	}

	printf("FINAL SENTENCE: ");
	for (int i = 0; i < l; i++) {
		printf("%s ", final[i]);
	}

}
// 93. Find the Frequency of Every Word in a given String

#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	printf("STRING: ");
	gets(s);

	char words[30][30], ptr1[30][30];
	int spaces = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == ' ')
			spaces++;
	}
	int nwords = spaces + 1;

	int j = 0, k = 0, i = 0;
	while (s[i] != '\0') {
		if (s[i] == ' ') {
			words[k][j] = '\0';
			j = 0;
			k++;
		} else {
			words[k][j] = s[i];
			j++;
		}
		i++;
	}
	words[k][j] = '\0';

	k = 0;
	int count = 0;
	for (int i = 0; i < nwords; i++) {
		for (j = 0; j < nwords; j++) {
			if (i == j) {
				strcpy(ptr1[k] , words[i]);
				k++;
				count++;
				break;
			} else {
				if (strcmp(ptr1[j], words[i]) != 0) 
					continue;
				else 
					break;
			}
		}
	}

	int c = 0;
	for (int i = 0; i < count; i++) {
		for (j = 0; j < nwords; j++) {
			if (strcmp(ptr1[i], words[j]) == 0)
				c++;
		}
		printf("%s - %d\n", ptr1[i], c);
		c = 0;
	} 
}
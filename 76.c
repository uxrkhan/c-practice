// 76. Remove given Word from a String

#include <stdio.h>
#include <string.h>

int main() {
	char str[100], word[30]; 
	printf("STRING: ");
	scanf("%[^\n]s", str);
	printf("WORD TO REMOVE: ");
	scanf("%s", word);

	int n1 = strlen(str);
	int n2 = strlen(word);

	int spaces = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ')
			spaces++;
	}

	int i, j, k, l;
	char words[30][30];
	for (j = 0, i = 0; j < spaces + 1; i++, j++) {
		k = 0;
		while (str[i] != '\0') {
			if (str[i] == ' ') 
				break;
			else {
				words[j][k++] = str[i];
				i++;
			}
		}
		words[j][k] = '\0';
	}

	for (int i = 0; i < spaces + 1; i++) {
		printf("%s\n", words[i]);
	}

	int pos = -1;
	for (int i = 0; i < spaces + 1; i++) {
		if (strcmp(words[i], word) == 0) {
			pos = i;
			break;
		}
	}

	if (pos != -1) {
		printf("%d\n", pos);
		i = 0;
		j = 0;
		k = 0;
		while (i < n1-n2) {
			if (k == pos) {
				k++;
			}

			if (words[k][j] == '\0') {
				j = 0;
				k++;
				str[i] = ' ';
			} else {
				str[i] = words[k][j];	
				j++;
			}
			i++;
		}
		str[i] = '\0';
		printf("STRING AFTER REMOVING WORD: %s", str);
	} else {
		printf("WORD \"%s\" IS NOT PRESENT IN STRING \"%s\".", word, str);
	}
}
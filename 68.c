// 68. Program To Print Smallest and Biggest possible Word which is Palindrome in a given String

#include <stdio.h>
#include <string.h>

int main() {
	int init = 0;

	printf("STRING: ");
	char str[100];
	scanf("%[^\n]s", str);

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

	char curr[30], rev[30], minPal[30], maxPal[30];
	int flag = 0, len, minLen = 0, maxLen = 0;
	for (i = 0; i < spaces + 1; i++) {
		strcpy(curr, words[i]);
		int currLen = strlen(words[i]);
		k = 0;
		for (l = currLen - 1; l >= 0; l--) {
			rev[k++] = words[i][l];
		}
		rev[k] = '\0';
		if (strcmp(rev, curr) == 0) {
			flag = 1;
			if (init < 1) {
				strcpy(minPal, rev);
				strcpy(maxPal, rev);
				minLen = strlen(minPal);
				maxLen = strlen(maxPal);
				init++;
			}
			len = strlen(rev);
			if (len >= maxLen)
				strcpy(maxPal, rev);
			else if (len <= minLen)
				strcpy(minPal, rev);
		}
	}
	if (flag == 1) {
		printf("SMALLEST PALINDROME: %s\n", minPal);
		printf("LARGEST PALINDROME: %s", maxPal);
	} else {
		printf("NO PALINDROME FOUND IN STRING!");
	}

}
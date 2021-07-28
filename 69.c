// 69. Find the Largest & Smallest Word in a String

#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("STRING: ");
	scanf("%[^\n]s", str);

	char largest[100], smallest[100];
	int n = strlen(str), spaces = 0, min_len = 100, max_len = 0;

	for (int i = 0; i < n; i++) {
		if (str[i] == ' ')
			spaces++;
	}

	char words[spaces + 1][30];
	int j = 0, k = 0;
	for (int i = 0; i < spaces + 1; i++) {
		while (str[j] != ' ' && str[j] != '\0') {
			words[i][k++] = str[j++];
		}
		words[i][k] = '\0';
		
		if (max_len < k) {
			max_len = k;
			strcpy(largest, words[i]);
		}
		if (k < min_len) {
			min_len = k;
			strcpy(smallest, words[i]);
		}

		printf("%s %d [%d, %d]\n", words[i], k, min_len, max_len);

		j++;
		k = 0;
	}

	printf("LARGEST: %s\n", largest);
	printf("SMALLEST: %s", smallest);
}
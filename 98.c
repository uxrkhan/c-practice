// 98. Display every possible Combination of two Words or Strings from the input Strings without Repeated Combinations

#include <stdio.h>
#include <string.h>

int string2words(char s[], char words[][30]) {
	int n = strlen(s), j = 0, k = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == ' ') {
			words[k][j] = '\0';
			k++;
			j = 0;
		} else {
			words[k][j] = s[i];
			j++;
		}
	}
	words[k][j] = '\0';
	return k+1;
}

int main() {
	char s1[100], s2[100], w1[30][30], w2[30][30], combs[30][60], final[30][60];
	printf("STRING 1: ");
	gets(s1);
	printf("STRING 2: ");
	gets(s2);

	int n1 = string2words(s1, w1);
	int n2 = string2words(s2, w2);

	int count = 0;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			char temp[60];
			strcpy(temp, w1[i]);
			strcat(temp, w2[j]);
			strcpy(combs[count], temp);
			count++;
		}
	}
	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < n1; j++) {
			char temp[60];
			strcpy(temp, w2[i]);
			strcat(temp, w1[j]);
			strcpy(combs[count], temp);
			count++;
		}
	}


	// Remove repeated
	for (int i = 0; i < count - 1; i++) {
		for (int j = i + 1; j < count; j++) {
			if (strcmp(combs[i], combs[j]) == 0) {
				for (int k = j; k < count - 1; k++) {
					strcpy(combs[k], combs[k+1]);
				}
				count--;
			}
		}
	}

	printf("WITHOUT REPETITIONS %d:\n", count);
	for (int i = 0; i < count; i++) {
		printf("%s\n", combs[i]);
	}
}
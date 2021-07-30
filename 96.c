// 96. find the possible subsets of the String

#include <stdio.h>
#include <string.h>

int count = 0;

/* Uncomment if unique needed. */

// int inSet(char set[][100], char sub[]) {
// 	for (int i = 0; i < count; i++) {
// 		if (strcmp(set[i], sub) == 0)
// 			return 1;
// 	}
// 	return 0;
// }

int main() {
	printf("STRING: ");
	char s[100];
	gets(s);

	char set[30][100];

	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			char currSub[30];
			memcpy(currSub, s+i, j-i+1);
			currSub[j-i+1] = '\0';

			/* Uncomment if unique needed. */
			// if (!inSet(set, currSub)) {
			// 	strcpy(set[count], currSub);
			// 	count++;
			// }

			strcpy(set[count], currSub);
			count++;
		}
	}

	printf("SUBSETS:\n");
	for (int i = 0; i < count; i++) {
		printf("%s\n", set[i]);
	}
}
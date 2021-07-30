// 100. Print the Words Ending with Letter S

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char s[100];
	printf("STRING: ");
	gets(s);
	int n = strlen(s);

	for (int i = 1; i <= n; i++) {
		if (s[i] == ' ' || s[i] == '\0') {
			if (s[i-1] == 's' || s[i-1] == 'S') {
				int j = i-1;
				while (s[j] != ' ' && j >= 0) {
					j--;
				}

				char temp[100];
				memcpy(temp, s+j+1, i-j-1);
				temp[i-j-1] = '\0';
				printf("%s\n", temp);
			}
		}
	}

}
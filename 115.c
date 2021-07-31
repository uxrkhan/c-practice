// 115. Count the Occurence of a Substring in String

#include <stdio.h>
#include <string.h>

int main() {
	char str[100], sub[100];
	printf("STRING: ");
	gets(str);
	printf("SUBSTRING: ");
	gets(sub);

	int n1 = strlen(str);
	int n2 = strlen(sub);

	int start = 0, end = n2 - 1, count = 0;
	while (end < n1) {
		char temp[n2 + 1];
		memcpy(temp, str + start, n2);
		temp[n2] = '\0';
		if (strcmp(temp, sub) == 0) {
			count++;
		}
		start++;
		end++;
	}

	printf("FREQ OF OCCURENCE: %d", count);
}
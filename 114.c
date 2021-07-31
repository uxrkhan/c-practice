// 114. Find the Most/Least Repeated Character in the String

#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	printf("STRING: ");
	gets(s);

	int hash[256] = {0}, n = strlen(s);
	for (int i = 0; i < n; i++) {
		hash[s[i]]++;
	}

	char max_rep_char = s[0], min_rep_char = s[0];
	for (int i = 0; i < n; i++) {
		if (hash[s[i]] > hash[max_rep_char])
			max_rep_char = s[i];
		if (hash[s[i]] < hash[min_rep_char])
			min_rep_char = s[i];
	}

	printf("MAX REP CHAR: %c\n", max_rep_char);
	printf("MIN REP CHAR: %c", min_rep_char);
}
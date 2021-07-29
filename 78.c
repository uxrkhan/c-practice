// 78. Replace all the Characters by Lowercase

#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	printf("STRING: ");
	scanf("%s", s);

	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] + ('a'-'A');
		}
	}

	printf("LOWER CASE: %s", s);
}
// 104. Display the Characters in Prime Position a given String

#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	printf("STRING: ");
	gets(s);

	int n = strlen(s);
	int is_prime[n+1];
	for (int i  = 0; i <= n; i++) {
		is_prime[i] = 1;
	}
	is_prime[0] = 0;
	is_prime[1] = 0;

	for (int i = 2; i * i <= n; i++) {
		if (!is_prime[i]) 
			continue;
		for (int j = i * i; j <= n; j++) {
			if (j % i == 0) 
				is_prime[j] = 0;
		}
	}

	printf("CHARACTERS AT PRIME POSITIONS: ");
	for (int i = 0; i < n; i++) {
		if (is_prime[i+1])
			printf("%c", s[i]);
	}
}
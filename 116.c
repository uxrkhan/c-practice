// 116. Determine if One String is a Circular Permutation of Another String

#include <stdio.h>
#include <string.h>

int areRotations(char *s1, char *s2) {
	int n1 = strlen(s1);
	int n2 = strlen(s2);

	if (n1 != n2)
		return 0;

	char concat[2 * n1];
	strcpy(concat, s1);
	strcat(concat, s1);

	int l = 0, r = n1-1;
	while (r < 2 * n1) {
		char temp[n1+1];
		memcpy(temp, concat + l, n1);
		temp[n1] = '\0';
		if (strcmp(temp, s2) == 0) 
			return 1;
		l++;
		r++;
	}

	return 0;
}

int main() {
	char s1[100], s2[100];
	printf("STRING 1: ");
	gets(s1);
	printf("STRING 2: ");
	gets(s2);
	if (areRotations(s1, s2))
		printf("BOTH ARE CIRCULAR PERMUTATIONS!");
	else 
		printf("BOTH ARE NOT CIRCULAR PERMUTATIONS!");
}
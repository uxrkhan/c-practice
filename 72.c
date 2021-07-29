// 72. Check if the Substring is present in the given String

#include <stdio.h>
#include <string.h>

int isEqual(char str[], int s, int e, char sub[]) {
	for (int i = s, j = 0; i <= e; i++, j++) {
		if (str[i] != sub[j])
			return 0;
	}
	return 1;
}

int isSubstring(char str[], char sub[]) {
	int n1 = strlen(str);
	int n2 = strlen(sub);

	if (n2 > n1) 
		return 0;

	int s = 0, e = n2 - 1;
	while (e != n1 - 1) {
		if (isEqual(str, s, e, sub))
			return 1;
		s++;
		e++;
	}
	return 0;
}

int main() {
	char str[100], sub[100];
	printf("STRING: ");
	scanf("%s", str);
	printf("SUBSTRING: ");
	scanf("%s", sub);

	if (isSubstring(str, sub)) 
		printf("SUBSTRING IS PRESENT!");
	else
		printf("SUBSTRING IS NOT PRESENT IN STRING!");
}
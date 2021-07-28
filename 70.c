// 70. read two Strings & Concatenate the Strings

#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100]; 
	printf("STRING 1: ");
	scanf("%s", str1); 
	printf("STRING 2: ");
	scanf("%s", str2);
	
	int n1 = strlen(str1);
	int n2 = strlen(str2);

	char str[n1 + n2];
	for (int i = 0; i < n1; i++) {
		str[i] = str1[i];
	}
	for (int i = n1; i < n2 + n1; i++) {
		str[i] = str2[i - n1];
	}

	printf("CONCATENATED: %s", str);
}
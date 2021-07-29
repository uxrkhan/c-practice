// 73. Accepts two Strings & Compare them

#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100]; 
	printf("STRING 1: ");
	scanf("%s", str1); 
	printf("STRING 2: ");
	scanf("%s", str2);

	int comp = strcmp(str1, str2);

	if (comp < 0) 
		printf("\"%s\" COMES BEFORE \"%s\".", str1, str2);
	else if (comp > 0)
		printf("\"%s\" COMES BEFORE \"%s\".", str2, str1);
	else
		printf("\"%s\" IS IDENTICAL TO \"%s\".", str1, str2);
}
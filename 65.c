// 65. Check if a given String is Palindrome

#include <stdio.h>
#include <string.h>

int isPalindrome(const char str[]) {
	int n = strlen(str);
	int left = 0, right = n - 1;
	while (left < right) {
		if (str[left++] != str[right--])
			return 0;
	}
	return 1;
}

int main() {
	char str[100];
	printf("STRING: ");
	scanf("%s", str);

	if (isPalindrome(str))
		printf("PALINDROME!");
	else
		printf("NOT A PALINDROME!");

}
// 66. Check if a String is a Palindrome without using the Built-in Function

#include <stdio.h>

int isPalindrome(const char str[]) {
	int n = 0;
	while (str[n] != '\0') 
		n++;

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
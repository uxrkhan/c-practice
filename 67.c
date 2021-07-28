// 67. Check whether a given String is Palindrome or not using Recursion

#include <stdio.h>

int isPalindrome(char str[], int l, int r) {
	if (l == r)
		return 1;
	if (str[l] != str[r])
		return 0;
	if (l - 1 < r)
		return isPalindrome(str, l + 1, r - 1);
	return 1;
}

int main() {
	char str[100];
	printf("STRING: ");
	scanf("%s", str);

	int n = 0;
	while (str[n] != '\0') 
		n++;

	if (isPalindrome(str, 0, n - 1))
		printf("PALINDROME!");
	else
		printf("NOT A PALINDROME!");

}
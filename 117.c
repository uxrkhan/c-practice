// 117. Find the Consecutive Occurrence of any Vowel in a String

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}

int main() {
    char s[100];
    printf("STRING: ");
    gets(s);

    int n = strlen(s), count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (isVowel(s[i]) && isVowel(s[i + 1])) {
            count++;
        }
    }

    printf("NO. OF CONSECUTIVE OCCURENCES: %d", count);

}
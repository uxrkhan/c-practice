// 119. Input a String with at least one Number, Print the Square of all the Numbers in a String

#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    printf("STRING: ");
    gets(s);

    printf("SQUARES: ");
    for (int i = 0; i < strlen(s); i++) {
        if (isdigit(s[i])) {
            printf("%d ", (s[i]-'0') * (s[i]-'0'));
        }
    }

}
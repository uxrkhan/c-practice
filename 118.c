// 118. Input 2 Binary Strings and Print their Binary Sum

#include <stdio.h>
#include <string.h>

#define max(a, b) (a > b ? a : b)

int main() {
    char s1[100], s2[100], s3[101];
    printf("STRING 1: ");
    gets(s1);
    printf("STRING 2: ");
    gets(s2);

    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int carry = 0, sum = 0, i = n1 - 1, j = n2 - 1, k = max(n1, n2);
    s3[k + 1] = '\0';
    while (i >= 0 && j >= 0) {
        sum = carry ^ (s1[i]-'0') ^ (s2[j]-'0');
        carry = carry & ((s1[i]-'0') ^ (s2[j]-'0')) | ((s1[i]-'0') & (s2[j]-'0'));
        s3[k] = sum + '0';
        i--;
        j--;
        k--;
    }
    s3[0] = carry + '0';

    if (carry == 0) {
        for (int i = 0; s3[i]; i++) {
            s3[i] = s3[i + 1];
        }
    } 

    printf("SUM: %s", s3);
}
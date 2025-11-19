//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", s);  

    len = strlen(s);

    for (i = 0; i < len/2; i++) {
        if (s[i] != s[len - i - 1]) {
            printf("Not a palindrome");
            return 0;
        }
    }

    printf("Palindrome");
    return 0;
}

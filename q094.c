//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[50];
    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {

    
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        } else {
            currLen++;
        }

        if (str[i] == '\0')
            break;
    }


    strncpy(longest, &str[maxStart], maxLen);
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

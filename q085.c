//Reverse a string.
#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    while (str[length] != '\0') {
        length++;
    }

    
    if (str[length - 1] == '\n') {
        length--;
    }

    
    for (i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];
    }

    rev[length] = '\0';  

    printf("Reversed string: %s\n", rev);

    return 0;
}

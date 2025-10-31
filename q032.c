//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n; 


    if (n < 0) {
        printf("%d is not a palindrome.\n", n);
        return 0;
    }

   
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }


    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}

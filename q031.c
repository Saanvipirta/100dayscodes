//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int n;
    int binary[32];  
    int i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    if (n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    unsigned int num = (unsigned int)n;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}


//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    long long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    
    if (n < 0) {
        printf("%d is not an Armstrong number.\n", n);
        return 0;
    }

    
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate sum of digits raised to the power of number of digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}

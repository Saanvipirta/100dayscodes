//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    long long product = 1;  
    int i;
    int hasEven = 0; 

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven)
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    else
        printf("No even numbers between 1 and %d.\n", n);

    return 0;
}

//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>

int main() {
    float principal, rate, time;
    float simpleinterest, compoundinterest, amount;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simpleinterest = (principal * rate * time) / 100;

    amount = principal;
    for (int i = 1; i <= time; i++) {
        amount = amount + (amount * rate / 100);
    }
    compoundinterest = amount - principal;

    printf("Simple Interest = %.2f\n", simpleinterest);
    printf("Compound Interest = %.2f\n", compoundinterest);

    return 0;
}

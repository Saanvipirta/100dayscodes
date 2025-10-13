//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    float radius;
    float pi = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = pi * radius * radius;
    float circumference = 2 * pi * radius;

    printf("Area: %f\n", area);
    printf("Circumference: %f\n", circumference);

    return 0;
}

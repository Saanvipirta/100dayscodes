//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    int length, breadth;

    printf("Enter length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of the rectangle: ");
    scanf("%d", &breadth);

    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);

    return 0;
}

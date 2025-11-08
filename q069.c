//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, second_largest;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = second_largest = -2147483648;  

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == -2147483648)
        printf("There is no second largest element (all elements are equal).\n");
    else
        printf("The second largest element is: %d\n", second_largest);

    return 0;
}

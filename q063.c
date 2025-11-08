//Merge two arrays.
#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, j, k;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }


    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0, k = n1; j < n2; j++, k++) {
        merged[k] = arr2[j];
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}

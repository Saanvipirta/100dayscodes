//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    long long totalSum = (long long)n * (n + 1) / 2;  
    long long arraySum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        arraySum += arr[i];
    }

    long long missing = totalSum - arraySum;

    printf("%lld", missing);

    return 0;
}

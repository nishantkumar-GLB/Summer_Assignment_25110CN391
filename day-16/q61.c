#include <stdio.h>

int main() {
    int n;
    printf("Enter the total number of elements (including the missing one): ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter %d elements: ", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    int missingNumber = expectedSum - actualSum;
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
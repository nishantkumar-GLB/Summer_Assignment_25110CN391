#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Invalid Input. Array must have at least 2 elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = INT_MIN;

    for(i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
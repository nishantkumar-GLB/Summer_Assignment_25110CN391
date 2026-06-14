#include <stdio.h>

int main() {
    int n, i, j, isDuplicate;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in the array are: ");
    int foundAny = 0;

    for(i = 0; i < n; i++) {
        isDuplicate = 0;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if(isDuplicate) {
            continue;
        }

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                foundAny = 1;
                break;
            }
        }
    }

    if(!foundAny) {
        printf("None");
    }
    printf("\n");

    return 0;
}
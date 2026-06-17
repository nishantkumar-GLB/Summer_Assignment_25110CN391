#include <stdio.h>

int main() {
    int n1, n2, i, j, k, match, duplicate;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int intersectArr[n1 < n2 ? n1 : n2];
    int intersectCount = 0;

    for(i = 0; i < n1; i++) {
        match = 0;
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                match = 1;
                break;
            }
        }
        if(match) {
            duplicate = 0;
            for(k = 0; k < intersectCount; k++) {
                if(intersectArr[k] == arr1[i]) {
                    duplicate = 1;
                    break;
                }
            }
            if(!duplicate) {
                intersectArr[intersectCount++] = arr1[i];
            }
        }
    }

    printf("Intersection of arrays: ");
    for(i = 0; i < intersectCount; i++) {
        printf("%d ", intersectArr[i]);
    }
    printf("\n");

    return 0;
}
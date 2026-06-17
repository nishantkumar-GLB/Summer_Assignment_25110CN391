#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0, flag;

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

    int unionArr[n1 + n2];

    for(i = 0; i < n1; i++) {
        flag = 0;
        for(j = 0; j < k; j++) {
            if(unionArr[j] == arr1[i]) {
                flag = 1;
                break;
            }
        }
        if(!flag) {
            unionArr[k++] = arr1[i];
        }
    }

    for(i = 0; i < n2; i++) {
        flag = 0;
        for(j = 0; j < k; j++) {
            if(unionArr[j] == arr2[i]) {
                flag = 1;
                break;
            }
        }
        if(!flag) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}
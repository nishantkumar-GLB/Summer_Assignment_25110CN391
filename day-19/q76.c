#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int principal_sum = 0, secondary_sum = 0;

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        principal_sum += matrix[i][i];
        secondary_sum += matrix[i][n - 1 - i];
    }

    printf("Principal Diagonal Sum: %d\n", principal_sum);
    printf("Secondary Diagonal Sum: %d\n", secondary_sum);

    return 0;
}
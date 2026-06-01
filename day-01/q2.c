#include <stdio.h>

int main() {
    int num;
    int i = 1; // 1. Initialization

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d (Using while loop):\n", num);
    printf("-------------------------\n");

    // 2. Condition Check
    while (i <= 10) {
        printf("%d x %2d = %d\n", num, i, num * i);
 
        i++; // 3. Increment
    }

    return 0;
}
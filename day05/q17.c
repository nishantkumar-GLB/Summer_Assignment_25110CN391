#include <stdio.h>

int main() {
    int num, sum = 0;
    
    if (scanf("%d", &num) != 1 || num <= 0) {
        return 1;
    }

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
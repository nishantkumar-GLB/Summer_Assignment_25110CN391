#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int num;
    scanf("%d", &num);
    if (isPerfect(num)) {
        printf("Perfect number\n");
    } else {
        printf("Not Perfect number\n");
    }
    return 0;
}
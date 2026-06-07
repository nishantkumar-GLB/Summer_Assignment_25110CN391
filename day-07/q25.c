#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    scanf("%d", &num);
    if (num < 0) {
        printf("Invalid input\n");
    } else {
        printf("%lld\n", factorial(num));
    }
    return 0;
}
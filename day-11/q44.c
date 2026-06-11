#include <stdio.h>

long long findFactorial(int n) {
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;
    scanf("%d", &num);
    if (num < 0) {
        printf("Invalid Input\n");
    } else {
        printf("%lld\n", findFactorial(num));
    }
    return 0;
}
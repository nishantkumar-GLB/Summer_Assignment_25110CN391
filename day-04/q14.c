#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n < 1) return 1;

    if (n == 1) {
        printf("The 1st Fibonacci term is: %lld\n", t1);
        return 0;
    }
    if (n == 2) {
        printf("The 2nd Fibonacci term is: %lld\n", t2);
        return 0;
    }

    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("The %dth Fibonacci term is: %lld\n", n, t2);

    return 0;
}
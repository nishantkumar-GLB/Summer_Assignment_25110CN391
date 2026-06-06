#include <stdio.h>

double power(double x, int n) {
    double result = 1.0;
    long long p = n;
    if (p < 0) {
        p = -p;
    }
    while (p > 0) {
        if (p % 2 == 1) {
            result *= x;
        }
        x *= x;
        p /= 2;
    }
    return (n < 0) ? (1.0 / result) : result;
}

int main() {
    double x;
    int n;
    scanf("%lf %d", &x, &n);
    printf("%lf\n", power(x, n));
    return 0;
}
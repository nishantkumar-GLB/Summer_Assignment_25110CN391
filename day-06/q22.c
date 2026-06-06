#include <stdio.h>

int binaryToDecimal(long long n) {
    int decimalNum = 0, base = 1, rem;
    while (n > 0) {
        rem = n % 10;
        decimalNum = decimalNum + rem * base;
        n = n / 10;
        base = base * 2;
    }
    return decimalNum;
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%d\n", binaryToDecimal(n));
    return 0;
}
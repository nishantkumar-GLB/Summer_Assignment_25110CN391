#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;
    scanf("%d", &num);
    int isNegative = 0;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }
    int result = reverseNumber(num, 0);
    if (isNegative) {
        result = -result;
    }
    printf("%d\n", result);
    return 0;
}
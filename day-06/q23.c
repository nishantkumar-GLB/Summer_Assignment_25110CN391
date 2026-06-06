#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", countSetBits(n));
    return 0;
}
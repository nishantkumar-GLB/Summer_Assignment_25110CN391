#include <stdio.h>

int main() {
    long long num, maxPrime = -1;

    if (scanf("%lld", &num) != 1 || num <= 1) {
        return 1;
    }

    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }

    if (num > 2) {
        maxPrime = num;
    }

    printf("Largest prime factor is: %lld\n", maxPrime);

    return 0;
}
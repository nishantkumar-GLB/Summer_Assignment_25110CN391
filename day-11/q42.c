#include <stdio.h>

int findMaximum(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", findMaximum(num1, num2));
    return 0;
}
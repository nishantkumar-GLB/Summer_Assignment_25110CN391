#include <stdio.h>

int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", findSum(num1, num2));
    return 0;
}
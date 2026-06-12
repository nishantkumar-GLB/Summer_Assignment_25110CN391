#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int temp = num;
    int digits = 0;
    int sum = 0;
    
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = num;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    
    return (sum == original);
}

int main() {
    int num;
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("Armstrong number\n");
    } else {
        printf("Not Armstrong number\n");
    }
    return 0;
}
#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return (original == reversed);
}

int main() {
    int num;
    scanf("%d", &num);
    if (isPalindrome(num)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}
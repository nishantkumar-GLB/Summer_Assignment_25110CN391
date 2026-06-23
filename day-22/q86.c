#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            if(i > 0 && str[i-1] != ' ' && str[i-1] != '\t') {
                words++;
            }
        }
        i++;
    }

    printf("%d\n", words);

    return 0;
}
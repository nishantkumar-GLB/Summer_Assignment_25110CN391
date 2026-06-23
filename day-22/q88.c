#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}
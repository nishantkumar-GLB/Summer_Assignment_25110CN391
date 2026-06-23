#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        if(str[i] != '\n') {
            freq[(unsigned char)str[i]]++;
        }
        i++;
    }

    for(i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}
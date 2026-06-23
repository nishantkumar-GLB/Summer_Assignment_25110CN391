#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    int i;
    int max = -1;
    char max_char;
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }
    
    for (i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] > max) {
            max = count[(unsigned char)str[i]];
            max_char = str[i];
        }
    }
    
    printf("%c\n", max_char);
    return 0;
}
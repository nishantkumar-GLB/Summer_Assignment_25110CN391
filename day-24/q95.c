#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[50] = "";
    char current[50] = "";
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            current[j++] = str[i];
        } else {
            current[j] = '\0';
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            j = 0;
        }
        i++;
    }

    current[j] = '\0';
    if (strlen(current) > strlen(longest)) {
        strcpy(longest, current);
    }

    printf("The longest word is: %s\n", longest);
    return 0;
}
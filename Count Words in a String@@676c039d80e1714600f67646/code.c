#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] != ' ' && str[i] != '\n') && 
            (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    printf("Word count: %d\n", count);
    return 0;
}

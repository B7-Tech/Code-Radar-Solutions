#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int count = 0;
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] != ' ' && str[i] != '\n') && 
            (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}

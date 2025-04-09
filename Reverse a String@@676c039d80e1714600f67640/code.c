#include <stdio.h>
#include <string.h>

void reverse_str(char *str) {
    int i, len = strlen(str);
    char temp;
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
int main() {
    char str[50];
    scanf("%s", str);  
    reverse_str(str);
    printf("%s\n", str);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    int i, j;
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);
    string1[strcspn(string1, "\n")] = '\0';
    string2[strcspn(string2, "\n")] = '\0';
    for (i = 0; string1[i] != '\0'; i++);
    for (j = 0; string2[j] != '\0'; j++, i++) {
        string1[i] = string2[j];
    }
    string1[i] = '\0';
    printf("%s", string1);
    return 0;
}

#include <stdio.h>
#include <ctype.h> 
int countVowels(const char *str) {
    int count = 0;
    char ch;
    while ((ch = *str++) != '\0') {
        ch = tolower(ch); 
        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int vowels = countVowels(str);
    printf("%d", vowels);
    return 0;
}

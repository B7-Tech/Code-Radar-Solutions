#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0}; 
    int max = 0;
    char mostFreq;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            mostFreq = i;
        }
    }

    printf("%c", mostFreq);
    return 0;
}
}
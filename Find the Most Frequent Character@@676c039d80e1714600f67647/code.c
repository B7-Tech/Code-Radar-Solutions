#include <stdio.h>
#include <string.h>

char maxOccurringChar(char str[]) {
    int count[256] = {0};
    int maxfreq = 0;
    char ans = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        count[ch]++;

        if (count[ch] > maxfreq) {
            maxfreq = count[ch];
            ans = ch;
        } else if (count[ch] == maxfreq && ch < ans) {
            ans = ch; 
        }
    }
    return ans;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    char result = maxOccurringChar(str);
    printf("%c", result);

    return 0;
}

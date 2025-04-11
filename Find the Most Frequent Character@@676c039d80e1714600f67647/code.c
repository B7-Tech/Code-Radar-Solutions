#include <stdio.h>
#include <string.h>

char maxOccurringChar(char str[]) {
    char ans = '\0';
    int maxfreq = 0;
    int count[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
        if (count[(unsigned char)str[i]] > maxfreq) {
            maxfreq = count[(unsigned char)str[i]];
            ans = str[i];
        }
    }
    return ans;
}

int main() {
    char str[] = "takeuforward";
    printf("Maximum o%c", maxOccurringChar(str));
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// char maxOccurringChar(char str[]) {
//     int count[256] = {0};
//     int maxfreq = 0;
//     char ans = '\0';

//     for (int i = 0; str[i] != '\0'; i++) {
//         unsigned char ch = str[i];
//         count[ch]++;

//         if (count[ch] > maxfreq) {
//             maxfreq = count[ch];
//             ans = ch;
//         } else if (count[ch] == maxfreq && ch < ans) {
//             ans = ch; 
//         }
//     }
//     return ans;
// }

// int main() {
//     char str[100];
//     fgets(str, sizeof(str), stdin);
//     char result = maxOccurringChar(str);
//     printf("%c", result);

//     return 0;
// }


#include <stdio.h>
#include <string.h>

char mostFrequent(char *s) {
    int count[256] = {0}, max = 0;
    char result = 0;
    
    for (int i = 0; s[i]; i++) count[s[i]]++;
    for (int i = 0; i < 256; i++)
        if (count[i] > max || (count[i] == max && i < result)) {
            max = count[i];
            result = i;
        }
    return result;
}

int main() {
    char s[100];
    fgets(s, 100, stdin);
    printf("%c", mostFrequent(s));
    return 0;
}

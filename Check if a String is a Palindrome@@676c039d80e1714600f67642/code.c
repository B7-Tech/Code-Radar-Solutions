#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1;
}
int main() {
    char str[100];
    scanf("%s", str); 
    if (isPalindrome(str)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}

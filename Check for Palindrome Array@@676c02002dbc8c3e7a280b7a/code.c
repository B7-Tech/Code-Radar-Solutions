#include <stdio.h>
#include <stdbool.h>
bool is_palindrome(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {   
        if (arr[i] != arr[n - i - 1]) {  
            return false;  
        }
    }
    return true; 
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (is_palindrome(arr, n)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

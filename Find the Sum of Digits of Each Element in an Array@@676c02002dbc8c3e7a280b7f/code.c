#include <stdio.h>
int sum_of_digits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; 
        num /= 10;        
    }
    return sum;
}

void sum_of_digits_in_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", sum_of_digits(arr[i]));  
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sum_of_digits_in_array(arr, n);
    return 0;
}

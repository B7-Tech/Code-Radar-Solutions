#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime"); // Numbers less than or equal to 1 are not prime
        return 0;
    }

    // Check divisibility from 2 to sqrt(n) using i * i <= n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("Not Prime"); // If divisible, it's not prime
            return 0;
        }
    }

    printf("Prime"); // If no divisors found, it's prime
    return 0;
}
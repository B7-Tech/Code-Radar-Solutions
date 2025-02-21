#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], largest, slargest;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    slargest = INT_MIN; // Initialize slargest with the smallest possible value

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            slargest = largest;  // Update slargest before updating largest
            largest = arr[i];
        } else if (arr[i] > slargest && arr[i] != largest) {
            slargest = arr[i];
        }
    }

    printf("%d", slargest);
    return 0;
}

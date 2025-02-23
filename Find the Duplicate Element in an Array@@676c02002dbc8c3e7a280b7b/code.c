#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array are: ");
    // Checking for duplicates
    int foundDuplicate = 0; // Flag to check if any duplicate is found
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                foundDuplicate = 1;
                break;  // Avoid printing the same duplicate multiple times
            }
        }
    }
    
    if (!foundDuplicate) {
        printf("No duplicates found.");
    }
    
    return 0;
}

#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array by K positions to the right
void rotateArray(int arr[], int N, int K) {
    // Normalize K to avoid unnecessary rotations
    K = K % N;
    
    // Step 1: Reverse the entire array
    reverse(arr, 0, N-1);
    
    // Step 2: Reverse the first K elements
    reverse(arr, 0, K-1);
    
    // Step 3: Reverse the remaining N-K elements
    reverse(arr, K, N-1);
}

int main() {
    int N, K;
    
    // Read input
    scanf("%d", &N);
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &K);
    
    // Rotate the array
    rotateArray(arr, N, K);
    
    // Print the rotated array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

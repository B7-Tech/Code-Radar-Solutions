#include <stdio.h>
#define MAX_VAL 1000 
int main() {
    int N, i;
    scanf("%d", &N);
    int arr[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int freq[MAX_VAL] = {0};
    for(i = 0; i < N; i++) {
        freq[arr[i]]++;
    }
    for(i = 0; i < N; i++) {
        if (freq[arr[i]] > 0) {
            printf("%d %d\n", arr[i], freq[arr[i]]);
            freq[arr[i]] = 0; 
        }
    }
    return 0;
}

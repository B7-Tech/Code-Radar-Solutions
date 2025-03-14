#include <stdio.h>
int main(){
    int n, i, arr[n];
    scanf("%d", &n);
    for(i = 0; i <n; i++){
        scanf("%d", &arr[n]);
    }
    for (i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
        return -1;
    }
}

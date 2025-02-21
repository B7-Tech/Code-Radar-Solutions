#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n], largest, slargest;
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[n]);
    }
    largest = arr[0];
    slargest = -1;
    for(i = 0; i<n; i++){
        if (arr[i] > largest){
            largest = arr[i];
            slargest = largest;
        }
    }
    printf("%d", slargest);
}
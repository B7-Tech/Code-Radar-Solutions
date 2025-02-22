#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n], largest, slargest;
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    slargest = INT_MIN;
    for(int i = 0; i<n; i++){
        if (arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > slargest && arr[i]!= largest){
            slargest = arr[i];
        }
    }
    if (slargest == INT_MIN) {
        printf("-1");
    } else {
        printf("%d", slargest);
    }
}
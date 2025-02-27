#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n], smallest, ssmallest;
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];
    ssmallest = INT_MAX;
    for (int i = 0; i<n; i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < ssmallest && arr[i] != smallest){
            ssmallest = arr[i];
        }
    }
    if (ssmallest == INT_MAX){
        printf("-1");
    }
    else{
        printf("%d", ssmallest);
    }
}
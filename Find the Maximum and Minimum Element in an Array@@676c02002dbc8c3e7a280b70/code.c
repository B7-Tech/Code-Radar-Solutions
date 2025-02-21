// Your code here...
#include <stdio.h>
int main(){
    int arr[], min, max,n;
    max = arr[0];
    min = arr[0];
    for(int i = 0; i<n; i++){
        if (arr[i]> max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("%d %d", max, min);
}
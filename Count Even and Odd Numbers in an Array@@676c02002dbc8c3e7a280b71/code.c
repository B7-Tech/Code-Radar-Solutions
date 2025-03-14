#include <stdio.h>
int main(){
    int i, n, e = 0, o=0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    if(arr[i] % 2 == 0){
        e++;
    }
    else{
        o++;
    }
    printf("%d %d", e, o);
    return 0;
}
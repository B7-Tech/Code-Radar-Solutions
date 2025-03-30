#include <stdio.h>
int main(){
    int i, n, sum;
    scanf("%d", &n);
    for(i = 1; i<=n; i++){
        sum = sum + i;
        return 0;
    }
    printf("%d", &sum);
    return 0;
}
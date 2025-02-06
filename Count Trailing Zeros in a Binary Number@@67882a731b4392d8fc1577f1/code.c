#include <stdio.h>
int main(){
    int n, count = 0;
    scanf("%d", &n);
    while ((n & 1) == 0 && n!= 0){
        n >>= 1;
        count ++;
    }
    printf("%d", count);
}
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int p = 0;
    while ((n & 1) == 0){
        n >> 1;
        p++;
    }
    printf("%d", p);
}
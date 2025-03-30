#include <stdio.h>
int main(){
    int n, i, j;
    for(i = 1; i<=n; i++){
        for(j = i; j<= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
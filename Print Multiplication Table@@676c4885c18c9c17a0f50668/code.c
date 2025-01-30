#include <stdio.h>
int main(){
    int N, i;
    char multiply = 215;
    scanf("%d", &N);
    for (i = 1; i<= 10; i++){
        printf("%d %c %d = %d \n", N, multiply,i, N*i);
        }
        return 0;
}
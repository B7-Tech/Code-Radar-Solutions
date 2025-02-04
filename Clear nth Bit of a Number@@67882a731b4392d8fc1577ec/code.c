#include <stdio.h>
int main(){
    int num,n, newN;
    scanf("%d %d", &num, &n);
    printf("%d", num &(~(1<<n)));
    return 0;
}
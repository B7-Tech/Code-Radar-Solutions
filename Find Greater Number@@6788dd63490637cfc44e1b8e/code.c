#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int m = fmax(a, b);
    printf("%d", m);
    return 0;
}
#include <stdio.h>
#include <math.h>
int main(){
    int a, b , c, max_value;
    scanf("%d %d %d", &a, &b, &c);
    max_value = fmax(fmax(a, b), c);
    printf("%d", max_value);
    return 0;
}
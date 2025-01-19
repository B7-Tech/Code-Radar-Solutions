#include <stdio.h>
#include <math.h>
int main(){
    double a, b , c, max;
    scanf("%lf %lf %lf", &a, &b, &c);
    max = fmax(fmax(a, b), c);
    printf(max);
    return 0;
}
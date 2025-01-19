#include <stdio.h>
#include <math.h>
int main(){
    double a, b , c, max_value;
    scanf("%lf %lf %lf", &a, &b, &c);
    max_value = fmax(fmax(a, b), c);
    printf("%.0f", max_value);
    return 0;
}
#include <stdio.h>
#define BITS sizeof(int)*8

int main() {
    int n, msb;
    scanf("%d", &n);
    msb = 1 << (BITS - 1);
    if (n & msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}
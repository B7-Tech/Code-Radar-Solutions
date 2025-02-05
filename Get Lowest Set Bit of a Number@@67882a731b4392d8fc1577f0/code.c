#include <stdio.h>
#define INT_SIZE sizeof(int)*8
int main(){
    int n,i, o;
    scanf("%d", &n);
    o = INT_SIZE - 1;
    for (i = 0; i<INT_SIZE; i++){
        if ((n>> i) & 1)
        o = i;
        break;
    }
    printf("%d", o);
}
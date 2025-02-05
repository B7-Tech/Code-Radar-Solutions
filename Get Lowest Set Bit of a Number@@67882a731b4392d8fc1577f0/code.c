#include <stdio.h>
#define INT_SIZE sizeof(int)*8
int main(){
    int n,i;
    scanf("%d", &n);
    for (i = 0; i<INT_SIZE; i++){
        if ((n>> i) & 1)
        break;
    }
    printf("%d", INT_SIZE ; i++);
}
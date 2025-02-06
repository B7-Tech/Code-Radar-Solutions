#include <stdio.h>
int main(){
    int n, count = 0;
    scanf("%d", &n);
    if (n == 0){
        count = 32;
    }
    else{
        while((n& (1 << 31)) == 0){
            n <<= 1;
            count ++;
        }
    }
printf("%d", count);
}
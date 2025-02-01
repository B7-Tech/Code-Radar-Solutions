#include <stdio.h>
int main (){
    int n,i ;
    scanf("%d", &n );
    if (n == 0){
        printf("0");
    }
    else{
        int lz = 1;
        for (i = 31; i >= 0; i--){
            if (n & (1<<i )){
            printf("1");
            lz = 0;
        } else if (!lz ){
            printf("0");
        }
    }
    }
    printf("\n");
    return 0;
}
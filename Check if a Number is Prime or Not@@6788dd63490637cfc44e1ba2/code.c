#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    while(a >1){
        if (a%1 == 0 && a%a == 0){
            printf("Prime");
        }
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
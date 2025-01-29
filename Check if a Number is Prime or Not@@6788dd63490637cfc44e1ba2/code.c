#include <stdio.h>
int main(){
    int n = 1,;
    scanf("%d", &n);
    if (n>1){
        if (n%1 == 0 && n%n == 0 ){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
        return 0;
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
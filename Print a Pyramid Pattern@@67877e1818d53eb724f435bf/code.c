#include <stdio.h> 
int main(){
    int i,j,n, space;
    scanf("%d",&n);
    for(i = 1; i<=n; i++){
        for(j = 1; j<=n-i-1; space){
            printf(" ");
        }
        for (j = 1; j<= (2*i-1); i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>
int main(){
    int n,i,j,s;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
    for(s = 1; s<=n-1; s++){
        printf(" ");
    }
    for (j = 1; j<= i; j++){
        printf("%d", j);
    }
    for(j = i-1; j>= 1; j--){
        printf("%d", j);
    }
    printf("\n");
}
}
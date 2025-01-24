#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if (n >= 90){
        printf("A");
    }
    else if (  90 > n >= 80){
        printf("B");
    }
    else if(80>  n >= 70){
        printf("C");
    }
    else if ( 70 > n >= 60){
        printf("D");
    }
    else if ( n < 60){
        printf("F");
    }
}
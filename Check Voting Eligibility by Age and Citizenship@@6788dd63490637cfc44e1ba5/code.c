#include <stdio.h>
int main(){
    int age, citizenship;
    scanf("%d %d", &age, &citizenship);
    if (age >= 18 && citizenship == 1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}
#include <stdio.h>
int main(){
    int daynum;
    scanf("%d", &daynum);
    if (daynum == 1){
        printf("Monday");
    }
    else if (daynum == 2){
        printf("Tuesday");
    }
    else if (daynum == 3){
        printf("Wednesday");
    }
    else if (daynum == 4){
        printf("Thursday");
    }
    else if (daynum == 5){
        printf("Friday");
    }
    else if (daynum == 6){
        printf("Saturday");
    }
    else if (daynum == 7){
        printf("Sunday");
    }
    else{
        printf("Invalid");
    }
    return 0;
}




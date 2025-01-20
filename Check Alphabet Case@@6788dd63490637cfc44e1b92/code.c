#include <stdio.h>
int main(){
    char input;
    scanf("%c", &input);
    if (input >= 65 && input <= 90){
        printf("Uppercase");
    }
    else if ( 97 <= input && input <=  122){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}
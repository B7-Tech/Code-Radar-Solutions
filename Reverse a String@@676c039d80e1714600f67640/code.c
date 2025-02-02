#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
    char string[20], temp;
    int i, l;
    scanf("%s", string);
    l = strlen(string)-1;
    for(i=0; i<strlen(string)/2; i++){
        temp = string[i];
        string[i] = string[l];
        string[l--]= temp;
    }
    printf("%s", string);
    getch();

}
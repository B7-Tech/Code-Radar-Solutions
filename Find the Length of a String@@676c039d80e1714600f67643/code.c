#include <stdio.h>
#include <string.h>
int main(){
    int count = 0, i = 0;
    char name[30];
    gets(name);
    while(name[i] != '\0'){
        count ++;
        i++;
    }
    printf("%d" , count);
}
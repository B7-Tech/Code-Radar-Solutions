#include <stdio.h>
#include <string.h>
int main(){
    int count = 0;
    char name[30];
    fgets(name);
    count = strlen(name);
    printf("%d", count);
}
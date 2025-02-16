#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int x = sizeof(n);
    if (n&(1 <<(8*x))){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}
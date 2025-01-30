#include <stdio.h>
#include <wchar.h>
int main(){
    int N, i;
    scanf("%d", &N);
    for (i = 1; i<= 10; i++){
        wprintf("%d \u00D7 %d = %d \n", N, i, N*i);
        }
        return 0;
}
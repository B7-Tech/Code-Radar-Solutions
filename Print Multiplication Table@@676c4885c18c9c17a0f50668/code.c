#include <stdio.h>
int main(){
    int i,n;
    scanf("%d", &n);
    for(i = 1; i<= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}

// #include <stdio.h>
// int main(){
//     int N, i;
//     scanf("%d", &N);
//     for (i = 1; i<= 10; i++){
//         printf("%d %c %d = %d \n", N ,120, i, N*i);
//         }
//         return 0;
// }
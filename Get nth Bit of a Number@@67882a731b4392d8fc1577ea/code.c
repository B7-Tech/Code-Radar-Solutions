#include <stdio.h>
int main(){
    int num, bit_position , bit_status;
    scanf("%d", &num);
    scanf("%d", &bit_position);
    bit_status = (num >> bit_position) & 1;
    printf("%d", bit_status);
    return 0;
}
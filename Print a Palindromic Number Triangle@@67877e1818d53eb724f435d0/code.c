#include <stdio.h>

int main() {
    int rows;
    printf("Rows ki sankhya daalain: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++) {
        // Left half
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Right half
        for(int j = i-1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
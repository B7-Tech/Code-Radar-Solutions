#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (char ch = 'A'; ch <= 'A' + (N - i - 1); ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}

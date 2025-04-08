#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    fgets(str, sizeof(str), stdin); 
    while (str[length] != '\0') {
        length++;
    }
    printf("%d", length);
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100];
//     fgets(str, sizeof(str), stdin);
//     int length = strlen(str);
//     printf("%d", length);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0';
//     int length = strlen(str);
//     printf("%d", length);
//     return 0;
// }













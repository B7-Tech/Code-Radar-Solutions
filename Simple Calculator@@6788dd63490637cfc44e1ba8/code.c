#include <stdio.h>
int main(){
    int n1, n2;
    char op;
    scanf("%d %d %c", &n1, &n2, &op);
    if (op == '+'){
        r = n1 + n2;
    }
    else if (op == '-'){
        r = n1 - n2;
    }
    else if (op == '*'){
        r = n1*n2;
    }
    else if (op == '/'){
        r = n1/n2;
    }
    else{
        printf("error");
    }
    printf("%d", r);
    return 0;
}
#include <stdio.h>
int main(){
    float n1, n2, r;
    char op;
    scanf("%f %f %c", &n1, &n2, &op);
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
        if (n2 != 0){
            r = n1/n2;
        }

    }
    else{
        printf("error");
        return 0;
    }
    printf("%.0f", r);
    return 0;
}
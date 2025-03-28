#include <stdio.h>
int main(){
  for(i = 1; i<n; i++){
    for(j = n; j>= i; j--){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
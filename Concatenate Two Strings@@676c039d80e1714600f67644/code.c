#include <stdio.h>  
#include <string.h>  
int main()
{  
  char string_1[25]; 
  char string_2[25]; 
  scanf("%s", string_1); 
  scanf("%s",string_2);   
  strcat(string_1,string_2);
  printf("%s",string_1);  
  return 0;  
}  

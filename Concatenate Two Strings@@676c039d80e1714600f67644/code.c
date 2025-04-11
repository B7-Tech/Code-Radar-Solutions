#include <stdio.h>  
#include <string.h>  
int main()
{  
  char string_1[25]; // char array  is declared
  char string_2[25]; // char array  is declared

  printf("Enter value for string_1 : ");  // first string is taken as input
  scanf("%s", string_1); 

  printf("\nEnter value for string_2 : ");  // second string is taken as input
  scanf("%s",string_2);   

  strcat(string_1,string_2);  // concatenation is done here

  printf("After concatenation is done, the new concatenated string will be: %s",string_1);  
  return 0;  
}  

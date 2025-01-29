#include <stdio.h>
int main()
{
   float n;
    scanf("%f", &n);
    if (n>1)
    {
        if (n%n == 0)
        {
            printf("Prime");
        }
        else
        {
            printf("Not Prime");
        }
        return 0;
    }
    return 0;
}
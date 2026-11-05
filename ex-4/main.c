#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x = 0;
    while(x==0)
    {
        printf("entrez un nombre superieur à zero : \n");
        scanf("%d", &x);
    }
    int y = 0;
    while(y<=x)
    {
        printf("%d \n", y);
        y = y+1;
    }
}
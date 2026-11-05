#include <stdlib.h>
#include <stdio.h>

int main()
{
    char symbol;
    int x;
    printf("entrez le symbol que vous voulez entre + et - : \n");
    scanf("%c", &symbol);
    printf("entrez un nombre diférent de zero : \n");
    scanf("%d", &x);
    if(symbol == '+')
    {
        int y = 0;
        while(y <= x)
        {
            printf("%d",y);
            y = y+1;
        }
    }
    else if(symbol == '-')
    {
        int y = x;
        while(y>=0)
        {
            printf("%d",y);
            y = y - 1;
        }
    }
    else
    {
        printf("symbol incorrect");
    }

}
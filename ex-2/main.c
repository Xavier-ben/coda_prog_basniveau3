#include <stdlib.h>
#include <stdio.h>

int main()
{

    char symbol;
    printf("choisissez votre opération : +, -, /, *, %%");
    scanf("%c", &symbol);
    if(symbol == '+')
    {
        printf("addition");
    }
    else if(symbol == '-')
    {
        printf("soustraction");
    }
    else if(symbol == '/')
    {
        printf("division");
    }
    else if(symbol == '*')
    {
        printf("multiplication");
    }
    else if(symbol == '%')
    {
        printf("division reste de division");
    }
}
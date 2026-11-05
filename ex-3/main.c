#include <stdlib.h>
#include <stdio.h>

int main()
{
    char * phrase;
    scanf("%s", phrase);
    int x = 5;
    while(x>0)
    {
        printf("%s \n", phrase);
        x = x - 1;
    }
    exit(0);
}
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int nombre;
    printf("Choisissez un nombre : ");
    scanf("%d", &nombre);
    if(nombre > 42)
    {
        printf("votre nombre est superieur à 42");
    }
    else if(nombre<42)
    {
        printf("votre nombre est inferieur à 42");
    }
    else
    {
        printf("votre nombre est égale à 42");
    }
    exit(0);
}
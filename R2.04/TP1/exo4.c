#include <stdio.h>

int main() {
    int i;
    printf("Veuillez saisir un nombre :");
    scanf("%d",i);

    if (i>0)
    {
        printf("Le nombre est superieur à 0");
    }
    else if (i<0)
    {
        printf("Le nombre est inferieur à 0");
    }
    else
    {
        printf("Le nombre est égal à 0");
    }
    

    return 0;
}
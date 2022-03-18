#include <stdio.h>
int main()
{
    int nbr, i;
    
    printf("Entrez un entier: ");
    scanf("%d",&nbr);
    
    printf("\nTable de multiplication de %d est: \n", nbr);
    for(i=1; i<=10; ++i)
    {
        printf(" %d * %d = %d \n", nbr, i, nbr*i);
    }
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct televiseur
{
    int id[10];
    int largeur;
    int hauteur;
    int surface;
} Televiseur;

int count_char ( char * chaine, char ch );
int count_sschaine ( char * chaine, char * sschaine );
void calculeSurface ( Televiseur * t );
void afficheTeleviseur ( Televiseur t );
void afficheDonnees ( Televiseur * t, int ttab );
Televiseur * copieTab ( Televiseur * t, int ttab );

int count_char ( char * chaine, char ch ) {
    int i=0;
    int occ = 0;
    do
    {
        if (chaine[i] == ch)
        {
            occ++;
        }
        i++;
    } while (chaine[i] != '\0');
    
    return occ;
}

int nbchar ( char * chaine) {
    int i=0;
    do
    {
        i++;
    } while (chaine[i] != '\0');

    return i;
}

int count_sschaine ( char * chaine, char * sschaine ) {

    int nbcharSSchaine = nbchar(sschaine);
    int nbcharChaine = nbchar(chaine);
    int occ = 0;
    for (int i = 0; i < nbcharChaine-nbcharSSchaine+1; i++)
    {
        if (chaine[i] == sschaine[0])
        {
            int chaineCorrespond = 1;
            int decalage = 1;
            do
            {
                if (chaine[i+decalage] != sschaine[decalage])
                {
                    chaineCorrespond = 0;
                }
                decalage++;
            } while (chaineCorrespond && decalage<nbcharSSchaine);
            if (chaineCorrespond == 1)
            {
                occ++;
            }
            
        }
        
    }
    return occ;
    
}

void calculeSurface ( Televiseur * t ) {
    (*t).surface = (*t).hauteur*(*t).largeur;
}

void afficheTeleviseur ( Televiseur t ){
    printf("id : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d",t.id);
    }
    printf(" largeur : %d hauteur : %d surface : %d",t.largeur,t.hauteur,t.surface);
}

void afficheDonnees ( Televiseur * t, int ttab ) {
    int largeurSup120 = 0;
    float sommeSurfaces = 0;
    for (int i = 0; i < ttab; i++)
    {
        sommeSurfaces = sommeSurfaces + t[i].surface;
    }
    printf("%f\ngtr",sommeSurfaces);
    float surfaceMoyenne = sommeSurfaces/ttab;
    for (int i = 0; i <ttab; i++) {
        if (t[i].largeur>120)
        {
            largeurSup120++;
        }
    }
    printf("%f\n%d",surfaceMoyenne,largeurSup120);
}

Televiseur *  copieTab ( Televiseur * t, int ttab ) {
    Televiseur* p = (Televiseur*)malloc(sizeof(int)* (ttab));
     if (p == NULL) {
        return NULL;
    }

    for (int i = 0; i < ttab ; i++) {
        p[i] = t[i];
    }
    return p;
}

int * sommesTableaux ( int ** tab, int * tailles, int taille) {
    int t
    for (int i = 0; i < taille; i++)
    {
        for (int j = 0; j < tailles[i]; j++)
        {
            
        }
        
    }
    
}
#include <stdio.h>
#include <stdlib.h>

typedef struct point2D {
    float x;
    float y;
} Point2D;

typedef struct liste_Point2D {
    Point2D p;
    struct liste_Point2D* suivant;
} Liste_Point2D;

Liste_Point2D* nouvelleListe(Point2D p){
    Liste_Point2D* liste = malloc(sizeof(Liste_Point2D));
    liste->p = p;
    liste->suivant = NULL;
    return liste;
}

Liste_Point2D* inserer (Liste_Point2D* maliste, Point2D p) {
    Liste_Point2D* liste = malloc(sizeof(Liste_Point2D));
    liste->p = p;
    liste->suivant = maliste;
    return liste;
}

Liste_Point2D* supprimerPremier (Liste_Point2D* maliste) {
    Liste_Point2D* nvListe = maliste->suivant;
    free(maliste);
    return nvListe;
}

void parcourir (Liste_Point2D* maliste) {
    int i = 1;
    while (maliste != NULL) {
        printf("Point %d: %f;%f\n", i,maliste->p.x,maliste->p.y);
        maliste = maliste->suivant;
        i++;
    }
}

int * rechercher (Liste_Point2D * maliste, Point2D p, int * taille) {
    int* points = malloc(sizeof(int));
    *taille = 0;
    int indice = 0;
    while (maliste != NULL) {
        if (maliste->p.x == p.x && maliste->p.y == p.y)
        {
            *taille = *taille+1;
            points = realloc(points, sizeof(int)*(*taille));
            points[*taille-1] = indice;
        }
        indice++;
        maliste = maliste->suivant;
    }
    return points;
}

int main(int argc, char const *argv[])
{
    Point2D p, p2, p3;
    p.x = 1;p2.x = 2;p3.x = 3;
    p.y = 4;p2.y = 5;p3.y = 6;
    Liste_Point2D* liste = nouvelleListe(p);
    liste = inserer(liste, p3);
    liste = inserer(liste, p2);
    liste = supprimerPremier(liste);
    parcourir(liste);
    int* taille = malloc(sizeof(int));
    int* points = rechercher(liste,p,taille);
    printf("%d point(s)",*taille);
    return 0;
}
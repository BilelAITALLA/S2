#include <stdio.h>

typedef struct point2D
{
    float x;
    float y;
} Point2D;

Point2D milieu(Point2D point1, Point2D point2) {
    Point2D milieu;
    milieu.x = (point1.x+point2.x)/2;
    milieu.y = (point1.y+point2.y)/2;
    return milieu;
}

Point2D symOrigin(Point2D point1) {
    Point2D sym;
    sym.x = -point1.x;
    sym.y = -point1.y;

    return sym;
}

int *renvoie_table_mult(int table, int taille_table) {
    int *p = (int*) malloc(sizeof(int)*taille_table);
    if (*p == NULL) {
        return NULL;
    }
    int tab[taille_table];
    &tab = *p;
    
}
#include <stdio.h>
#define TAILLE_GRILLE 6


void init_grille (int grille[TAILLE_GRILLE][TAILLE_GRILLE]) {
	for (int ligne = 0; ligne < TAILLE_GRILLE; ++ligne) {
		for (int colonne = 0; colonne < TAILLE_GRILLE; ++colonne) {
			grille[ligne][colonne] = 0;
		}
	}
}
void affiche_grille (int grille[TAILLE_GRILLE][TAILLE_GRILLE]) {
	for (int ligne = TAILLE_GRILLE-1; ligne >=0; --ligne) {
		for (int colonne = 0; colonne < TAILLE_GRILLE; ++colonne) {
			printf("|");
			if (grille[ligne][colonne]==0) {
				printf(" ");
			} else if (grille[ligne][colonne]==1) {
				printf("O");
			} else {
				printf("X");
			}
		}
		printf("|\n");
	}
}

int main () {
	
	int grille[TAILLE_GRILLE][TAILLE_GRILLE];

	init_grille (grille);
	affiche_grille (grille);

	grille[0][0] = 1;
	grille[0][2] = 2;

	printf("\n");
	affiche_grille (grille);
}
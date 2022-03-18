#include <stdio.h>

#define TAILLE_GRILLE 6


int hauteur_colonne ( int grille[TAILLE_GRILLE][TAILLE_GRILLE], int colonne ) {
	int hauteur = 0;
	for (int ligne = 0; ligne < TAILLE_GRILLE; ++ligne) {
		if (grille[ligne][colonne] != 0) {
			hauteur++;
		}
	}
	return hauteur;
}

int poser_jeton ( int grille[TAILLE_GRILLE][TAILLE_GRILLE], int colonne, int joueur) {
	int hauteur = hauteur_colonne(grille,colonne);
	if (hauteur==TAILLE_GRILLE) {
		return -3;
	} else if (colonne<0||colonne>TAILLE_GRILLE-1) {
		return -2;
	} else if (joueur<1||joueur>2) {
		return -1;
	} else {
		grille[hauteur][colonne] = joueur;
		return hauteur;
	}
}

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

int scan_colonne() {
	int colonne;
	do {
		printf("Saisissez une colonne pour jouer :\n");
		scanf("%d",&colonne);
	} while(colonne>TAILLE_GRILLE-1 || colonne<0);
	return colonne;
}

int verifie_gagne (int grille[TAILLE_GRILLE][TAILLE_GRILLE] , int colonne , int ligne, int joueur) {
    //Verification Horizontale
    int nbAlignG = 0;
    int colonnesG = 1;
	while(grille[ligne][colonne-colonnesG] == joueur && colonnesG<=3 && colonnesG<=colonne) {
		nbAlignG++;
		colonnesG++;
	}
	int nbAlignD = 0;
    int colonnesD = 1;
	while(grille[ligne][colonne+colonnesD] == joueur && colonnesD<=3 && colonnesD<=TAILLE_GRILLE-colonne-1) {
		nbAlignD++;
		colonnesD++;
	}

	//Verification Verticale
	int nbAlignVert = 0;
    int lignesB = 1;
	while(grille[ligne-lignesB][colonne] == joueur && lignesB<=3 && lignesB<=ligne) {
		nbAlignVert++;
		lignesB++;
	}

	//Verification Premiere Diagonale
	int nbAlignPDH = 0;
    int lignesColonnesPDH = 1;
	while(grille[ligne+lignesColonnesPDH][colonne+lignesColonnesPDH] == joueur && lignesColonnesPDH<=3 && lignesColonnesPDH<=TAILLE_GRILLE-colonne-1 && lignesColonnesPDH<=TAILLE_GRILLE-ligne-1) {
		nbAlignPDH++;
		lignesColonnesPDH++;
	}
	int nbAlignPDB = 0;
    int lignesColonnesPDB = 1;
	while(grille[ligne-lignesColonnesPDB][colonne-lignesColonnesPDB] == joueur && lignesColonnesPDB<=3 && lignesColonnesPDB<=colonne && lignesColonnesPDB<=ligne) {
		nbAlignPDB++;
		lignesColonnesPDB++;
	}

	//Verification Deuxième Diagonale
	int nbAlignDDH = 0;
    int lignesColonnesDDH = 1;
	while(grille[ligne+lignesColonnesDDH][colonne-lignesColonnesDDH] == joueur && lignesColonnesDDH<=3 && lignesColonnesDDH<=colonne && lignesColonnesDDH<=TAILLE_GRILLE-ligne-1) {
		nbAlignDDH++;
		lignesColonnesDDH++;
	}
	int nbAlignDDB = 0;
    int lignesColonnesDDB = 1;
	while(grille[ligne-lignesColonnesDDB][colonne+lignesColonnesDDB] == joueur && lignesColonnesDDB<=3 && lignesColonnesDDB<=TAILLE_GRILLE-colonne-1 && lignesColonnesDDB<=ligne) {
		nbAlignDDB++;
		lignesColonnesDDB++;
	}

	//Verification Victoire
	int nbAlignHorizontal = nbAlignD+nbAlignG;
	int nbAlignPremiereDiagonale = nbAlignPDB+nbAlignPDH;
	int nbAlignDeuxiemeDiagonale = nbAlignDDB+nbAlignDDH;
	if (nbAlignHorizontal >= 3 || nbAlignPremiereDiagonale >= 3 || nbAlignDeuxiemeDiagonale >= 3 || nbAlignVert >=3) {
		return 1;
	} else {
		return 0;
	}
}

int main () {
	
	int grille[TAILLE_GRILLE][TAILLE_GRILLE];

	init_grille (grille);
	affiche_grille (grille);

	printf ("%d\n", poser_jeton ( grille, 0, 1 ) ) ;
	poser_jeton ( grille, 0, 2 );
	printf("Hauteur colonne : %d\n", hauteur_colonne(grille,0));
	printf ("%d", poser_jeton ( grille, 6, 1) );

	poser_jeton ( grille, 0, 1 )  ;
	poser_jeton ( grille, 0, 2 )  ;
	poser_jeton ( grille, 0, 1 )  ;
	poser_jeton ( grille, 0, 2 )  ;
	
	printf ("%d", poser_jeton ( grille, 0, 1) );

	printf("\n");
	affiche_grille (grille);

	printf("%d\n", scan_colonne());
}
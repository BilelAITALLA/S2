#include <stdio.h>

int n = 5;

int saisie_tab(int tab[n]) {
	for (int i = 0; i < n; ++i)
	{
		printf("Veuillez saisir un entier pour l'index %d\n", i);
		scanf("%d",&tab[i]);
	}
}
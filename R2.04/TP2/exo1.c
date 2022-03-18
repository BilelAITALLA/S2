#include <stdio.h>

#define N 5

void saisie_tab(int tab[N]) {
	for (int i = 0; i < N; ++i)
	{
		printf("Veuillez saisir un entier pour l'index %d\n", i);
		scanf("%d",&tab[i]);
	}
}

void affichetab(int tab[N]){
	for (int i = 0; i < N; ++i)
	{
		printf("%d\n", tab[i]);
	}
}

void affichechaine(char chaine[]) {
	int i = 0;
	while(chaine[i] != '\0') {
		printf("%c\n", chaine[i]);
		i++;
	}
}

void copiechaine(char ch1[], char ch2[]) {
	int i = 0;
	while(ch1[i] != '\0') {
		ch2[i]=ch1[i];
		i++;
	}
}

void copietableau(int tab1[N], int tab2[N]) {
	for (int i = 0; i < N; ++i)
	{
		tab2[i] = tab1[i];
	}
}

int taillechaine(char ch[]) {
	int i = 0;
	while(ch[i] != '\0') {
		i++;
	}
	return i;
}

int palindrome(char ch[]) {
	char chEnvers[taillechaine(ch)];
	int j = 0;
	for (int i = taillechaine(ch)-1;i >= 0; --i)
	{
		chEnvers[j] = ch[i];
		j++;
	}
	for (int i = 0; i < taillechaine(ch); ++i)
	{
		if (chEnvers[i] != ch[i])
		{
			return 0;
		}
	}
	return 1;
}

int t[N];
int t2[N];
char ch[] = "BONJNUB";
char ch2[] = "";

void main() {
	/*saisie_tab(t);
	affichetab(t);
	affichechaine(ch);
	copiechaine(ch,ch2);
	printf("--------------------------\n");
	affichechaine(ch2);
	copietableau(t,t2);
	affichetab(t2);*/
	printf("%d\n", taillechaine(ch));
	printf("%d\n", palindrome(ch));
}
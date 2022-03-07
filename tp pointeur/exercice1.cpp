/*
exercice 1: Ecrire un programme qui apelle une fonction qui prend en parametre :
	*un tableau d'entier de taille quelquonque
	* un pointeur sur un entier min et un pointeur sur un entier max.
La fonction doit retourner dans les pointeurs respectivement les valeurs min et max du tableau d'entier
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void chercherMinMax(int *pmin, int *pmax, int *ptab, int taille)
{
	for (int i = 0; i < taille; ++i) {
		if (*ptab[i] < *pmin) {
			*pmin = *ptab[i];
		}
		if (*ptab[i] < *pmax) {
			*pmax = *ptab[i];
		}
	}

}

void main()
{
	int tab[8] = { 1,2,34};
	int max;
	int min;
	
	std::cout << "entrer une valeur : \n";
	std::cin >>	"la vaneur minimum es %d", 
}
//le maximum et le minimum dans un tableau d'entier
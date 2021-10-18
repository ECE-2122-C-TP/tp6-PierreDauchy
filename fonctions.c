//
// Created by pmdau on 13/10/2021.
//
#include <stdio.h>
#include "macros.h"
#include "structures.h"

/*******
 * EX1 *
 *******/

/* Fonction qui permet à l'utilisateur de saisir un entier
* Paramètres :
* - IN : void
* - OUT : l'entier saisi par l'utilisateur
*/

int saisirEntier(void)
{
    int entierSaisi = 0;
    printf("Saisir un entier : \n>");
    scanf("%d", &entierSaisi);
    return entierSaisi;
}

/* Fonction qui permet à l'utilisateur de saisir un réel
* Paramètres :
* - IN : void
* - OUT : le réel renvoyé par l'utilisateur
*/

double saisirReel(void)
{
    double reelSaisi = 0;
    printf("Saisir un reel : \n>");
    scanf("%lf", &reelSaisi);                //lf pour saisir un double
    return reelSaisi;
}

/* Fonction qui prend les adresses de deux paramètres et les initialise à zero
* Paramètres :
* - IN : les adresses d'un entier et d'un réel à initialiser
* - OUT : void
*/

void initialisationEntierEtReel(int* entier, double* reel)
{
    *entier = 0;
    *reel = 0.0;
    return;
}

/*******
 * EX2 *
 *******/

/* Procédure qui renvoie le quotient et le reste de la division euclidienne de deux entiers a et b
* Paramètres :
* - IN : les entiers a et b, le quotient(q) et le reste(r) de la division euclidienne
* - OUT : void
*/

void procedureQuotientReste (int a, int b, int* quotient, int* reste)
{
    *quotient = a / b;
    *reste = a % b;
    return;
}

/* Fonction qui renvoie le reste de la division euclidienne de deux entiers a et b et change le quotient
* Paramètres :
* - IN : les entiers a et b, le quotient(q) la division euclidienne
* - OUT : le reste de la division euclidiene
*/

int fonctionQuotientReste (int a, int b, int* quotient)
{
    *quotient = a / b;
    return a % b;
}

/*******
 * EX3 *
 *******/

/* Procédure qui prend deux entiers avec des adresses différentes et renvoie les valeurs inversées d'emplacement
* Paramètres :
* - IN : les entiers a et b
* - OUT : void
*/

void echangeValeursEntiers(int* a, int* b)
{
    int i = *a;
    *a = *b;
    *b = i;
    return;
}

/*******
 * EX4 *
 *******/

/* Procédure qui calcule la somme et le produit des éléments d'un tableau à une dimension...
* Paramètres :
* - IN : le tableau
* - OUT : void
*/

void procedureSommeProduitTableau(int tableau[TAILLE_TABLEAU])
{
    int somme = 0, produit = 1, i = 0;           // produit = 1 car sinon on a toujours un produit nul
    for (i = 0; i <TAILLE_TABLEAU; i++)
    {
        somme += tableau[i];              // chaque élément du tableau s'ajoute à la somme globale
        produit *= tableau[i];            // chaque élément du tableau se multiplie au produit global
    }
    printf("La somme des valeurs dans ce tableau vaut : %d\n", somme);
    printf("Le produit des valeurs dans ce tableau vaut : %d\n", produit);
    return;
}

/* Fonction qui permet de saisir le nombre de valeurs que l'utilisateur veut rentrer dans le tableau
* Paramètres :
* - INOUT : Le tableau monTableau
* - IN : les valerus entrées par l'utilisateur et l'indice ou la valeur sera stockée
* - OUT : Le tableau modifié
*/

void saisirValeurDansTableau(int indiceDansTableau, int monTableau[TAILLE_TABLEAU])
{
    printf("Saisir la valeur a entrer a l'espace d'indice %i \n>", indiceDansTableau);
    scanf("%i", &monTableau[indiceDansTableau]);
    return;
}

/*******
 * EX5 *
 *******/

/* Procédure qui permet d'échanger les valeurs de deux points différents
* Paramètres :
* - IN : les adresses des coordonnées des points 2D
* - OUT : void
*/

void echangerValeursStructurePoint(Point* Point1, Point* Point2)
{
    float x1Temp = (*Point1).x, y1Temp = (*Point1).y;
    (*Point1).x = (*Point2).x;
    (*Point1).y = (*Point2).y;
    (*Point2).x = x1Temp;
    (*Point2).y = y1Temp;
    return;
}
//
// Created by pmdau on 13/10/2021.
//

#ifndef TP6_FONCTIONS_H
#define TP6_FONCTIONS_H
#include "macros.h"
#include "structures.h"

/*******
 * EX1 *
 *******/
int saisirEntier(void);
double saisirReel(void);
void initialisationEntierEtReel(int* entier, double* reel);

/*******
 * EX2 *
 *******/
void procedureQuotientReste(int a, int b, int* quotient, int* reste);
int fonctionQuotientReste (int a, int b, int* quotient);

/*******
 * EX3 *
 *******/
void echangeValeursEntiers(int* a, int* b);

/*******
 * EX4 *
 *******/
void procedureSommeProduitTableau(int tableau[TAILLE_TABLEAU]);
void saisirValeurDansTableau(int indiceDansTableau, int monTableau[TAILLE_TABLEAU]);

/*******
 * EX5 *
 *******/
void echangerValeursStructurePoint(Point* Point1, Point* Point2);

#endif //TP6_FONCTIONS_H

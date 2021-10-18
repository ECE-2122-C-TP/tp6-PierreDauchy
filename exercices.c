//
// Created by pmdau on 13/10/2021.
//
#include <stdio.h>
#include "fonctions.h"


void ex1()
{
    int entier = saisirEntier();
    double reel = saisirReel();
    printf("Les valeurs non initialisees valent :\n%d \t %lf\n", entier, reel);
    initialisationEntierEtReel(&entier, &reel);
    printf("Les valeurs initialisees a zero valent :\n%d \t %lf", entier, reel);
    return;
}

void ex2()
{
    printf("Nous allons diviser le premier entier saisi par le deuxieme\n");
    int a = saisirEntier(), b = saisirEntier(), quotient = 0, reste = 0;
    printf("a = %d\nb = %d\n", a, b);
    printf("initialisation : \nquotient = %d\nreste = %d\n", quotient, reste);
    procedureQuotientReste(a, b, &quotient, &reste);
    printf("Apres procedure :\nquotient = %d\nreste = %d\n", quotient, reste);
    quotient = 0;                 //on reinitialise les variables quotient et reste pour la deuxieme methode
    reste = 0;
    printf("reinitialisation :\nquotient = %d\nreste = %d\n", quotient, reste);
    fonctionQuotientReste(a, b, &quotient);
    printf("Apres fonction :\nquotient = %d\nreste = %d\n", quotient, reste);
    reste = fonctionQuotientReste(a, b, &quotient);
    printf("Apres fonction plus affection a reste :\nquotient = %d\nreste = %d\n", quotient, reste);
    quotient = 0;          //on reinitialise les variables quotient et reste pour la troisieme methode
    reste = 0;
    printf("reinitialisation :\nquotient = %d\nreste = %d\n", quotient, reste);
    printf("fonction dans le printf :\nquotient = %d\nreste = %d\n", quotient, fonctionQuotientReste(a, b, &quotient));
    return;
}
//La différence réside dans le fait que le reste de la fonction n'est pas directement stocké en mémoire
// c'est le résultat d'une fonction, il faut donc appeler la fonction ou affecter les valeur au reste
// Alors que la procédure permet avec un jeu de modification de valeur par adresse de n'appeler la fonction qu'une fois...

void ex3()
{
    printf("Nous allons echanger les valeurs saisies\n");
    int a = saisirEntier(), b = saisirEntier();
    printf("Avant l'echange :\na = %d\nb = %d\n", a, b);
    echangeValeursEntiers(&a, &b);
    printf("Apres l'echange :\na = %d\nb = %d\n", a, b);
    return;
}

void ex4()
{
    printf("Ce programme va renvoyer la somme et le produit des valeurs rentrees dans le tableau\n");
    int monTableau[TAILLE_TABLEAU] = {0}, i = 0;
    printf("Vous allez devoir saisir %d valeurs dans le tableau\n", TAILLE_TABLEAU);        //utilisation d'une macro pour changer la taille du tableau à volonté
    for (i = 0; i < TAILLE_TABLEAU; i++)
    {
        saisirValeurDansTableau(i, monTableau);
    }
    procedureSommeProduitTableau(monTableau);
    return;
}

void ex5()
{
    printf("Le programme va echanger les points saisis\n");
    Point Point1 = {0.0f, 0.0f}, Point2 = {0.0f, 0.0f};
    printf("Saisir la valeur x1 du premier point :\n");
    scanf("%f", &Point1.x);
    printf("Saisir la valeur y1 du premier point :\n");
    scanf("%f", &Point1.y);
    printf("Saisir la valeur x2 du deuxieme point :\n");
    scanf("%f", &Point2.x);
    printf("Saisir la valeur y2 du deuxieme point :\n");
    scanf("%f", &Point2.y);
    printf("Les coordonnees du Point1 valent :\nx1 = %.2f\ny1 = %.2f\n", Point1.x, Point1.y);
    printf("Les coordonnees du Point2 valent :\nx2 = %.2f\ny2 = %.2f\n", Point2.x, Point2.y);
    echangerValeursStructurePoint(&Point1, &Point2);
    printf("\nEchange\n\n");
    printf("Les coordonnees du Point1 valent :\nx1 = %.2f\ny1 = %.2f\n", Point1.x, Point1.y);
    printf("Les coordonnees du Point2 valent :\nx2 = %.2f\ny2 = %.2f\n", Point2.x, Point2.y);
    return;
}
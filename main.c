#include <stdio.h>
#include "exercices.h"

int main()
{
    int choixExercice = 0;
    printf("=====\tTP6 : Les pointeurs\t=====\n");
    do
    {
        printf("Veuillez saisir le numero d'exercice a lancer : \n- FINIR LE PROGRAMME(0) \n- EXERCICE 1(1) \n- EXERCICE 2(2) \n- EXERCICE 3(3) \n- EXERCICE 4(4) \n- EXERCICE 5(5) \n>");
        scanf("%d", &choixExercice);
        switch (choixExercice)
        {
            case 0 :
            {
                printf("Merci d'avoir utilise mon code, a bientot");
                break;
            }
            case 1 :
            {
                ex1();
                printf("\n");
                break;
            }
            case 2 :
            {
                ex2();
                printf("\n");
                break;
            }
            case 3 :
            {
                ex3();
                printf("\n");
                break;
            }
            case 4 :
            {
                ex4();
                printf("\n");
                break;
            }
            case 5 :
            {
                ex5();
                printf("\n");
                break;
            }
            default :
            {
                printf("Choix Invalide ! Veuillez selectionner un autre numero d'exercice :\n");
                break;
            }
        }
    }while (choixExercice != 0);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define OCTET16 65536

/* Trouver les nombres sympathiques entre deux entiers saisi
 * Par Dan Sebag, Steven Wong et Quentin Jolli
 */

int main() {
    unsigned int choose;
    do {
        int nb1, nb2;
        int i, counter0, counter1, missing0, temp1, temp2, j = 0, nb1Bis, tempNb1;
        long saveNb1, rest;
        printf("\n1. Lancer le programme\n");
        printf("2. Quitter le programme\n");
        scanf("%u", &choose);

        switch (choose) {
            case 1:
                printf("Saisir un premier entier : \n");
                scanf("%d", &nb1);
                printf("Saisir un second entier :\n");
                scanf("%d", &nb2);
                nb1Bis = nb1; // Sauvegarde la valeur de nb1 pour l'affichage

                if (nb1 >= nb2) { // Si nb1 est bien sup ou égale a nb2 on execute ce qui se trouve en dessous

                    tempNb1 = nb1;
                    nb1 = nb2;
                    nb2 = tempNb1;
                }

                do {
                    counter0 = 0; // Compteur de 0

                    counter1 = 0; // Compteur de 1

                    i = 0; // Compteur d'octet

                    if (nb1 < 0) { // Pour le cas ou nb1 est négatif

                        saveNb1 = nb1 + OCTET16; // Transforme nb1 négatif en nb1 possitif sur 16 octets

                    } else if (nb1 > 0) { // Si nb1 est possitif

                        saveNb1 = nb1; // On met tout simplement la valeur de nb1 dans saveNb1
                    }

                    while (saveNb1 > 0) { // La boucle While va convertir l'entier décimal en nombre binaire

                        rest = saveNb1 % 2; // Calcul le rest qui sera égal sois à 1 sois à 0

                        saveNb1 /= 2; // On divise par deux pour re calculer le rest une nouvelle fois

                        if (rest == 0) {

                            // Si le rest = 0 alors on va ajouter 1 à counter0

                            counter0++;
                        } else {
                            // Si le rest = 1 alors on va ajouter 1 à counter1
                            counter1++;
                        }
                        i++; // Ajouter 1 au compteur de octets
                    }

                    // Condition qui va calculer le nombre de 0 manquant sur 16 octets

                    if (i < 16) {
                        missing0 = 16 - i;
                        counter0 += missing0;
                    }

                    // Condition si c'est un nombre sympathique

                    if (counter0 == counter1) {
                        temp2 = temp1; // Stocke la valeur de temp1 dans temp2 (vide la première fois)

                        temp1 = nb1; // Stocke la valeur de nb1 dans temp1

                        // Condition qui va s'exectuter au deuxième tour

                        if (j != 0) {
                            if (j == 1) {
                                printf("%d", temp2);
                            } else if (j != 1)
                                printf(",%d ", temp2);
                        }
                        j++; // Compteur de nombre sympathiques
                    }
                    nb1++; // Ajoute 1 à nb1 tant que nb1 <= nb2

                } while (nb2 >= nb1);

                if (j == 0){ // Si il n'y a pas de nombre sympathique

                    printf("Il n'y a pas de nombres sympathiques entre %d et %d", nb1Bis, nb2);

                }else if(j == 1) { // Si il y a qu'un seul nombre sympathique

                    printf("%d\n", temp1);

                }else if(j > 1) { // Si il y a plus d'un nombre sympathiques

                    printf(" et %d", temp1);
                }
                break;

            case 2:
                printf("Merci d'avoir lancer le programme !\n");
                break;
        }

    } while (choose != 2);

    system("PAUSE");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define OCTET16 65536

int main() {
    char restart;
    do {
        int nb1, nb2;
        int i, counter0, counter1, missing0, temp1, temp2, j = 0, nb1Bis, tempNb1;
        long saveNb1, rest;
        printf("Saisir un premier entier : \n");
        scanf("%d", &nb1);
        printf("Saisir un second entier :\n");
        scanf("%d", &nb2);
        nb1Bis = nb1; // Sauvegarde la valeur de nb1 pour l'affichage

        if(nb1 >= nb2){ // Si nb1 est bien sup ou égale a nb2 on execute ce qui se trouve en dessous

            tempNb1 = nb1;
            nb1 = nb2;
            nb2 = tempNb1;
        }

        do {
            counter0 = 0; // Compteur de 0

            counter1 = 0; // Compteur de 1

            i = 0; // Compteur d'octet

            if (nb1 < 0){ // Pour le cas ou nb1 est négatif

                saveNb1 = nb1 + OCTET16; // Transforme nb1 négatif en nb1 possitif sur 16 octets

            }else if(nb1 > 0) { // Si nb1 est possitif

                saveNb1 = nb1; // On met tout simplement la valeur de nb1 dans saveNb1
            }

            while (saveNb1 > 0) { // La boucle While va convertir l'entier décimal en nombre binaire

                rest = saveNb1 % 2; // Calcul le rest qui sera égal sois à 1 sois à 0

                saveNb1 /= 2; // On divise par deux pour re calculer le rest une nouvelle fois

                if(rest == 0) {

                    // Si le rest = 0 alors on va ajouter 1 à counter0

                    counter0++;
                }
                else {
                    // Si le rest = 1 alors on va ajouter 1 à counter1
                    counter1++;
                }
                i++; // Ajouter 1 au compteur de octets
            }
            if(i < 16){
                missing0 = 16 - i;
                counter0 += missing0;
            }
            if(counter0 == counter1){
                temp2 = temp1;
                temp1 = nb1;
                if(j != 0){
                    if(j == 1){
                        printf("%d", temp2);
                    }else if(j != 1)
                        printf(",%d ", temp2);
                }
                j++;
            }
            nb1++;
        } while (nb2 >= nb1);
        if(j == 0)
            printf("Il n'y a pas de nombres sympathiques entre %d et %d", nb1Bis, nb2);
        else if(j == 1)
            printf("%d\n", temp1);
        else if(j > 1)
            printf(" et %d", temp1);
        fflush(stdin);
        printf("\nVoulez vous recommencer ? (o = oui | O = oui)\n");
        scanf("%c", &restart);
    } while (restart == 'o' || restart == 'O');

    system("PAUSE");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
 * Determiner si des entiers sont dit "magiques"
 * Par Dan Sebag, Steven Wong et Quentin Jolli
 */
int main() {
    unsigned int choose;
    do {
        unsigned int nbUser, temp, modulo, digitSum = 0, tempDigit, tempDigitSum = 0, magic;

        printf("\n1. Partie 1\n");
        printf("2. Partie 2\n");
        printf("3. Quitter\n");
        scanf("%u", &choose);

        switch (choose) {

            // 1ère partie

            case 1:
                printf("Saisir un nombre entier:\n");
                scanf("%u", &nbUser);

                do {
                    modulo = nbUser%10; // Récupère le chiffre des unités

                    nbUser -= modulo; // Le chiffre obtenu par le modulo est "suprimer" de l'entier saisi

                    nbUser /= 10; // L'entier obtenu au dessus est diviser par 10 pour recommencer l'opération

                    if(modulo == 4 || modulo == 5 || modulo == 6)
                        magic = 1;
                    else
                        magic = 0;

                    // Sors de la boucle si l'entier saisi n'est pas strictement supérieur à 0 est que magic == 1

                } while (nbUser > 0 && magic == 1);


                if(magic == 0){ // Si magic != 1 alors c'est pas un nombre magique

                    printf("Ce n'est pas un nombre magique !\n");

                } else { // Sinon c'est un nombre magique

                    printf("C'est un nombre magique !\n");
                }

                break;

                // 2ème partie

            case 2:
                do {
                    printf("Saisir un nombre entier compris entre 10 et 99:\n");
                    scanf("%u", &nbUser);

                    /*
                     * Saisir un nombre tant que le nombre saisi est inférieur à 10 ou supérieur a 99
                     */

                } while (nbUser < 10 || nbUser > 99);

                do {
                    modulo = nbUser%10; // Récupère le chiffre des unités du nombre saisi

                    nbUser -= modulo; // Le "supprime" de celui ci

                    nbUser /= 10; // Récupère le chiffre des dizaines

                    temp = modulo; // Stocke le modulo du nombre saisi dans une variable temp

                    digitSum += temp; // Additionne les chiffres entre eux

                    /*
                     * Les conditions qui vont suivre servent à savoir
                     * chaque chiffre est fait avec combien de barres
                     */

                    if(temp == 0)
                        tempDigit = 6;
                    else if(temp == 1)
                        tempDigit = 2;
                    else if(temp == 2 || temp == 3 || temp == 5)
                        tempDigit = 5;
                    else if(temp == 4)
                        tempDigit = 4;
                    else if(temp == 6 || temp == 9)
                        tempDigit = 6;
                    else if(temp == 7)
                        tempDigit = 3;
                    else if(temp == 8)
                        tempDigit = 7;

                    tempDigitSum += tempDigit; // Additionne le nombre des barres du chiffre temp

                } while (nbUser != 0); // Recommence l'opération tant que l'entier saisi est != 0
                printf("La somme des barres des chiffres est de %u\n", tempDigitSum);
                printf("La somme des chiffres est egale a %u\n", digitSum);
                if(tempDigitSum == digitSum)
                    printf("Donc la somme des barres est egale a la somme des chiffres.\n");
                else
                    printf("Donc la somme des barres n'est pas egale a la somme des chiffres.\n");
                break;

            case 3:
                printf("Merci d'avoir lancer le programme !\n");
                break;
        }
    } while (choose != 3);


    system("PAUSE");
    return 0;
}

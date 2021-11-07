#include <stdio.h>
/*
 * Exercice n°2 du projet de C
 * par Dan Sebag
 * le 31/10/2021
 */
int main() {
    char retry;
    do {
        unsigned int nbUser, temp, modulo, choose, digitSum = 0, tempDigit, tempDigitSum = 0, magic;
        printf("1. Partie 1\n");
        printf("2. Partie 2\n");
        scanf("%u", &choose);

        switch (choose) {
            case 1:
                printf("Saisir un nombre entier:\n");
                scanf("%u", &nbUser);


                do{
                    modulo = nbUser%10;
                    nbUser -= modulo;
                    nbUser /= 10;
                    if(modulo == 4 || modulo == 5 || modulo == 6)
                        magic = 1;
                    else
                        magic = 0;
                }while (nbUser > 0 && magic == 1);

                if(magic == 0)
                    printf("Ce n'est pas un nombre magique !\n");
                else
                    printf("C'est un nombre magique !\n");

                break;

            case 2:
                do {
                    printf("Saisir un nombre entier compris entre 10 et 99:\n");
                    scanf("%u", &nbUser);
                } while (nbUser < 10 || nbUser > 99);


                do {
                    modulo = nbUser%10;
                    nbUser -= modulo;
                    nbUser /= 10;
                    temp = modulo;
                    digitSum += temp;
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

                    tempDigitSum += tempDigit;
                } while (nbUser != 0);
                printf("La somme des barres des chiffres est de %u\n", tempDigitSum);
                printf("La somme des chiffres est egale a %u\n", digitSum);
                if(tempDigitSum == digitSum)
                    printf("Donc la somme des barres est egale a la somme des chiffres.\n");
                else
                    printf("Donc la somme des barres n'est pas egale a la somme des chiffres.\n");
                break;
        }
        printf("Voulez vous recommencer ? (O == oui || o == oui)\n");
        fflush(stdin);
        scanf("%c", &retry);

    } while (retry == 'O' || retry == 'o');
    printf("Merci d'avoir lancer le programme !\n");
    return 0;
}

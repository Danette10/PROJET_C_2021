#include <stdio.h>
#include <math.h>
/*
 * Intervalle nombres sympathiques
 * par Dan Sebag
 * le 01/11/2021
 */
int main() {
    unsigned int nb1, nb2;


    printf("Saisir un premier entier :\n");
    scanf("%u",&nb1);
    printf("Saisir un second entier :\n");
    scanf("%u",&nb2);

    do {
        int pow2 = 0, saveNb1, rest, p, binary=0;
        unsigned int counter1 = 0, counter0 = 0;
        
        saveNb1 = nb1;
        while (saveNb1 > 0)
        {
            rest = saveNb1 % 2; // Stock le reste de l'entier saisi, donc 0 ou 1
            p = pow(10, pow2); // Calcul les puissances de 2
            binary = binary + rest * p; // Calcul le nombre binaire
            ++pow2; // Incrémente de 1 la puissance de 2
            saveNb1/=2; // Divise l'entier saisi par 2 et vérifie si celui ci est supérieur à 0
        }
        nb1++;
        do {
            unsigned int modulo;
            modulo = binary%10;
            binary -= modulo;
            binary /= 10;
            if(modulo == 1)
                counter1++;
            else
                counter0++;

        } while (binary != 0);
        if(counter1 == counter0)
            printf("%u,", nb1);
    } while (nb1 <= nb2);


    return 0;

}

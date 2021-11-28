#include <stdio.h>
#include <stdlib.h>
/*
 * Faire un papillon de hauteur saisi
 * Par Dan Sebag, Steven Wong et Quentin Jolli
 */
int main() {
    char retry;
    do {
        int nb, i, j, impair, pair;
        printf("Saisir un entier :\n");
        scanf("%d", &nb);

        // Première partie du dessin
        for (i = 0; i < nb - i - 1; i++){ // Boucle for qui va permettre de calculer le nombre
                                          // d'espace entre le premier et le deuxième triangle

            for (j = 0; j < nb; j++){ // Boucle d'affichage des * ou des espaces

                if(j <= i || j >= nb - i -1){
                    printf("*  ");
                } else{
                    printf("   ");
                }

            }
            printf("\n");
        }
        for(impair=0;impair <= nb && nb%2 != 0;impair++) {
            // Si nb est impair alors on va sauter une ligne est afficher une ligne * suplémentaire

            if(impair == nb){
                printf("\n");
            } else
                printf("*  ");
        }

        for(pair=0;pair <= nb && nb%2 == 0;pair++) {
            // Si nb est pair alors on va sauter une ligne est afficher une ligne * suplémentaire
            if(pair == nb){
                printf("\n");
            } else
                printf("*  ");
        }

        // Deuxième partie du dessin

        // For qui va partir de i = nb - i - 1 donc il va se créé à partir de la fin du for précédent

        for (i = nb - i - 1; i > 0; i--){
            for (j = nb; j > 0; j--){
                if(j <= i || j >= nb - i + 1){
                    printf("*  ");
                } else{
                    printf("   ");
                }

            }
            printf("\n");
        }
        fflush(stdin);
        printf("Voulez vous recommencer ? (o = oui | O = oui)\n");
        scanf("%c", &retry);
    } while (retry == 'o' || retry == 'O');

    system("PAUSE");

    return 0;

}

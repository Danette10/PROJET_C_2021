#include <stdio.h>
/*
 * Exercice 1 du projet de C
 * le 30/10/2021
 * par Dan Sebag
 */
int main() {
    char retry;
    do {
        int nb, i,j, impair, pair;
        printf("Saisir un entier :\n");
        scanf("%d", &nb);
        for (i = 0; i < nb - i - 1; i++){
            for (j = 0; j < nb; j++){
                if(j <= i || j >= nb - i -1){
                    printf("* ");
                } else{
                    printf("  ");
                }

            }
            printf("\n");
        }
        for(impair=0;impair <= nb && nb%2 != 0;impair++)
        {

            if(impair == nb){
                printf("\n");
            } else
                printf("* ");
        }

        for(pair=0;pair <= nb && nb%2 == 0;pair++)
        {

            if(pair == nb){
                printf("\n");
            } else
                printf("* ");
        }

        for (i = nb - i - 1; i > 0; i--){
            for (j = nb; j > 0; j--){
                if(j <= i || j >= nb - i + 1){
                    printf("* ");
                } else{
                    printf("  ");
                }

            }
            printf("\n");
        }
        fflush(stdin);
        printf("Voulez vous recommencer ? (o = oui | O = oui)\n");
        scanf("%c", &retry);
    } while (retry == 'o' || retry == 'O');

    return 0;

}

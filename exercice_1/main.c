#include <stdio.h>
/*
 * Exercice 1 du projet de C
 * le 30/10/2021
 * par Dan Sebag
 */
int main() {
    int nb, i,j;
    printf("Saisir un entier :\n");
    scanf("%d", &nb);
    for (i = 0; i < nb - i - 1; i++){
        for (j = 0; j < nb; j++){
            if(j <= i || j >= nb - i -1){
                printf("*");
            } else{
                printf(" ");
            }

        }
        printf("\n");
    }
    for (i = nb - i - 1; i > 0; i--){
        for (j = nb; j > 0; j--){
            if(j <= i || j >= nb - i + 1){
                printf("*");
            } else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;

}

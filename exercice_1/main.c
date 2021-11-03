#include <stdio.h>
/*
 * Exercice 1 du projet de C
 * le 30/10/2021
 * par Dan Sebag
 */
int main() {
    int n, i, j;
    int stars = 1;
    printf("Saisir le nombre de ligne:\n");
    scanf("%d", &n);

        for(i = 1; i <= (2 * n - 1); i++){
            for(j = 1; j <= stars; j++){
                printf("*  ");
            }

            if(i < n)
                stars++;
            else
                stars--;
            printf("\n");

    }
    return 0;
}

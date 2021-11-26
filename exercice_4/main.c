#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb1, nb2;
    int rest, i, counter0, counter1, missing0, nb1Bis, temp1, temp2, j = 0, saveNb1;
    printf("Saisir un premier entier : \n");
    scanf("%d", &nb1);
    printf("Saisir un second entier :\n");
    scanf("%d", &nb2);
    saveNb1 = nb1;

    do {
        counter0 = 0;
        counter1 = 0;
        i = 0;

        nb1Bis = nb1;
        while (nb1Bis > 0) {
            rest = nb1Bis % 2;
            nb1Bis /= 2;
            if(rest == 0)
                counter0++;
            else
                counter1++;
            i++;
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
                    printf("%d ", temp2);
                }else if(j != 1)
                    printf(",%d ", temp2);

            }
            j++;

        }
        nb1++;

    } while (nb1 <= nb2);
    if(j == 0)
        printf("Il n'y a aucun nombre sympathiques entre %d et %d", saveNb1, nb2);
    else if(j == 1)
        printf("%d", temp1);
    else if (j >= 2)
        printf("et %d\n", temp1);

    return 0;
}

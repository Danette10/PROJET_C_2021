#include <stdio.h>
#define octet16 65536

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
        if(nb1 >= nb2){
            tempNb1 = nb1;
            nb1 = nb2;
            nb2 = tempNb1;

        }
        nb1Bis = nb1;
        do {
            counter0 = 0;
            counter1 = 0;
            i = 0;
            if(nb1 < 0)
                saveNb1 = nb1 + octet16;
            else if(nb1 > 0)
                saveNb1 = nb1;

            while (saveNb1 > 0) {
                rest = saveNb1 % 2;
                saveNb1 /= 2;
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
    
    return 0;
}

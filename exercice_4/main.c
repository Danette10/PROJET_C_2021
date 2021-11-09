#include <stdio.h>

int main() {
    int nb1, nb2;
    printf("Saisir un premier entier : \n");
    scanf("%d", &nb1);
    printf("Saisir un second entier :\n");
    scanf("%d", &nb2);

    do {
        int rest, i = 0, counter0 = 0, counter1 = 0, missing0, saveNb1, temp1 = 0;
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
            temp1 = nb1;
            if(temp1 != 0)
                printf("%d, ", nb1);
        }
        nb1++;
    } while (nb1 <= nb2);




    return 0;
}

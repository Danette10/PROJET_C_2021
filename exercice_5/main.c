#include <stdio.h>
/*
 * Exercice n°5 du projet de C
 * par Dan Sebag
 * le 07/11/2021
 */
int main() {
    char retry;
    do {
        double salary, turnover, commission, moneyTraveler;
        unsigned int kilometers, moneyKilometers, traveler, dayTraveler, howSell;

        printf("Saisir votre salaire :\n");
        scanf("%lf", &salary);
        printf("Saisir le chiffre d'affaire du representant :\n");
        scanf("%lf", &turnover);
        printf("Combien de km avez vous parcouru ?\n");
        scanf("%u", &kilometers);

        moneyKilometers = 0.50 * kilometers;

        printf("Avez vous ete envoye a l'etranger ? (1 = oui | 0 = non)\n");
        scanf("%u", &traveler);
        if(turnover <= 13000){
            commission = turnover * 0.016;
            salary += commission;
        }else if(turnover <= 22000){
            commission = turnover * 0.022;
            salary += commission;
        }else{
            commission = turnover * 0.03;
            salary += commission;
        }
        if(moneyKilometers >= 50 && moneyKilometers <= 250)
            salary += moneyKilometers;
        else
            salary = salary;
        switch (traveler) {
            case 1:
                printf("Combien de jours avez vous voyager ?\n");
                scanf("%u", &dayTraveler);
                moneyTraveler = dayTraveler * 100;
                salary += moneyTraveler;

                printf("Avez vous vendu ce mois ci ? (1 = oui | 0 = non)\n");
                scanf("%u", &howSell);
                switch (howSell) {
                    case 1:
                        printf("Votre salaire brut mensuel est de %.2lf euros\n", salary);
                        break;
                    case 0:
                        salary += 100;
                        printf("Votre salaire brut mensuel est de %.2lf euros\n", salary);
                        break;
                }

                break;

            case 0:
                printf("Avez vous vendu ce mois ci ? (1 = oui | 0 = non)\n");
                scanf("%u", &howSell);
                switch (howSell) {
                    case 1:
                        printf("Votre salaire brut mensuel est de %.2lf euros\n", salary);
                        break;
                    case 0:
                        salary += 100;
                        printf("Votre salaire brut mensuel est de %.2lf euros\n", salary);
                        break;
                }

                break;
        }
        fflush(stdin);
        printf("Voulez vous recommencer ? (o = oui | O = oui)\n");
        scanf("%c", &retry);

    } while (retry == 'o' || retry == 'O');


    return 0;
}

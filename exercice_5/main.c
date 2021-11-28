#include <stdio.h>
#include <stdlib.h>
/*
 * Calcul du salaire brut d'un commercial
 * Par Dan Sebag, Steven Wong et Quentin Jolli
 */
int main() {
    unsigned int choose;

    do {
        double salary, resultSalary, resultKilometers, turnover;
        unsigned int travelers, nothingSold, dayWork, salaryDayWork, kilometers;

        printf("\n1. Calculer votre salaire mensuel\n");
        printf("2. Quitter le programme\n");
        scanf("%u", &choose);

        switch (choose) {
            case 1:

                printf("Saisir votre salaire mensuel:\n");
                scanf("%lf", &salary);

                printf("Saisir le chiffre d'affaire de votre entreprise:\n");
                scanf("%lf", &turnover);

                printf("Combien de km avez vous parcourus ?\n");
                scanf("%u", &kilometers);

                printf("Avez vous vendu ce mois ci ? (1 = oui | 0 = non)\n");
                scanf("%u", &nothingSold);

                printf("Avez vous ete envoyes a l'etranger ? (1 = oui | 0 = non)\n");
                scanf("%u", &travelers);

                if(turnover <= 13000) {
                    resultSalary = salary * (1 - 0.016);
                }else if(turnover <= 22000) {
                    resultSalary = salary * (1 - 0.022);
                }else {
                    resultSalary = salary * (1 - 0.003);
                }

                resultKilometers = kilometers * 0.50; // Indémnité de 0,50€ par km

                /*
                 * Qui dois etre compris entre 50 et 200 €
                 */

                if (resultKilometers >= 50 && resultKilometers <= 250) {
                    resultSalary += resultKilometers;
                }
                switch (travelers) {

                    case 1:
                        printf("Combien de jours avez vous ete envoyes a l'etranger ?\n");
                        scanf("%u", &dayWork);
                        salaryDayWork = dayWork * 100;
                        resultSalary += salaryDayWork;
                        printf("Votre salaire brut mensuel est de %.2lf euros", resultSalary);
                        break;
                    case 0:
                        switch (nothingSold) {
                            case 0:
                                resultSalary -= 100;
                                printf("Votre salaire brut mensuel est de %.2lf euros", resultSalary);
                                break;
                        }

                }
                break;

            case 2:

                printf("Merci d'avoir lancer le programme !\n");
                break;
        }

    } while (choose != 2);


    system("PAUSE");
    return 0;
}

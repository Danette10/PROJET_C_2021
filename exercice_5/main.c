#include <stdio.h>
#include <stdlib.h>
/*
 * Calcul du salaire brut d'un commercial
 * Par Dan Sebag
 * Le 04/11/2021
 */
int main() {
    char restart;

    do {
        double salary, resultSalary, resultKilometers;
        unsigned int travelers, nothingSold, dayWork, salaryDayWork, kilometers;

        printf("Saisir votre salaire mensuel:\n");
        scanf("%lf", &salary);
        printf("Combien de km avez vous parcourus ?\n");
        scanf("%u", &kilometers);
        printf("Avez vous vendu ce mois ci ? (1 = oui | 0 = non)\n");
        scanf("%u", &nothingSold);
        printf("Avez vous ete envoyes a l'etranger ? (1 = oui | 0 = non)\n");
        scanf("%u", &travelers);
        if(salary <= 13000)
            resultSalary = salary * (1-0.016);
        else if(salary <= 22000)
            resultSalary = salary * (1-0.022);
        else
            resultSalary = salary * (1-0.003);
        resultKilometers = kilometers * 0.50;
        if (resultKilometers >= 50 && resultKilometers <= 250)
            resultSalary += resultKilometers;
        switch (travelers && nothingSold) {
            case 1:
                printf("Combien de jours avez vous ete envoyes a l'etranger ?\n");
                scanf("%u", &dayWork);
                salaryDayWork = dayWork * 100;
                resultSalary += salaryDayWork;
                printf("Votre salaire brut mensuel est de %.2lf euros", resultSalary);
                break;
            case 0:
                resultSalary - 100;
                printf("Votre salaire brut mensuel est de %.2lf euros", resultSalary);
                break;
        }

        fflush(stdin);
        printf("\nVoulez vous recommencer ? (o = oui | O = oui)\n");
        scanf("%c", &restart);
    } while (restart == 'o' || restart == 'O');


    system("PAUSE");
    return 0;
}

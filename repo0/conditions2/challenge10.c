#include <stdio.h>

int main() {
    int age, annees_cotisation, montant_total;
    float pension_base;

    printf("Le Programme Pour Déterminer Le Plan De Retraite : \n");

    printf("Entrez l'age : ");
    scanf("%d", &age);

    printf("Entrez L'années De Cotisation : ");
    scanf("%d", &annees_cotisation);

    printf("Entrez Le Montant total épargné (en euros) : ");
    scanf("%d", &montant_total);

    float bonus = 0;
    if (montant_total > 50000) {
        bonus = (montant_total - 50000) / 10000 * 5;
    }

    if (age >= 65 && annees_cotisation >= 30 && montant_total >= 100000) {
        printf("Votre Plan est Complet avec pension élevée.\n");
        printf("Pension estimée : %.2f euros\n", pension_base * (1 + bonus/100));
    } else if (age >= 65 && annees_cotisation >= 20 && montant_total >= 50000) {
        printf("Votre Plan est Partiel avec pension moyenne.\n");
        printf("Pension estimée : %.2f euros\n", pension_base * (1 + bonus/100));
    } else {
        printf("Votre Plan est épargne Non Encore Disponible.\n");
    }

    return 0;
}
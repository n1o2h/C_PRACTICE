#include<stdio.h>

int main(){
    int budget, destination, nbr_pers;

    printf("Planification de Voyage\n");
    printf("Entrer votre budget 5en euros)");
    scanf("%d", &budget);

    printf("Entrer votre destination(1 pour plage, 2 pour montagne, 3 pour ville): ");
    scanf("%d", &destination);

    printf("Entrer le nombrede personnes: ");
    scanf("%d", &nbr_pers);

    if(budget >= 1000){
        if(nbr_pers > 2){
            printf("Voyage Haut De Gamme\n");
            printf("les destinations recommandees: La Plage\n");
        }
        else
            printf("Voyage Haut De Gamme\n");
    }else if(budget >= 500 && budget < 1000){
        if(nbr_pers <= 2){
            printf("Voyage Moyen\n");
            printf("les destinations recommandees: La Montagne\n");
        }
        else
            printf("Voyage Moyen\n");
    }else{
        printf("Voyage Economique\n");
        printf("les destinations recommandees: La Ville\n");
    }
    
    return 0;
}
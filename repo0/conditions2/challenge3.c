#include<stdio.h>
int main(){

    int  nbr_tot_conge, nbr_jours_util, statut_emp, nbr_jours_rest;

    printf("Gestion des Congés\n");
    
    printf("Entrer le nombre total de jours de conges accordes: ");
    scanf("%d", &nbr_tot_conge);
    printf("Entrer le nombre de jours de conges utilises: ");
    scanf("%d", &nbr_jours_util);
    printf("Entrer le statut de l'employer (0 pour temps partiel, 1 pour temps plein): ");
    scanf("%d", &statut_emp);

    if(nbr_tot_conge < nbr_jours_util){
        printf("Alert: Vous avez depassee le nombre total du jours de conges accordes!");
        return 0;
    }
    else{
        if(statut_emp){
            nbr_jours_rest = nbr_tot_conge - nbr_jours_util;
            printf("le nombre de jours restant pour un temps plein : %d", nbr_jours_rest);
        }
        else{
            nbr_jours_rest = (nbr_tot_conge/2) - nbr_jours_util;
            printf("le nombre de jours restant pour un temps partiel : %d", nbr_jours_rest);
        }
    }

    return 0;
}
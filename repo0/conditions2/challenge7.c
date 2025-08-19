#include<stdio.h>

int main(){
    int revenu, stat_fiscal, deduction,impot;

    printf("Clcul des Impots\n");

    printf("Entrer le revenu annuel(en euros): ");
    scanf("%d", &revenu);
    printf("Entrer le statut fiscal(1 pour celibataire, 2 pour marie, 3 pour chef de famille): ");
    scanf("%d", &stat_fiscal);


    if(stat_fiscal){//verifier le statut
        if(revenu <= 2000){//verifier le revenue
            impot = (revenu * 0.05) - 1000;
            printf("les impots a payer : %d£", impot);
        }else if (revenu > 2000 && revenu <= 50000){
            impot = (revenu * 0.10) - 1000;
            printf("les impots a payer : %d£", impot);
        }else{
            impot = (revenu * 0.20) - 1000;
            printf("les impots a payer : %d£", impot);
        }
    }else if(stat_fiscal == 2){
        if(revenu <= 2000){
            impot = (revenu * 0.05) - 2000;
            printf("les impots a payer : %d£", impot);
        }else if (revenu > 2000 && revenu <= 50000){
            impot = (revenu * 0.10) - 2000;
            printf("les impots a payer : %d£", impot);
        }else{
            impot = (revenu * 0.20) - 2000;
            printf("les impots a payer : %d£", impot);
        }
    }else{
        if(revenu <= 2000){
            impot = (revenu * 0.05) - 3000;
            printf("les impots a payer : %d£", impot);
        }else if (revenu > 2000 && revenu <= 50000){
            impot = (revenu * 0.10) - 3000;
            printf("les impots a payer : %d£", impot);
        }else{
            impot = (revenu * 0.20) - 3000;
            printf("les impots a payer : %d£", impot);
        }
    }
    return 0;
}
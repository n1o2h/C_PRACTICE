#include<stdio.h>
int main(){
    int revenu, score_credit, dure_pret;
    printf("Evaluation d'un Pret\n");
    printf("entrer votre revenu annuel(e euros): ");
    scanf("%d", &revenu);
    printf("entrer votre score de credit(sur 1000): ");
    scanf("%d", &score_credit);
    printf("entrer votre duree de pret(en annee): ");
    scanf("%d", &dure_pret);

        if(revenu >= 30000 && score_credit >= 700 && dure_pret <= 10)
            printf("vous etes eligible parfaitement!");
        else if(revenu >= 30000 && score_credit >= 650 && dure_pret <= 15)
            printf("vous etes elligible avec des conditions!");
        else
            printf("vous n'etes pas elligible!");
        
        return 0;
}
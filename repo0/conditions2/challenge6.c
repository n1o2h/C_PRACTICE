#include<stdio.h>

int main(){
    int  type_util, type_contrat;
    float facture, cons;

    printf("Calcul de la Facture d'Electricite\n");
    
    printf("Entrer la consommation d'electricite(en KWh): ");
    scanf("%f", &cons);
    printf("Entrer le type d'utilisateur(1 pour residentiel, 2 pour commercial): ");
    scanf("%d", &type_util);
    printf("Entrer le type de contrat (0 pour standard, 1 pour reduit): ");
    scanf("%d", &type_contrat);

    if(cons <= 500){//verifier consomation
        if(type_util == 1){//verfifier type d'utilisateur
            if(type_contrat == 0){//verfier type de contrat 
                facture = cons * 0.20;
                printf("La facture d'electricite residentiel pour contrat standard ne depasse pas 500KWh: %.2f£", facture);
            }else{
                facture = cons * 0.15;
                printf("La facture d'electricite residentiel pour contrat reduit ne depasse pas 500KWh: %.2f£", facture);
            }
        }else{
            if(type_contrat == 0){
                facture = cons * 0.30;
                printf("La facture d'electricite commercial pour contrat standard ne depasse pas 500KWh: %.2f£", facture);
            }else{
                facture = cons * 0.25;
                printf("La facture d'electricite commercial pour contrat reduit ne depasse pas 500KWh: %.2f£", facture);
            }
        }
    }else{
        if(type_util == 1){
            if(type_contrat == 0){
                facture = cons * 0.20 + cons * 0.10;
                printf("La facture d'electricite residentiel pour contrat standard  depasse pas 500KWh: %.2f£", facture);
            }else{
                facture = cons * 0.15 + cons * 0.10;
                printf("La facture d'electricite residentiel pour contrat reduit  depasse pas 500KWh: %.2f£", facture);
            }
        }else{
            if(type_contrat == 0){
                facture = cons * 0.30 + cons * 0.10;
                printf("La facture d'electricite commercial pour contrat standard  depasse pas 500KWh: %.2f£", facture);
            }else{
                facture = cons * 0.25 + cons * 0.10;
                printf("La facture d'electricite commercial pour contrat reduit  depasse pas 500KWh: %.2f£", facture);
            }
        }
    }

    return 0;
}
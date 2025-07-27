#include<stdio.h>


int main(){
    printf("***MONTANT DE AMAL***");

    int an, i;
    float S;

    printf("veuillez saisir le num d'anniversaire: ");
    scanf("%d", &an);

    for(i = 1; i <= an; i++){
        S = S + 500 + i * 3;
    }
    printf("la somme qui aura Amal lors de son %dieme anniverssaire est ; %.2f", i, S);

}
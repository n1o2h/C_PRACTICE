#include<stdio.h>

int main(){
    printf("***ANNEE BISSEXTILE***\n");

    int annee;
    
    printf("veuilles saisir une annee: ");
    scanf("%d", &annee);

    if(((annee % 4 == 0)&&(annee % 100 != 0 ))||(annee % 400 == 0)){
        printf("l'annee %d est bissextile(366jours)");
    }
    else
        printf("l'annee %d est non bissextile(365jours)");
    
    return 0;
}
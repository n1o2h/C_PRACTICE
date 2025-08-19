#include<stdio.h>

int main(){
    float sal_base, salaire;
    int nbr_heur, type_poste;

    printf("Calcul du Salaire avec Primes\n");

    printf("Entrer le salaire de base(en euros): ");
    scanf("%f",&sal_base);
    printf("Entrer nombre de'heures supplementaire: ");
    scanf("%d", &nbr_heur);
    printf("Entrer le type de poste(1 pour junior, 2 pour senior): ");
    scanf("%d", &type_poste);

    if(type_poste == 1){
        if(nbr_heur == 0){
            salaire = sal_base + sal_base * 0.10;
            printf("le nombre d'heures supplementaires valide : %d\n", nbr_heur);
            printf("Le salaire avec la Prime: %.2f£", salaire);
        }
        else{
            salaire = sal_base + sal_base * 0.10;
            nbr_heur = nbr_heur * 1.5;
            printf("le nombre d'heures supplementaires valide : %d\n", nbr_heur);
            printf("Le salaire avec la Prime: %.2f£", salaire);
        }
    }else{
        if(nbr_heur == 0){
            salaire = sal_base + sal_base * 0.20;
            printf("le nombre d'heures supplementaires valide : %d\n", nbr_heur);
            printf("Le salaire avec la Prime: %.2f£", salaire);
        }
        else{
            salaire = sal_base + sal_base * 0.20;
            nbr_heur = nbr_heur * 1.5;
            printf("le nombre d'heures supplementaires valide : %d\n", nbr_heur);
            printf("Le salaire avec la Prime: %.2f£", salaire);
        }
    }

    return 0;
}
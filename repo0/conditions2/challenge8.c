#include<stdio.h>

int main(){
    int age, hist_medical, type_couverture;
    
    printf("Plan de Sante\n");

    printf("Entrer l'age: ");
    scanf("%d", &age);
    printf("Etrer l'histoire medical(0 pour aucun problem, 1 pour problem mineur, 2 pour problem majeur): ");
    scanf("%d", &hist_medical);
    printf("Entrer le type de couverture(1 pour de base, 2 pour etendue): ");
    scanf("%d",&type_couverture);

    if(type_couverture==1){
        printf("le Plan est un Plan de base\n");
    }else{
        if(hist_medical == 2){
            printf("le Plan est un Plan etendu\n");
            printf("Vous avez une couverture supplementaire \n");
        }
    }

    return 0;
}
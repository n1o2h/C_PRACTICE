#include<stdio.h>

int main(){
    printf("***L'IMPOT SELON LES REGLES***");

    int age;
    char sexe;
    printf("veuillez saisir votre sexe : ");
    scanf("%c", &sexe);
    printf("veuillez saisir votre age: ");
    scanf("%d", &age);

    if((sexe == 'M' && age >= 20) || ((age >= 18 && age <=35) && sexe == 'F' ))
            printf("Vous etes eligible a paie l'impot!");
    else
            printf("Vous n'etes pas eligible a paie l'impot!");

        return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("AFFICHAGE D'INDORMATIONS\n");

    char nom[50], prenom[50], sexe[50], adress[50];
    int age;

    printf("veuillez saisir le nom: ");
    fgets(nom, 50, stdin);
    printf("veuillez saisir le prenom: ");
    scanf("%50s", prenom);
    printf("veuillez saisir l'age: ");
    scanf("%d", &age);
    printf("veuillez saisir le sexe: ");
    scanf("%50s", sexe);
    printf("veuillez saisir l'adresse email : ");
    scanf("%50s", adress);

    printf("-   Nom : %s    \n-   Prenom : %s    \n-    Age : %d   \n-    Sexe : %s      \n-    Adress Email : %s\n", nom,prenom,age,sexe,adress);

    return 0;

}
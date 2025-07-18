#include <stdio.h>

int main(){
    printf("***CALCUL ET AFFICHAGE DE L'AGE***");
    int Date, age;

    printf("\nveuillez saisr votre date de naissance: ");
    scanf("%d", &Date);
    age = 2025 - Date;
    printf("votre age est : %d", age);
    return 0;
}


#include<stdio.h>

int main(){
    printf("***CATEGORIE SELON L3'AGE***");

    int age;
    printf("\nveuillez saisir l'age: ");
    scanf("%d", &age);
    if(age < 6)
        printf("La categorie de l'enfant est Bebe!");
    else if(age >= 6 && age <= 7)
        printf("La categorie de l'enfant est Poussin!");
    else if (age >= 8 && age <= 9)
        printf("La categorie de l'enfant est Pupille!");
    else if(age >= 10 && age <= 11)
        printf("La categorie de l'enfant est Minime!");
    else
        printf("La categorie de l'enfant est Cadet!");
    return 0;
}
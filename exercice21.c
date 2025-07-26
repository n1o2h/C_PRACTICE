#include<stdio.h>

int main(){
    printf("***NOMBRE PAIR OU IMPAIR***");

    int nbr;

    printf("veuillez saisir un nombre: ");
    scanf("%d", &nbr);

    if(nbr % 2 == 0)
        printf("le nombre est pair");
    else
        printf("le nombre est impair");
    
    return 0;
}
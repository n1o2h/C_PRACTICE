#include<stdio.h>

int main(){
    printf("*** structure repetitives***");

    int nbr, i;
    printf("veuillez saisir un nombre: ");
    scanf("%d", &nbr);

    for( i = nbr + 1; i <=  nbr + 10; i++){
        printf("%d\n", i);
    }
    return 0;
}
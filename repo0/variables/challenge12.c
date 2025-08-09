#include<stdio.h>

int main(){
    printf("L'INVERSE D'UN NOMBRE A QUATRE CHIFFRES\n");

    int T[4];

    printf("enter le premier chiffre: ");
    scanf("%d", &T[0]);
    printf("enter le deuxieme chiffre: ");
    scanf("%d", &T[1]);
    printf("enter le troisieme chiffre: ");
    scanf("%d", &T[2]);
    printf("enter le quatrieme chiffre: ");
    scanf("%d", &T[3]);
    printf("le nombre a 4 chiffre: %d%d%d%d",T[0],T[1],T[2],T[3]);
    printf("\nle nombre  inverse a 4 chiffre: %d%d%d%d",T[3],T[2],T[1],T[0]);


}
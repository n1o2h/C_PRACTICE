#include<stdio.h>

int main(){
    printf("LA MOYENNE PONDERE DE TROIS NOMBRES\n");
    float  penderation2,penderation3,penderation4,penderation1;

    printf("veuillez saisir le premier nombre : ");
    scanf("%f", &penderation2);
    printf("veuillez saisir le deuxieme nombre : ");
    scanf("%f", &penderation3);
    printf("veuillez saisir le troisieme nombre : ");
    scanf("%f", &penderation4);

    penderation1 = (penderation2 + penderation3 + penderation4) / 3;
    printf("la moyenne pendere des trois noombres : %.2f", penderation1);

    return 0;

}
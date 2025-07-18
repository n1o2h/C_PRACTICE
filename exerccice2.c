#include <stdio.h>

int main(){
    printf("***PERIMETRE ET SURFACE D'UN RECTANGLE***");

    float longeur, largeur, perimetre, surface;

    printf("\nveuillez saisir la longeur du rectangle: ");
    scanf("%d", &longeur);
    printf("\nveuillez saisir la largeur du rectangle: ");
    scanf("%d", &largeur);

    perimetre = (longeur + largeur) * 2;
    surface = longeur * largeur;

    printf("\n Le perimetre du  rectangle : %.2f", perimetre);
    printf("\n La surface du  rectangle : %.2f", surface);
    
    return 0;
}
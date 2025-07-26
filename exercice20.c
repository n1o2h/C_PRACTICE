#include<stdio.h>

int main(){
    printf("***GEROSCOPE***");

    int n;
    printf("veuillez saisir un nombre (6,4,8,2) : ");
    scanf("%d", &n);

    switch(n){
        case 6: printf("le personnage va a droite");
                break;
        case 4: printf("le personnage va a gauche");
                break;
        case 8: printf("le personnage va en haut");
                break;
        case 2: printf("le personnage a en bas");
                break;
        default: printf("erreur de saisie, le personnage ne bouge pas");
    }
    return 0;
    
}
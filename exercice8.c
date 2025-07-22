#include <stdio.h>

int main(){
    printf("***TRANFORMATION DU TEMPS***");

    int T, H, M, S, Q;
    
    printf("veuillez saisir le temps en secondes : ");
    scanf("%d", &T);

    H = T / 3600; //heure
    Q = T % 3600;
    M = Q / 60; //minutes
    S = Q % 60; //secondes

    printf(" %d heures %d minutes %d secondes", H, M, S);
    return 0;

}
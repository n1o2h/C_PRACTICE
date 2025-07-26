#include<stdio.h>

int main(){
    printf("***CALCUL ET AFFICHAG D'UNE SOMME***");

    int n ;
    float S, i;

    printf("veuillez saisir un nombre: ");
    scanf("%d", &n);
    S = 0;
    for (i = 1; i <= n; i++){
        S = S + 1/i;
    }
    printf("S = 1/1 + 1/2 +1/3 + ... + 1/n = %.2f", S);
    return 0;

}
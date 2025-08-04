#include<stdio.h>

int main(){
    printf("***TABLEAU DE REELS + SOMME + PRODUIT + MOYENNEDES ELEMENTS***\n");

    float T[10], S=0, P=1, M;
    int i;

    for(i = 0; i<10; i++){
        printf("saisir l'element %d: ", i+1);
        scanf("%f", &T[i]);
    }
    for(i = 0; i<10; i++){
        S += T[i];
        P *= T[i];
    }
    M = S/10;
    printf("Tbaleau des elements:  \n");
    for(i=0; i<10; i++){
        printf("T[%d] = %.2f\n", i, T[i]);
    }
    printf("\nLa somme S = %.2f", S);
    printf("\nLa produit P = %.2f", P);
    printf("\nLa moyenne M = %.2f", M);

    return 0;


}
#include<stdio.h>

int main(){
    printf("***PRODUIT DE DEUX VECTEURS***");
    int T[3], V[3];
    int i, PS=0;

    printf("\nvecteur 1: \n");
    for(i=0;i<3;i++){
        printf("saisir l'element %d du vecteur 1 : ", i+1);
        scanf("%d", &T[i]);
    }
    printf("vecteur 2: \n");
    for(i=0;i<3;i++){
        printf("saisir l'element %d du vecteur 2 : ", i+1);
        scanf("%d", &V[i]);
    }

    for(i=0;i<3;i++){
        PS+= (T[i]*V[i]);
    }
    printf("le produit scalaire des deux vecteurs : %d", PS);

    return 0;
    

}
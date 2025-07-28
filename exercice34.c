#include<stdio.h>

int main(){
    printf("***SUITE E FIBONACCI***");

    int n, U, V, Un, i;
    do{
        printf("veuillez saisir l valeur de n (superieur a 2) : ");
        scanf("%d", &n);
    }while(n < 2);
    U = 0;
    V = 1;
    printf("U0 = %d \nU1 = %d\n", U, V);

    for(i = 2; i <= n; i++){
        Un = U + V;
        printf("U%d = %d\n",i, Un);
        U = V;
        V = Un;
    }



}
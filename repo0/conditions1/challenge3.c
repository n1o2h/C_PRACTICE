#include<stdio.h>

int main(){
    int a, b, S;

    printf("Somme de Deux Valeurs\n");

    printf("enter a: ");
    scanf("%d", &a);
    printf("entrer b: ");
    scanf("%d", &b);

    if(a == b){
        S = 3 * (a + b);
        printf("le triple de somme des nombres identiques = %d", S);
    }
    else{
        S = a + b;
        printf("la somme des nombres nom identiques = %d", S);
    }

    return 0;
    
}
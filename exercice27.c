#include<stdio.h>

int main(){
    printf("***CALCUL ET AFFICHAG D'UNE SOMME FACTORIELLE***");

    int n, i, S;

    printf("veuillez saisir un nombre: ");
    scanf("%d", &n);
    if (n == 0)
        printf("S = n! = 1 * 2 * 3 * ... * n = 0!=  1");
    else if(n < 0)
        printf("veuillez sasir un numbre positif!");
    else{
    S = 1;
    for(i = 1; i<= n; i++){
        S *= i;
    }
    printf("S = n! = 1 * 2 * 3 * ... * n = %d", S);
    }
    return 0;
}
#include<stdio.h>
#include<math.h>

int main(){
    printf("***CALCUL ET AFFICHAG D'UNE SOMME***");

    int n, i, S;

    printf("veuillez saisir un nombre: ");
    scanf("%d", &n);

    S = 0;
    for(i = 0; i<=n; i++)
        S = S + pow(10, i);
    printf("S = 10 + 100 + ... + 1O^n = %d", S);
    return 0;
}
#include<stdio.h>

int main(){
    int T[100]; 
    int n, i, S;

    printf("Somme des Elements\n");

    printf("Entrer le nombre d'elements: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Entrer l'element %d: ", i+1);
        scanf("%d", &T[i]);
    }

    S = 0;

    for(i=0; i<n; i++){
        S += T[i];
    }

    printf("La somme des elements du tableau: %d", S);

    return 0;
}
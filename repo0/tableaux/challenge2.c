#include<stdio.h>

int main(){
    int T[100];
    int i,n;

    printf("Saisie et Affichage des Elements\n");

    printf("Entrer le nombre d'elements: ");
    scanf("%d", &n);

    for(i=0; i<n;i++){
        printf("Enter l'element %d: ", i+1);
        scanf("%d", &T[i]);
    }

    printf("L'affichage des elements: \n");
    for(i=0;i<n;i++){
        printf("T[%d] = %d\n", i+1, T[i]);
    }
    return 0;
}
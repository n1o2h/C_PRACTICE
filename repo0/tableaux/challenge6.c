#include<stdio.h>

int main(){
    int T[100], F[100];
    int i, n, f;

    printf("Multiplication des Elements\n");

    printf("Entrer le nombre d'elements: ");
    scanf("%d", &n);
    printf("Entrer le facteur de multiplication: ");
    scanf("%d", &f);

    for(i=0; i<n; i++){
        printf("Entrer l'element %d: ",i+1);
        scanf("%d", &T[i]);
    }

    for(i=0;i<n;i++)
        F[i] = f * T[i];
    printf("Le tableau resultant: \n");
    for(i=0; i<n; i++){
        printf("F[%d] = %d\n", i+1, F[i]);
    }

    return 0;
}
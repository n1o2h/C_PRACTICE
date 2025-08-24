#include<stdio.h>

int main(){

    int T[100];
    int n, i, max;

    printf("Trouver le Maximum\n");

    printf("Entrer le nombre d'elements: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Entrer l'element %d: ",i+1);
        scanf("%d", &T[i]);
    }

    max = T[0];

    for(i=1; i<n; i++){
        if(T[i]>max)
            max = T[i];
    
    }

    printf("Le plus grand element dans le tableau: %d", max);

    return 0;
}
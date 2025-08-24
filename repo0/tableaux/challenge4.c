#include<stdio.h>

int main(){

    int T[100];
    int n, i, min;

    printf("Trouver le Minimum\n");

    printf("Entrer le nombre d'elements: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Entrer l'element %d: ",i+1);
        scanf("%d", &T[i]);
    }

    min = T[0];

    for(i=1; i<n; i++){
        if(T[i]<min)
            min = T[i];
    
    }

    printf("Le plus petit element dans le tableau: %d", min);

    return 0;
}
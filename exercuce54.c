#include<stdio.h>

int main(){
    printf("***MAXIMUM D'UN TABLLEAU***\n");

    int T[10];
    int i, Max;

    for(i=0;i<10;i++){
        printf("saisir l'element %d : ",i+1);
        scanf("%d", &T[i]);
    }
    Max = T[0];
    for(i=1;i<10;i++){
        if(T[i] > Max)
            Max = T[i];
    }
    printf("l'affichage du tableau: \n");
    for(i=0;i<10;i++)
        printf("T[%d] = %d\n", i+1, T[i]);
    
    printf("le maximum des elements du tableau :%d", Max);

    return 0;
}
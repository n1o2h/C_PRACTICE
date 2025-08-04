#include<stdio.h>

int main(){
    printf("***MINIMUM D'UN TABLLEAU***\n");

    int T[10];
    int i, Min;

    for(i=0;i<10;i++){
        printf("saisir l'element %d : ",i+1);
        scanf("%d", &T[i]);
    }
    Min = T[0];
    for(i=1;i<10;i++){
        if(T[i] < Min)
            Min = T[i];
    }
    printf("l'affichage du tableau: \n");
    for(i=0;i<10;i++)
        printf("T[%d] = %d\n", i+1, T[i]);
    
    printf("le minimum des elements du tableau :%d", Min);

    return 0;
}

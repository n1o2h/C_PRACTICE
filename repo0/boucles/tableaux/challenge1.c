#include<stdio.h>

int main(){
    int T[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Initialisation et Affichage\n");

    for(i=0;i<5;i++){
        printf("T[%d] = %d\n",i+1, T[i]);
    }

    return 0;
}
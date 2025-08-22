#include<stdio.h>

int main(){
    int n, i, S;

    printf("Entrer un nombre: ");
    scanf("%d",&n);

    S = 0;
    for(i=1;i<=n;i++){
        S += i;
    }
    printf("La somme des %d nombre entiers = %d", n, S);

    return 0;
}
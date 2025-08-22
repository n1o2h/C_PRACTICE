#include<stdio.h>

int main(){

    int n, i;

    printf("Table de multiplication\n");

    printf("Entrer un nombre: ");
    scanf("%d", &n);

    printf("Table de multiplication de %d:\n", n);

    for(i=1;i<=10;i++){
        printf("%d * %i = %d\n", n, i, n*i);
    }
    return 0;
}
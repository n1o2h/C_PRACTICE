#include<stdio.h>

int main(){
    printf("***LES DIVISSEURS D'UN ENTIER***");

    int n, i, div;

    printf("veuillez saisir un entier: ");
    scanf("%d", &n);

    printf("le divisseurs de %d :\n", n);
    for(i = 1; i <= n; i++){
        if(n % i == 0)
            printf("%d\n", i);
    }
    return 0;
}
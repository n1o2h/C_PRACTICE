#include<stdio.h>

int main(){
printf("***TRIANGLE D'ETOILES***");
    int l, c, i, j;

    printf("veuillez saisir le nombre de lignes: ");
    scanf("%d", &l);
    printf("veuillez saisr le nombre de colonnes: ");
    scanf("%d", &c);
    for(i = 1; i<=l; i++){
        for(j = 1; j<= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>

int main(){
printf("***CAREE D'ETOILES***");
    int l, c, i, j;

    printf("veuillez saisir le nombre de lignes: ");
    scanf("%d", &l);
    // printf("veuillez saisr le nombre de colonnes: ");
    // scanf("%d", &c);
    for(i = 1; i<=l; i++){
        for(j = 1; j<= l; j++){
            if(i == 1 || i == l || j == 1 || j == l || i == j || j == l-i+1  )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
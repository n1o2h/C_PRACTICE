#include<stdio.h>

int main(){
    int n, i;
    printf("Affichage des N Premiers Nombres Pairs\n");

    printf("Entrer un nombre: ");
    scanf("%d",&n);
    
    printf("Les N Premiers Nombres Pairs: \n");

    for(i=1;i<(2*n); i++){
        if(i%2==0)
            printf("%d, ",i);
    }
    printf("%d.", (2*n));
    return 0;
}
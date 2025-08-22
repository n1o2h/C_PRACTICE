#include<stdio.h>

int main(){
    int n, i, fact;
    printf("Factorielle d'un nombre\n");

    do{
        printf("Entrer u nombre: ");
        scanf("%d", &n);
    }while(n<0);

    if(n == 0)
        fact = 1;
    fact =1;
    for(i=1;i<=n;i++){
        fact *= i;
    }
    printf("Le factorielle de %d :\n %d! = %d", n,n,fact);

    return 0;
}
#include<stdio.h>

int main(){
    int n, ex, P,i;

    printf("Entrer un nombre entier base et l'exposant: ");
    scanf("%d %d", &n, &ex);
    
    P = n;
    for(i=1;i<ex;i++){
        P *= n;
    }
    printf("La puissance  %d^%d = %d ", n,ex, P);
    return 0;
}
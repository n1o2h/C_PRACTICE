#include<stdio.h>

int main(){
    int n, i, s;
    printf("Calcul de la somme des N entiers\n");
    printf("ENTER UN NOMBRE: ");
    scanf("%d", &n);

    s =0;
    printf("La somme est ");
    for(i=1; i<n; i++){
        s += i;
        printf("%d + ",i);
    }
    printf("%d = %d", n, s+n);
    
    // printf("La somme des %d nombres est %d", n, s);
    return 0;
}
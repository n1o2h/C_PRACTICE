#include<stdio.h>

int main(){
    int n, u0, u1, un, i;

    printf("Affichage de la Suite de Fibonacci\n");

    printf("Entrer un nombre: ");
    scanf("%d", &n);

    u0 = 0;
    u1 =1;
    i=2;
    printf("les termes de la suite de Fibonacci: \n");
    printf("F(0) = 0\nF(1) = 1\n");
    while(i <= n){
        un = u1 + u0;
        printf("F(%d) = %d\n", i, un);
        u0 = u1;
        u1 = un;
        i++;
    }
    printf("La suite egale u%d : %d",n, un);
}
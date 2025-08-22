#include<stdio.h>

int main(){
    int n, i, in;

    printf("Compteur de  Chiffres\n");

    printf("Etrer un nombre: ");
    scanf("%d",&n);
    i=1;
    while(n/10!= 0){
        in=n%10;
        i++;
        n = n/10;
    }
    printf("le nombre de chiffre du nombre %d est %d", n, i);
}
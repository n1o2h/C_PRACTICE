#include<stdio.h>

int main(){
    printf("***MON NOMBRE***");

    long n;
    int nb = 0;
    printf("veuillez saisir un nombre: ");
    scanf("%d", &n);

    do{
        nb++;
        n = n / 10;
    }while(n != 0);
    printf("le chiffre compte %d nombre", nb);
}

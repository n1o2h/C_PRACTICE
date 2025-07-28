#include<stdio.h>

int main(){
    int n, nv;
    printf("***L'INVERSE D'UN NOMBRE***\n");

    printf("veuillez saisir un nombre : ");
    scanf("%d", &n);
    nv  = 0;
    do{
        nv =  (nv*10) + (n % 10);
        n = n / 10;
    }while(n != 0);
    printf("%d", nv);
}
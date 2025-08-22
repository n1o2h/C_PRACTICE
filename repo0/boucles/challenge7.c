#include<stdio.h>

int main(){
    int n, i, in;

    printf("Inversiion d'un Entier\n");

    printf("Etrer un nombre: ");
    scanf("%d",&n);

    while(n/10!= 0){
        in=n%10;
        n = n/10;
        printf("%d", in);
    }
    printf("%d", n);
}
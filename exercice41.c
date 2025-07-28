#include<stdio.h>

int main(){
    printf("***NOMBRE PALINDROME***");
    int n, nn, nv;
    printf("veuillez saisir un nombre : ");
    scanf("%d", &n);

    nv  = 0;
    nn = n;
    do{
        nv =  (nv*10) + (n % 10);
        n = n / 10;
    }while(n != 0);
    if(nn == nv){
        printf("le nombre est palindrome!");
    }
    else 
        printf("le nombre n'est pas palindrome!");
}
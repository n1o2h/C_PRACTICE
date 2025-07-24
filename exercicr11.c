#include<stdio.h>

int main(){
    printf("***SIGNE DE DEUX ENTIERS***");

    int a, b;
    printf("veuillez saisir a:");
    scanf("%d", &a);
    printf("veuillez saisir b:");
    scanf("%d", &b);

    if(a*b > 0)
        printf("les deux entiers ont le meme signe.");
    else
        printf("les deux entiers ont un signe differents.");
    
    return 0;
}
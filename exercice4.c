#include<stdio.h>
int main(){

    printf("***OPERATEURS LOGIQUES***");
    int a,b;
    float  S, P, Dif, D;

    printf("\nveuillez saisir le premier nombre: ");
    scanf("%d", &a);
    printf("veuillez saisir le deuxieme nombre: ");
    scanf("%d", &b);

    S= a + b;
    P= a * b;
    Dif = a - b;
    if(b != 0)
        D= a / b;
    else
        printf("divission impossible!");
    
    printf("\nla somme a + b = %.2f", S);
    printf("\nla priduit a * b = %.2f", P);
    printf("\nla difference a - b = %.2f", Dif);
    printf("\nla division a / b = %.2f", D);

    return 0;
}

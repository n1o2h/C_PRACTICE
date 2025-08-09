#include<stdio.h>

int main(){
    printf("CALCUL ET AFFICHAGE DES RESULTATS DEUX NOMBRES REELS\n");
    float a, b;
    printf("entrer a : ");
    scanf("%f",&a);
    printf("entrer b : ");
    scanf("%f",&b);

    printf("a + b = %.2f", a+b);
    printf("\na - b = %.2f", a-b);
    printf("\na * b = %.2f", a*b);
    if(b!=0)
        printf("\na / b = %.2f", a/b);
    else
        printf("\nla divission sur 0 est impossible!");
    

    return 0;
}
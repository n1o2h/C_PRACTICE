#include<stdio.h>
#include<math.h>

int main(){
    printf("***SOLUTION D'EQUATION DY SECOND DEGRE***\n");

    int a, b, c;
    float delta, x1, x2, x;
    printf("veuillez saisir a:");
    scanf("%d", &a);
    printf("veuillez saisir b:");
    scanf("%d", &b);
    printf("veuillez saisir c:");
    scanf("%d", &c);
    delta = pow(b,2) -( 4 * a * c);
    if(delta < 0)
        printf("l'equation n'a pas de solutions!");
    else if(delta == 0){
        x = (-b)/(2*a);
        printf("l'equation a une seule solution, x = %.2f", x);
    }
    else{
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        printf("l'equation a deux solutions: x1 = %.2f  -- x2 = %.2f", x1, x2);
    }

    return 0;
}
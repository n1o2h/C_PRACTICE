#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    float delta, x, x1, x2;

    printf("Equation du Deuxieme Degre\n");

    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);

    delta = pow(b,2) - 4 * a * c;
    if(delta < 0)
        printf("l'equation n'a pas de solution");
    else if(delta == 0){
        x = -b / (2*a);
        printf("l'equation a une seule solution  X = %.2f", x);
    }
    else{
        x1 = (-b-sqrt(delta))/(2*a);
        x2 = (-b+sqrt(delta))/(2*a);

        printf("l'eqation a 2 solutions X1 = %.2f et X2 = %.2f", x1, x2);
    }

    return 0;


}
#include <stdio.h>
#include<math.h>

int main(){
    printf("***PUISSANCE DE DEUX NOMBRRES***");

    float X, Y;

    printf("veuillez saisire X: ");
    scanf("%d", &X);
    printf("veuillez saisire Y: ");
    scanf("%d", &Y);
    printf("la puissance X^Y : %f", pow(X,Y));
    return 0;
}
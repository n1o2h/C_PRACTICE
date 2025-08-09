#include<stdio.h>
#include <math.h>

int main(){
    printf("VOLUME D'UNE SPHERE\n");

    float const PI = 3.14;
    double r, V;

    printf("entrer le rayon de la sphere : ");
    scanf("%lf",&r);
    V = pow(r,3) * PI * 4/3;
    printf("le volume de la sphere : %.2lf", V);

    return 0;

}
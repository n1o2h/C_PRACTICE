#include<stdio.h>

int main(){
    printf("CONVERSION DE LA DISTANCE\n");
    float d, Y;

    printf("veuillez saisir la distance en Kilometres : ");
    scanf("%f", &d);

    Y = d * 1093.61;
    printf("La distance en Yards : %.2f", Y);
    return 0;
}